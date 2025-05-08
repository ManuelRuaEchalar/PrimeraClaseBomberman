// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProjectPawn.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "EnemigoMetal.h"
#include "EnemigoMadera.h"
#include "Puntuacion.h"
#include "EngineUtils.h"

// Sets default values
AMyProjectPawn::AMyProjectPawn()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyProjectPawn::BeginPlay()
{
	Super::BeginPlay();
	bIsMovingRight = false;
	bIsMovingLeft = false;
	

	// Crear cámara
	FVector Location = FVector(-3000.0f, 0.0f, 400.0f);
	FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);
	BoardCamera = GetWorld()->SpawnActor<ABoarCamera>(ABoarCamera::StaticClass(), Location, Rotation);

	// Cambiar la vista a la nueva cámara si se encuentra por nombre
	for (TActorIterator<ACameraActor> it(GetWorld()); it; ++it)
	{
		if (it->GetFName() == TEXT("BoarCamera_0"))
		{
			APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
			if (PC)
			{
				PC->SetViewTargetWithBlend(*it, 0.5f);
			}
			break;
		}
	}

	// Crear cubo
	Location = FVector(100.0f, 0.0f, 700.0f);
	Rotation = FRotator(90.0f, 0.0f, 0.0f);
	cubo = GetWorld()->SpawnActor<ACubo>(Location, Rotation);

	if (cubo)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("codigo: %d"), cubo->getCodigo()));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hola Mundo desde BeginPlay!"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Error al generar el cubo"));
	}

	FVector Location1(100, 0, 400);
	FVector Location2(100, 0, 300);
	FRotator Rotation3(0, 0, 0);

	AEnemigo* Metal = GetWorld()->SpawnActor<AEnemigoMetal>(Location1, Rotation3);
	AEnemigo* Madera = GetWorld()->SpawnActor<AEnemigoMadera>(Location2, Rotation3);

	Metal->Atacar();
	Madera->Atacar();

	// Obtenemos la instancia singleton múltiples veces
	APuntuacion* P1 = APuntuacion::GetInstance(GetWorld());

	// Log para demostrar que siempre es la misma dirección
	UE_LOG(LogTemp, Warning, TEXT("Puntuacion instances: %p"), P1);

	// Ajustamos la puntuación
	if (P1)
	{
		P1->SetScore(42);
	}

}

// Called every frame
void AMyProjectPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsMovingRight)
	{
		if (cubo) cubo->moveRight();
		if (BoardCamera) BoardCamera->moveRight();
		if (activo == 0) {
			APuntuacion* P2 = APuntuacion::GetInstance(GetWorld());
			APuntuacion* P3 = APuntuacion::GetInstance(GetWorld());
			// Log para demostrar que siempre es la misma dirección
			//UE_LOG(LogTemp, Warning, TEXT("Puntuacion instances: %p, %p, %p"), P1, P2, P3);


		}
		
	}

	if (bIsMovingLeft)
	{
		if (cubo) cubo->moveLeft();
		if (BoardCamera) BoardCamera->moveLeft();
		if (activo == 0) {
			APuntuacion* P2 = APuntuacion::GetInstance(GetWorld());
			APuntuacion* P3 = APuntuacion::GetInstance(GetWorld());
			// Log para demostrar que siempre es la misma dirección
			//UE_LOG(LogTemp, Warning, TEXT("Puntuacion instances: %p, %p, %p"), P1, P2, P3);


		}

	}
}

// Called to bind functionality to input
void AMyProjectPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &AMyProjectPawn::StartMovingRight);
	PlayerInputComponent->BindAction("MoveRight", IE_Released, this, &AMyProjectPawn::StopMovingRight);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &AMyProjectPawn::startMovingLeft);
	PlayerInputComponent->BindAction("MoveLeft", IE_Released, this, &AMyProjectPawn::stopMovingLeft);
}

// Métodos de movimiento
void AMyProjectPawn::StartMovingRight()
{
	bIsMovingRight = true;
}

void AMyProjectPawn::StopMovingRight()
{
	bIsMovingRight = false;
}

void AMyProjectPawn::MoveRight()
{
	if (cubo)
	{
		cubo->moveRight();
	}
}

// Métodos de movimiento a la izquierda
void AMyProjectPawn::startMovingLeft()
{
	bIsMovingLeft = true;
}

void AMyProjectPawn::stopMovingLeft()
{
	bIsMovingLeft = false;
}

void AMyProjectPawn::moveLeft()
{
	if (cubo)
	{
		cubo->moveLeft();
	}
}
