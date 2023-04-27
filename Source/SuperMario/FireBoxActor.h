// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireBoxActor.generated.h"

UCLASS()
class SUPERMARIO_API AFireBoxActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireBoxActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 绑定开始重叠事件
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// 更新动画
	void UpdateAnim(float DeltaTime);

	// 定时器回调
	void CallbackEvent();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetFireBoxDirection(FVector MoveDirection, float Speed);



private:
	UPROPERTY()
	class UPaperFlipbookComponent* FireBoxFlipbook;
	UPROPERTY()
	class USphereComponent* SphereCollision;

	FVector MoveDirection; // 子弹的移动方向
	float FireBoxSpeed; // 子弹的移动速度
};
