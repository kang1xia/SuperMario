// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "NPCCharacter.generated.h"

// NPC的种类，是花？是蘑菇？
UENUM(BlueprintType)
namespace ESpriteStyle
{
	enum Type
	{
		ESS_Mushroom,
		ESS_Flower,
	};
}

// NPC的走向
UENUM(BlueprintType)
namespace EMoveStyle
{
	enum Type
	{
		EMS_Left, // 左走
		EMS_Right // 右走
	};
}

// NPC的状态
UENUM(BlueprintType)
namespace ENPCState
{
	enum Type
	{
		ENS_Wait, // 土里等
		ENS_GrowUp, // 长出土
		ENS_Idle, // 在土上等
		ENS_move, // 土外跑
		ENS_Dead, // 死亡
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

	// 更新动画
	void UpdateAnim(float DeltaTime);

	// 改变状态
	void ChangeState(ENPCState::Type State);

	// 改变盒体的碰撞类型
	void ChangeBoxCollision();

	// 改变形态
	void ChangeStyle(ESpriteStyle::Type Style);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	// 重叠事件
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweepresult);

	// NPC闪烁
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
	int32 FlickerCount; // 闪烁次数
	UPROPERTY()
	class UPaperFlipbook* Flower;
	UPROPERTY()
	class UPaperFlipbook* Mushroom;


	ENPCState::Type CurrentState;
	
};
