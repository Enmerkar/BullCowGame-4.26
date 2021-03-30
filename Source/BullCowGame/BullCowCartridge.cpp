// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if (bGameOver)
    {
        ClearScreen();
        SetupGame()
    }
    else {
        if (Input == HiddenWord)
        {
            PrintLine(TEXT("Congratulations!"));
            PrintLine(TEXT("The hidden word was '%s'."), *HiddenWord);
            EndGame();
        }
        else
        {
            if  (HiddenWord.Len() != Input.Len())
            {
                PrintLine(TEXT("Incorrect word length."));
                EndGame();
            }
        }
    }

    // Check isogram
    // Check number of characters

    // Remove life
    // Check lives remaining



}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("shore");
    GameLives = 5;
    bGameOver = false;

    PrintLine(TEXT("Welcome to the Bull Cow Game!"));
    PrintLine(TEXT("The hidden word is %i characters long."), HiddenWord.Len());
    PrintLine(TEXT("Please enter your guess..."));
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again..."));
}