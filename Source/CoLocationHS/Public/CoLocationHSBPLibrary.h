/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/
// clang-format off
#pragma once

#include "OculusXRAnchorTypes.h"
#include "CoLocationHSBPLibrary.generated.h"

//Helper
UCLASS()
class COLOCATIONHS_API UCoLocationHSBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/* Checks if the current device supports local multiplayer */
	UFUNCTION(BlueprintCallable, Category = "Oculus|CoLocation")
	static bool GetDeviceSupportsLocalMultiplayer();
};
// clang-format on
