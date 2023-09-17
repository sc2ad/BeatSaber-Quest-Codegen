#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVREventType;
}
// Type: OVR.OpenVR::EVREventType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9374))
// CS Name: OVR.OpenVR.EVREventType
struct CORDL_TYPE EVREventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVREventType(int32_t value__) noexcept;


                    constexpr EVREventType(EVREventType const&) = default;
                    constexpr EVREventType(EVREventType&&) = default;
                    constexpr EVREventType& operator=(EVREventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVREventType& operator=(EVREventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVREventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVREventType_Unwrapped : int32_t {
__VREvent_None = 0,
__VREvent_TrackedDeviceActivated = 100,
__VREvent_TrackedDeviceDeactivated = 101,
__VREvent_TrackedDeviceUpdated = 102,
__VREvent_TrackedDeviceUserInteractionStarted = 103,
__VREvent_TrackedDeviceUserInteractionEnded = 104,
__VREvent_IpdChanged = 105,
__VREvent_EnterStandbyMode = 106,
__VREvent_LeaveStandbyMode = 107,
__VREvent_TrackedDeviceRoleChanged = 108,
__VREvent_WatchdogWakeUpRequested = 109,
__VREvent_LensDistortionChanged = 110,
__VREvent_PropertyChanged = 111,
__VREvent_WirelessDisconnect = 112,
__VREvent_WirelessReconnect = 113,
__VREvent_ButtonPress = 200,
__VREvent_ButtonUnpress = 201,
__VREvent_ButtonTouch = 202,
__VREvent_ButtonUntouch = 203,
__VREvent_DualAnalog_Press = 250,
__VREvent_DualAnalog_Unpress = 251,
__VREvent_DualAnalog_Touch = 252,
__VREvent_DualAnalog_Untouch = 253,
__VREvent_DualAnalog_Move = 254,
__VREvent_DualAnalog_ModeSwitch1 = 255,
__VREvent_DualAnalog_ModeSwitch2 = 256,
__VREvent_DualAnalog_Cancel = 257,
__VREvent_MouseMove = 300,
__VREvent_MouseButtonDown = 301,
__VREvent_MouseButtonUp = 302,
__VREvent_FocusEnter = 303,
__VREvent_FocusLeave = 304,
__VREvent_Scroll = 305,
__VREvent_TouchPadMove = 306,
__VREvent_OverlayFocusChanged = 307,
__VREvent_InputFocusCaptured = 400,
__VREvent_InputFocusReleased = 401,
__VREvent_SceneFocusLost = 402,
__VREvent_SceneFocusGained = 403,
__VREvent_SceneApplicationChanged = 404,
__VREvent_SceneFocusChanged = 405,
__VREvent_InputFocusChanged = 406,
__VREvent_SceneApplicationSecondaryRenderingStarted = 407,
__VREvent_SceneApplicationUsingWrongGraphicsAdapter = 408,
__VREvent_ActionBindingReloaded = 409,
__VREvent_HideRenderModels = 410,
__VREvent_ShowRenderModels = 411,
__VREvent_ConsoleOpened = 420,
__VREvent_ConsoleClosed = 421,
__VREvent_OverlayShown = 500,
__VREvent_OverlayHidden = 501,
__VREvent_DashboardActivated = 502,
__VREvent_DashboardDeactivated = 503,
__VREvent_DashboardThumbSelected = 504,
__VREvent_DashboardRequested = 505,
__VREvent_ResetDashboard = 506,
__VREvent_RenderToast = 507,
__VREvent_ImageLoaded = 508,
__VREvent_ShowKeyboard = 509,
__VREvent_HideKeyboard = 510,
__VREvent_OverlayGamepadFocusGained = 511,
__VREvent_OverlayGamepadFocusLost = 512,
__VREvent_OverlaySharedTextureChanged = 513,
__VREvent_ScreenshotTriggered = 516,
__VREvent_ImageFailed = 517,
__VREvent_DashboardOverlayCreated = 518,
__VREvent_SwitchGamepadFocus = 519,
__VREvent_RequestScreenshot = 520,
__VREvent_ScreenshotTaken = 521,
__VREvent_ScreenshotFailed = 522,
__VREvent_SubmitScreenshotToDashboard = 523,
__VREvent_ScreenshotProgressToDashboard = 524,
__VREvent_PrimaryDashboardDeviceChanged = 525,
__VREvent_RoomViewShown = 526,
__VREvent_RoomViewHidden = 527,
__VREvent_Notification_Shown = 600,
__VREvent_Notification_Hidden = 601,
__VREvent_Notification_BeginInteraction = 602,
__VREvent_Notification_Destroyed = 603,
__VREvent_Quit = 700,
__VREvent_ProcessQuit = 701,
__VREvent_QuitAborted_UserPrompt = 702,
__VREvent_QuitAcknowledged = 703,
__VREvent_DriverRequestedQuit = 704,
__VREvent_ChaperoneDataHasChanged = 800,
__VREvent_ChaperoneUniverseHasChanged = 801,
__VREvent_ChaperoneTempDataHasChanged = 802,
__VREvent_ChaperoneSettingsHaveChanged = 803,
__VREvent_SeatedZeroPoseReset = 804,
__VREvent_AudioSettingsHaveChanged = 820,
__VREvent_BackgroundSettingHasChanged = 850,
__VREvent_CameraSettingsHaveChanged = 851,
__VREvent_ReprojectionSettingHasChanged = 852,
__VREvent_ModelSkinSettingsHaveChanged = 853,
__VREvent_EnvironmentSettingsHaveChanged = 854,
__VREvent_PowerSettingsHaveChanged = 855,
__VREvent_EnableHomeAppSettingsHaveChanged = 856,
__VREvent_SteamVRSectionSettingChanged = 857,
__VREvent_LighthouseSectionSettingChanged = 858,
__VREvent_NullSectionSettingChanged = 859,
__VREvent_UserInterfaceSectionSettingChanged = 860,
__VREvent_NotificationsSectionSettingChanged = 861,
__VREvent_KeyboardSectionSettingChanged = 862,
__VREvent_PerfSectionSettingChanged = 863,
__VREvent_DashboardSectionSettingChanged = 864,
__VREvent_WebInterfaceSectionSettingChanged = 865,
__VREvent_TrackersSectionSettingChanged = 866,
__VREvent_StatusUpdate = 900,
__VREvent_WebInterface_InstallDriverCompleted = 950,
__VREvent_MCImageUpdated = 1000,
__VREvent_FirmwareUpdateStarted = 1100,
__VREvent_FirmwareUpdateFinished = 1101,
__VREvent_KeyboardClosed = 1200,
__VREvent_KeyboardCharInput = 1201,
__VREvent_KeyboardDone = 1202,
__VREvent_ApplicationTransitionStarted = 1300,
__VREvent_ApplicationTransitionAborted = 1301,
__VREvent_ApplicationTransitionNewAppStarted = 1302,
__VREvent_ApplicationListUpdated = 1303,
__VREvent_ApplicationMimeTypeLoad = 1304,
__VREvent_ApplicationTransitionNewAppLaunchComplete = 1305,
__VREvent_ProcessConnected = 1306,
__VREvent_ProcessDisconnected = 1307,
__VREvent_Compositor_MirrorWindowShown = 1400,
__VREvent_Compositor_MirrorWindowHidden = 1401,
__VREvent_Compositor_ChaperoneBoundsShown = 1410,
__VREvent_Compositor_ChaperoneBoundsHidden = 1411,
__VREvent_TrackedCamera_StartVideoStream = 1500,
__VREvent_TrackedCamera_StopVideoStream = 1501,
__VREvent_TrackedCamera_PauseVideoStream = 1502,
__VREvent_TrackedCamera_ResumeVideoStream = 1503,
__VREvent_TrackedCamera_EditingSurface = 1550,
__VREvent_PerformanceTest_EnableCapture = 1600,
__VREvent_PerformanceTest_DisableCapture = 1601,
__VREvent_PerformanceTest_FidelityLevel = 1602,
__VREvent_MessageOverlay_Closed = 1650,
__VREvent_MessageOverlayCloseRequested = 1651,
__VREvent_Input_HapticVibration = 1700,
__VREvent_Input_BindingLoadFailed = 1701,
__VREvent_Input_BindingLoadSuccessful = 1702,
__VREvent_Input_ActionManifestReloaded = 1703,
__VREvent_Input_ActionManifestLoadFailed = 1704,
__VREvent_SpatialAnchors_PoseUpdated = 1800,
__VREvent_SpatialAnchors_DescriptorUpdated = 1801,
__VREvent_SpatialAnchors_RequestPoseUpdate = 1802,
__VREvent_SpatialAnchors_RequestDescriptorUpdate = 1803,
__VREvent_VendorSpecific_Reserved_Start = 10000,
__VREvent_VendorSpecific_Reserved_End = 19999,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVREventType_Unwrapped () const noexcept {
return std::bit_cast<__EVREventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VREvent_None offset 0
static ::OVR::OpenVR::EVREventType const VREvent_None;

/// @brief Field VREvent_TrackedDeviceActivated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceActivated;

/// @brief Field VREvent_TrackedDeviceDeactivated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceDeactivated;

/// @brief Field VREvent_TrackedDeviceUpdated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUpdated;

/// @brief Field VREvent_TrackedDeviceUserInteractionStarted offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUserInteractionStarted;

/// @brief Field VREvent_TrackedDeviceUserInteractionEnded offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUserInteractionEnded;

/// @brief Field VREvent_IpdChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_IpdChanged;

/// @brief Field VREvent_EnterStandbyMode offset 0
static ::OVR::OpenVR::EVREventType const VREvent_EnterStandbyMode;

/// @brief Field VREvent_LeaveStandbyMode offset 0
static ::OVR::OpenVR::EVREventType const VREvent_LeaveStandbyMode;

/// @brief Field VREvent_TrackedDeviceRoleChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceRoleChanged;

/// @brief Field VREvent_WatchdogWakeUpRequested offset 0
static ::OVR::OpenVR::EVREventType const VREvent_WatchdogWakeUpRequested;

/// @brief Field VREvent_LensDistortionChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_LensDistortionChanged;

/// @brief Field VREvent_PropertyChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_PropertyChanged;

/// @brief Field VREvent_WirelessDisconnect offset 0
static ::OVR::OpenVR::EVREventType const VREvent_WirelessDisconnect;

/// @brief Field VREvent_WirelessReconnect offset 0
static ::OVR::OpenVR::EVREventType const VREvent_WirelessReconnect;

/// @brief Field VREvent_ButtonPress offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ButtonPress;

/// @brief Field VREvent_ButtonUnpress offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ButtonUnpress;

/// @brief Field VREvent_ButtonTouch offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ButtonTouch;

/// @brief Field VREvent_ButtonUntouch offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ButtonUntouch;

/// @brief Field VREvent_DualAnalog_Press offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Press;

/// @brief Field VREvent_DualAnalog_Unpress offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Unpress;

/// @brief Field VREvent_DualAnalog_Touch offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Touch;

/// @brief Field VREvent_DualAnalog_Untouch offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Untouch;

/// @brief Field VREvent_DualAnalog_Move offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Move;

/// @brief Field VREvent_DualAnalog_ModeSwitch1 offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_ModeSwitch1;

/// @brief Field VREvent_DualAnalog_ModeSwitch2 offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_ModeSwitch2;

/// @brief Field VREvent_DualAnalog_Cancel offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Cancel;

/// @brief Field VREvent_MouseMove offset 0
static ::OVR::OpenVR::EVREventType const VREvent_MouseMove;

/// @brief Field VREvent_MouseButtonDown offset 0
static ::OVR::OpenVR::EVREventType const VREvent_MouseButtonDown;

/// @brief Field VREvent_MouseButtonUp offset 0
static ::OVR::OpenVR::EVREventType const VREvent_MouseButtonUp;

/// @brief Field VREvent_FocusEnter offset 0
static ::OVR::OpenVR::EVREventType const VREvent_FocusEnter;

/// @brief Field VREvent_FocusLeave offset 0
static ::OVR::OpenVR::EVREventType const VREvent_FocusLeave;

/// @brief Field VREvent_Scroll offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Scroll;

/// @brief Field VREvent_TouchPadMove offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TouchPadMove;

/// @brief Field VREvent_OverlayFocusChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_OverlayFocusChanged;

/// @brief Field VREvent_InputFocusCaptured offset 0
static ::OVR::OpenVR::EVREventType const VREvent_InputFocusCaptured;

/// @brief Field VREvent_InputFocusReleased offset 0
static ::OVR::OpenVR::EVREventType const VREvent_InputFocusReleased;

/// @brief Field VREvent_SceneFocusLost offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusLost;

/// @brief Field VREvent_SceneFocusGained offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusGained;

/// @brief Field VREvent_SceneApplicationChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationChanged;

/// @brief Field VREvent_SceneFocusChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusChanged;

/// @brief Field VREvent_InputFocusChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_InputFocusChanged;

/// @brief Field VREvent_SceneApplicationSecondaryRenderingStarted offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationSecondaryRenderingStarted;

/// @brief Field VREvent_SceneApplicationUsingWrongGraphicsAdapter offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationUsingWrongGraphicsAdapter;

/// @brief Field VREvent_ActionBindingReloaded offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ActionBindingReloaded;

/// @brief Field VREvent_HideRenderModels offset 0
static ::OVR::OpenVR::EVREventType const VREvent_HideRenderModels;

/// @brief Field VREvent_ShowRenderModels offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ShowRenderModels;

/// @brief Field VREvent_ConsoleOpened offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ConsoleOpened;

/// @brief Field VREvent_ConsoleClosed offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ConsoleClosed;

/// @brief Field VREvent_OverlayShown offset 0
static ::OVR::OpenVR::EVREventType const VREvent_OverlayShown;

/// @brief Field VREvent_OverlayHidden offset 0
static ::OVR::OpenVR::EVREventType const VREvent_OverlayHidden;

/// @brief Field VREvent_DashboardActivated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DashboardActivated;

/// @brief Field VREvent_DashboardDeactivated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DashboardDeactivated;

/// @brief Field VREvent_DashboardThumbSelected offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DashboardThumbSelected;

/// @brief Field VREvent_DashboardRequested offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DashboardRequested;

/// @brief Field VREvent_ResetDashboard offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ResetDashboard;

/// @brief Field VREvent_RenderToast offset 0
static ::OVR::OpenVR::EVREventType const VREvent_RenderToast;

/// @brief Field VREvent_ImageLoaded offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ImageLoaded;

/// @brief Field VREvent_ShowKeyboard offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ShowKeyboard;

/// @brief Field VREvent_HideKeyboard offset 0
static ::OVR::OpenVR::EVREventType const VREvent_HideKeyboard;

/// @brief Field VREvent_OverlayGamepadFocusGained offset 0
static ::OVR::OpenVR::EVREventType const VREvent_OverlayGamepadFocusGained;

/// @brief Field VREvent_OverlayGamepadFocusLost offset 0
static ::OVR::OpenVR::EVREventType const VREvent_OverlayGamepadFocusLost;

/// @brief Field VREvent_OverlaySharedTextureChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_OverlaySharedTextureChanged;

/// @brief Field VREvent_ScreenshotTriggered offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotTriggered;

/// @brief Field VREvent_ImageFailed offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ImageFailed;

/// @brief Field VREvent_DashboardOverlayCreated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DashboardOverlayCreated;

/// @brief Field VREvent_SwitchGamepadFocus offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SwitchGamepadFocus;

/// @brief Field VREvent_RequestScreenshot offset 0
static ::OVR::OpenVR::EVREventType const VREvent_RequestScreenshot;

/// @brief Field VREvent_ScreenshotTaken offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotTaken;

/// @brief Field VREvent_ScreenshotFailed offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotFailed;

/// @brief Field VREvent_SubmitScreenshotToDashboard offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SubmitScreenshotToDashboard;

/// @brief Field VREvent_ScreenshotProgressToDashboard offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotProgressToDashboard;

/// @brief Field VREvent_PrimaryDashboardDeviceChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_PrimaryDashboardDeviceChanged;

/// @brief Field VREvent_RoomViewShown offset 0
static ::OVR::OpenVR::EVREventType const VREvent_RoomViewShown;

/// @brief Field VREvent_RoomViewHidden offset 0
static ::OVR::OpenVR::EVREventType const VREvent_RoomViewHidden;

/// @brief Field VREvent_Notification_Shown offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Notification_Shown;

/// @brief Field VREvent_Notification_Hidden offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Notification_Hidden;

/// @brief Field VREvent_Notification_BeginInteraction offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Notification_BeginInteraction;

/// @brief Field VREvent_Notification_Destroyed offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Notification_Destroyed;

/// @brief Field VREvent_Quit offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Quit;

/// @brief Field VREvent_ProcessQuit offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ProcessQuit;

/// @brief Field VREvent_QuitAborted_UserPrompt offset 0
static ::OVR::OpenVR::EVREventType const VREvent_QuitAborted_UserPrompt;

/// @brief Field VREvent_QuitAcknowledged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_QuitAcknowledged;

/// @brief Field VREvent_DriverRequestedQuit offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DriverRequestedQuit;

/// @brief Field VREvent_ChaperoneDataHasChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneDataHasChanged;

/// @brief Field VREvent_ChaperoneUniverseHasChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneUniverseHasChanged;

/// @brief Field VREvent_ChaperoneTempDataHasChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneTempDataHasChanged;

/// @brief Field VREvent_ChaperoneSettingsHaveChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneSettingsHaveChanged;

/// @brief Field VREvent_SeatedZeroPoseReset offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SeatedZeroPoseReset;

/// @brief Field VREvent_AudioSettingsHaveChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_AudioSettingsHaveChanged;

/// @brief Field VREvent_BackgroundSettingHasChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_BackgroundSettingHasChanged;

/// @brief Field VREvent_CameraSettingsHaveChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_CameraSettingsHaveChanged;

/// @brief Field VREvent_ReprojectionSettingHasChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ReprojectionSettingHasChanged;

/// @brief Field VREvent_ModelSkinSettingsHaveChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ModelSkinSettingsHaveChanged;

/// @brief Field VREvent_EnvironmentSettingsHaveChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_EnvironmentSettingsHaveChanged;

/// @brief Field VREvent_PowerSettingsHaveChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_PowerSettingsHaveChanged;

/// @brief Field VREvent_EnableHomeAppSettingsHaveChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_EnableHomeAppSettingsHaveChanged;

/// @brief Field VREvent_SteamVRSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SteamVRSectionSettingChanged;

/// @brief Field VREvent_LighthouseSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_LighthouseSectionSettingChanged;

/// @brief Field VREvent_NullSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_NullSectionSettingChanged;

/// @brief Field VREvent_UserInterfaceSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_UserInterfaceSectionSettingChanged;

/// @brief Field VREvent_NotificationsSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_NotificationsSectionSettingChanged;

/// @brief Field VREvent_KeyboardSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_KeyboardSectionSettingChanged;

/// @brief Field VREvent_PerfSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_PerfSectionSettingChanged;

/// @brief Field VREvent_DashboardSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_DashboardSectionSettingChanged;

/// @brief Field VREvent_WebInterfaceSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_WebInterfaceSectionSettingChanged;

/// @brief Field VREvent_TrackersSectionSettingChanged offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackersSectionSettingChanged;

/// @brief Field VREvent_StatusUpdate offset 0
static ::OVR::OpenVR::EVREventType const VREvent_StatusUpdate;

/// @brief Field VREvent_WebInterface_InstallDriverCompleted offset 0
static ::OVR::OpenVR::EVREventType const VREvent_WebInterface_InstallDriverCompleted;

/// @brief Field VREvent_MCImageUpdated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_MCImageUpdated;

/// @brief Field VREvent_FirmwareUpdateStarted offset 0
static ::OVR::OpenVR::EVREventType const VREvent_FirmwareUpdateStarted;

/// @brief Field VREvent_FirmwareUpdateFinished offset 0
static ::OVR::OpenVR::EVREventType const VREvent_FirmwareUpdateFinished;

/// @brief Field VREvent_KeyboardClosed offset 0
static ::OVR::OpenVR::EVREventType const VREvent_KeyboardClosed;

/// @brief Field VREvent_KeyboardCharInput offset 0
static ::OVR::OpenVR::EVREventType const VREvent_KeyboardCharInput;

/// @brief Field VREvent_KeyboardDone offset 0
static ::OVR::OpenVR::EVREventType const VREvent_KeyboardDone;

/// @brief Field VREvent_ApplicationTransitionStarted offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionStarted;

/// @brief Field VREvent_ApplicationTransitionAborted offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionAborted;

/// @brief Field VREvent_ApplicationTransitionNewAppStarted offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionNewAppStarted;

/// @brief Field VREvent_ApplicationListUpdated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ApplicationListUpdated;

/// @brief Field VREvent_ApplicationMimeTypeLoad offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ApplicationMimeTypeLoad;

/// @brief Field VREvent_ApplicationTransitionNewAppLaunchComplete offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionNewAppLaunchComplete;

/// @brief Field VREvent_ProcessConnected offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ProcessConnected;

/// @brief Field VREvent_ProcessDisconnected offset 0
static ::OVR::OpenVR::EVREventType const VREvent_ProcessDisconnected;

/// @brief Field VREvent_Compositor_MirrorWindowShown offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Compositor_MirrorWindowShown;

/// @brief Field VREvent_Compositor_MirrorWindowHidden offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Compositor_MirrorWindowHidden;

/// @brief Field VREvent_Compositor_ChaperoneBoundsShown offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Compositor_ChaperoneBoundsShown;

/// @brief Field VREvent_Compositor_ChaperoneBoundsHidden offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Compositor_ChaperoneBoundsHidden;

/// @brief Field VREvent_TrackedCamera_StartVideoStream offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_StartVideoStream;

/// @brief Field VREvent_TrackedCamera_StopVideoStream offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_StopVideoStream;

/// @brief Field VREvent_TrackedCamera_PauseVideoStream offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_PauseVideoStream;

/// @brief Field VREvent_TrackedCamera_ResumeVideoStream offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_ResumeVideoStream;

/// @brief Field VREvent_TrackedCamera_EditingSurface offset 0
static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_EditingSurface;

/// @brief Field VREvent_PerformanceTest_EnableCapture offset 0
static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_EnableCapture;

/// @brief Field VREvent_PerformanceTest_DisableCapture offset 0
static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_DisableCapture;

/// @brief Field VREvent_PerformanceTest_FidelityLevel offset 0
static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_FidelityLevel;

/// @brief Field VREvent_MessageOverlay_Closed offset 0
static ::OVR::OpenVR::EVREventType const VREvent_MessageOverlay_Closed;

/// @brief Field VREvent_MessageOverlayCloseRequested offset 0
static ::OVR::OpenVR::EVREventType const VREvent_MessageOverlayCloseRequested;

/// @brief Field VREvent_Input_HapticVibration offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Input_HapticVibration;

/// @brief Field VREvent_Input_BindingLoadFailed offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Input_BindingLoadFailed;

/// @brief Field VREvent_Input_BindingLoadSuccessful offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Input_BindingLoadSuccessful;

/// @brief Field VREvent_Input_ActionManifestReloaded offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Input_ActionManifestReloaded;

/// @brief Field VREvent_Input_ActionManifestLoadFailed offset 0
static ::OVR::OpenVR::EVREventType const VREvent_Input_ActionManifestLoadFailed;

/// @brief Field VREvent_SpatialAnchors_PoseUpdated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_PoseUpdated;

/// @brief Field VREvent_SpatialAnchors_DescriptorUpdated offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_DescriptorUpdated;

/// @brief Field VREvent_SpatialAnchors_RequestPoseUpdate offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_RequestPoseUpdate;

/// @brief Field VREvent_SpatialAnchors_RequestDescriptorUpdate offset 0
static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_RequestDescriptorUpdate;

/// @brief Field VREvent_VendorSpecific_Reserved_Start offset 0
static ::OVR::OpenVR::EVREventType const VREvent_VendorSpecific_Reserved_Start;

/// @brief Field VREvent_VendorSpecific_Reserved_End offset 0
static ::OVR::OpenVR::EVREventType const VREvent_VendorSpecific_Reserved_End;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVREventType, "OVR.OpenVR", "EVREventType");
