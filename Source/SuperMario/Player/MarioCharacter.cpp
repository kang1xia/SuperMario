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

	// 游戏开始时调用输入绑定事件
	BindInputComponentEvent();

	// 初始化
	CurrentAnimState = EMarioAnimState::EMAS_Idle;
	MarioStyle = EMarioStyle::EMS_Small;
	JumpMaxHoldTime = 0.1; // 设置空中跳跃的最大持续时间
	AirControl = 0.2; //
	GetCharacterMovement()->AirControl = AirControl;

	// 设置物理锁定
	FBodyInstance* Body = GetCapsuleComponent()->GetBodyInstance();
	if (Body)
	{
		Body->bLockXRotation = true;
		Body->bLockYRotation = true;

		Body->bLockYTranslation = true;
		
		// 创建锁定，不调用则锁定无效
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

	// 绑定事件
	InputComponent->BindAxis(TEXT("MoveRight"), this, &AMarioCharacter::MoveRight);
	InputComponent->BindAction(TEXT("DoJump"), IE_Pressed, this, &AMarioCharacter::DoJump);
	InputComponent->BindAction(TEXT("DoJump"), IE_Released, this, &AMarioCharacter::DoStopJump);
	InputComponent->BindAction(TEXT("DoCross"), IE_Pressed, this, &AMarioCharacter::DoCross);
	InputComponent->BindAction(TEXT("DoFire"), IE_Pressed, this, &AMarioCharacter::DoFire); //开火事件
}

//************************************************************************************************************
// 改变Mario状态
void AMarioCharacter::ChangeAnimState(EMarioAnimState::Type State)
{
	// 设置Mario的FlipBook
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
// 逐帧触发,移动
void AMarioCharacter::MoveRight(float Value)
{
	// 传入轴输入事件中的Value
	CameraMoveValue = Value;
	MoveRightValue();
	// 添加移动输入
	AddMovementInput(FVector(Value, 0, 0));
	
	// 更换脸的朝向
	UpDateFace(Value);

	// 如果当前状态是跳跃状态则return
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
// 触发事件跳跃
void AMarioCharacter::DoJump()
{
	// 开始跳跃
	Jump();
}

void AMarioCharacter::DoStopJump()
{
	// 停止跳跃
	StopJumping();
}

//************************************************************************************************************
void AMarioCharacter::UpdateCheckAnimState()
{
	if (CurrentAnimState == EMarioAnimState::EMAS_Jump)
	{
		// 检查Mario有没有落地
		if (!IsJumping())
		{
			ChangeAnimState(EMarioAnimState::EMAS_Idle);
		}
	}
}

//************************************************************************************************************
// 跳跃？
bool AMarioCharacter::IsJumping()
{
	// 判断当前是不是在下落,是则为真
	return GetCharacterMovement()->IsFalling();
}

//************************************************************************************************************
// 蹲
void AMarioCharacter::DoCross()
{
	
}

// 获得Axis的值
float AMarioCharacter::MoveRightValue()
{
	return CameraMoveValue;
}

// 改变Mario的形态
void AMarioCharacter::ChangeMarioStyle(EMarioStyle::Type Style)
{
	// 赋予Mario形态
	MarioStyle = Style;

	// 设置胶囊体的半高和半宽
	if (MarioStyle == EMarioStyle::EMS_Big)
	{
		GetCapsuleComponent()->SetCapsuleHalfHeight(64.0f);
		GetCapsuleComponent()->SetCapsuleRadius(32.0f);
		
		// 设置最大的跳跃高度
		GetCharacterMovement()->JumpZVelocity = 500.0f;

		// 设置角色坠落时可以控制的横向控制量
		AirControl = 0.2;
		GetCharacterMovement()->AirControl = AirControl;

		// 设置空中跳跃的最大持续时间
		JumpMaxHoldTime = 0.25; 
		// 
	}
	else if (MarioStyle == EMarioStyle::EMS_Small)
	{
		GetCapsuleComponent()->SetCapsuleHalfHeight(32.0f);
		GetCapsuleComponent()->SetCapsuleRadius(25.0f);

		// 设置最大的跳跃高度
		GetCharacterMovement()->JumpZVelocity = 600.0f;
		
		// 设置角色坠落时可以控制的横向控制量
		AirControl = 0.25;
		GetCharacterMovement()->AirControl = AirControl;

		// 设置空中跳跃的最大持续时间
		JumpMaxHoldTime = 0.1; 
	}
}





void AMarioCharacter::DoFire()
{
	// 当Mario不是small的情况下可以发射子弹
	if (MarioStyle == EMarioStyle::EMS_Small)
	{
		return;
	}

	// 生成子弹
	AFireBoxActor* FireBox = GetWorld()->SpawnActor<AFireBoxActor>(AFireBoxActor::StaticClass(), FirePos->GetComponentLocation(), FRotator::ZeroRotator);
	FireBox->SetFireBoxDirection(FirePos->GetForwardVector(), 500); // 设置子弹的方向以及速度
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

// 获取当前Mario的FlipBook
class UPaperFlipbook* AMarioCharacter::GetCurrentMarioFlipBookAnim(EMarioAnimState::Type State)
{
	// 设置当前的FlipBook
	UPaperFlipbook* Anim = nullptr;


	switch (State)
	{
	case EMarioAnimState::EMAS_Jump:

		// 根据当前Mario的形态设置Mario的FlipBook
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

		// 根据当前Mario的形态设置Mario的FlipBook
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

		// 根据当前Mario的形态设置Mario的FlipBook
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

