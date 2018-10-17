// Copyright 2018 Directive Games Limited - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ZeusVRCharacter.h"
#include "AIModule/Classes/GenericTeamAgentInterface.h"
#include "VRSampleCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ZEUSSAMPLE_API AVRSampleCharacter : public AZeusVRCharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	
public:
	FGenericTeamId GetGenericTeamId() const override;
};
