// Copyright Epic Games, Inc. All Rights Reserved.

#include "Hylterans_BaneGameMode.h"
#include "Hylterans_BanePlayerController.h"
#include "Hylterans_BaneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHylterans_BaneGameMode::AHylterans_BaneGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AHylterans_BanePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}