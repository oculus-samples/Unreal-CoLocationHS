/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#include "CoLocationHSBPLibrary.h"
#include "OculusXRFunctionLibrary.h"
#include <Interfaces/OnlineIdentityInterface.h>
#include <OnlineSubsystemUtils.h>

FString UCoLocationHSBPLibrary::GetLocalPlayerOculusNetID()
{
	IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get("Oculus");
	if (OnlineSub == nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("No oculus OSS"));
		return "";
	}

	IOnlineIdentityPtr IdentityPtr = OnlineSub->GetIdentityInterface();
	if (!IdentityPtr.IsValid())
	{
		UE_LOG(LogTemp, Display, TEXT("No oculus identity interface"));
		return "";
	}

	FUniqueNetIdPtr idPtr = IdentityPtr->GetUniquePlayerId(0);
	if (!idPtr.IsValid())
	{
		UE_LOG(LogTemp, Display, TEXT("Player not logged in"));
		return "";
	}

	FString id = idPtr->ToString();
	UE_LOG(LogTemp, Display, TEXT("LocalPlayer - UniqueID: %s"), *id);

	return id;
}

bool UCoLocationHSBPLibrary::GetDeviceSupportsLocalMultiplayer()
{
	EOculusXRDeviceType type = UOculusXRFunctionLibrary::GetDeviceType();
	bool supported = (type == EOculusXRDeviceType::MetaQuestPro) || (type == EOculusXRDeviceType::MetaQuestProLink) || (type == EOculusXRDeviceType::OculusQuest2) || (type == EOculusXRDeviceType::Quest2_Link);

	return supported;
}
