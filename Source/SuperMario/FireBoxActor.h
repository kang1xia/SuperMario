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

	// �󶨿�ʼ�ص��¼�
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// ���¶���
	void UpdateAnim(float DeltaTime);

	// ��ʱ���ص�
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

	FVector MoveDirection; // �ӵ����ƶ�����
	float FireBoxSpeed; // �ӵ����ƶ��ٶ�
};
