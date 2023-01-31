// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzlePlatformsMPGameMode.h"
#include "PuzzlePlatformsMPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzlePlatformsMPGameMode::APuzzlePlatformsMPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
