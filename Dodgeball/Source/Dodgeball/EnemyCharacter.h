// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class DODGEBALL_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();
    void LookAtActor(AActor* TargetActor);  // rotate character to look at actor
    bool CanSeeActor(const AActor* TargetActor) const;  // check can see actor
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=LookAt, meta=(AllowPrivateAccess="true"))
    class USceneComponent* SightSource;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
