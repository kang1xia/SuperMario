// Fill out your copyright notice in the Description page of Project Settings.


#include "AutoTileActor.h"
#include "Components/BillboardComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "Components/SceneComponent.h"
#include "Chaos/Array.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Player/MarioCharacter.h"

// Sets default values
AAutoTileActor::AAutoTileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// 设置根组件
	RootComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	// 设置头尾组件
	HeadComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("HeadComp"));
	EndComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("EndComp"));

	// 设置依附关系
	HeadComponent->SetupAttachment(RootComp);
	EndComponent->SetupAttachment(HeadComponent);

	// 设置碰撞组件
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(HeadComponent);

	// 初始化
	CurrentMesh = ELadderLayout::ELL_Tile;
	
}

// Called when the game starts or when spawned
void AAutoTileActor::BeginPlay()
{
	Super::BeginPlay();

}

void AAutoTileActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	AutoTile();
}

void AAutoTileActor::AutoTile()
{
	if (!TileSprite)
	{
		return;
	}

	// 获得单位向量
	FVector Dir = TargetPointer.GetSafeNormal();
	if (Shape == ETileLayout::ETL_Horizontal && HeadComponent)
	{
		// 将x轴朝向向量
		FRotator Rot = UKismetMathLibrary::MakeRotFromX(Dir);
		// 设置HendComp的朝向
		HeadComponent->SetRelativeRotation(Rot);
	}
	else
	{
		// 将Z,Y 轴朝向向量
		FRotator Rot = UKismetMathLibrary::MakeRotFromZY(Dir, GetActorRightVector());
		// 设置HendComp的朝向
		HeadComponent->SetWorldRotation(Rot);
		Rot = HeadComponent->GetRelativeTransform().Rotator();
		HeadComponent->SetRelativeRotation(Rot);
	}
	

	// 一张Tile的X长度，或是z长度
	float TileInterval = Shape == ETileLayout::ETL_Horizontal ? TileSprite->GetSourceSize().X : TileSprite->GetSourceSize().Y;

	// 平铺的块数
	int32 Counter = TargetPointer.Size() / TileInterval;

	if (Counter == 0 && Counter == TileSpriteCompArray.Num())
	{
		return;
	}

	// 清除上次创建的瓦片
	ClearTileSpriteComp();

	// 最后一个瓦片的位置
	FVector LastTileLoc;

	// 添加i个Tile至场景中
	for (int32 i = 0; i < Counter; i++)
	{
		UPaperSpriteComponent* Comp = AddSpriteComponent();
		LastTileLoc = FVector(Shape == ETileLayout::ETL_Horizontal ? i * TileInterval : 0, 0, Shape == ETileLayout::ETL_Vertical ? i * TileInterval : 0);
		// 设置瓦片的位置
		Comp->SetRelativeLocation(FVector(Shape == ETileLayout::ETL_Horizontal ? i * TileInterval : 0, 0, Shape == ETileLayout::ETL_Vertical ? i * TileInterval : 0));
		// 设置瓦片的样式
		Comp->SetSprite(TileSprite);
	}

	// EndComp的碰撞盒体宽与高
	float EndCompCollisionWidth = 0;
	float EndCompCollisionHeight = 0;


	if (EndComponent && EndComponent->GetSprite())
	{
		EndCompCollisionWidth = Shape == ETileLayout::ETL_Horizontal ? EndComponent->GetSprite()->GetSourceSize().X + 20 : 0;
		EndCompCollisionHeight = Shape == ETileLayout::ETL_Vertical ? EndComponent->GetSprite()->GetSourceSize().Y  : 0;

		UE_LOG(LogTemp, Log, TEXT("---%f--"), EndCompCollisionWidth);
		UE_LOG(LogTemp, Log, TEXT("---%f--"), EndCompCollisionHeight);
		// 将宽高合在一个向量中
		FVector EndCompOffset = FVector(EndCompCollisionWidth, 0, EndCompCollisionHeight);
		// 设置上一个向量所给的位置 + 最后一个瓦片的位置
		EndComponent->SetRelativeLocation(LastTileLoc + EndCompOffset);
	}


	// 更新碰撞器轮廓
	FVector Bound;
	Bound.Z = (Shape == ETileLayout::ETL_Horizontal ? TileSprite->GetSourceSize().Y / 2 : TileInterval * Counter / 2) + EndCompCollisionHeight / 2;
	Bound.X = (Shape == ETileLayout::ETL_Horizontal ? TileInterval * Counter / 2 : TileSprite->GetSourceSize().X / 2) + EndCompCollisionWidth / 2;

	Bound.Y = 100;
	// SetBoxExtent() 是该组件类(UBoxComponent)的成员函数，用于设置组件碰撞盒的大小
	BoxCollision->SetBoxExtent(Bound);


	// 给碰撞体设置一下位置
	BoxCollision->SetRelativeLocation
	(FVector
		(
			Shape == ETileLayout::ETL_Horizontal ? (Bound.X - TileInterval / 2) : 0, 
			0,
			Shape == ETileLayout::ETL_Vertical ? (Bound.Z - TileInterval / 2) : 0
		)
	);
}

class UPaperSpriteComponent* AAutoTileActor::AddSpriteComponent()
{
	// 动态构建组件
	UPaperSpriteComponent* _Comp = NewObject<UPaperSpriteComponent>(this);
	_Comp->RegisterComponentWithWorld(GetWorld());
	// 第一个参数 位置关系，第二个参数 是否融为一体
	FAttachmentTransformRules Rules(EAttachmentRule::KeepRelative, true);
	_Comp->AttachToComponent(HeadComponent, Rules);
	TileSpriteCompArray.Add(_Comp);
	return _Comp;
}

void AAutoTileActor::ClearTileSpriteComp()
{
	for (int32 i = 0; i < TileSpriteCompArray.Num(); i++)
	{
		FDetachmentTransformRules Rules(EDetachmentRule::KeepRelative, true);
		// 解绑组件
		TileSpriteCompArray[i]->DetachFromComponent(Rules);
		// 销毁组件
		TileSpriteCompArray[i]->DestroyComponent();
	}

	TileSpriteCompArray.Reset();
}

// Called every frame
void AAutoTileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAutoTileActor::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMarioCharacter* Mario = Cast<AMarioCharacter>(OtherActor);

}

void AAutoTileActor::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AMarioCharacter* Mario = Cast<AMarioCharacter>(OtherActor);

}

