// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoTileActor.generated.h"

// ��Ƭ���̻�������
UENUM(BlueprintType)
namespace ETileLayout
{
	enum Type
	{
		ETL_Vertical, // ����
		ETL_Horizontal // ����
	};
}

UENUM(BlueprintType)
namespace ELadderLayout
{
	enum Type
	{
		ELL_Tile,
		ELL_Ladder,
	};
}

UCLASS()
class SUPERMARIO_API AAutoTileActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAutoTileActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// �ű����캯����д
	virtual void OnConstruction(const FTransform& Transform) override;

	// �Զ���Ƭ
	void AutoTile();

	// �����Ƭ
	class UPaperSpriteComponent* AddSpriteComponent();

	// ������Ƭ
	void ClearTileSpriteComp();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// ��ʼ�ص��¼�
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// �����ص��¼�
	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);


private:
	UPROPERTY(VisibleAnywhere)
	class UBillboardComponent* RootComp;
	UPROPERTY(VisibleAnywhere)
	class UPaperSpriteComponent* HeadComponent;
	UPROPERTY(VisibleAnywhere)
	class UPaperSpriteComponent* EndComponent;
	UPROPERTY(EditAnywhere)
	class UPaperSprite* TileSprite;
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere,meta=(MakeEditWidget))
	FVector TargetPointer;
	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETileLayout::Type> Shape;
	UPROPERTY(EditAnywhere)
	TEnumAsByte<ELadderLayout::Type> CurrentMesh;

	// ��Ŵ�����������Ƭ������
	TArray<UPaperSpriteComponent*> TileSpriteCompArray;

};
