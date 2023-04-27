// Copyright Epic Games, Inc. All Rights Reserved.


#include "SuperMarioGameModeBase.h"
#include "Player/MarioCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASuperMarioGameModeBase::ASuperMarioGameModeBase()
{
	// 引入蓝图类
	ConstructorHelpers::FClassFinder<AMarioCharacter> MarioClass(TEXT("Blueprint'/Game/Blueprints/BP_Mario.BP_Mario_C'"));

	// 设置默认Pawn
	DefaultPawnClass = MarioClass.Class;


}
