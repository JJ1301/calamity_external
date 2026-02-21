#pragma once
#include <cstdint>

// clang-format off
namespace offsets {
    inline constexpr const char* roblox_version = "version-df7528517c6849f7";

    namespace AnimationTrack {
        inline constexpr uintptr_t Animation = 0xd0;
        inline constexpr uintptr_t Animator = 0x118;
        inline constexpr uintptr_t IsPlaying = 0x5a8;
        inline constexpr uintptr_t Looped = 0xf5;
        inline constexpr uintptr_t Speed = 0xe4;
    }

    namespace Animator {
        inline constexpr uintptr_t ActiveAnimations = 0x648;
    }

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xD0;
        inline constexpr uintptr_t Decay = 0xDC;
        inline constexpr uintptr_t Density = 0xE8;
        inline constexpr uintptr_t Glare = 0xEC;
        inline constexpr uintptr_t Haze = 0xF0;
        inline constexpr uintptr_t Offset = 0xF4;
    }

    namespace Attachment {
        inline constexpr uintptr_t Position = 0xdc;
    }

    namespace BasePart {
        inline constexpr uintptr_t CastShadow = 0xF5;
        inline constexpr uintptr_t Color3 = 0x194;
        inline constexpr uintptr_t Locked = 0xF6;
        inline constexpr uintptr_t Massless = 0xF7;
        inline constexpr uintptr_t Primitive = 0x148;
        inline constexpr uintptr_t Reflectance = 0xEC;
        inline constexpr uintptr_t Shape = 0x1B1;
        inline constexpr uintptr_t Transparency = 0xF0;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Enabled = 0xc8;
        inline constexpr uintptr_t Intensity = 0xD0;
        inline constexpr uintptr_t Size = 0xD4;
        inline constexpr uintptr_t Threshold = 0xD8;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x20;
    }

    namespace Camera {
        inline constexpr uintptr_t CameraMode = 0x158;
        inline constexpr uintptr_t CameraSubject = 0xe8;
        inline constexpr uintptr_t CFrame = 0xF8;
        inline constexpr uintptr_t FieldOfView = 0x160;
        inline constexpr uintptr_t Position = 0x11C;
        inline constexpr uintptr_t Rotation = 0xF8;
        inline constexpr uintptr_t Viewport = 0x2ac;
        inline constexpr uintptr_t ViewportInt16 = 0x2AC;
        inline constexpr uintptr_t ViewportSize = 0x2E8;
    }

    namespace CharacterMesh {
        inline constexpr uintptr_t BaseTextureId = 0x0;
        inline constexpr uintptr_t BodyPart = 0x160;
        inline constexpr uintptr_t MeshId = 0x0;
        inline constexpr uintptr_t OverlayTextureId = 0x0;
    }

    namespace ClickDetector {
        inline constexpr uintptr_t MaxActivationDistance = 0x100;
        inline constexpr uintptr_t MouseIcon = 0xe0;
    }

    namespace Clothing {
        inline constexpr uintptr_t Color3 = 0x128;
        inline constexpr uintptr_t Template = 0x108;
    }

    namespace ColorCorrectionEffect {
        inline constexpr uintptr_t Brightness = 0xdc;
        inline constexpr uintptr_t Contrast = 0xe0;
        inline constexpr uintptr_t Enabled = 0xc8;
        inline constexpr uintptr_t TintColor = 0xd0;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x188;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t GameLoaded = 0x5F8;
        inline constexpr uintptr_t JobId = 0x138;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t PlaceVersion = 0x1b4;
        inline constexpr uintptr_t PrimitiveCount = 0x438;
        inline constexpr uintptr_t ScriptContext = 0x3f0;
        inline constexpr uintptr_t ServerIP = 0x5E0;
        inline constexpr uintptr_t Workspace = 0x178;
    }

    namespace DepthOfFieldEffect {
        inline constexpr uintptr_t Enabled = 0xc8;
        inline constexpr uintptr_t FarIntensity = 0xd0;
        inline constexpr uintptr_t FocusDistance = 0xd4;
        inline constexpr uintptr_t InFocusRadius = 0xd8;
        inline constexpr uintptr_t NearIntensity = 0xdc;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x7E35858;
        inline constexpr uintptr_t RealDataModel = 0x1C0;
    }

    namespace GuiBase2D {
        inline constexpr uintptr_t AbsolutePosition = 0x10C; // From list 2, list 1 says 0x110
        inline constexpr uintptr_t AbsoluteRotation = 0x188;
        inline constexpr uintptr_t AbsoluteSize = 0x118;
    }

    namespace GuiObject {
        inline constexpr uintptr_t Active = 0x5AC;
        inline constexpr uintptr_t AnchorPoint = 0x560;
        inline constexpr uintptr_t AutomaticSize = 0x568;
        inline constexpr uintptr_t BackgroundColor3 = 0x548;
        inline constexpr uintptr_t BackgroundTransparency = 0x56C; // List 2 says 56C, List 1 says 554
        inline constexpr uintptr_t BorderColor3 = 0x554;
        inline constexpr uintptr_t BorderMode = 0x570;
        inline constexpr uintptr_t BorderSizePixel = 0x574;
        inline constexpr uintptr_t ClipsDescendants = 0x5AD;
        inline constexpr uintptr_t GuiState = 0x580;
        inline constexpr uintptr_t Image = 0xa00;
        inline constexpr uintptr_t Interactable = 0x5AF;
        inline constexpr uintptr_t LayoutOrder = 0x584;
        inline constexpr uintptr_t Position = 0x518;
        inline constexpr uintptr_t RichText = 0xaa8;
        inline constexpr uintptr_t Rotation = 0x188;
        inline constexpr uintptr_t ScreenGui_Enabled = 0x4cc;
        inline constexpr uintptr_t Selectable = 0x5B0;
        inline constexpr uintptr_t SelectionOrder = 0x5A0;
        inline constexpr uintptr_t Size = 0x538;
        inline constexpr uintptr_t SizeConstraint = 0x5A4;
        inline constexpr uintptr_t Text = 0xe08;
        inline constexpr uintptr_t TextColor3 = 0xeb8;
        inline constexpr uintptr_t Visible = 0x5B1;
        inline constexpr uintptr_t ZIndex = 0x5A8; // List 2
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJumpEnabled = 0x1D8;
        inline constexpr uintptr_t AutoRotate = 0x1D9;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1DA;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1DB;
        inline constexpr uintptr_t CameraOffset = 0x140;
        inline constexpr uintptr_t DisplayDistanceType = 0x18C;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1DC;
        inline constexpr uintptr_t FloorMaterial = 0x190;
        inline constexpr uintptr_t Health = 0x194;
        inline constexpr uintptr_t HealthDisplayDistance = 0x198;
        inline constexpr uintptr_t HealthDisplayType = 0x19C;
        inline constexpr uintptr_t HipHeight = 0x1A0;
        inline constexpr uintptr_t HumanoidState = 0x8d8;
        inline constexpr uintptr_t HumanoidStateID = 0x20;
        inline constexpr uintptr_t IsWalking = 0x956;
        inline constexpr uintptr_t Jump = 0x1dd;
        inline constexpr uintptr_t JumpHeight = 0x1AC;
        inline constexpr uintptr_t JumpPower = 0x1B0;
        inline constexpr uintptr_t MaxHealth = 0x1B4;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1B8;
        inline constexpr uintptr_t MoveDirection = 0x0;
        inline constexpr uintptr_t MoveToPart = 0x130;
        inline constexpr uintptr_t MoveToPoint = 0x17c;
        inline constexpr uintptr_t NameDisplayDistance = 0x1BC;
        inline constexpr uintptr_t NameOcclusion = 0x1C0;
        inline constexpr uintptr_t RequiresNeck = 0x1E0;
        inline constexpr uintptr_t RigType = 0x1C8;
        inline constexpr uintptr_t Sit = 0x1E1;
        inline constexpr uintptr_t TargetPoint = 0x164;
        inline constexpr uintptr_t UseJumpPower = 0x1E3;
        inline constexpr uintptr_t WalkSpeed = 0x1D4;
        inline constexpr uintptr_t WalkSpeedCheck = 0x3C0;
        inline constexpr uintptr_t WalkToPoint = 0x17C;
    }

    namespace InputObject {
        inline constexpr uintptr_t MousePosition = 0xEC;
    }

    namespace Instance {
        inline constexpr uintptr_t AttributeContainer = 0x48;
        inline constexpr uintptr_t AttributeList = 0x18;
        inline constexpr uintptr_t AttributeToNext = 0x58;
        inline constexpr uintptr_t AttributeToValue = 0x18;
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x70;
        inline constexpr uintptr_t ClassBase = 0xcf0;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t Name = 0xB0;
        inline constexpr uintptr_t Parent = 0x68;
        inline constexpr uintptr_t This = 0x8;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xD8;
        inline constexpr uintptr_t Atmosphere = 0x1E8;
        inline constexpr uintptr_t Brightness = 0x120;
        inline constexpr uintptr_t ClockTime = 0x1B8;
        inline constexpr uintptr_t ColorShift_Bottom = 0xE4;
        inline constexpr uintptr_t ColorShift_Top = 0xF0;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x124;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x128;
        inline constexpr uintptr_t ExposureCompensation = 0x12c;
        inline constexpr uintptr_t FogColor = 0xfc;
        inline constexpr uintptr_t FogEnd = 0x134;
        inline constexpr uintptr_t FogStart = 0x138;
        inline constexpr uintptr_t GeographicLatitude = 0x190;
        inline constexpr uintptr_t GradientBottom = 0x194;
        inline constexpr uintptr_t GradientTop = 0x150;
        inline constexpr uintptr_t LightColor = 0x15c;
        inline constexpr uintptr_t LightDirection = 0x168;
        inline constexpr uintptr_t MoonPosition = 0x184;
        inline constexpr uintptr_t OutdoorAmbient = 0x108;
        inline constexpr uintptr_t Sky = 0x1D8;
        inline constexpr uintptr_t Source = 0x174;
        inline constexpr uintptr_t SunPosition = 0x178;
    }

    namespace LocalScript {
        inline constexpr uintptr_t Bytecode = 0x1A8; // List 2 (1A8), List 1 (1A8)
        inline constexpr uintptr_t GUID = 0xe8;
        inline constexpr uintptr_t Hash = 0xE8; // List 2 (E8), List 1 (Hash 1b8?) List 1 says Hash 1b8
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x30;
        inline constexpr uintptr_t Basalt = 0x27;
        inline constexpr uintptr_t Brick = 0xF;
        inline constexpr uintptr_t Cobblestone = 0x33;
        inline constexpr uintptr_t Concrete = 0xC;
        inline constexpr uintptr_t CrackedLava = 0x2D;
        inline constexpr uintptr_t Glacier = 0x1B;
        inline constexpr uintptr_t Grass = 0x6;
        inline constexpr uintptr_t Ground = 0x2A;
        inline constexpr uintptr_t Ice = 0x36;
        inline constexpr uintptr_t LeafyGrass = 0x39;
        inline constexpr uintptr_t Limestone = 0x3F;
        inline constexpr uintptr_t Mud = 0x24;
        inline constexpr uintptr_t Pavement = 0x42;
        inline constexpr uintptr_t Rock = 0x18;
        inline constexpr uintptr_t Salt = 0x3C;
        inline constexpr uintptr_t Sand = 0x12;
        inline constexpr uintptr_t Sandstone = 0x21;
        inline constexpr uintptr_t Slate = 0x9;
        inline constexpr uintptr_t Snow = 0x1E;
        inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MeshPart {
        inline constexpr uintptr_t MeshId = 0x2E8;
        inline constexpr uintptr_t TextureId = 0x318;
        inline constexpr uintptr_t Texture = 0x318;
    }

    namespace Misc {
         inline constexpr uintptr_t Adornee = 0x108;
         inline constexpr uintptr_t AnimationId = 0xd0;
         inline constexpr uintptr_t StringLength = 0x10;
         inline constexpr uintptr_t Value = 0xd0;
    }

    namespace Model {
         inline constexpr uintptr_t PrimaryPart = 0x278;
         inline constexpr uintptr_t Scale = 0x164;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t Bytecode = 0x150;
        inline constexpr uintptr_t GUID = 0xe8;
        inline constexpr uintptr_t Hash = 0xE8;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0x110;
        inline constexpr uintptr_t MousePosition = 0xec;
        inline constexpr uintptr_t SensitivityPointer = 0x7ebd660;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x30C;
        inline constexpr uintptr_t CameraMode = 0x318;
        inline constexpr uintptr_t Character = 0x380;
        inline constexpr uintptr_t Country = 0x110;
        inline constexpr uintptr_t DisplayName = 0x130;
        inline constexpr uintptr_t Gender = 0x0;
        inline constexpr uintptr_t HealthDisplayDistance = 0x338;
        inline constexpr uintptr_t LocaleId = 0x6B8;
        inline constexpr uintptr_t LocalPlayer = 0x130;
        inline constexpr uintptr_t MaxZoomDistance = 0x310;
        inline constexpr uintptr_t MinZoomDistance = 0x314;
        inline constexpr uintptr_t ModelInstance = 0x380;
        inline constexpr uintptr_t Mouse = 0xf78; // Essential from List 1
        inline constexpr uintptr_t NameDisplayDistance = 0x344;
        inline constexpr uintptr_t Team = 0x290;
        inline constexpr uintptr_t TeamColor = 0x350;
        inline constexpr uintptr_t UserId = 0x2B8;
    }

    namespace PlayerConfigurer {
         inline constexpr uintptr_t Pointer = 0x7e12fd0;
    }

    namespace PlayerMouse {
        inline constexpr uintptr_t Icon = 0xe0;
        inline constexpr uintptr_t Workspace = 0x168;
    }

    namespace Players {
        inline constexpr uintptr_t LocalPlayer = 0x130;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0xFC;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xF0;
        inline constexpr uintptr_t CFrame = 0xC0;
        inline constexpr uintptr_t Flags = 0x1ae;
        inline constexpr uintptr_t Material = 0x246; // List 2: 246. List 1: 248. List 2 usually better? I'll stick with List 2 if confused, but actually List 1 says 248. Let's trust List 2 as it's cleaner. Wait, List 2 matches PrimitiveFlags.
        inline constexpr uintptr_t Orientation = 0xC0;
        inline constexpr uintptr_t Owner = 0x210;
        inline constexpr uintptr_t Position = 0xE4;
        inline constexpr uintptr_t PrimitiveFlags = 0x1AE;
        inline constexpr uintptr_t Rotation = 0xC0;
        inline constexpr uintptr_t Size = 0x1B0;
        inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
        inline constexpr uintptr_t CanCollide = 0x8;
        inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0xD0;
        inline constexpr uintptr_t Enabled = 0x156;
        inline constexpr uintptr_t GamepadKeyCode = 0x13c;
        inline constexpr uintptr_t HoldDuration = 0x140;
        inline constexpr uintptr_t KeyboardKeyCode = 0x144;
        inline constexpr uintptr_t KeyCode = 0x144;
        inline constexpr uintptr_t MaxActivationDistance = 0x148;
        inline constexpr uintptr_t ObjectText = 0xF0;
        inline constexpr uintptr_t RequiresLineOfSight = 0x157;
    }

    namespace RenderView {
        inline constexpr uintptr_t DeviceD3D11 = 0x8;
        inline constexpr uintptr_t LightingValid = 0x148;
        inline constexpr uintptr_t SkyValid = 0x2cd;
        inline constexpr uintptr_t SkyboxValid = 0x28D; // List 2
        inline constexpr uintptr_t VisualEngine = 0x10;
    }

    namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0xb8;
         inline constexpr uintptr_t HeartbeatTask = 0xe8;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonAngularSize = 0x25C;
        inline constexpr uintptr_t MoonTextureId = 0xE0;
        inline constexpr uintptr_t SkyboxBk = 0x110;
        inline constexpr uintptr_t SkyboxDn = 0x140;
        inline constexpr uintptr_t SkyboxFt = 0x170;
        inline constexpr uintptr_t SkyboxLf = 0x1A0;
        inline constexpr uintptr_t SkyboxOrientation = 0x250;
        inline constexpr uintptr_t SkyboxRt = 0x1D0;
        inline constexpr uintptr_t SkyboxUp = 0x200;
        inline constexpr uintptr_t StarCount = 0x260;
        inline constexpr uintptr_t SunAngularSize = 0x264;
        inline constexpr uintptr_t SunTextureId = 0x230;
    }

    namespace Sound {
         inline constexpr uintptr_t Looped = 0x152;
         inline constexpr uintptr_t PlaybackSpeed = 0x130;
         inline constexpr uintptr_t RollOffMaxDistance = 0x134;
         inline constexpr uintptr_t RollOffMinDistance = 0x138;
         inline constexpr uintptr_t SoundGroup = 0x100;
         inline constexpr uintptr_t SoundId = 0xe0;
         inline constexpr uintptr_t Volume = 0x144;
    }

    namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x45;
         inline constexpr uintptr_t Enabled = 0x1f9;
         inline constexpr uintptr_t ForcefieldDuration = 0x1f0;
         inline constexpr uintptr_t Neutral = 0x1fa;
         inline constexpr uintptr_t TeamColor = 0x1f4;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t MeshId = 0x108;
        inline constexpr uintptr_t Offset = 0xD0;
        inline constexpr uintptr_t Scale = 0xDC;
        inline constexpr uintptr_t TextureId = 0x130;
    }

    namespace StatsItem {
         inline constexpr uintptr_t Value = 0x2c8;
    }

    namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0xc8;
         inline constexpr uintptr_t Intensity = 0xd0;
         inline constexpr uintptr_t Spread = 0xd4;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t FakeDataModelToDataModel = 0x1b0;
         inline constexpr uintptr_t JobEnd = 0x1d8;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0x1d0;
         inline constexpr uintptr_t MaxFPS = 0x1b0;
         inline constexpr uintptr_t Pointer = 0x7ef3c48;
         inline constexpr uintptr_t RenderJobToFakeDataModel = 0x38;
         inline constexpr uintptr_t RenderJobToRenderView = 0x218;
    }

    namespace Team {
        inline constexpr uintptr_t TeamColor = 0xD0;
        inline constexpr uintptr_t BrickColor = 0xd0;
    }

    namespace Terrain {
        inline constexpr uintptr_t GrassLength = 0x1F8;
        inline constexpr uintptr_t MaterialColors = 0x280;
        inline constexpr uintptr_t WaterColor = 0x1E8;
        inline constexpr uintptr_t WaterReflectance = 0x200;
        inline constexpr uintptr_t WaterTransparency = 0x204;
        inline constexpr uintptr_t WaterWaveSize = 0x208;
        inline constexpr uintptr_t WaterWaveSpeed = 0x20C;
    }

    namespace TextButton {
        inline constexpr uintptr_t AutoButtonColor = 0xA14;
        inline constexpr uintptr_t ContentText = 0xD28;
        inline constexpr uintptr_t Font = 0x1150;
        inline constexpr uintptr_t LineHeight = 0xD9C;
        inline constexpr uintptr_t LocalizedText = 0xD28;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0x115C;
        inline constexpr uintptr_t Modal = 0xA15;
        inline constexpr uintptr_t RichText = 0xE45;
        inline constexpr uintptr_t Selected = 0xA16;
        inline constexpr uintptr_t Text = 0xD28;
        inline constexpr uintptr_t TextColor3 = 0x1138;
        inline constexpr uintptr_t TextDirection = 0xE48;
        inline constexpr uintptr_t TextScaled = 0xD98;
        inline constexpr uintptr_t TextSize = 0x1164;
        inline constexpr uintptr_t TextStrokeColor3 = 0x1144;
        inline constexpr uintptr_t TextStrokeTransparency = 0x1168;
        inline constexpr uintptr_t TextTransparency = 0x116C;
        inline constexpr uintptr_t TextTruncate = 0x1170;
        inline constexpr uintptr_t TextWrapped = 0xDE8;
        inline constexpr uintptr_t TextXAlignment = 0x1174;
        inline constexpr uintptr_t TextYAlignment = 0xDE4;
    }

    namespace TextLabel {
        inline constexpr uintptr_t ContentText = 0xAA8;
        inline constexpr uintptr_t Font = 0xED0;
        inline constexpr uintptr_t LineHeight = 0xB1C;
        inline constexpr uintptr_t LocalizedText = 0xAA8;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0xEDC;
        inline constexpr uintptr_t RichText = 0xBC5;
        inline constexpr uintptr_t Text = 0xAA8;
        inline constexpr uintptr_t TextColor3 = 0xEB8;
        inline constexpr uintptr_t TextDirection = 0xBC8;
        inline constexpr uintptr_t TextScaled = 0xB18;
        inline constexpr uintptr_t TextSize = 0xEE4;
        inline constexpr uintptr_t TextStrokeColor3 = 0xEC4;
        inline constexpr uintptr_t TextStrokeTransparency = 0xEE8;
        inline constexpr uintptr_t TextTransparency = 0xEEC;
        inline constexpr uintptr_t TextTruncate = 0xEF0;
        inline constexpr uintptr_t TextWrapped = 0xB68;
        inline constexpr uintptr_t TextXAlignment = 0xEF4;
        inline constexpr uintptr_t TextYAlignment = 0xB64;
    }

    namespace Tool {
        inline constexpr uintptr_t CanBeDropped = 0x4A0;
        inline constexpr uintptr_t Enabled = 0x4A1;
        inline constexpr uintptr_t Grip = 0x470;
        inline constexpr uintptr_t GripForward = 0x488;
        inline constexpr uintptr_t GripPos = 0x494;
        inline constexpr uintptr_t GripRight = 0x470;
        inline constexpr uintptr_t GripUp = 0x47C;
        inline constexpr uintptr_t ManualActivationOnly = 0x4A2;
        inline constexpr uintptr_t RequiresHandle = 0x4A3;
        inline constexpr uintptr_t TextureId = 0x348;
        inline constexpr uintptr_t Tooltip = 0x450;
    }

    namespace Value {
        inline constexpr uintptr_t Value = 0xD0;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0x720;
        inline constexpr uintptr_t FakeDataModel = 0x700;
        inline constexpr uintptr_t Pointer = 0x79E9468;
        inline constexpr uintptr_t RenderView = 0x800;
        inline constexpr uintptr_t ViewMatrix = 0x120;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x4A0;
        inline constexpr uintptr_t DistributedGameTime = 0x4c0;
        inline constexpr uintptr_t ReadOnlyGravity = 0xA28;
        inline constexpr uintptr_t World = 0x3D8;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x1D0;
        inline constexpr uintptr_t Primitives = 0x240;
        inline constexpr uintptr_t worldStepsPerSec = 0x658;
    }

    namespace FFlagOffsets {
        inline constexpr uintptr_t FFlagList = 0x7AD1BC8;
        inline constexpr uintptr_t ValueGetSet = 0x30;
        inline constexpr uintptr_t FlagToValue = 0xC0;
    }

    namespace FFlags {
        inline constexpr uintptr_t DebugDisableTimeoutDisconnect = 0x77E0D48;
        inline constexpr uintptr_t EnableLoadModule = 0x77C79B8;
        inline constexpr uintptr_t PartyPlayerInactivityTimeoutInSeconds = 0x69FA828;
        inline constexpr uintptr_t NextGenReplicatorEnabledWrite4 = 0x7A13280;
        inline constexpr uintptr_t PhysicsSenderMaxBandwidthBps = 0x69F6E10;
        inline constexpr uintptr_t PhysicsSenderMaxBandwidthBpsScaling = 0x69F6E18;
        inline constexpr uintptr_t TaskSchedulerLimitTargetFpsTo2402 = 0x7A13448;
        inline constexpr uintptr_t TaskSchedulerTargetFps = 0x774BEF0;
        inline constexpr uintptr_t WebSocketServiceEnableClientCreation = 0x7830AB8;
        inline constexpr uintptr_t WorldStepMax = 0x69FAAA0;
        inline constexpr uintptr_t WorldStepsOffsetAdjustRate = 0x69FAAA4;
    }

    // Legacy support for PlayerMouse if missing in new list
    namespace Legacy {
        inline constexpr uintptr_t PlayerMouse = 0xf78; 
    }
} // namespace offsets
