// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenableDoor.h"

#include "Components/BoxComponent.h"
#include "Engine/StaticMeshActor.h"

// Sets default values
AOpenableDoor::AOpenableDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
}

// Called when the game starts or when spawned
void AOpenableDoor::BeginPlay()
{
	Super::BeginPlay();

	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AOpenableDoor::OnOverlapBegin);
	CollisionComponent->OnComponentEndOverlap.AddDynamic(this, &AOpenableDoor::OnOverlapEnd);
}

// Called every frame
void AOpenableDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOpenableDoor::Toggle()
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Called Toggle on Door"));

	if(!IsInInteractableRange)
		return;

	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Toggling Door"));

	IsOpen = !IsOpen;
	if(GEngine)
	{
		if(IsOpen)
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Opening door"));
		else
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Closing door"));

		if(Door)
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Door exists"));
		if(Door != NULL)
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Door not null"));
	}
	//if(IsOpen)
	//	Door->SetActorRelativeRotation(FRotator(0.0f, 0.0f, -120.0f));
	//else
	//  Door->SetActorRelativeRotation(FRotator::ZeroRotator);
}

void AOpenableDoor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Colliding"));

	IsInInteractableRange = true;
}

void AOpenableDoor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Not colliding"));

	IsInInteractableRange = false;
}