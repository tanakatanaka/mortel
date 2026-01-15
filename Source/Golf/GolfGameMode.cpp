// Copyright Epic Games, Inc. All Rights Reserved.

#include "GolfGameMode.h"
#include "GolfCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGolfGameMode::AGolfGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
