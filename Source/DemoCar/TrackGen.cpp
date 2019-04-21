// Fill out your copyright notice in the Description page of Project Settings.

#include "TrackGen.h"
#include "FileHelper.h"


// Sets default values
ATrackGen::ATrackGen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATrackGen::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void ATrackGen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

