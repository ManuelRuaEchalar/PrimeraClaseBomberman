#include "MyProjectPawn.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "EnemigoMetal.h"
#include "EnemigoMadera.h"
#include "Puntuacion.h"
#include "EngineUtils.h"
#include "TimerManager.h"

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

	// Crear fábricas de enemigos
	MetalFactory = GetWorld()->SpawnActor<AMetalEnemyFactory>(FVector::ZeroVector, FRotator::ZeroRotator);
	WoodFactory = GetWorld()->SpawnActor<AWoodEnemyFactory>(FVector::ZeroVector, FRotator::ZeroRotator);

	// Configurar timer para crear enemigos cada 10 segundos
	GetWorldTimerManager().SetTimer(TimerHandle_SpawnEnemigos, this, &AMyProjectPawn::SpawnEnemigos, 10.0f, true, 0.0f);

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
		}
	}

	if (bIsMovingLeft)
	{
		if (cubo) cubo->moveLeft();
		if (BoardCamera) BoardCamera->moveLeft();
		if (activo == 0) {
			APuntuacion* P2 = APuntuacion::GetInstance(GetWorld());
			APuntuacion* P3 = APuntuacion::GetInstance(GetWorld());
		}
	}
}

// Método para crear enemigos usando el patrón Factory Method
void AMyProjectPawn::SpawnEnemigos()
{
	if (!MetalFactory || !WoodFactory || !GetWorld())
	{
		return;
	}

	// Posiciones para los nuevos enemigos
	FVector SpawnLocation1 = FVector(FMath::RandRange(-500.0f, 500.0f), FMath::RandRange(-500.0f, 500.0f), 300.0f);
	FVector SpawnLocation2 = FVector(FMath::RandRange(-500.0f, 500.0f), FMath::RandRange(-500.0f, 500.0f), 300.0f);
	FVector SpawnLocation3 = FVector(FMath::RandRange(-500.0f, 500.0f), FMath::RandRange(-500.0f, 500.0f), 300.0f);
	FRotator SpawnRotation = FRotator::ZeroRotator;

	// Crear dos enemigos de madera
	AEnemigo* WoodEnemy1 = WoodFactory->CreateEnemy(GetWorld(), SpawnLocation1, SpawnRotation);
	AEnemigo* WoodEnemy2 = WoodFactory->CreateEnemy(GetWorld(), SpawnLocation2, SpawnRotation);

	// Crear un enemigo de metal
	AEnemigo* MetalEnemy = MetalFactory->CreateEnemy(GetWorld(), SpawnLocation3, SpawnRotation);

	// Añadir los enemigos al array
	if (WoodEnemy1)
	{
		EnemigosActivos.Add(WoodEnemy1);
		WoodEnemy1->Atacar();
	}

	if (WoodEnemy2)
	{
		EnemigosActivos.Add(WoodEnemy2);
		WoodEnemy2->Atacar();
	}

	if (MetalEnemy)
	{
		EnemigosActivos.Add(MetalEnemy);
		MetalEnemy->Atacar();
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("Creados 3 nuevos enemigos. Total: %d"), EnemigosActivos.Num()));

	// Programar la eliminación de estos enemigos después de 10 segundos
	GetWorldTimerManager().SetTimer(TimerHandle_DestroyEnemigos, this, &AMyProjectPawn::DestroyEnemigos, 10.0f, false);
}

// Método para eliminar enemigos
void AMyProjectPawn::DestroyEnemigos()
{
	// Verificar si hay enemigos para eliminar
	if (EnemigosActivos.Num() <= 0)
	{
		return;
	}

	// Obtener los primeros tres enemigos (o menos si no hay suficientes)
	int32 NumToDestroy = FMath::Min(3, EnemigosActivos.Num());

	for (int32 i = 0; i < NumToDestroy; i++)
	{
		if (EnemigosActivos.IsValidIndex(0))
		{
			AEnemigo* EnemigoToDestroy = EnemigosActivos[0];
			if (EnemigoToDestroy)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Eliminando enemigo"));
				EnemigoToDestroy->Destroy();
			}
			EnemigosActivos.RemoveAt(0);
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, FString::Printf(TEXT("Enemigos eliminados. Restantes: %d"), EnemigosActivos.Num()));
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