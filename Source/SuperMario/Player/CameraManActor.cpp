// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraManActor.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/BillboardComponent.h"
#include "MarioCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACameraManActor::ACameraManActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ���������
	RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("RootComp"));
	SetRootComponent(RootComponent);

	// ����һ�����ɵ���
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoomComp"));

	// ����һ�����
	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCrameraComp"));

	// ���Ź�ϵ����
	CameraBoom->SetupAttachment(RootComponent);
	MainCamera->SetupAttachment(CameraBoom);

	// ���õ��ɵ��۵���ײ����
	CameraBoom->bDoCollisionTest = false;

	// ���õ��ɵ��۵���ת
	CameraBoom->SetRelativeRotation(FRotator(0, -90, 0));

	// �������������ģʽΪ����
	MainCamera->ProjectionMode = ECameraProjectionMode::Orthographic;

}

// Called when the game starts or when spawned
void ACameraManActor::BeginPlay()
{
	Super::BeginPlay();
	
	// ���PlayerController
	PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		// ��PlayerController�е�����ӿ����ó�this
		PlayerController->SetViewTarget(this);
	}

}




void ACameraManActor::FollowMario()
{
	if (!Mario)
	{
		// ���mario
		Mario = Cast<AMarioCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	}

	//if (Mario->GetActorLocation().X > GetActorLocation().X - FollowOffset)
	//{
	//	// ����Mario��λ�ã������ƶ������
	//	FVector CameraLoc = GetActorLocation();
	//	CameraLoc.X = Mario->GetActorLocation().X + FollowOffset;
	//	SetActorLocation(CameraLoc);
	//}

	//if (Mario->GetActorLocation().X < GetActorLocation().X - 2 * FollowOffset)
	//{
	//	// ����Mario��λ�ã������ƶ������(need to change it)
	//	FVector CameraLoc = GetActorLocation();
	//	CameraLoc.X = Mario->GetActorLocation().X - FollowOffset;
	//	SetActorLocation(CameraLoc);
	//}

	
	// �������λ��
	SetActorLocation(FVector(Mario->GetActorLocation().X + Mario->MoveRightValue() + FollowOffset, 0, 0));
}







// Called every frame
void ACameraManActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ʱ���ƶ����
	FollowMario();

}

