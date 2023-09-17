#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRInitError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRInitError::EVRInitError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRInitError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRInitError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::None{0};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Unknown{1};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_InstallationNotFound{100};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_InstallationCorrupt{101};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_VRClientDLLNotFound{102};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_FileNotFound{103};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_FactoryNotFound{104};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_InterfaceNotFound{105};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_InvalidInterface{106};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_UserConfigDirectoryInvalid{107};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_HmdNotFound{108};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_NotInitialized{109};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_PathRegistryNotFound{110};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_NoConfigPath{111};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_NoLogPath{112};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_PathRegistryNotWritable{113};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_AppInfoInitFailed{114};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_Retry{115};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_InitCanceledByUser{116};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_AnotherAppLaunching{117};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_SettingsInitFailed{118};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_ShuttingDown{119};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_TooManyObjects{120};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_NoServerForBackgroundApp{121};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_NotSupportedWithCompositor{122};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_NotAvailableToUtilityApps{123};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_Internal{124};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_HmdDriverIdIsNone{125};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_HmdNotFoundPresenceFailed{126};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_VRMonitorNotFound{127};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_VRMonitorStartupFailed{128};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_LowPowerWatchdogNotSupported{129};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_InvalidApplicationType{130};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_NotAvailableToWatchdogApps{131};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_WatchdogDisabledInSettings{132};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_VRDashboardNotFound{133};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_VRDashboardStartupFailed{134};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_VRHomeNotFound{135};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_VRHomeStartupFailed{136};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_RebootingBusy{137};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_FirmwareUpdateBusy{138};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_FirmwareRecoveryBusy{139};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_USBServiceBusy{140};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_VRWebHelperStartupFailed{141};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Init_TrackerManagerInitFailed{142};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_Failed{200};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_Unknown{201};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_HmdUnknown{202};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_NotLoaded{203};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_RuntimeOutOfDate{204};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_HmdInUse{205};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_NotCalibrated{206};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_CalibrationInvalid{207};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_HmdDisplayNotFound{208};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_TrackedDeviceInterfaceUnknown{209};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_HmdDriverIdOutOfBounds{211};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Driver_HmdDisplayMirrored{212};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_ServerInitFailed{300};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_ConnectFailed{301};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_SharedStateInitFailed{302};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_CompositorInitFailed{303};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_MutexInitFailed{304};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_Failed{305};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_CompositorConnectFailed{306};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_CompositorInvalidConnectResponse{307};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::IPC_ConnectFailedAfterMultipleAttempts{308};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Compositor_Failed{400};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Compositor_D3D11HardwareRequired{401};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Compositor_FirmwareRequiresUpdate{402};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Compositor_OverlayInitFailed{403};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Compositor_ScreenshotsInitFailed{404};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Compositor_UnableToCreateDevice{405};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_UnableToConnectToOculusRuntime{1000};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_WindowsNotInDevMode{1001};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_CantOpenDevice{1101};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToRequestConfigStart{1102};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_NoStoredConfig{1103};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_ConfigTooBig{1104};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_ConfigTooSmall{1105};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToInitZLib{1106};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_CantReadFirmwareVersion{1107};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToSendUserDataStart{1108};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToGetUserDataStart{1109};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToGetUserDataNext{1110};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UserDataAddressRange{1111};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UserDataError{1112};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_ConfigFailedSanityCheck{1113};
constexpr ::OVR::OpenVR::EVRInitError  ::OVR::OpenVR::EVRInitError::Steam_SteamInstallationNotFound{2000};
} // end anonymous namespace