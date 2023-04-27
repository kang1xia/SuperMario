// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MarioCharacter.generated.h"

// Mario 的状态
UENUM(BlueprintType)
namespace EMarioAnimState
{
	enum Type
	{
		EMAS_Jump,
		EMAS_Run,
		EMAS_Idle,
		EMAS_Dead,
		EMAS_Cross
	};
}

// Mario 的形态
UENUM(BlueprintType)
namespace EMarioStyle
{
	enum Type
	{
		EMS_Small,
		EMS_Big
	};
}

/**
 * 
 */
UCLASS()
class SUPERMARIO_API AMarioCharacter : public APaperCharacter
{
	GENERATED_BODY()


public:
	AMarioCharacter();

	virtual void BeginPlay() override;

	// 绑定按键输入事件
	void BindInputComponentEvent();

	// 改变Mario的动画状态
	void ChangeAnimState(EMarioAnimState::Type State);

	// 输入事件
	void MoveRight(float Value);

	// 跳跃
	void DoJump();

	// 停止跳跃
	void DoStopJump();

	// 检查Mario的动画状态
	void UpdateCheckAnimState();

	// 判断当前是否在跳
	bool IsJumping();

	// 蹲
	void DoCross();

	// 返回轴输入事件中的Value,并把此值赋予给相机，让相机做出移动
	float MoveRightValue();

	// 改变Mario的形态
	void ChangeMarioStyle(EMarioStyle::Type Style);

	// 开火
	void DoFire();

protected:

	virtual void Tick(float DeltaTime) override;

	// 给Mario转脸
	void UpDateFace(float Value);

	// 获取当前Mario的FlipBook
	class UPaperFlipbook* GetCurrentMarioFlipBookAnim(EMarioAnimState::Type);


private:

	UPROPERTY()
	TEnumAsByte<EMarioAnimState::Type> CurrentAnimState;
	UPROPERTY(EditAnywhere,Category = "Small")
	class UPaperFlipbook* EMAS_Small_Idle;
	UPROPERTY(EditAnywhere, Category = "Small")
	class UPaperFlipbook* EMAS_Small_Run;
	UPROPERTY(EditAnywhere, Category = "Small")
	class UPaperFlipbook* EMAS_Small_Jump;

	UPROPERTY(EditAnywhere, Category = "Big")
	class UPaperFlipbook* EMAS_Big_Idle;
	UPROPERTY(EditAnywhere, Category = "Big")
	class UPaperFlipbook* EMAS_Big_Run;
	UPROPERTY(EditAnywhere, Category = "Big")
	class UPaperFlipbook* EMAS_Big_Jump;
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* FirePos;
	

	float AirControl;
	float CameraMoveValue;
	EMarioStyle::Type MarioStyle;

	
};
