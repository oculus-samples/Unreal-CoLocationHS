/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

#ifndef OVR_PLATFORM_H
#define OVR_PLATFORM_H

#include <stdbool.h>

#include "OVR_Types.h"
#include "OVR_MessageType.h"
#include "OVR_Platform_Defs.h"
#include "OVR_LogEventName.h"
#include "OVR_LogEventParameter.h"
#include "OVR_Voip_LowLevel.h"
#include "OVR_PlatformVersion.h"

#include "OVR_AbuseReportRecording.h"
#include "OVR_AchievementDefinition.h"
#include "OVR_AchievementDefinitionArray.h"
#include "OVR_AchievementProgress.h"
#include "OVR_AchievementProgressArray.h"
#include "OVR_AchievementUpdate.h"
#include "OVR_AppDownloadProgressResult.h"
#include "OVR_AppDownloadResult.h"
#include "OVR_ApplicationInvite.h"
#include "OVR_ApplicationInviteArray.h"
#include "OVR_ApplicationVersion.h"
#include "OVR_AssetDetails.h"
#include "OVR_AssetDetailsArray.h"
#include "OVR_AssetFileDeleteResult.h"
#include "OVR_AssetFileDownloadCancelResult.h"
#include "OVR_AssetFileDownloadResult.h"
#include "OVR_AssetFileDownloadUpdate.h"
#include "OVR_AvatarEditorResult.h"
#include "OVR_BillingPlan.h"
#include "OVR_BillingPlanArray.h"
#include "OVR_BlockedUser.h"
#include "OVR_BlockedUserArray.h"
#include "OVR_Challenge.h"
#include "OVR_ChallengeArray.h"
#include "OVR_ChallengeEntry.h"
#include "OVR_ChallengeEntryArray.h"
#include "OVR_CowatchViewer.h"
#include "OVR_CowatchViewerArray.h"
#include "OVR_CowatchViewerUpdate.h"
#include "OVR_CowatchingState.h"
#include "OVR_DataStore.h"
#include "OVR_Destination.h"
#include "OVR_DestinationArray.h"
#include "OVR_Error.h"
#include "OVR_GroupPresenceJoinIntent.h"
#include "OVR_GroupPresenceLeaveIntent.h"
#include "OVR_HttpTransferUpdate.h"
#include "OVR_InstalledApplication.h"
#include "OVR_InstalledApplicationArray.h"
#include "OVR_InvitePanelResultInfo.h"
#include "OVR_LanguagePackInfo.h"
#include "OVR_LaunchBlockFlowResult.h"
#include "OVR_LaunchDetails.h"
#include "OVR_LaunchFriendRequestFlowResult.h"
#include "OVR_LaunchInvitePanelFlowResult.h"
#include "OVR_LaunchReportFlowResult.h"
#include "OVR_LaunchUnblockFlowResult.h"
#include "OVR_Leaderboard.h"
#include "OVR_LeaderboardArray.h"
#include "OVR_LeaderboardEntry.h"
#include "OVR_LeaderboardEntryArray.h"
#include "OVR_LeaderboardUpdateStatus.h"
#include "OVR_LinkedAccount.h"
#include "OVR_LinkedAccountArray.h"
#include "OVR_LivestreamingApplicationStatus.h"
#include "OVR_LivestreamingStartResult.h"
#include "OVR_LivestreamingStatus.h"
#include "OVR_LivestreamingVideoStats.h"
#include "OVR_ManagedInfo.h"
#include "OVR_Message.h"
#include "OVR_Microphone.h"
#include "OVR_MicrophoneAvailabilityState.h"
#include "OVR_NetSyncConnection.h"
#include "OVR_NetSyncSession.h"
#include "OVR_NetSyncSessionArray.h"
#include "OVR_NetSyncSessionsChangedNotification.h"
#include "OVR_NetSyncSetSessionPropertyResult.h"
#include "OVR_NetSyncVoipAttenuationValue.h"
#include "OVR_NetSyncVoipAttenuationValueArray.h"
#include "OVR_OrgScopedID.h"
#include "OVR_Packet.h"
#include "OVR_PaidOffer.h"
#include "OVR_Party.h"
#include "OVR_PartyID.h"
#include "OVR_PartyUpdateNotification.h"
#include "OVR_Pid.h"
#include "OVR_PidArray.h"
#include "OVR_PlatformInitialize.h"
#include "OVR_Price.h"
#include "OVR_Product.h"
#include "OVR_ProductArray.h"
#include "OVR_Purchase.h"
#include "OVR_PurchaseArray.h"
#include "OVR_RejoinDialogResult.h"
#include "OVR_SdkAccount.h"
#include "OVR_SdkAccountArray.h"
#include "OVR_SendInvitesResult.h"
#include "OVR_ShareMediaResult.h"
#include "OVR_SupplementaryMetric.h"
#include "OVR_SystemVoipState.h"
#include "OVR_TrialOffer.h"
#include "OVR_TrialOfferArray.h"
#include "OVR_User.h"
#include "OVR_UserAccountAgeCategory.h"
#include "OVR_UserArray.h"
#include "OVR_UserCapability.h"
#include "OVR_UserCapabilityArray.h"
#include "OVR_UserDataStoreUpdateResponse.h"
#include "OVR_UserProof.h"
#include "OVR_UserReportID.h"
#include "OVR_VoipDecoder.h"
#include "OVR_VoipEncoder.h"

#include "OVR_Requests_AbuseReport.h"
#include "OVR_Requests_Achievements.h"
#include "OVR_Requests_Application.h"
#include "OVR_Requests_ApplicationLifecycle.h"
#include "OVR_Requests_AssetFile.h"
#include "OVR_Requests_Avatar.h"
#include "OVR_Requests_Challenges.h"
#include "OVR_Requests_Cowatching.h"
#include "OVR_Requests_DeviceApplicationIntegrity.h"
#include "OVR_Requests_Entitlement.h"
#include "OVR_Requests_GroupPresence.h"
#include "OVR_Requests_IAP.h"
#include "OVR_Requests_LanguagePack.h"
#include "OVR_Requests_Leaderboard.h"
#include "OVR_Requests_Media.h"
#include "OVR_Requests_Notification.h"
#include "OVR_Requests_Party.h"
#include "OVR_Requests_RichPresence.h"
#include "OVR_Requests_User.h"
#include "OVR_Requests_UserAgeCategory.h"
#include "OVR_Requests_Voip.h"
#include "OVR_AbuseReportOptions.h"
#include "OVR_AdvancedAbuseReportOptions.h"
#include "OVR_ApplicationOptions.h"
#include "OVR_AvatarEditorOptions.h"
#include "OVR_ChallengeOptions.h"
#include "OVR_GroupPresenceOptions.h"
#include "OVR_InviteOptions.h"
#include "OVR_MultiplayerErrorOptions.h"
#include "OVR_NetSyncOptions.h"
#include "OVR_RichPresenceOptions.h"
#include "OVR_RosterOptions.h"
#include "OVR_UserOptions.h"
#include "OVR_VoipOptions.h"
#include "OVR_Functions_ApplicationLifecycle.h"
#include "OVR_Functions_Voip.h"

/// \file
/// To use the Platform SDK, you only need to include this OVR_Platform.h file 
/// because it includes other [Platform SDK headers](https://developer.oculus.com/reference/platform/latest/all_files_outline/).
/// The code example regarding how to initialize the Platform SDK, make a request and then 
/// handle the response can be found in [reference guide](https://developer.oculus.com/reference/platform/latest/).

OVRP_PUBLIC_FUNCTION(bool) ovr_IsPlatformInitialized();

#ifdef __ANDROID__
#include <jni.h>
OVRP_PUBLIC_FUNCTION(ovrPlatformInitializeResult) ovr_PlatformInitializeAndroid(const char* appId, jobject activityObject, JNIEnv * jni);
/// Same functionality as ovr_PlatformInitializeAndroid, but with additional
/// config options to pass in.
///
/// Ex:
///
/// ovrKeyValuePair options[1];
/// options[0] = ovr_InitConfigOption_CreateBool(ovrInitConfigOption_DisableP2pNetworking, true);
/// ovr_PlatformInitializeAndroidWithOptions(..., ..., options, 1);
OVRP_PUBLIC_FUNCTION(ovrPlatformInitializeResult) ovr_PlatformInitializeAndroidWithOptions(const char* appId, jobject activityObject, JNIEnv * jni, ovrKeyValuePair* configOptions, size_t numConfigOptions);
// Asynchronously Initialize Platform SDK. The result will be put on the message
// queue with the message type: ovrMessage_PlatformInitializeAndroidAsynchronous
//
// While the platform is in an initializing state, it's not fully functional.
// [Requests]: will queue up and run once platform is initialized.
//    For example: ovr_User_GetLoggedInUser() can be called immediately after
//    asynchronous init and once platform is initialized, this request will run
// [Synchronous Methods]: will return the default value;
//    For example: ovr_GetLoggedInUserID() will return 0 until platform is
//    fully initialized
OVRP_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeAndroidAsynchronous(const char* appId, jobject activityObject, JNIEnv * jni);
#endif

/// This enum describes the type of versionable structs in the Oculus Platform
/// API. Older versions of structs will not be declared here, but they will be
/// seamlessly updated for all supported older versions of the SDK.
typedef enum ovrPlatformStructureType_ {
  ovrPlatformStructureType_Unknown = 0,
  ovrPlatformStructureType_OculusInitParams = 1,
} ovrPlatformStructureType;

/// The ovrOculusInitParams struct contains parameters for initializing the Oculus Platform SDK.
/// It includes fields such as the email address and password associated with the Oculus account,
/// the ID of the application (which must be entitled), and an optional override for the URI prefix.
/// See more details [here](https://developer.oculus.com/reference/platform/latest/).
typedef struct {
  /// The type of value stored in the ovrOculusInitParams struct. Can be one of ovrPlatformStructureType: ovrPlatformStructureType_OculusInitParams or
  /// ovrPlatformStructureType_Unknown.
  ovrPlatformStructureType sType;
  /// Email address associated with Oculus account.
  /// This is the email address that is used to log in to the Oculus platform.
  const char *email;
  /// Password for the Oculus account.
  /// This is the password that is used to authenticate the user's identity on the Oculus platform.
  const char *password;
  /// ID of the application (user must be entitled).
  /// This is the unique identifier for the application that is being used to access the Oculus platform.
  /// The user must be entitled to use this application in order to successfully initialize the SDK.
  ovrID appId;
  /// Optional override for https://graph.oculus.com.
  /// This field allows you to specify a custom URI prefix for the Oculus platform API.
  /// If not provided, the default value of https://graph.oculus.com will be used.
  const char *uriPrefixOverride;
} ovrOculusInitParams;

typedef enum ovrInitConfigOption_ {
  /// Disables the initialization of the WebRTC networking stack, when you don't
  /// need to use any of the ovr_Voip_* or ovr_Net_* functions.
  ///
  /// valid options are true and false
  ovrInitConfigOption_DisableP2pNetworking = 0x1CDE5DDE,
  /// Enables the initialization of cowatching stack to use ovr_Cowatching_*
  /// functions.
  ///
  /// valid options are true and false
  ovrInitConfigOption_EnableCowatching = 0x7DD1C46E,
} ovrInitConfigOption;

OVRPL_PUBLIC_FUNCTION(ovrKeyValuePair) ovr_InitConfigOption_CreateBool(ovrInitConfigOption config, bool value);
OVRPL_PUBLIC_FUNCTION(const char*) ovrInitConfigOption_toString(ovrInitConfigOption configOption);

#ifdef __ANDROID__ //Needed for compatibility. 1.13 introduced this method

/// Initializes the SDK in Standalone mode and doesn't try to connect to a locally running Oculus
/// Service process.  Not all functionality will work when when the SDK is initialized this
/// way.  In particular: IAP, Cloud Storage, Parties, Events, Live Streaming.
/// Listen for the message ovrMessage_Platform_InitializeStandaloneOculus to detect when
/// the platform has finished initializing.
/// \param params non-nullptr to a struct with the required Oculus Authentication data.
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_Platform_InitializeStandaloneOculus(
  const ovrOculusInitParams *params);
#else
#if defined(OVRPL_DISABLED)

/// Initializes the SDK in Standalone mode and doesn't try to connect to a locally running Oculus
/// Service process.  Not all functionality will work when when the SDK is initialized this
/// way.  In particular: IAP, Cloud Storage, Parties, Events, Live Streaming.
/// Listen for the message ovrMessage_Platform_InitializeStandaloneOculus to detect when
/// the platform has finished initializing.
/// \param params non-nullptr to a struct with the required Oculus Authentication data.
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_Platform_InitializeStandaloneOculus(
  const ovrOculusInitParams *params);

/// (BETA) For use on platforms where the Oculus service isn't running.
/// You'll need to know how to get an access token for the user to use this.
/// While the platform is in an initializing state, it's not fully functional.
/// [Requests]: will queue up and run once platform is initialized.
///    For example: ovr_User_GetLoggedInUser() can be called immediately after
///    asynchronous init and once platform is initialized, this request will run
/// [Synchronous Methods]: will return the default value;
///    For example: ovr_GetLoggedInUserID() will return 0 until platform is
///    fully initialized
///
/// Not all functionality will work when when the SDK is initialized this
/// way.  In particular: In-App Purchases, Cloud Storage, Parties, Events, Live Streaming
/// will not work.
/// Listen for the message ovrMessage_PlatformInitializeWithAccessToken to detect when
/// the platform has finished initializing.
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWithAccessToken(
  ovrID appId,
  const char *serviceAccessToken);

/// (BETA) For use on platforms where the Oculus service isn't running.
/// Same functionality as ovr_PlatformInitializeWithAccessToken, but with additional
/// config options to pass in.
///
/// Ex:
///
/// ovrKeyValuePair options[1];
/// options[0] = ovr_InitConfigOption_CreateBool(ovrInitConfigOption_DisableP2pNetworking, true);
/// ovr_PlatformInitializeWithAccessTokenAndOptions(..., ..., options, 1);
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWithAccessTokenAndOptions(
  ovrID appId,
  const char *serviceAccessToken,
  ovrKeyValuePair* configOptions,
  size_t numConfigOptions);

/// Performs the initialization of the platform for use on Windows. Requires your app
/// ID (not access token). This call may fail for a variety of reasons, and will return
/// an error code in that case. It is critical to respect this error code and either
/// exit or make no further platform calls.
OVRPL_PUBLIC_FUNCTION(ovrPlatformInitializeResult) ovr_PlatformInitializeWindows(const char* appId);

// Asynchronously Initialize Platform SDK. The result will be put on the message
// queue with the message type: ovrMessage_PlatformInitializeWindowsAsynchronous
//
// While the platform is in an initializing state, it's not fully functional.
// [Requests]: will queue up and run once platform is initialized.
//    For example: ovr_User_GetLoggedInUser() can be called immediately after
//    asynchronous init and once platform is initialized, this request will run
// [Synchronous Methods]: will return the default value;
//    For example: ovr_GetLoggedInUserID() will return 0 until platform is
//    fully initialized
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWindowsAsynchronous(const char* appId);
#else

/// Initializes the SDK in Standalone mode and doesn't try to connect to a locally running Oculus
/// Service process.  Not all functionality will work when when the SDK is initialized this
/// way.  In particular: IAP, Cloud Storage, Parties, Events, Live Streaming.
/// Listen for the message ovrMessage_Platform_InitializeStandaloneOculus to detect when
/// the platform has finished initializing.
/// \param params non-nullptr to a struct with the required Oculus Authentication data.
/// \param outResult will contain the result of attempting to load the DLL.
/// \param productVersion The product version of the app. This is used to ensure that the version
/// \param majorVersion The major version of the app. This is used to ensure that the version
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_Platform_InitializeStandaloneOculusEx(
  const ovrOculusInitParams *params, ovrPlatformInitializeResult *outResult, int productVersion, int majorVersion);

/// Wrapper for ovr_Platform_InitializeStandaloneOculusEx that automatically passes the key
/// version information as defined in this header package. This is used to ensure that the
/// version in your headers matches the version of the static library.
#define ovr_Platform_InitializeStandaloneOculus(params, outResult) ovr_Platform_InitializeStandaloneOculusEx(params, outResult, PLATFORM_PRODUCT_VERSION, PLATFORM_MAJOR_VERSION)

/// (BETA) For use on platforms where the Oculus service isn't running.
/// You'll need to know how to get an access token for the user to use this.
/// While the platform is in an initializing state, it's not fully functional.
/// [Requests]: will queue up and run once platform is initialized.
///    For example: ovr_User_GetLoggedInUser() can be called immediately after
///    asynchronous init and once platform is initialized, this request will run
/// [Synchronous Methods]: will return the default value;
///    For example: ovr_GetLoggedInUserID() will return 0 until platform is
///    fully initialized
///
/// outResult will contain the result of attempting to load the DLL.
/// If that fails, the returning ovrRequest will be 0.
///
/// NOTE: Just because the DLL is loaded successfully does NOT mean that the
/// initialization was successful.
/// Listen for the message ovrMessage_PlatformInitializeWithAccessToken to detect when
/// the platform has finished initializing.
///
/// Not all functionality will work when when the SDK is initialized this
/// way.  In particular: In-App Purchases, Cloud Storage, Parties, Events, Live Streaming
/// will not work.

OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWithAccessTokenEx(
  ovrID appId,
  const char *serviceAccessToken,
  ovrPlatformInitializeResult *outResult,
  int productVersion,
  int majorVersion);

#define ovr_PlatformInitializeWithAccessToken(appId, serviceAccessToken, outResult) \
  ovr_PlatformInitializeWithAccessTokenEx(appId, serviceAccessToken, outResult, \
  PLATFORM_PRODUCT_VERSION, PLATFORM_MAJOR_VERSION)

/// Performs the initialization of the platform for use on Windows. Requires your app
/// ID (not access token). This call may fail for a variety of reasons, and will return
/// an error code in that case. It is critical to respect this error code and either
/// exit or make no further platform calls.
OVRPL_PUBLIC_FUNCTION(ovrPlatformInitializeResult) ovr_PlatformInitializeWindowsEx(const char* appId, int productVersion, int majorVersion);

/// Wrapper for ovr_PlatformInitializeWindowsEx that automatically passes the key version
/// information as defined in this header package. This is used to ensure that the version
/// in your headers matches the version of the static library.
#define ovr_PlatformInitializeWindows(appId) ovr_PlatformInitializeWindowsEx((appId), PLATFORM_PRODUCT_VERSION, PLATFORM_MAJOR_VERSION)


/// Performs the initialization of the platform for use on Windows. Requires your app
/// ID (not access token). This call may fail for a variety of reasons, and will return
/// an error code in that case. It is critical to respect this error code and either
/// exit or make no further platform calls.
///
/// outResult will contain the result of attempting to load the DLL.
/// If that fails, the returning ovrRequest will be 0.
///
/// NOTE: Just because the DLL is loaded successfully does NOT mean that the
/// initialization was successful, you still need to check the message queue
/// for the result in ovrMessage_PlatformInitializeWindowsAsynchronous
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWindowsAsynchronousEx(const char* appId, ovrPlatformInitializeResult *outResult, int productVersion, int majorVersion);

/// Wrapper for ovr_PlatformInitializeWindowsAsynchronousEx that automatically passes the key version
/// information as defined in this header package. This is used to ensure that the version
/// in your headers matches the version of the static library.
///
/// outResult will contain the result of attempting to load the DLL.
/// If that fails, the returning ovrRequest will be 0.
///
/// NOTE: Just because the DLL is loaded successfully does NOT mean that the
/// initialization was successful, you still need to check the message queue
/// for the result in ovrMessage_PlatformInitializeWindowsAsynchronous
#define ovr_PlatformInitializeWindowsAsynchronous(appId, outResult) ovr_PlatformInitializeWindowsAsynchronousEx(appId, outResult, PLATFORM_PRODUCT_VERSION, PLATFORM_MAJOR_VERSION)
#endif
#endif //Android

/// Returns the id of the currently logged in user, or a 0 id if there
/// is none.
OVRP_PUBLIC_FUNCTION(ovrID) ovr_GetLoggedInUserID();

/// Returns the currently logged-in user's locale as a string, or empty string on error.
/// Return value format conforms to BCP47: https://tools.ietf.org/html/bcp47
/// The return value is borrowed, and should not be freed
OVRP_PUBLIC_FUNCTION(const char*) ovr_GetLoggedInUserLocale();


/// Return the next message in the queue (FIFO order), or null if none
/// is available.  Safe to call on any thread.  Each returned message
/// should eventually be freed with ovr_FreeMessage.
///
/// TODO: comment on whether it's safe to process messages out of
/// order.
OVRPL_PUBLIC_FUNCTION(ovrMessageHandle) ovr_PopMessage();

OVRP_PUBLIC_FUNCTION(void) ovr_FreeMessage(ovrMessageHandle);

OVRP_PUBLIC_FUNCTION(void) ovr_SetDeveloperAccessToken(const char *accessToken);

#endif
