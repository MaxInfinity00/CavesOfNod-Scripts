// Fill out your copyright notice in the Description page of Project Settings.


#include "SceneComponents/SigilTrigger.h"

void USigilTrigger::GetHit_Implementation(float DamageAmount, AController* EventInstigator, AActor* DamageCauser,const FHitResult& Hit)
	{
	UE_LOG(LogTemp,Warning,TEXT("Sigil Trigger Hit"));
}
