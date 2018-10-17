// Copyright 2018 Directive Games Limited - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ZeusCharacter.h"
#include "AIModule/Classes/GenericTeamAgentInterface.h"
#include "SampleMonster.generated.h"

/**
 * 
 */
UCLASS()
class ZEUSSAMPLE_API ASampleMonster : public AZeusCharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	
public:
	FGenericTeamId GetGenericTeamId() const override;
};
