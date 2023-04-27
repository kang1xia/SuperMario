// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MarioCharacter.generated.h"

// Mario ��״̬
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

// Mario ����̬
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

	// �󶨰��������¼�
	void BindInputComponentEvent();

	// �ı�Mario�Ķ���״̬
	void ChangeAnimState(EMarioAnimState::Type State);

	// �����¼�
	void MoveRight(float Value);

	// ��Ծ
	void DoJump();

	// ֹͣ��Ծ
	void DoStopJump();

	// ���Mario�Ķ���״̬
	void UpdateCheckAnimState();

	// �жϵ�ǰ�Ƿ�����
	bool IsJumping();

	// ��
	void DoCross();

	// �����������¼��е�Value,���Ѵ�ֵ��������������������ƶ�
	float MoveRightValue();

	// �ı�Mario����̬
	void ChangeMarioStyle(EMarioStyle::Type Style);

	// ����
	void DoFire();

protected:

	virtual void Tick(float DeltaTime) override;

	// ��Marioת��
	void UpDateFace(float Value);

	// ��ȡ��ǰMario��FlipBook
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
