// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinBoxActor.h"
#include "Components/SceneComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "Curves/CurveFloat.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Player/MarioCharacter.h"
#include "CoinActor.h"

// Sets default values
ACoinBoxActor::ACoinBoxActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/* 构建渲染组件 */
	// 根组件
	USceneComponent* RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	// 精灵渲染组件
	RenderComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RenderComp"));
	RenderComp->SetupAttachment(RootComp);
	SpawnCoinPos = CreateDefaultSubobject<USceneComponent>(TEXT("CoinPos"));
	SpawnCoinPos->SetupAttachment(RootComp);

	// 碰撞组件
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	BoxCollision->SetupAttachment(RootComp);
	BlockCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockAll"));
	BlockCollision->SetupAttachment(RootComp);
	BlockCollision->SetCollisionProfileName(TEXT("BlockAll"));

	// 设置碰撞类型
	BoxCollision->SetCollisionProfileName(TEXT("OverlapAll"));

	// 初始化
	CurrentState = ECoinBoxState::ECBX_Normal;
	SpawnCoinTime = 3.0f;
	AnimSpeed = 20.0f;
	bTimerOnce = false;
	bTimeOut = false;
}

// Called when the game starts or when spawned
void ACoinBoxActor::BeginPlay()
{
	Super::BeginPlay();
	
	// 绑定BoxCollision开始重叠事件
	if (BoxCollision)
	{
		BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ACoinBoxActor::OnComponentBeginOverlapEvent);
	}
	
}

void ACoinBoxActor::UpdateAnim(float Deltatime)
{
	if (CurrentState != ECoinBoxState::ECBX_Spawn || !CurveAnimation)
	{
		return;
	}

	// 获得Y值
	float Value = CurveAnimation->GetFloatValue(AnimTime);

	// 设置RenderComp位置
	RenderComp->SetRelativeLocation(FVector(0, 0, Value * AnimSpeed));

	float MinTime;
	float MaxTime;
	CurveAnimation->GetTimeRange(MinTime, MaxTime);
	if (AnimTime >= MaxTime)
	{
		// 根据SpawnCoinTime的时间，改变状态
		ChangeCoinBoxState(bTimeOut == true ? ECoinBoxState::ECBX_Empty : ECoinBoxState::ECBX_Normal);
	}

	// 推进时间轴
	AnimTime += Deltatime;
}

void ACoinBoxActor::OnComponentBeginOverlapEvent(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	AMarioCharacter* Mario = Cast<AMarioCharacter>(OtherActor);
	if (Mario && CurrentState != ECoinBoxState::ECBX_Empty)
	{
		// 改变金币盒子的状态
		ChangeCoinBoxState(ECoinBoxState::ECBX_Spawn);

		

		// 添加时间句柄
		if (!bTimerOnce)
		{
			bTimerOnce = true;
			FTimerHandle TimeHandle;
			GetWorld()->GetTimerManager().SetTimer(TimeHandle, this, &ACoinBoxActor::SetCoinBoxState, SpawnCoinTime, false);
		}
	}
	
	
}

void ACoinBoxActor::SetCoinBoxState()
{
	bTimeOut = true;
	// ChangeCoinBoxState(ECoinBoxState::ECBX_Empty);
}

// Called every frame
void ACoinBoxActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAnim(DeltaTime);
}

void ACoinBoxActor::ChangeCoinBoxState(ECoinBoxState::Type State)
{
	switch (State)
	{
	case ECoinBoxState::ECBX_Normal:
		break;
	case ECoinBoxState::ECBX_Spawn:
		AnimTime = 0;
		// 生成金币
		if (SpawnCoinPos)
		{
			GetWorld()->SpawnActor<ACoinActor>(ACoinActor::StaticClass(), SpawnCoinPos->GetComponentLocation(), FRotator::ZeroRotator);

		}
		break;
	case ECoinBoxState::ECBX_Empty:

		// 设置渲染组件的Sprite
		if (EmptySprite)
		{
			RenderComp->SetSprite(EmptySprite);
		}
		
		break;
	default:
		break;
	}

	// 设置当前状态
	CurrentState = State;
}

