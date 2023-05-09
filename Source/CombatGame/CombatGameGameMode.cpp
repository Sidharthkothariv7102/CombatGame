// Copyright Epic Games, Inc. All Rights Reserved.

#include "CombatGameGameMode.h"
#include "CombatGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombatGameGameMode::ACombatGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
