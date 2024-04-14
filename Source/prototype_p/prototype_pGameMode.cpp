// Copyright Epic Games, Inc. All Rights Reserved.

#include "prototype_pGameMode.h"
#include "prototype_pCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aprototype_pGameMode::Aprototype_pGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
