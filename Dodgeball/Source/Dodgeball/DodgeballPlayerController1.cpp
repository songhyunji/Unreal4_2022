// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballPlayerController1.h"
#include "RestartWidget.h"
#include "HUDWidget.h"

void ADodgeballPlayerController1::BeginPlay()
{
    Super::BeginPlay();
    
    if(BP_HUDWidget != nullptr)
    {
        HUDWidget = CreateWidget<UHUDWidget>(this, BP_HUDWidget);
        HUDWidget->AddToViewport();
        HUDWidget->UpdateHealthPercent(1);
    }
}

void ADodgeballPlayerController1::ShowRestartWidget()
{
    if(BP_RestartWidget != nullptr)
    {
        SetPause(true);
        SetInputMode(FInputModeUIOnly());
        bShowMouseCursor = true;
        RestartWidget = CreateWidget<URestartWidget>(this, BP_RestartWidget);
        RestartWidget->AddToViewport();
    }
}

void ADodgeballPlayerController1::HideRestartWidget()
{
    RestartWidget->RemoveFromParent();
    RestartWidget->Destruct();
    SetPause(false);
    SetInputMode(FInputModeGameOnly());
    bShowMouseCursor = false;
}

void ADodgeballPlayerController1::UpdateHealthPercent(float HealthPercent)
{
    if(HUDWidget != nullptr)
    {
        HUDWidget->UpdateHealthPercent(HealthPercent);
    }
}
