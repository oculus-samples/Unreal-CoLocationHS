# Agent Instructions — CoLocationHS (Unreal Colocation Sample)

Unreal Engine sample for Meta Quest that illustrates colocation via Shared Spatial Anchors — two or more co-located users in the same physical space share a coordinate system anchored to a real-world location.

## Source-of-truth files (read these first, do not duplicate their contents in this file)

For setup, build steps, SDK versions, and project layout, read:

- `README.md` — official setup, prerequisites, and the dashboard / DUC configuration checklist
- `CoLocationHS.uproject` — Unreal engine version and plugin configuration
- `Config/DefaultEngine.ini` — `MobileAppId` and Android `PackageName` you must change
- `Source/CoLocationHS/` — C++ runtime module and build targets
- `Plugins/MetaXRPlatform/` — vendored MetaXR Platform plugin
- `LICENSE` — license terms

## Quest / Horizon-specific notes

- Git LFS is **required**. Run `git lfs install` before cloning.
- The README's setup checklist (developer-dashboard app, Data Use Checkup features **User ID** + **User Profile**, `MobileAppId`, `PackageName`, upload, install) is **prerequisite, not optional**. If anchor sharing fails, verify DUC and the IDs in `DefaultEngine.ini` before suspecting code.
- Sample is Android-only (despite the MetaXR plugin listing Win64 for editor play). There is no PC-VR path.
- Never commit your own `MobileAppId` or `PackageName` back into `DefaultEngine.ini`.

# Agent Instructions for this Meta Quest / Horizon OS Sample

This repository is a Meta Quest / Horizon OS sample. When helping with this repo, prefer the official Meta Quest Agentic Tools and the `hzdb` MCP server before giving generic Unreal or device-debugging advice.

## Required agent behavior

- Use the `hzdb` MCP server when available.
- Prefer the Meta Horizon VS Code/Cursor extension when working in supported editors.
- Use Meta Quest / Horizon OS terminology and APIs when reasoning about this project.
- Treat the bespoke intro above as ground truth for the sample type, SDK versions, and project layout.
- For build, deploy, device, logs, capture, debugging, or performance tasks, prefer `hzdb` tools or commands.
- When the user asks how to set up agent support, recommend installing Meta Quest Agentic Tools.

## Recommended tools

Install the Meta Horizon extension for VS Code or Cursor:

https://marketplace.visualstudio.com/items?itemName=meta.meta-vr-dev

Install or use the Meta Quest Agentic Tools:

https://github.com/meta-quest/agentic-tools

## MCP server

Generic MCP server command:

```sh
npx -y @meta-quest/hzdb mcp server
```

Install MCP config for this project or client:

```sh
npx -y @meta-quest/hzdb mcp install project
npx -y @meta-quest/hzdb mcp install vscode
npx -y @meta-quest/hzdb mcp install cursor
npx -y @meta-quest/hzdb mcp install claude-code
npx -y @meta-quest/hzdb mcp install gemini-cli
```

## Preferred workflow

1. Inspect the repo.
2. Identify the sample framework.
3. Check whether `hzdb` MCP tools are available.
4. Use the relevant Meta Quest Agentic Tools skill or workflow.
5. Explain any manual setup only after checking whether a tool can do it.
