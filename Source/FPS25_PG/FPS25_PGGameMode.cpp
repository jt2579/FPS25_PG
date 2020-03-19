// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS25_PGGameMode.h"
#include "FPS25_PGHUD.h"
#include "FPS25_PGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS25_PGGameMode::AFPS25_PGGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS25_PGHUD::StaticClass();
}
