// Copyright Epic Games, Inc. All Rights Reserved.

#include "IdeenFest_ProjectGameMode.h"
#include "IdeenFest_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIdeenFest_ProjectGameMode::AIdeenFest_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
