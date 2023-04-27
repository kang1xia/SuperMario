// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoinActor.generated.h"

UCLASS()
class SUPERMARIO_API ACoinActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoinActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// ½ð±Ò¶¯»­
	void UpdateAnim(float DeltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	UPROPERTY(VisibleAnywhere)
	class UPaperSpriteComponent* RenderComp;
	UPROPERTY()
	class UPaperSprite* CoinSprite;
	UPROPERTY()
	class UCurveFloat* CurveAnim;
	UPROPERTY()
	class USoundBase* CoinSound;

	float AnimTime;
	

};
