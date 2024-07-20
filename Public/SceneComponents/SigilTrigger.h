#pragma once

#include "CoreMinimal.h"
#include "Interface/Hittable.h"
#include "Components/BoxComponent.h"
#include "SigilTrigger.generated.h"

/**
 * 
 */
UCLASS()
class GP3TEAM11_API USigilTrigger : public UBoxComponent, public IHittable
{
	GENERATED_BODY()
	
public:
	virtual void GetHit_Implementation(float DamageAmount, AController* EventInstigator, AActor* DamageCauser,const FHitResult& Hit) override;

};
