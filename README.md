# CoLocationHS Sample


## How to Use

### Prerequisites

You must follow the [prerequisites steps described in here](https://developers.meta.com/horizon/documentation/unreal/unreal-spatial-anchors-sharing#prerequisites) otherwise anchor sharing will not work. Be prepared to spend at least a few hours going through these steps as they are not trivial. Here is a checklist of steps you need to take:

1. Create an organisation on the Meta Quest developer dashboard (if you don't have one already)
2. Create an application in your organisation to host this sample
3. Add User ID and User Profile platform features to your application in Data Use Checkup
4. Create test users to avoid waiting for Data Use Checkup review (optional)
5. Change `[OnlineSubsystemOculus]` > `MobileAppId` in `DefaultEngine.ini` of this sample to match the ID of your app in the developer dashboard
6. Change `[/Script/AndroidRuntimeSettings.AndroidRuntimeSettings]` > `PackageName` in `DefaultEngine.ini` of this sample to a unique name, for example `com.<yourorg>.UnrealCoLocationHS`
7. [Configure your app to upload to the Meta Quest developer dashboard](https://developers.meta.com/horizon/documentation/unreal/unreal-platform-tool) and upload it
8. Login to your Quest devices with the test users you created earlier (optional)
9. Download and install the sample app through the Meta Quest store

### Load the project

First, ensure you have Git LFS installed by running this command:
```sh
git lfs install
```

Then, clone this repo using the "Code" button above, or this command:
```sh
git clone https://github.com/oculus-samples/Unreal-CoLocationHS
```

### Launch the project in the Unreal Editor using one of the following options.

#### Epic Games Launcher with MetaXR plugin

The easiest way to get started is to use the prebuilt Unreal Engine from the Epic Games Launcher, with MetaXR plugin.

1. Install the [Epic Games Launcher](https://www.epicgames.com/store/en-US/download)
2. In the launcher, install UE5 (recommended).
3. Download and install the MetaXR plugin from the [Unreal Engine 5 Integration download page](https://developer.oculus.com/downloads/package/unreal-engine-5-integration).
4. Launch the Unreal Editor
5. From "Recent Projects", click "Browse" and select `CoLocationHS.uproject`

#### Meta fork of Epic’s Unreal Engine

The Meta fork of Epic’s Unreal Engine will give you the most up to date integration of Oculus features. However, you must build the editor from its source.

Follow the instructions on [Accessing Unreal Engine source code on GitHub](https://www.unrealengine.com/en-US/ue-on-github) to obtain:
- an Epic account
- a GitHub account
- authorization to access the Unreal Engine source repository
Disregard instructions on downloading Epic’s Unreal Engine source code as you will be building the Meta fork of Epic’s Unreal Engine source.

Make sure you have Visual Studio installed properly:
- Launch the Visual Studio Installer and click Modify for the Visual Studio version you want to use.
- Under the Workloads tab, click Game development with C++ if it isn’t checked and then click Modify.

1. Download the source code from the [Meta fork of Epic’s Unreal Engine on GitHub](https://github.com/Oculus-VR/UnrealEngine).
2. Open a command prompt in the root of the Unreal, then run this command:
```sh
.\GenerateProjectFiles.bat -Game CoLocationHS -Engine <full path to Unreal-CoLocationHS directory>\CoLocationHS.uproject
```
3. Open the `CoLocationHS.sln` file that has been generated in the `Unreal-CoLocationHS` directory.
4. Set `CoLocationHS` as the start-up project and `Development Editor` as the configuration.
5. Hit `F5` to build and debug the project (and the engine).
    - Depending on your machine, the build may take awhile to complete.

# Licenses
The Meta License applies to the SDK and supporting material. The MIT License applies to only certain, clearly marked documents. If an individual file does not indicate which license it is subject to, then the Meta License applies.
