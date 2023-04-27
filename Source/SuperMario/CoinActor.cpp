// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinActor.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "Components/SceneComponent.h"
#include <Sound/SoundBase.h>
#include <Kismet/GameplayStatics.h>
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include <GameFramework/Actor.h>

// Sets default values
ACoinActor::ACoinActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/* ������Ⱦ��� */
	USceneComponent* RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);
	RenderComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RenderComp"));
	RenderComp->SetupAttachment(RootComp);

	// ��ʼ��
	AnimTime = 0;
}

// Called when the game starts or when spawned
void ACoinActor::BeginPlay()
{
	Super::BeginPlay();
	
	// ������Դ
	// �������
	CoinSound = LoadObject<USoundBase>(GetWorld(), TEXT("SoundWave'/Game/Sounds/coin.coin'"));
	UGameplayStatics::PlaySound2D(GetWorld(), CoinSound); // ��������

	// �����ʽ
	CoinSprite = LoadObject<UPaperSprite>(GetWorld(), TEXT("PaperSprite'/Game/Textures/Coin/Coin_Sprite.Coin_Sprite'"));
	RenderComp->SetSprite(CoinSprite);

	// ����
	CurveAnim = LoadObject<UCurveFloat>(GetWorld(), TEXT("CurveFloat'/Game/AnimationCurves/CB_Coin.CB_Coin'"));
}

void ACoinActor::UpdateAnim(float DeltaTime)
{
	if (CurveAnim && RenderComp)
	{
		float Value = CurveAnim->GetFloatValue(AnimTime);
		RenderComp->AddRelativeLocation(FVector(0, 0, Value));


		float MinTime;
		float MaxTime;
		CurveAnim->GetTimeRange(MinTime, MaxTime);
		if (AnimTime >= MaxTime)
		{
			Destroy();
		}

		AnimTime += DeltaTime;
	}
	
}

// Called every frame
void ACoinActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAnim(DeltaTime);
}

