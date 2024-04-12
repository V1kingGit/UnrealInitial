// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureZone.h"

// Sets default values
ACaptureZone::ACaptureZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	FlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flag"));
	PoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pole"));

	RootComponent = CollisionComponent;
	FlagMesh->SetupAttachment(RootComponent);
	PoleMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACaptureZone::BeginPlay()
{
	Super::BeginPlay();

	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACaptureZone::OnOverlapBegin);
	CollisionComponent->OnComponentEndOverlap.AddDynamic(this, &ACaptureZone::OnOverlapEnd);
}

// Called every frame
void ACaptureZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(capturing)
	{
		if(percentage >= 1.0f)
		{
			capturing = false;
			timeSinceTick = 0;
			return;
		}

		timeSinceTick += DeltaTime;

		percentage = FMath::Clamp(timeSinceTick / CaptureTime, 0.0f, 1.0f);

		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("Float value: %f"), percentage));

		float newZPosition;
		newZPosition = FMath::Lerp(-20.0f, 20.0f, percentage);

		FVector newLocation = FlagMesh->GetRelativeLocation();
		newLocation.Z = newZPosition;

		FlagMesh->SetRelativeLocation(newLocation);
	}
}

void ACaptureZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Colliding"));

	capturing = true;
}

void ACaptureZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Not colliding"));

	capturing = false;
}