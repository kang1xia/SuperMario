// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraManActor.generated.h"

UCLASS()
class SUPERMARIO_API ACameraManActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraManActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// »√æµÕ∑∏˙ÀÊMario
	void FollowMario();

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* MainCamera;
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* CameraBoom;
	UPROPERTY()
		class APlayerController* PlayerController;
	UPROPERTY()
		class AMarioCharacter* Mario;
	UPROPERTY(EditAnywhere)
		float FollowOffset; // Marioæ‡¿Î…„œÒª˙µƒæ‡¿Î

};
