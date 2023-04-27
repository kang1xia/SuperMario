// Fill out your copyright notice in the Description page of Project Settings.


#include "TreasureActor.h"
#include "Components/BillboardComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "Components/SceneComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Player/MarioCharacter.h"
#include "NPCCharacter.h"

// Sets default values
ATreasureActor::ATreasureActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ���������
	USceneComponent* RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	// �������侫����Ⱦ���
	TreasureComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("TreasureComp"));
	TreasureComp->SetupAttachment(RootComp);

	// ����������ײ
	BlockCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockCollisionComp"));
	OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BlockCollision->SetupAttachment(RootComp);
	OverlapBox->SetupAttachment(RootComp);

	// ������������ײԤ��
	OverlapBox->SetCollisionProfileName(TEXT("OverlapAll"));
	BlockCollision->SetCollisionProfileName(TEXT("BlockAll"));


	// ��ʼ��
	BoxCollisionPos = ETreasureBoxCollision::ETBC_Bottom;
	TreasureState = ETreasureState::ETS_Normal;
	AnimTime = 0;
	Offset = 30;
	
}

// Called when the game starts or when spawned
void ATreasureActor::BeginPlay()
{
	Super::BeginPlay();

	// ��������
	EmptyTreasure = LoadObject<UPaperSprite>(nullptr, TEXT("PaperSprite'/Game/Textures/Land/Treasure_Empty_Sprite.Treasure_Empty_Sprite'"));
	
	// �������ʼ�ص�ʱ����
	if (OverlapBox)
	{
		OverlapBox->OnComponentBeginOverlap.AddDynamic(this, &ATreasureActor::OnComponentBeginOverlap);
	}
}

// Ԥ��������
void ATreasureActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (!TreasureComp->GetSprite())
	{
		return;
	}

	if (BlockCollision)
	{
		FVector Bound;
		Bound.X = TreasureComp->GetSprite()->GetSourceSize().X / 2;
		Bound.Y = 100;
		Bound.Z = TreasureComp->GetSprite()->GetSourceSize().Y / 2;
		BlockCollision->SetBoxExtent(Bound);
	}



	if (BoxCollisionPos == ETreasureBoxCollision::ETBC_Bottom || BoxCollisionPos == ETreasureBoxCollision::ETBC_Top)
	{
		FVector Bound;
		Bound.X = TreasureComp->GetSprite()->GetSourceSize().X / 2;
		Bound.Y = 100;
		Bound.Z = 10;
		// ������ײ��Ĵ�С
		OverlapBox->SetBoxExtent(Bound);

	}
	if (BoxCollisionPos == ETreasureBoxCollision::ETBC_Right || BoxCollisionPos == ETreasureBoxCollision::ETBC_Left)
	{
		FVector Bound;
		Bound.X = 10;
		Bound.Y = 100;
		Bound.Z = TreasureComp->GetSprite()->GetSourceSize().Y / 2;
		// ������ײ��Ĵ�С
		OverlapBox->SetBoxExtent(Bound);
	}

	switch (BoxCollisionPos)
	{
	case ETreasureBoxCollision::ETBC_Bottom:

		// ������ײ���λ��
		OverlapBox->SetRelativeLocation(FVector(0, 0, -(TreasureComp->GetSprite()->GetSourceSize().Y / 2)));

		break;
	case ETreasureBoxCollision::ETBC_Top:

		// ������ײ���λ��
		OverlapBox->SetRelativeLocation(FVector(0, 0, TreasureComp->GetSprite()->GetSourceSize().Y / 2));

		break;
	case ETreasureBoxCollision::ETBC_Right:

		// ������ײ���λ��
		OverlapBox->SetRelativeLocation(FVector((TreasureComp->GetSprite()->GetSourceSize().X / 2), 0, 0));

		break;
	case ETreasureBoxCollision::ETBC_Left:

		// ������ײ���λ��
		OverlapBox->SetRelativeLocation(FVector(-(TreasureComp->GetSprite()->GetSourceSize().X / 2), 0, 0));

		break;
	default:
		break;
	}

}

// ����Ķ���
void ATreasureActor::UpdateAnim(float DeltaTime)
{

	if (!AnimationCurve || TreasureState != ETreasureState::ETS_Opened)
	{
		
		return;
	}

	// ��ö�Ӧʱ������ߵ�ֵ
	float Value = AnimationCurve->GetFloatValue(AnimTime);

	float X = 0;
	float Z = 0;

	// ���ݱ������ײ�������򻮶������ķ���
	switch (BoxCollisionPos)
	{
	case ETreasureBoxCollision::ETBC_Bottom:
		
		Z += Offset * Value;
		// UE_LOG(LogTemp, Log, TEXT("CCCC"));
	
		break;
	case ETreasureBoxCollision::ETBC_Top:

		Z -= Offset * Value;

		break;
	case ETreasureBoxCollision::ETBC_Right:

		X -= Offset * Value;

		break;
	case ETreasureBoxCollision::ETBC_Left:

		X += Offset * Value;

		break;
	default:
		break;
	}

	// ����TreasureComp��λ��
	TreasureComp->SetRelativeLocation(FVector(X, 0, Z));

	// �ж�ʱ����ʱ���Ƿ��Ѿ�����
	float AnimMin = 0;
	float AnimMax = 0;
	AnimationCurve->GetTimeRange(AnimMin, AnimMax);
	if (AnimTime >= AnimMax)
	{
		// ����ʱ���ѽ���,��״̬��һ��
		ChangeTreasureState(ETreasureState::ETS_Empty);
		if (EmptyTreasure)
		{
			// ��TreasureComp��Sprite��һ�£�
			TreasureComp->SetSprite(EmptyTreasure);
		}
		
	}

	// �ƽ�ʱ����
	AnimTime += DeltaTime;
	
}


// Called every frame
void ATreasureActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAnim(DeltaTime);
}


// �ı䱦���״̬
void ATreasureActor::ChangeTreasureState(ETreasureState::Type State)
{
	if (State == ETreasureState::ETS_Opened)
	{
		if (NPC)
		{
			NPC->ChangeState(ENPCState::ENS_GrowUp);
			NPC->ChangeBoxCollision();
		}
	}

	TreasureState = State;
}



// ��ʼ�ص��¼�
void ATreasureActor::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweepresult)
{
	// �ж�һ���ǲ���Marioײ�ģ�����һ������ת��
	AMarioCharacter* Mario = Cast<AMarioCharacter>(OtherActor);
	if (Mario && Mario->IsJumping())
	{
		// �ı䱦���״̬
		ChangeTreasureState(ETreasureState::ETS_Opened);
	}
}

