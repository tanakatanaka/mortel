// Fill out your copyright notice in the Description page of Project Settings.


#include "BallPawnBase.h"

// Sets default values
ABallPawnBase::ABallPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void ABallPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABallPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



