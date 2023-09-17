#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRInitError;
}
// Type: OVR.OpenVR::EVRInitError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9390))
// CS Name: OVR.OpenVR.EVRInitError
struct CORDL_TYPE EVRInitError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRInitError(int32_t value__) noexcept;


                    constexpr EVRInitError(EVRInitError const&) = default;
                    constexpr EVRInitError(EVRInitError&&) = default;
                    constexpr EVRInitError& operator=(EVRInitError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRInitError& operator=(EVRInitError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRInitError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRInitError_Unwrapped : int32_t {
__None = 0,
__Unknown = 1,
__Init_InstallationNotFound = 100,
__Init_InstallationCorrupt = 101,
__Init_VRClientDLLNotFound = 102,
__Init_FileNotFound = 103,
__Init_FactoryNotFound = 104,
__Init_InterfaceNotFound = 105,
__Init_InvalidInterface = 106,
__Init_UserConfigDirectoryInvalid = 107,
__Init_HmdNotFound = 108,
__Init_NotInitialized = 109,
__Init_PathRegistryNotFound = 110,
__Init_NoConfigPath = 111,
__Init_NoLogPath = 112,
__Init_PathRegistryNotWritable = 113,
__Init_AppInfoInitFailed = 114,
__Init_Retry = 115,
__Init_InitCanceledByUser = 116,
__Init_AnotherAppLaunching = 117,
__Init_SettingsInitFailed = 118,
__Init_ShuttingDown = 119,
__Init_TooManyObjects = 120,
__Init_NoServerForBackgroundApp = 121,
__Init_NotSupportedWithCompositor = 122,
__Init_NotAvailableToUtilityApps = 123,
__Init_Internal = 124,
__Init_HmdDriverIdIsNone = 125,
__Init_HmdNotFoundPresenceFailed = 126,
__Init_VRMonitorNotFound = 127,
__Init_VRMonitorStartupFailed = 128,
__Init_LowPowerWatchdogNotSupported = 129,
__Init_InvalidApplicationType = 130,
__Init_NotAvailableToWatchdogApps = 131,
__Init_WatchdogDisabledInSettings = 132,
__Init_VRDashboardNotFound = 133,
__Init_VRDashboardStartupFailed = 134,
__Init_VRHomeNotFound = 135,
__Init_VRHomeStartupFailed = 136,
__Init_RebootingBusy = 137,
__Init_FirmwareUpdateBusy = 138,
__Init_FirmwareRecoveryBusy = 139,
__Init_USBServiceBusy = 140,
__Init_VRWebHelperStartupFailed = 141,
__Init_TrackerManagerInitFailed = 142,
__Driver_Failed = 200,
__Driver_Unknown = 201,
__Driver_HmdUnknown = 202,
__Driver_NotLoaded = 203,
__Driver_RuntimeOutOfDate = 204,
__Driver_HmdInUse = 205,
__Driver_NotCalibrated = 206,
__Driver_CalibrationInvalid = 207,
__Driver_HmdDisplayNotFound = 208,
__Driver_TrackedDeviceInterfaceUnknown = 209,
__Driver_HmdDriverIdOutOfBounds = 211,
__Driver_HmdDisplayMirrored = 212,
__IPC_ServerInitFailed = 300,
__IPC_ConnectFailed = 301,
__IPC_SharedStateInitFailed = 302,
__IPC_CompositorInitFailed = 303,
__IPC_MutexInitFailed = 304,
__IPC_Failed = 305,
__IPC_CompositorConnectFailed = 306,
__IPC_CompositorInvalidConnectResponse = 307,
__IPC_ConnectFailedAfterMultipleAttempts = 308,
__Compositor_Failed = 400,
__Compositor_D3D11HardwareRequired = 401,
__Compositor_FirmwareRequiresUpdate = 402,
__Compositor_OverlayInitFailed = 403,
__Compositor_ScreenshotsInitFailed = 404,
__Compositor_UnableToCreateDevice = 405,
__VendorSpecific_UnableToConnectToOculusRuntime = 1000,
__VendorSpecific_WindowsNotInDevMode = 1001,
__VendorSpecific_HmdFound_CantOpenDevice = 1101,
__VendorSpecific_HmdFound_UnableToRequestConfigStart = 1102,
__VendorSpecific_HmdFound_NoStoredConfig = 1103,
__VendorSpecific_HmdFound_ConfigTooBig = 1104,
__VendorSpecific_HmdFound_ConfigTooSmall = 1105,
__VendorSpecific_HmdFound_UnableToInitZLib = 1106,
__VendorSpecific_HmdFound_CantReadFirmwareVersion = 1107,
__VendorSpecific_HmdFound_UnableToSendUserDataStart = 1108,
__VendorSpecific_HmdFound_UnableToGetUserDataStart = 1109,
__VendorSpecific_HmdFound_UnableToGetUserDataNext = 1110,
__VendorSpecific_HmdFound_UserDataAddressRange = 1111,
__VendorSpecific_HmdFound_UserDataError = 1112,
__VendorSpecific_HmdFound_ConfigFailedSanityCheck = 1113,
__Steam_SteamInstallationNotFound = 2000,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRInitError_Unwrapped () const noexcept {
return std::bit_cast<__EVRInitError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::OVR::OpenVR::EVRInitError const None;

/// @brief Field Unknown offset 0
static ::OVR::OpenVR::EVRInitError const Unknown;

/// @brief Field Init_InstallationNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_InstallationNotFound;

/// @brief Field Init_InstallationCorrupt offset 0
static ::OVR::OpenVR::EVRInitError const Init_InstallationCorrupt;

/// @brief Field Init_VRClientDLLNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_VRClientDLLNotFound;

/// @brief Field Init_FileNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_FileNotFound;

/// @brief Field Init_FactoryNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_FactoryNotFound;

/// @brief Field Init_InterfaceNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_InterfaceNotFound;

/// @brief Field Init_InvalidInterface offset 0
static ::OVR::OpenVR::EVRInitError const Init_InvalidInterface;

/// @brief Field Init_UserConfigDirectoryInvalid offset 0
static ::OVR::OpenVR::EVRInitError const Init_UserConfigDirectoryInvalid;

/// @brief Field Init_HmdNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_HmdNotFound;

/// @brief Field Init_NotInitialized offset 0
static ::OVR::OpenVR::EVRInitError const Init_NotInitialized;

/// @brief Field Init_PathRegistryNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_PathRegistryNotFound;

/// @brief Field Init_NoConfigPath offset 0
static ::OVR::OpenVR::EVRInitError const Init_NoConfigPath;

/// @brief Field Init_NoLogPath offset 0
static ::OVR::OpenVR::EVRInitError const Init_NoLogPath;

/// @brief Field Init_PathRegistryNotWritable offset 0
static ::OVR::OpenVR::EVRInitError const Init_PathRegistryNotWritable;

/// @brief Field Init_AppInfoInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const Init_AppInfoInitFailed;

/// @brief Field Init_Retry offset 0
static ::OVR::OpenVR::EVRInitError const Init_Retry;

/// @brief Field Init_InitCanceledByUser offset 0
static ::OVR::OpenVR::EVRInitError const Init_InitCanceledByUser;

/// @brief Field Init_AnotherAppLaunching offset 0
static ::OVR::OpenVR::EVRInitError const Init_AnotherAppLaunching;

/// @brief Field Init_SettingsInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const Init_SettingsInitFailed;

/// @brief Field Init_ShuttingDown offset 0
static ::OVR::OpenVR::EVRInitError const Init_ShuttingDown;

/// @brief Field Init_TooManyObjects offset 0
static ::OVR::OpenVR::EVRInitError const Init_TooManyObjects;

/// @brief Field Init_NoServerForBackgroundApp offset 0
static ::OVR::OpenVR::EVRInitError const Init_NoServerForBackgroundApp;

/// @brief Field Init_NotSupportedWithCompositor offset 0
static ::OVR::OpenVR::EVRInitError const Init_NotSupportedWithCompositor;

/// @brief Field Init_NotAvailableToUtilityApps offset 0
static ::OVR::OpenVR::EVRInitError const Init_NotAvailableToUtilityApps;

/// @brief Field Init_Internal offset 0
static ::OVR::OpenVR::EVRInitError const Init_Internal;

/// @brief Field Init_HmdDriverIdIsNone offset 0
static ::OVR::OpenVR::EVRInitError const Init_HmdDriverIdIsNone;

/// @brief Field Init_HmdNotFoundPresenceFailed offset 0
static ::OVR::OpenVR::EVRInitError const Init_HmdNotFoundPresenceFailed;

/// @brief Field Init_VRMonitorNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_VRMonitorNotFound;

/// @brief Field Init_VRMonitorStartupFailed offset 0
static ::OVR::OpenVR::EVRInitError const Init_VRMonitorStartupFailed;

/// @brief Field Init_LowPowerWatchdogNotSupported offset 0
static ::OVR::OpenVR::EVRInitError const Init_LowPowerWatchdogNotSupported;

/// @brief Field Init_InvalidApplicationType offset 0
static ::OVR::OpenVR::EVRInitError const Init_InvalidApplicationType;

/// @brief Field Init_NotAvailableToWatchdogApps offset 0
static ::OVR::OpenVR::EVRInitError const Init_NotAvailableToWatchdogApps;

/// @brief Field Init_WatchdogDisabledInSettings offset 0
static ::OVR::OpenVR::EVRInitError const Init_WatchdogDisabledInSettings;

/// @brief Field Init_VRDashboardNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_VRDashboardNotFound;

/// @brief Field Init_VRDashboardStartupFailed offset 0
static ::OVR::OpenVR::EVRInitError const Init_VRDashboardStartupFailed;

/// @brief Field Init_VRHomeNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Init_VRHomeNotFound;

/// @brief Field Init_VRHomeStartupFailed offset 0
static ::OVR::OpenVR::EVRInitError const Init_VRHomeStartupFailed;

/// @brief Field Init_RebootingBusy offset 0
static ::OVR::OpenVR::EVRInitError const Init_RebootingBusy;

/// @brief Field Init_FirmwareUpdateBusy offset 0
static ::OVR::OpenVR::EVRInitError const Init_FirmwareUpdateBusy;

/// @brief Field Init_FirmwareRecoveryBusy offset 0
static ::OVR::OpenVR::EVRInitError const Init_FirmwareRecoveryBusy;

/// @brief Field Init_USBServiceBusy offset 0
static ::OVR::OpenVR::EVRInitError const Init_USBServiceBusy;

/// @brief Field Init_VRWebHelperStartupFailed offset 0
static ::OVR::OpenVR::EVRInitError const Init_VRWebHelperStartupFailed;

/// @brief Field Init_TrackerManagerInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const Init_TrackerManagerInitFailed;

/// @brief Field Driver_Failed offset 0
static ::OVR::OpenVR::EVRInitError const Driver_Failed;

/// @brief Field Driver_Unknown offset 0
static ::OVR::OpenVR::EVRInitError const Driver_Unknown;

/// @brief Field Driver_HmdUnknown offset 0
static ::OVR::OpenVR::EVRInitError const Driver_HmdUnknown;

/// @brief Field Driver_NotLoaded offset 0
static ::OVR::OpenVR::EVRInitError const Driver_NotLoaded;

/// @brief Field Driver_RuntimeOutOfDate offset 0
static ::OVR::OpenVR::EVRInitError const Driver_RuntimeOutOfDate;

/// @brief Field Driver_HmdInUse offset 0
static ::OVR::OpenVR::EVRInitError const Driver_HmdInUse;

/// @brief Field Driver_NotCalibrated offset 0
static ::OVR::OpenVR::EVRInitError const Driver_NotCalibrated;

/// @brief Field Driver_CalibrationInvalid offset 0
static ::OVR::OpenVR::EVRInitError const Driver_CalibrationInvalid;

/// @brief Field Driver_HmdDisplayNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Driver_HmdDisplayNotFound;

/// @brief Field Driver_TrackedDeviceInterfaceUnknown offset 0
static ::OVR::OpenVR::EVRInitError const Driver_TrackedDeviceInterfaceUnknown;

/// @brief Field Driver_HmdDriverIdOutOfBounds offset 0
static ::OVR::OpenVR::EVRInitError const Driver_HmdDriverIdOutOfBounds;

/// @brief Field Driver_HmdDisplayMirrored offset 0
static ::OVR::OpenVR::EVRInitError const Driver_HmdDisplayMirrored;

/// @brief Field IPC_ServerInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const IPC_ServerInitFailed;

/// @brief Field IPC_ConnectFailed offset 0
static ::OVR::OpenVR::EVRInitError const IPC_ConnectFailed;

/// @brief Field IPC_SharedStateInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const IPC_SharedStateInitFailed;

/// @brief Field IPC_CompositorInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const IPC_CompositorInitFailed;

/// @brief Field IPC_MutexInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const IPC_MutexInitFailed;

/// @brief Field IPC_Failed offset 0
static ::OVR::OpenVR::EVRInitError const IPC_Failed;

/// @brief Field IPC_CompositorConnectFailed offset 0
static ::OVR::OpenVR::EVRInitError const IPC_CompositorConnectFailed;

/// @brief Field IPC_CompositorInvalidConnectResponse offset 0
static ::OVR::OpenVR::EVRInitError const IPC_CompositorInvalidConnectResponse;

/// @brief Field IPC_ConnectFailedAfterMultipleAttempts offset 0
static ::OVR::OpenVR::EVRInitError const IPC_ConnectFailedAfterMultipleAttempts;

/// @brief Field Compositor_Failed offset 0
static ::OVR::OpenVR::EVRInitError const Compositor_Failed;

/// @brief Field Compositor_D3D11HardwareRequired offset 0
static ::OVR::OpenVR::EVRInitError const Compositor_D3D11HardwareRequired;

/// @brief Field Compositor_FirmwareRequiresUpdate offset 0
static ::OVR::OpenVR::EVRInitError const Compositor_FirmwareRequiresUpdate;

/// @brief Field Compositor_OverlayInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const Compositor_OverlayInitFailed;

/// @brief Field Compositor_ScreenshotsInitFailed offset 0
static ::OVR::OpenVR::EVRInitError const Compositor_ScreenshotsInitFailed;

/// @brief Field Compositor_UnableToCreateDevice offset 0
static ::OVR::OpenVR::EVRInitError const Compositor_UnableToCreateDevice;

/// @brief Field VendorSpecific_UnableToConnectToOculusRuntime offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_UnableToConnectToOculusRuntime;

/// @brief Field VendorSpecific_WindowsNotInDevMode offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_WindowsNotInDevMode;

/// @brief Field VendorSpecific_HmdFound_CantOpenDevice offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_CantOpenDevice;

/// @brief Field VendorSpecific_HmdFound_UnableToRequestConfigStart offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToRequestConfigStart;

/// @brief Field VendorSpecific_HmdFound_NoStoredConfig offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_NoStoredConfig;

/// @brief Field VendorSpecific_HmdFound_ConfigTooBig offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_ConfigTooBig;

/// @brief Field VendorSpecific_HmdFound_ConfigTooSmall offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_ConfigTooSmall;

/// @brief Field VendorSpecific_HmdFound_UnableToInitZLib offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToInitZLib;

/// @brief Field VendorSpecific_HmdFound_CantReadFirmwareVersion offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_CantReadFirmwareVersion;

/// @brief Field VendorSpecific_HmdFound_UnableToSendUserDataStart offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToSendUserDataStart;

/// @brief Field VendorSpecific_HmdFound_UnableToGetUserDataStart offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToGetUserDataStart;

/// @brief Field VendorSpecific_HmdFound_UnableToGetUserDataNext offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToGetUserDataNext;

/// @brief Field VendorSpecific_HmdFound_UserDataAddressRange offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UserDataAddressRange;

/// @brief Field VendorSpecific_HmdFound_UserDataError offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UserDataError;

/// @brief Field VendorSpecific_HmdFound_ConfigFailedSanityCheck offset 0
static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_ConfigFailedSanityCheck;

/// @brief Field Steam_SteamInstallationNotFound offset 0
static ::OVR::OpenVR::EVRInitError const Steam_SteamInstallationNotFound;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRInitError, "OVR.OpenVR", "EVRInitError");
