// Fill out your copyright notice in the Description page of Project Settings.

#include "Cubo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ACubo::ACubo()
{
	PrimaryActorTick.bCanEverTick = true;

	// Crear el componente del mesh
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = CubeMesh;

	// Cargar un mesh predeterminado (opcional)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (CubeMeshAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(CubeMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void ACubo::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACubo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACubo::moveRight()
{
	FVector NewLocation = GetActorLocation();
	NewLocation.Y += 10;
	SetActorLocation(NewLocation);
}

void ACubo::moveLeft()
{
	FVector NewLocation = GetActorLocation();
	NewLocation.Y -= 10;
	SetActorLocation(NewLocation);
}

int ACubo::getCodigo()
{
	return codigo;
}
