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
	// �����Ⱦ���
	//RootComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("RootComp"));
	//SetRootComponent(RootComp);
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

	// ���Ź�ϵ
	BoxComp->SetupAttachment(RootComponent);

	// ������ײ����
	BoxComp->SetCollisionProfileName(TEXT("NoCollision"));

	// ��ʼ��
	CurrentState = ENPCState::ENS_Wait;
	MoveSpeed = 30;
	FlickerCount = 5;
	SpriteStyle = ESpriteStyle::ESS_Mushroom;
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("IgnoreOnlyPawn"));
}

void ANPCCharacter::UpdateAnim(float DeltaTime)
{
	// �жϵ�ǰ״̬�ǲ��ǳ���
	if (CurrentState == ENPCState::ENS_GrowUp)
	{
		// ����NPC��λ��
		GetSprite()->AddLocalOffset(FVector(0, 0, DeltaTime * 40));
		// ���ú������ײ����
		//BoxComp->SetCollisionProfileName(TEXT("OverlapAll"));

		// �ж�NPC�Ƿ���ȫ����
		if (GetSprite()->GetRelativeLocation().Z >= 0)
		{
			// �л�NPC��״̬
			ChangeState(SpriteStyle == ESpriteStyle::ESS_Mushroom ? ENPCState::ENS_move : ENPCState::ENS_Wait);
		}
		
	}
	else if( CurrentState ==  ENPCState::ENS_move) // �����ڵ�״̬��move
	{
		// ��NPC���Run��Ϊ
		FVector MoveDir = FVector( MoveSpeed * DeltaTime * (MoveStyle == EMoveStyle::EMS_Left ? -1 : 1), 0, 0);
		AddMovementInput(MoveDir);
	}
	else if (CurrentState == ENPCState::ENS_Idle)
	{
		// ��NPC����
		AddMovementInput(FVector(0, 0, 0));
	}

	else if (CurrentState == ENPCState::ENS_Dead)
	{
		// ��NPC����
		AddMovementInput(FVector(0, 0, 0));
	}
}

void ANPCCharacter::ChangeState(ENPCState::Type State)
{
	CurrentState = State;
}

void ANPCCharacter::ChangeBoxCollision()
{
	// ���ú������ײ����
	BoxComp->SetCollisionProfileName(TEXT("OverlapAll"));
}

// �ı�NPC��Flipbook
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

	// ������Դ
	Flower = LoadObject<UPaperFlipbook>(GetWorld(), TEXT("PaperFlipbook'/Game/Animation/NPC/PFB_Flower.PFB_Flower'"));
	Mushroom = LoadObject<UPaperFlipbook>(GetWorld(), TEXT("PaperFlipbook'/Game/Animation/NPC/PFB_Mushroom.PFB_Mushroom'"));

	// ���Flipbook
	if (Flower && Mushroom)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, TEXT("lihai"));
		int32 i = 1;
		int32 y = 0;
		FMath::RandRange(y, i) == 1 ? ChangeStyle(ESpriteStyle::ESS_Flower) : ChangeStyle(ESpriteStyle::ESS_Mushroom);
	}

	// ���ó�ʼ�����λ��
	GetSprite()->SetRelativeLocation(FVector(0, 0, -60));

	// ���ص��¼�
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &ANPCCharacter::OnComponentBeginOverlap);
}

void ANPCCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds); 
	UpdateAnim(DeltaSeconds);
}


void ANPCCharacter::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweepresult)
{
	// �ж��ǲ���Ģ�����ǵĻ����������ı䷽��
	if (SpriteStyle == ESpriteStyle::ESS_Mushroom)
	{
		MoveStyle = (MoveStyle == EMoveStyle::EMS_Left) ? EMoveStyle::EMS_Right : EMoveStyle::EMS_Left;
	}

	// �ж��ǲ���Mairo
	AMarioCharacter* Mario = Cast<AMarioCharacter>(OtherActor);
	if (Mario)
	{
		// �ı�Mario ����̬
		Mario->ChangeMarioStyle(EMarioStyle::EMS_Big);
		//UE_LOG(LogTemp, Log, TEXT("CCCCCC"));
		
		// ����NPC��״̬
		ChangeState(ENPCState::ENS_Dead);

		// ���ú������ײΪ����ײ
		BoxComp->SetCollisionProfileName(TEXT("NoCollision"));

		// NPC��˸
		NPCFlicker();

	}
}


// NPC��˸
void ANPCCharacter::NPCFlicker()
{

	if (FlickerCount == 0)
	{
		Destroy();
		return;
	}

	if (FlickerCount % 2 == 0) // ż�����
	{
		GetSprite()->SetSpriteColor(FLinearColor(1, 1, 1, 0));
	}
	else // �������
	{
		GetSprite()->SetSpriteColor(FLinearColor(1, 1, 1, 1));
	}
	
	FlickerCount -= 1;
	//UE_LOG(LogTemp, Log, TEXT("Count == %d"), FlickerCount);

	

	// �����ʱ�����
	FTimerHandle MyTimerHandle;
	// �ݹ�
	GetWorld()->GetTimerManager().SetTimer(MyTimerHandle, this, &ANPCCharacter::NPCFlicker, 0.2f, false);
}
