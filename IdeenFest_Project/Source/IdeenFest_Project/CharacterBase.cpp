
#include "CharacterBase.h"

ACharacterBase::ACharacterBase()
{
	LineLength = 500.0f;
}

void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind interact events
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ACharacterBase::Interact_Implementation);
}

void ACharacterBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	IInteractable* HitActor = Cast<IInteractable>(GetTraceHitResult().GetActor());
	if(HitActor)
	{
		HitActor->ShowInteractText();
	}
}

FHitResult& ACharacterBase::GetTraceHitResult()
{
	FVector EndLocation = GetActorRotation().Vector() * LineLength;
	GetWorld()->LineTraceSingleByChannel(OutHitResult, GetActorLocation(), EndLocation, ECollisionChannel::ECC_WorldDynamic);

	return OutHitResult;
}

void ACharacterBase::Interact_Implementation()
{
	IInteractable* HitActor = Cast<IInteractable>(GetTraceHitResult().GetActor());
	if(HitActor)
	{
		HitActor->Interact();
	}
}