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
	const bool bSupported = (Type == EOculusXRDeviceType::MetaQuestPro) || (Type == EOculusXRDeviceType::MetaQuestProLink) || (Type == EOculusXRDeviceType::OculusQuest2) || (Type == EOculusXRDeviceType::Quest2_Link) || (Type == EOculusXRDeviceType::MetaQuest3) || (Type == EOculusXRDeviceType::MetaQuest3Link) || (Type == EOculusXRDeviceType::MetaQuest3S) || (Type == EOculusXRDeviceType::MetaQuest3SLink);

	return bSupported;
}
