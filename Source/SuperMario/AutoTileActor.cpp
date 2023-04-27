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

	// ���ø����
	RootComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	// ����ͷβ���
	HeadComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("HeadComp"));
	EndComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("EndComp"));

	// ����������ϵ
	HeadComponent->SetupAttachment(RootComp);
	EndComponent->SetupAttachment(HeadComponent);

	// ������ײ���
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(HeadComponent);

	// ��ʼ��
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

	// ��õ�λ����
	FVector Dir = TargetPointer.GetSafeNormal();
	if (Shape == ETileLayout::ETL_Horizontal && HeadComponent)
	{
		// ��x�ᳯ������
		FRotator Rot = UKismetMathLibrary::MakeRotFromX(Dir);
		// ����HendComp�ĳ���
		HeadComponent->SetRelativeRotation(Rot);
	}
	else
	{
		// ��Z,Y �ᳯ������
		FRotator Rot = UKismetMathLibrary::MakeRotFromZY(Dir, GetActorRightVector());
		// ����HendComp�ĳ���
		HeadComponent->SetWorldRotation(Rot);
		Rot = HeadComponent->GetRelativeTransform().Rotator();
		HeadComponent->SetRelativeRotation(Rot);
	}
	

	// һ��Tile��X���ȣ�����z����
	float TileInterval = Shape == ETileLayout::ETL_Horizontal ? TileSprite->GetSourceSize().X : TileSprite->GetSourceSize().Y;

	// ƽ�̵Ŀ���
	int32 Counter = TargetPointer.Size() / TileInterval;

	if (Counter == 0 && Counter == TileSpriteCompArray.Num())
	{
		return;
	}

	// ����ϴδ�������Ƭ
	ClearTileSpriteComp();

	// ���һ����Ƭ��λ��
	FVector LastTileLoc;

	// ���i��Tile��������
	for (int32 i = 0; i < Counter; i++)
	{
		UPaperSpriteComponent* Comp = AddSpriteComponent();
		LastTileLoc = FVector(Shape == ETileLayout::ETL_Horizontal ? i * TileInterval : 0, 0, Shape == ETileLayout::ETL_Vertical ? i * TileInterval : 0);
		// ������Ƭ��λ��
		Comp->SetRelativeLocation(FVector(Shape == ETileLayout::ETL_Horizontal ? i * TileInterval : 0, 0, Shape == ETileLayout::ETL_Vertical ? i * TileInterval : 0));
		// ������Ƭ����ʽ
		Comp->SetSprite(TileSprite);
	}

	// EndComp����ײ��������
	float EndCompCollisionWidth = 0;
	float EndCompCollisionHeight = 0;


	if (EndComponent && EndComponent->GetSprite())
	{
		EndCompCollisionWidth = Shape == ETileLayout::ETL_Horizontal ? EndComponent->GetSprite()->GetSourceSize().X + 20 : 0;
		EndCompCollisionHeight = Shape == ETileLayout::ETL_Vertical ? EndComponent->GetSprite()->GetSourceSize().Y  : 0;

		UE_LOG(LogTemp, Log, TEXT("---%f--"), EndCompCollisionWidth);
		UE_LOG(LogTemp, Log, TEXT("---%f--"), EndCompCollisionHeight);
		// ����ߺ���һ��������
		FVector EndCompOffset = FVector(EndCompCollisionWidth, 0, EndCompCollisionHeight);
		// ������һ������������λ�� + ���һ����Ƭ��λ��
		EndComponent->SetRelativeLocation(LastTileLoc + EndCompOffset);
	}


	// ������ײ������
	FVector Bound;
	Bound.Z = (Shape == ETileLayout::ETL_Horizontal ? TileSprite->GetSourceSize().Y / 2 : TileInterval * Counter / 2) + EndCompCollisionHeight / 2;
	Bound.X = (Shape == ETileLayout::ETL_Horizontal ? TileInterval * Counter / 2 : TileSprite->GetSourceSize().X / 2) + EndCompCollisionWidth / 2;

	Bound.Y = 100;
	// SetBoxExtent() �Ǹ������(UBoxComponent)�ĳ�Ա�������������������ײ�еĴ�С
	BoxCollision->SetBoxExtent(Bound);


	// ����ײ������һ��λ��
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
	// ��̬�������
	UPaperSpriteComponent* _Comp = NewObject<UPaperSpriteComponent>(this);
	_Comp->RegisterComponentWithWorld(GetWorld());
	// ��һ������ λ�ù�ϵ���ڶ������� �Ƿ���Ϊһ��
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
		// ������
		TileSpriteCompArray[i]->DetachFromComponent(Rules);
		// �������
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

