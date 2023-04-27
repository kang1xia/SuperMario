// Fill out your copyright notice in the Description page of Project Settings.


#include "FireBoxActor.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
#include "Components/SphereComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include <Kismet/GameplayStatics.h>
#include <Engine/World.h>

// Sets default values
AFireBoxActor::AFireBoxActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 构建组件
	FireBoxFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipbookComp"));
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SetRootComponent(SphereCollision);

	// 设置组件关系
	FireBoxFlipbook->SetupAttachment(RootComponent);

	// 设置碰撞预设
	SphereCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	SphereCollision->SetSphereRadius(17);

	// 初始化
	FireBoxSpeed = 20;
}

// Called when the game starts or when spawned
void AFireBoxActor::BeginPlay()
{
	Super::BeginPlay();
	
	// 绑定开始碰撞事件
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AFireBoxActor::OnComponentBeginOverlap);

	// 加载资源 
	UPaperFlipbook* FireBoxSource = LoadObject<UPaperFlipbook>(GetWorld(), TEXT("PaperFlipbook'/Game/Animation/Item/PFB_FireBox.PFB_FireBox'"));
	FireBoxFlipbook->SetFlipbook(FireBoxSource);

	USoundBase* FireSound = LoadObject<USoundBase>(GetWorld(), TEXT("SoundWave'/Game/Sounds/fireball.fireball'"));
	UGameplayStatics::PlaySound2D(GetWorld(), FireSound); //播放声音
}

void AFireBoxActor::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	// 撞到的对象是否有标签
	if (OtherActor->ActorHasTag(TEXT("Ground")))
	{
		this->MoveDirection.Z *= -1; // 该变Z的方向
		// GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, TEXT("GGG"));
		FTimerHandle Handle;
		GetWorld()->GetTimerManager().SetTimer(Handle, this, &AFireBoxActor::CallbackEvent, 0.6f);
	}
}

void AFireBoxActor::UpdateAnim(float DeltaTime)
{
	AddActorLocalOffset(MoveDirection * DeltaTime * FireBoxSpeed); // 暴露类属性让外部调用
}

void AFireBoxActor::CallbackEvent()
{
	this->MoveDirection.Z *= -1; // 该变Z的方向
}

// Called every frame
void AFireBoxActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAnim(DeltaTime);
}

void AFireBoxActor::SetFireBoxDirection(FVector MoveDir, float Speed)
{
	this->MoveDirection = MoveDir + FVector::UpVector * -1; // 向斜方向下发射子弹
	this->FireBoxSpeed = Speed;
}

