// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"
#include "Components/SceneComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
#include "Components/BillboardComponent.h"
#include "Player/MarioCharacter.h"
#include "Engine/EngineTypes.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include <GameFramework/Character.h>
#include <Components/CapsuleComponent.h>



ANPCCharacter::ANPCCharacter()
{
	// 添加渲染组件
	//RootComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("RootComp"));
	//SetRootComponent(RootComp);
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

	// 附着关系
	BoxComp->SetupAttachment(RootComponent);

	// 设置碰撞设置
	BoxComp->SetCollisionProfileName(TEXT("NoCollision"));

	// 初始化
	CurrentState = ENPCState::ENS_Wait;
	MoveSpeed = 30;
	FlickerCount = 5;
	SpriteStyle = ESpriteStyle::ESS_Mushroom;
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("IgnoreOnlyPawn"));
}

void ANPCCharacter::UpdateAnim(float DeltaTime)
{
	// 判断当前状态是不是出土
	if (CurrentState == ENPCState::ENS_GrowUp)
	{
		// 设置NPC的位置
		GetSprite()->AddLocalOffset(FVector(0, 0, DeltaTime * 40));
		// 设置盒体的碰撞类型
		//BoxComp->SetCollisionProfileName(TEXT("OverlapAll"));

		// 判断NPC是否完全出土
		if (GetSprite()->GetRelativeLocation().Z >= 0)
		{
			// 切换NPC的状态
			ChangeState(SpriteStyle == ESpriteStyle::ESS_Mushroom ? ENPCState::ENS_move : ENPCState::ENS_Wait);
		}
		
	}
	else if( CurrentState ==  ENPCState::ENS_move) // 若现在的状态是move
	{
		// 给NPC添加Run行为
		FVector MoveDir = FVector( MoveSpeed * DeltaTime * (MoveStyle == EMoveStyle::EMS_Left ? -1 : 1), 0, 0);
		AddMovementInput(MoveDir);
	}
	else if (CurrentState == ENPCState::ENS_Idle)
	{
		// 让NPC不动
		AddMovementInput(FVector(0, 0, 0));
	}

	else if (CurrentState == ENPCState::ENS_Dead)
	{
		// 让NPC不动
		AddMovementInput(FVector(0, 0, 0));
	}
}

void ANPCCharacter::ChangeState(ENPCState::Type State)
{
	CurrentState = State;
}

void ANPCCharacter::ChangeBoxCollision()
{
	// 设置盒体的碰撞类型
	BoxComp->SetCollisionProfileName(TEXT("OverlapAll"));
}

// 改变NPC的Flipbook
void ANPCCharacter::ChangeStyle(ESpriteStyle::Type Style)
{
	switch (Style)
	{
	case ESpriteStyle::ESS_Mushroom:

		GetSprite()->SetFlipbook(Mushroom);

		break;
	case ESpriteStyle::ESS_Flower:

		GetSprite()->SetFlipbook(Flower);

		break;
	default:
		break;
	}

	SpriteStyle = Style;
}

void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();

	// 加载资源
	Flower = LoadObject<UPaperFlipbook>(GetWorld(), TEXT("PaperFlipbook'/Game/Animation/NPC/PFB_Flower.PFB_Flower'"));
	Mushroom = LoadObject<UPaperFlipbook>(GetWorld(), TEXT("PaperFlipbook'/Game/Animation/NPC/PFB_Mushroom.PFB_Mushroom'"));

	// 随机Flipbook
	if (Flower && Mushroom)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, TEXT("lihai"));
		int32 i = 1;
		int32 y = 0;
		FMath::RandRange(y, i) == 1 ? ChangeStyle(ESpriteStyle::ESS_Flower) : ChangeStyle(ESpriteStyle::ESS_Mushroom);
	}

	// 设置初始的相对位置
	GetSprite()->SetRelativeLocation(FVector(0, 0, -60));

	// 绑定重叠事件
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &ANPCCharacter::OnComponentBeginOverlap);
}

void ANPCCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds); 
	UpdateAnim(DeltaSeconds);
}


void ANPCCharacter::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweepresult)
{
	// 判断是不是蘑菇，是的话碰到东西改变方向
	if (SpriteStyle == ESpriteStyle::ESS_Mushroom)
	{
		MoveStyle = (MoveStyle == EMoveStyle::EMS_Left) ? EMoveStyle::EMS_Right : EMoveStyle::EMS_Left;
	}

	// 判断是不是Mairo
	AMarioCharacter* Mario = Cast<AMarioCharacter>(OtherActor);
	if (Mario)
	{
		// 改变Mario 的形态
		Mario->ChangeMarioStyle(EMarioStyle::EMS_Big);
		//UE_LOG(LogTemp, Log, TEXT("CCCCCC"));
		
		// 设置NPC的状态
		ChangeState(ENPCState::ENS_Dead);

		// 设置盒体的碰撞为无碰撞
		BoxComp->SetCollisionProfileName(TEXT("NoCollision"));

		// NPC闪烁
		NPCFlicker();

	}
}


// NPC闪烁
void ANPCCharacter::NPCFlicker()
{

	if (FlickerCount == 0)
	{
		Destroy();
		return;
	}

	if (FlickerCount % 2 == 0) // 偶数情况
	{
		GetSprite()->SetSpriteColor(FLinearColor(1, 1, 1, 0));
	}
	else // 奇数情况
	{
		GetSprite()->SetSpriteColor(FLinearColor(1, 1, 1, 1));
	}
	
	FlickerCount -= 1;
	//UE_LOG(LogTemp, Log, TEXT("Count == %d"), FlickerCount);

	

	// 定义计时器句柄
	FTimerHandle MyTimerHandle;
	// 递归
	GetWorld()->GetTimerManager().SetTimer(MyTimerHandle, this, &ANPCCharacter::NPCFlicker, 0.2f, false);
}
