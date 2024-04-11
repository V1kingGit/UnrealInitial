// Fill out your copyright notice in the Description page of Project Settings.

#include "LightSwitch.h"

#include "Components/BoxComponent.h"
#include "Components/PointLightComponent.h"

// Sets default values
ALightSwitch::ALightSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	// Can't bind collisions in constructor
}

// Called when the game starts or when spawned
void ALightSwitch::BeginPlay()
{
	Super::BeginPlay();

	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ALightSwitch::OnOverlapBegin);
	CollisionComponent->OnComponentEndOverlap.AddDynamic(this, &ALightSwitch::OnOverlapEnd);
}

// Called every frame
void ALightSwitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALightSwitch::Toggle()
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Called Toggle on Light Switch"));

	if(!IsInInteractableRange)
		return;

	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Toggling Light Switch"));

	IsToggledOn = !IsToggledOn;
	PointLight->SetVisibility(IsToggledOn);
}

void ALightSwitch::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Colliding"));

	IsInInteractableRange = true;
}

void ALightSwitch::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Not colliding"));

	IsInInteractableRange = false;
}

