// Copyright Epic Games, Inc. All Rights Reserved.

#include "assignment10GameMode.h"
#include "assignment10Character.h"
#include "UObject/ConstructorHelpers.h"

Aassignment10GameMode::Aassignment10GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
