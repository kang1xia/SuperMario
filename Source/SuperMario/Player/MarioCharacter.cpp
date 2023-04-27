// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioCharacter.h"
#include "GameFramework/Pawn.h"
#include "Components/InputComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperCharacter.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include <Components/SceneComponent.h>
#include "../FireBoxActor.h"

AMarioCharacter::AMarioCharacter()
{
	FirePos = CreateDefaultSubobject<USceneComponent>(TEXT("FirePos"));
	FirePos->SetupAttachment(GetSprite());
}

//************************************************************************************************************
void AMarioCharacter::BeginPlay()
{
	Super::BeginPlay();

	// ��Ϸ��ʼʱ����������¼�
	BindInputComponentEvent();

	// ��ʼ��
	CurrentAnimState = EMarioAnimState::EMAS_Idle;
	MarioStyle = EMarioStyle::EMS_Small;
	JumpMaxHoldTime = 0.1; // ���ÿ�����Ծ��������ʱ��
	AirControl = 0.2; //
	GetCharacterMovement()->AirControl = AirControl;

	// ������������
	FBodyInstance* Body = GetCapsuleComponent()->GetBodyInstance();
	if (Body)
	{
		Body->bLockXRotation = true;
		Body->bLockYRotation = true;

		Body->bLockYTranslation = true;
		
		// ������������������������Ч
		Body->CreateDOFLock();
	}
}

//************************************************************************************************************
void AMarioCharacter::BindInputComponentEvent()
{
	if (!InputComponent)
	{
		return;
	}

	// ���¼�
	InputComponent->BindAxis(TEXT("MoveRight"), this, &AMarioCharacter::MoveRight);
	InputComponent->BindAction(TEXT("DoJump"), IE_Pressed, this, &AMarioCharacter::DoJump);
	InputComponent->BindAction(TEXT("DoJump"), IE_Released, this, &AMarioCharacter::DoStopJump);
	InputComponent->BindAction(TEXT("DoCross"), IE_Pressed, this, &AMarioCharacter::DoCross);
	InputComponent->BindAction(TEXT("DoFire"), IE_Pressed, this, &AMarioCharacter::DoFire); //�����¼�
}

//************************************************************************************************************
// �ı�Mario״̬
void AMarioCharacter::ChangeAnimState(EMarioAnimState::Type State)
{
	// ����Mario��FlipBook
	GetSprite()->SetFlipbook(GetCurrentMarioFlipBookAnim(State));


	//switch (State)
	//{
	//case EMarioAnimState::EMAS_Jump:
	//	GetSprite()->SetFlipbook(EMAS_Small_Jump);

	//	break;
	//case EMarioAnimState::EMAS_Run:
	//	GetSprite()->SetFlipbook(EMAS_Small_Run);

	//	break;
	//case EMarioAnimState::EMAS_Idle:
	//	GetSprite()->SetFlipbook(EMAS_Small_Idle);

	//	break;
	//case EMarioAnimState::EMAS_Dead:
	//	break;
	//case EMarioAnimState::EMAS_Cross:
	//	break;
	//default:
	//	break;
	//}

	CurrentAnimState = State;
}

//************************************************************************************************************
// ��֡����,�ƶ�
void AMarioCharacter::MoveRight(float Value)
{
	// �����������¼��е�Value
	CameraMoveValue = Value;
	MoveRightValue();
	// ����ƶ�����
	AddMovementInput(FVector(Value, 0, 0));
	
	// �������ĳ���
	UpDateFace(Value);

	// �����ǰ״̬����Ծ״̬��return
	if (IsJumping())
	{
		ChangeAnimState(EMarioAnimState::EMAS_Jump);
		return;
	}

	if (GetCharacterMovement()->Velocity.Size() != 0)
	{
		if (!IsJumping())
		{
			ChangeAnimState(EMarioAnimState::EMAS_Run);
		}
		
	}
	else
	{
		if (!IsJumping())
		{
			ChangeAnimState(EMarioAnimState::EMAS_Idle);
		}
	}
}

//************************************************************************************************************
// �����¼���Ծ
void AMarioCharacter::DoJump()
{
	// ��ʼ��Ծ
	Jump();
}

void AMarioCharacter::DoStopJump()
{
	// ֹͣ��Ծ
	StopJumping();
}

//************************************************************************************************************
void AMarioCharacter::UpdateCheckAnimState()
{
	if (CurrentAnimState == EMarioAnimState::EMAS_Jump)
	{
		// ���Mario��û�����
		if (!IsJumping())
		{
			ChangeAnimState(EMarioAnimState::EMAS_Idle);
		}
	}
}

//************************************************************************************************************
// ��Ծ��
bool AMarioCharacter::IsJumping()
{
	// �жϵ�ǰ�ǲ���������,����Ϊ��
	return GetCharacterMovement()->IsFalling();
}

//************************************************************************************************************
// ��
void AMarioCharacter::DoCross()
{
	
}

// ���Axis��ֵ
float AMarioCharacter::MoveRightValue()
{
	return CameraMoveValue;
}

// �ı�Mario����̬
void AMarioCharacter::ChangeMarioStyle(EMarioStyle::Type Style)
{
	// ����Mario��̬
	MarioStyle = Style;

	// ���ý�����İ�ߺͰ��
	if (MarioStyle == EMarioStyle::EMS_Big)
	{
		GetCapsuleComponent()->SetCapsuleHalfHeight(64.0f);
		GetCapsuleComponent()->SetCapsuleRadius(32.0f);
		
		// ����������Ծ�߶�
		GetCharacterMovement()->JumpZVelocity = 500.0f;

		// ���ý�ɫ׹��ʱ���Կ��Ƶĺ��������
		AirControl = 0.2;
		GetCharacterMovement()->AirControl = AirControl;

		// ���ÿ�����Ծ��������ʱ��
		JumpMaxHoldTime = 0.25; 
		// 
	}
	else if (MarioStyle == EMarioStyle::EMS_Small)
	{
		GetCapsuleComponent()->SetCapsuleHalfHeight(32.0f);
		GetCapsuleComponent()->SetCapsuleRadius(25.0f);

		// ����������Ծ�߶�
		GetCharacterMovement()->JumpZVelocity = 600.0f;
		
		// ���ý�ɫ׹��ʱ���Կ��Ƶĺ��������
		AirControl = 0.25;
		GetCharacterMovement()->AirControl = AirControl;

		// ���ÿ�����Ծ��������ʱ��
		JumpMaxHoldTime = 0.1; 
	}
}





void AMarioCharacter::DoFire()
{
	// ��Mario����small������¿��Է����ӵ�
	if (MarioStyle == EMarioStyle::EMS_Small)
	{
		return;
	}

	// �����ӵ�
	AFireBoxActor* FireBox = GetWorld()->SpawnActor<AFireBoxActor>(AFireBoxActor::StaticClass(), FirePos->GetComponentLocation(), FRotator::ZeroRotator);
	FireBox->SetFireBoxDirection(FirePos->GetForwardVector(), 500); // �����ӵ��ķ����Լ��ٶ�
}

//************************************************************************************************************
void AMarioCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
		
}

//************************************************************************************************************
void AMarioCharacter::UpDateFace(float Value)
{

	if (Value == 0)
	{
		return;
	}

	GetSprite()->SetRelativeRotation(FRotator(0, (Value > 0 ? 0 : 180), 0));
}

// ��ȡ��ǰMario��FlipBook
class UPaperFlipbook* AMarioCharacter::GetCurrentMarioFlipBookAnim(EMarioAnimState::Type State)
{
	// ���õ�ǰ��FlipBook
	UPaperFlipbook* Anim = nullptr;


	switch (State)
	{
	case EMarioAnimState::EMAS_Jump:

		// ���ݵ�ǰMario����̬����Mario��FlipBook
		if (MarioStyle == EMarioStyle::EMS_Small)
		{
			Anim = EMAS_Small_Jump;
		}
		else if (MarioStyle == EMarioStyle::EMS_Big)
		{
			Anim = EMAS_Big_Jump;
		}

		break;
	case EMarioAnimState::EMAS_Run:

		// ���ݵ�ǰMario����̬����Mario��FlipBook
		if (MarioStyle == EMarioStyle::EMS_Small)
		{
			Anim = EMAS_Small_Run;
		}
		else if (MarioStyle == EMarioStyle::EMS_Big)
		{
			Anim = EMAS_Big_Run;
		}

		break;
	case EMarioAnimState::EMAS_Idle:

		// ���ݵ�ǰMario����̬����Mario��FlipBook
		if (MarioStyle == EMarioStyle::EMS_Small)
		{
			Anim = EMAS_Small_Idle;
		}
		else if (MarioStyle == EMarioStyle::EMS_Big)
		{
			Anim = EMAS_Big_Idle;
		}

		break;
	case EMarioAnimState::EMAS_Dead:
		break;
	case EMarioAnimState::EMAS_Cross:
		break;
	default:
		break;
	}

	return Anim;
}

