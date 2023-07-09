// Copyright Epic Games, Inc. All Rights Reserved.

#include "GMTK_23GameMode.h"
#include "GMTK_23Character.h"
#include "UObject/ConstructorHelpers.h"

AGMTK_23GameMode::AGMTK_23GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
