// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoinBoxActor.generated.h"

// ��Һ��ӵ�״̬
UENUM(BlueprintType)
namespace ECoinBoxState
{
	enum Type
	{
		ECBX_Normal,
		ECBX_Spawn,
		ECBX_Empty,
	};
}




UCLASS()
class SUPERMARIO_API ACoinBoxActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoinBoxActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// ���½�Һ��Ӷ���
	void UpdateAnim(float Deltatime);

	// �ص��¼�
	UFUNCTION()
	void OnComponentBeginOverlapEvent(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// ����CoinBox��״̬ΪEmpty
	void SetCoinBoxState();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// �ı��Һ��ӵ�״̬
	void ChangeCoinBoxState(ECoinBoxState::Type State);


private:
	UPROPERTY(VisibleAnywhere)
	class UPaperSpriteComponent* RenderComp;
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* BoxCollision;
	UPROPERTY(EditAnywhere, Category= "AMrio")
	class UPaperSprite* NormalSprite;
	UPROPERTY(EditAnywhere, Category= "AMrio")
	class UPaperSprite* EmptySprite;
	UPROPERTY(EditAnywhere, Category= "AMrio")
	class UCurveFloat* CurveAnimation;
	UPROPERTY(EditAnywhere)
	float AnimSpeed;
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* SpawnCoinPos;
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BlockCollision;


	ECoinBoxState::Type CurrentState;
	float AnimTime;
	float SpawnCoinTime;
	bool bTimerOnce;
	bool bTimeOut;
};
