// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrimeraClaseGameModeBase.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "MyProjectPawn.h"

APrimeraClaseGameModeBase::APrimeraClaseGameModeBase()
{
	DefaultPawnClass = AMyProjectPawn::StaticClass();
}

void APrimeraClaseGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// Aquí puedes agregar más lógica personalizada si lo necesitas
}
