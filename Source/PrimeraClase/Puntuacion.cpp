#include "Puntuacion.h"
#include "Components/TextRenderComponent.h"
#include "TimerManager.h"            // <-- necesario para FTimerHandle

APuntuacion* APuntuacion::Instance = nullptr;

APuntuacion::APuntuacion()
{
	PrimaryActorTick.bCanEverTick = false;

	TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText"));
	RootComponent = TextComponent;
	TextComponent->SetHorizontalAlignment(EHTA_Center);
	TextComponent->SetWorldSize(100.f);

	Score = 0;
}

void APuntuacion::BeginPlay()
{
	Super::BeginPlay();

	// Mostrar valor inicial
	TextComponent->SetText(FText::FromString(TEXT("Score: 0")));

	// ——— Arrancamos el timer ———
	if (GetWorld())
	{
		// Cada 2 segundos, llama a IncrementScore() repetidamente
		GetWorld()->GetTimerManager().SetTimer(
			ScoreTimerHandle,
			this,
			&APuntuacion::IncrementScore,
			2.0f,   // periodo en segundos
			true    // looping
		);
	}
}

APuntuacion* APuntuacion::GetInstance(UWorld* World)
{
	if (!Instance && World)
	{
		FActorSpawnParameters Params;
		Params.Name = TEXT("SingletonPuntuacion");
		Instance = World->SpawnActor<APuntuacion>(
			FVector::ZeroVector,
			FRotator::ZeroRotator,
			Params
			);
	}
	return Instance;
}

void APuntuacion::SetScore(int32 NewScore)
{
	Score = NewScore;
	if (TextComponent)
	{
		TextComponent->SetText(
			FText::Format(
				NSLOCTEXT("Puntuacion", "ScoreFmt", "Score: {0}"),
				FText::AsNumber(Score)
			)
		);
	}
}

void APuntuacion::IncrementScore()
{
	// Sumamos 10 puntos y actualizamos la visualización
	SetScore(Score + 10);
}
