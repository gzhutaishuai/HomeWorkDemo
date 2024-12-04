// Copyright Epic Games, Inc. All Rights Reserved.

#include "HomeWorkDemoGameMode.h"
#include "HomeWorkDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomeWorkDemoGameMode::AHomeWorkDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
