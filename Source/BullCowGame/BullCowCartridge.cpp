// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the Bull Cow Game!"));
    PrintLine(TEXT("Please guess the 5 letter word:")); // Make number programmatic
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("shore"); // Move outside of this function
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("Congratulations!"));
    }
    else
    {
        PrintLine(TEXT("Try again."));
    }
}