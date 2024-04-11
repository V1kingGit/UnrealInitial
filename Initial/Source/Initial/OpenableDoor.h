// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OpenableDoor.generated.h"

UCLASS()
class INITIAL_API AOpenableDoor : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "OpenableDoor")
	class AStaticMeshActor* Door = NULL;

	UFUNCTION(BlueprintCallable, Category = "Light Switch")
	void Toggle();

	// Sets default values for this actor's properties
	AOpenableDoor();

private:
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionComponent;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	bool IsInInteractableRange = false;

	bool IsOpen = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
