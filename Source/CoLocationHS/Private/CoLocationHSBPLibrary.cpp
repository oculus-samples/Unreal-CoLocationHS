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
	EOculusXRDeviceType type = UOculusXRFunctionLibrary::GetDeviceType();
	bool supported = (type == EOculusXRDeviceType::MetaQuestPro) || (type == EOculusXRDeviceType::MetaQuestProLink) || (type == EOculusXRDeviceType::OculusQuest2) || (type == EOculusXRDeviceType::Quest2_Link) || (type == EOculusXRDeviceType::MetaQuest3) || (type == EOculusXRDeviceType::MetaQuest3Link);

	return supported;
}
