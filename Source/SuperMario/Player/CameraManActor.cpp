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

	// 创建根组件
	RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("RootComp"));
	SetRootComponent(RootComponent);

	// 创建一个弹簧吊臂
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoomComp"));

	// 创建一个相机
	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCrameraComp"));

	// 附着关系设置
	CameraBoom->SetupAttachment(RootComponent);
	MainCamera->SetupAttachment(CameraBoom);

	// 设置弹簧吊臂的碰撞测试
	CameraBoom->bDoCollisionTest = false;

	// 设置弹簧吊臂的旋转
	CameraBoom->SetRelativeRotation(FRotator(0, -90, 0));

	// 设置相机的拍摄模式为正交
	MainCamera->ProjectionMode = ECameraProjectionMode::Orthographic;

}

// Called when the game starts or when spawned
void ACameraManActor::BeginPlay()
{
	Super::BeginPlay();
	
	// 获得PlayerController
	PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		// 将PlayerController中的相机视口设置成this
		PlayerController->SetViewTarget(this);
	}

}




void ACameraManActor::FollowMario()
{
	if (!Mario)
	{
		// 获得mario
		Mario = Cast<AMarioCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	}

	//if (Mario->GetActorLocation().X > GetActorLocation().X - FollowOffset)
	//{
	//	// 根据Mario的位置，向右移动摄像机
	//	FVector CameraLoc = GetActorLocation();
	//	CameraLoc.X = Mario->GetActorLocation().X + FollowOffset;
	//	SetActorLocation(CameraLoc);
	//}

	//if (Mario->GetActorLocation().X < GetActorLocation().X - 2 * FollowOffset)
	//{
	//	// 根据Mario的位置，向左移动摄像机(need to change it)
	//	FVector CameraLoc = GetActorLocation();
	//	CameraLoc.X = Mario->GetActorLocation().X - FollowOffset;
	//	SetActorLocation(CameraLoc);
	//}

	
	// 设置相机位置
	SetActorLocation(FVector(Mario->GetActorLocation().X + Mario->MoveRightValue() + FollowOffset, 0, 0));
}







// Called every frame
void ACameraManActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 时刻移动相机
	FollowMario();

}

