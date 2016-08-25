// Fill out your copyright notice in the Description page of Project Settings.

#include "ProgrammingAttempt.h"
#include "CActor.h"


// Sets default values
ACActor::ACActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

