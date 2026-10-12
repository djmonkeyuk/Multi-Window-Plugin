#pragma once

#include "CoreMinimal.h"
#include "MultiWindowTypes.generated.h"

UENUM(BlueprintType)
enum class EBPSizingRule : uint8
{
	FixedSize,
	Autosized,
	UserSized,
};

UENUM(BlueprintType)
enum class EMultiWidgetDependencyType : uint8
{
	Engine,
	Editor,
	World,
	Object,
};