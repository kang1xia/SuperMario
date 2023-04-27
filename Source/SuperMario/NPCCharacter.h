// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "NPCCharacter.generated.h"

// NPC�����࣬�ǻ�����Ģ����
UENUM(BlueprintType)
namespace ESpriteStyle
{
	enum Type
	{
		ESS_Mushroom,
		ESS_Flower,
	};
}

// NPC������
UENUM(BlueprintType)
namespace EMoveStyle
{
	enum Type
	{
		EMS_Left, // ����
		EMS_Right // ����
	};
}

// NPC��״̬
UENUM(BlueprintType)
namespace ENPCState
{
	enum Type
	{
		ENS_Wait, // �����
		ENS_GrowUp, // ������
		ENS_Idle, // �����ϵ�
		ENS_move, // ������
		ENS_Dead, // ����
	};
}



/**
 * 
 */
UCLASS()
class SUPERMARIO_API ANPCCharacter : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	ANPCCharacter();

	// ���¶���
	void UpdateAnim(float DeltaTime);

	// �ı�״̬
	void ChangeState(ENPCState::Type State);

	// �ı�������ײ����
	void ChangeBoxCollision();

	// �ı���̬
	void ChangeStyle(ESpriteStyle::Type Style);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	// �ص��¼�
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweepresult);

	// NPC��˸
	void NPCFlicker();



private:
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* BoxComp;
	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ESpriteStyle::Type> SpriteStyle;
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EMoveStyle::Type> MoveStyle;
	UPROPERTY(EditAnywhere)
	float MoveSpeed;
	UPROPERTY(VisibleAnywhere)
	class UBillboardComponent* RootComp;
	UPROPERTY(EditDefaultsOnly, Category = "Flicker")
	int32 FlickerCount; // ��˸����
	UPROPERTY()
	class UPaperFlipbook* Flower;
	UPROPERTY()
	class UPaperFlipbook* Mushroom;


	ENPCState::Type CurrentState;
	
};
