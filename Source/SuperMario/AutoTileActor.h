// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoTileActor.generated.h"

// 瓦片横铺还是纵铺
UENUM(BlueprintType)
namespace ETileLayout
{
	enum Type
	{
		ETL_Vertical, // 纵铺
		ETL_Horizontal // 横铺
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

	// 脚本构造函数覆写
	virtual void OnConstruction(const FTransform& Transform) override;

	// 自动瓦片
	void AutoTile();

	// 添加瓦片
	class UPaperSpriteComponent* AddSpriteComponent();

	// 消除瓦片
	void ClearTileSpriteComp();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 开始重叠事件
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// 结束重叠事件
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

	// 存放创建出来的瓦片的数组
	TArray<UPaperSpriteComponent*> TileSpriteCompArray;

};
