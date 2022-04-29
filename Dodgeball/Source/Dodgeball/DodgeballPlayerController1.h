// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DodgeballPlayerController1.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API ADodgeballPlayerController1 : public APlayerController
{
	GENERATED_BODY()
	
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<class URestartWidget> BP_RestartWidget;
    
    void ShowRestartWidget();
    void HideRestartWidget();
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<class UHUDWidget> BP_HUDWidget;
    
    void UpdateHealthPercent(float HealthPercent);
    
private:
    UPROPERTY()
    class URestartWidget* RestartWidget;
    
    UPROPERTY()
    class UHUDWidget* HUDWidget;
    
protected:
    virtual void BeginPlay() override;
};
