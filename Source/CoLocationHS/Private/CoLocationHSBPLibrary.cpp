/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#include "CoLocationHSBPLibrary.h"
#include "OculusXRFunctionLibrary.h"

bool UCoLocationHSBPLibrary::GetDeviceSupportsLocalMultiplayer()
{
	const EOculusXRDeviceType Type = UOculusXRFunctionLibrary::GetDeviceType();
	const bool bNotSupported = Type == EOculusXRDeviceType::Rift
		|| Type == EOculusXRDeviceType::Rift_S
		|| Type == EOculusXRDeviceType::OculusUnknown
		|| Type == EOculusXRDeviceType::OculusMobile_Deprecated0
		|| Type == EOculusXRDeviceType::OculusQuest_Deprecated
		|| Type == EOculusXRDeviceType::Quest_Link_Deprecated;
	return !bNotSupported;
}
