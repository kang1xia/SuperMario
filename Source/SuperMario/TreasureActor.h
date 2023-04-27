// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TreasureActor.generated.h"

// 触发碰撞区域的位置
UENUM(BlueprintType)
namespace ETreasureBoxCollision
{
	enum Type
	{
		ETBC_Top,
		ETBC_Bottom,
		ETBC_Left,
		ETBC_Right
	};
}

// 宝箱的状态
namespace ETreasureState
{
	enum Type
	{
		ETS_Normal,
		ETS_Opened,
		ETS_Empty,
	};
}

UCLASS()
class SUPERMARIO_API ATreasureActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATreasureActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 预构建函数
	virtual void OnConstruction(const FTransform& Transform) override;

	// 顶宝箱，让宝箱出现动画
	void UpdateAnim(float DeltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 改变宝箱的状态
	void ChangeTreasureState(ETreasureState::Type State);

	// 重叠事件
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweepresult);


protected:
	UPROPERTY(VisibleAnywhere)
	class UPaperSpriteComponent* TreasureComp;
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* OverlapBox;
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* BlockCollision;
	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETreasureBoxCollision::Type> BoxCollisionPos;
	UPROPERTY(EditAnywhere)
	class UCurveFloat* AnimationCurve;
	UPROPERTY(EditAnywhere)
	float Offset;
	UPROPERTY()
	class UPaperSprite* EmptyTreasure;
	UPROPERTY(EditAnywhere)
	class ANPCCharacter* NPC;

	ETreasureState::Type TreasureState;
	float AnimTime;



};
