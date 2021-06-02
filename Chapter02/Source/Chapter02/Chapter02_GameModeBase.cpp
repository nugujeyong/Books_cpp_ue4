// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter02_GameModeBase.h"


void AChapter02_GameModeBase::BeginPlay()
{
	AChapter02_GameModeBase * gm = Cast<AChapter02_GameModeBase>( GetWorld()->GetAuthGameMode() );

	if( gm )
	{
        
		// Create object
		UUserProfile* newobject = NewObject<UUserProfile>( (UObject*)GetTransientPackage(), 
															UUserProfile::StaticClass() );
		// Destroy object
		if(newobject)
		{
			newobject->ConditionalBeginDestroy();
			newobject = nullptr;
		}
	}

}