// Copyright Epic Games, Inc. All Rights Reserved.


#include "Chapter01GameModeBase.h"

void AChapter01GameModeBase::BeginPlay()
{
    Super::BeginPlay();

    //Basic UE_LOG
    UE_LOG(LogTemp, Warning, TEXT("Some Warning Message"));

    //UE_LOG with variables
    int intVar = 5;
    float floatVar = 3.7f;
    FString fstringVar = "an fstring variable";
    UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), intVar, floatVar, *fstringVar);

    //
    FString name = "Tim";
    int32 mana = 450;
    FString string = FString::Printf( TEXT("Name = %s Mana = %d"), *name, mana);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *string);

    TArray< FStringFormatArg > args;
    args.Add( FStringFormatArg( name));
    args.Add(FStringFormatArg(mana));
    FString string2 = FString::Format(TEXT("Name = {0} Mana = {1}"), args);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *string2);
}

