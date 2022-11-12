// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IdeenFest_ProjectCharacter.h"
#include "Interactable.h"
#include "CharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class IDEENFEST_PROJECT_API ACharacterBase : public AIdeenFest_ProjectCharacter, public IInteractable
{
	GENERATED_BODY()

private:
	FHitResult OutHitResult;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Line Trace")
	float LineLength;


protected:
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	FHitResult& GetTraceHitResult();
	
public:
	ACharacterBase();
	
	virtual void Tick(float DeltaSeconds) override;

	virtual void Interact_Implementation() override;
};
