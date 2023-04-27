// Copyright Epic Games, Inc. All Rights Reserved.


#include "SuperMarioGameModeBase.h"
#include "Player/MarioCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASuperMarioGameModeBase::ASuperMarioGameModeBase()
{
	// ������ͼ��
	ConstructorHelpers::FClassFinder<AMarioCharacter> MarioClass(TEXT("Blueprint'/Game/Blueprints/BP_Mario.BP_Mario_C'"));

	// ����Ĭ��Pawn
	DefaultPawnClass = MarioClass.Class;


}
