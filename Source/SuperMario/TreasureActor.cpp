// Fill out your copyright notice in the Description page of Project Settings.


#include "TreasureActor.h"
#include "Components/BillboardComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "Components/SceneComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Player/MarioCharacter.h"
#include "NPCCharacter.h"

// Sets default values
ATreasureActor::ATreasureActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 构建根组件
	USceneComponent* RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	// 构建宝箱精灵渲染组件
	TreasureComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("TreasureComp"));
	TreasureComp->SetupAttachment(RootComp);

	// 构建盒体碰撞
	BlockCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockCollisionComp"));
	OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BlockCollision->SetupAttachment(RootComp);
	OverlapBox->SetupAttachment(RootComp);

	// 给盒体设置碰撞预设
	OverlapBox->SetCollisionProfileName(TEXT("OverlapAll"));
	BlockCollision->SetCollisionProfileName(TEXT("BlockAll"));


	// 初始化
	BoxCollisionPos = ETreasureBoxCollision::ETBC_Bottom;
	TreasureState = ETreasureState::ETS_Normal;
	AnimTime = 0;
	Offset = 30;
	
}

// Called when the game starts or when spawned
void ATreasureActor::BeginPlay()
{
	Super::BeginPlay();

	// 加载纹理
	EmptyTreasure = LoadObject<UPaperSprite>(nullptr, TEXT("PaperSprite'/Game/Textures/Land/Treasure_Empty_Sprite.Treasure_Empty_Sprite'"));
	
	// 绑定组件开始重叠时函数
	if (OverlapBox)
	{
		OverlapBox->OnComponentBeginOverlap.AddDynamic(this, &ATreasureActor::OnComponentBeginOverlap);
	}
}

// 预构建函数
void ATreasureActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (!TreasureComp->GetSprite())
	{
		return;
	}

	if (BlockCollision)
	{
		FVector Bound;
		Bound.X = TreasureComp->GetSprite()->GetSourceSize().X / 2;
		Bound.Y = 100;
		Bound.Z = TreasureComp->GetSprite()->GetSourceSize().Y / 2;
		BlockCollision->SetBoxExtent(Bound);
	}



	if (BoxCollisionPos == ETreasureBoxCollision::ETBC_Bottom || BoxCollisionPos == ETreasureBoxCollision::ETBC_Top)
	{
		FVector Bound;
		Bound.X = TreasureComp->GetSprite()->GetSourceSize().X / 2;
		Bound.Y = 100;
		Bound.Z = 10;
		// 设置碰撞体的大小
		OverlapBox->SetBoxExtent(Bound);

	}
	if (BoxCollisionPos == ETreasureBoxCollision::ETBC_Right || BoxCollisionPos == ETreasureBoxCollision::ETBC_Left)
	{
		FVector Bound;
		Bound.X = 10;
		Bound.Y = 100;
		Bound.Z = TreasureComp->GetSprite()->GetSourceSize().Y / 2;
		// 设置碰撞体的大小
		OverlapBox->SetBoxExtent(Bound);
	}

	switch (BoxCollisionPos)
	{
	case ETreasureBoxCollision::ETBC_Bottom:

		// 设置碰撞体的位置
		OverlapBox->SetRelativeLocation(FVector(0, 0, -(TreasureComp->GetSprite()->GetSourceSize().Y / 2)));

		break;
	case ETreasureBoxCollision::ETBC_Top:

		// 设置碰撞体的位置
		OverlapBox->SetRelativeLocation(FVector(0, 0, TreasureComp->GetSprite()->GetSourceSize().Y / 2));

		break;
	case ETreasureBoxCollision::ETBC_Right:

		// 设置碰撞体的位置
		OverlapBox->SetRelativeLocation(FVector((TreasureComp->GetSprite()->GetSourceSize().X / 2), 0, 0));

		break;
	case ETreasureBoxCollision::ETBC_Left:

		// 设置碰撞体的位置
		OverlapBox->SetRelativeLocation(FVector(-(TreasureComp->GetSprite()->GetSourceSize().X / 2), 0, 0));

		break;
	default:
		break;
	}

}

// 宝箱的动画
void ATreasureActor::UpdateAnim(float DeltaTime)
{

	if (!AnimationCurve || TreasureState != ETreasureState::ETS_Opened)
	{
		
		return;
	}

	// 获得对应时间的曲线的值
	float Value = AnimationCurve->GetFloatValue(AnimTime);

	float X = 0;
	float Z = 0;

	// 根据宝箱的碰撞触发区域划定动画的方向
	switch (BoxCollisionPos)
	{
	case ETreasureBoxCollision::ETBC_Bottom:
		
		Z += Offset * Value;
		// UE_LOG(LogTemp, Log, TEXT("CCCC"));
	
		break;
	case ETreasureBoxCollision::ETBC_Top:

		Z -= Offset * Value;

		break;
	case ETreasureBoxCollision::ETBC_Right:

		X -= Offset * Value;

		break;
	case ETreasureBoxCollision::ETBC_Left:

		X += Offset * Value;

		break;
	default:
		break;
	}

	// 设置TreasureComp的位置
	TreasureComp->SetRelativeLocation(FVector(X, 0, Z));

	// 判断时间轴时间是否已经结束
	float AnimMin = 0;
	float AnimMax = 0;
	AnimationCurve->GetTimeRange(AnimMin, AnimMax);
	if (AnimTime >= AnimMax)
	{
		// 动画时间已结束,将状态换一下
		ChangeTreasureState(ETreasureState::ETS_Empty);
		if (EmptyTreasure)
		{
			// 将TreasureComp的Sprite换一下，
			TreasureComp->SetSprite(EmptyTreasure);
		}
		
	}

	// 推进时间轴
	AnimTime += DeltaTime;
	
}


// Called every frame
void ATreasureActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAnim(DeltaTime);
}


// 改变宝箱的状态
void ATreasureActor::ChangeTreasureState(ETreasureState::Type State)
{
	if (State == ETreasureState::ETS_Opened)
	{
		if (NPC)
		{
			NPC->ChangeState(ENPCState::ENS_GrowUp);
			NPC->ChangeBoxCollision();
		}
	}

	TreasureState = State;
}



// 开始重叠事件
void ATreasureActor::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweepresult)
{
	// 判断一下是不是Mario撞的，先做一个类型转换
	AMarioCharacter* Mario = Cast<AMarioCharacter>(OtherActor);
	if (Mario && Mario->IsJumping())
	{
		// 改变宝箱的状态
		ChangeTreasureState(ETreasureState::ETS_Opened);
	}
}

