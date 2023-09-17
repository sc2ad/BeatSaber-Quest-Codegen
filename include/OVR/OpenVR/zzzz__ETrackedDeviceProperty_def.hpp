#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
// Type: OVR.OpenVR::ETrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9370))
// CS Name: OVR.OpenVR.ETrackedDeviceProperty
struct CORDL_TYPE ETrackedDeviceProperty : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETrackedDeviceProperty(int32_t value__) noexcept;


                    constexpr ETrackedDeviceProperty(ETrackedDeviceProperty const&) = default;
                    constexpr ETrackedDeviceProperty(ETrackedDeviceProperty&&) = default;
                    constexpr ETrackedDeviceProperty& operator=(ETrackedDeviceProperty const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ETrackedDeviceProperty& operator=(ETrackedDeviceProperty&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ETrackedDeviceProperty(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ETrackedDeviceProperty_Unwrapped : int32_t {
__Prop_Invalid = 0,
__Prop_TrackingSystemName_String = 1000,
__Prop_ModelNumber_String = 1001,
__Prop_SerialNumber_String = 1002,
__Prop_RenderModelName_String = 1003,
__Prop_WillDriftInYaw_Bool = 1004,
__Prop_ManufacturerName_String = 1005,
__Prop_TrackingFirmwareVersion_String = 1006,
__Prop_HardwareRevision_String = 1007,
__Prop_AllWirelessDongleDescriptions_String = 1008,
__Prop_ConnectedWirelessDongle_String = 1009,
__Prop_DeviceIsWireless_Bool = 1010,
__Prop_DeviceIsCharging_Bool = 1011,
__Prop_DeviceBatteryPercentage_Float = 1012,
__Prop_StatusDisplayTransform_Matrix34 = 1013,
__Prop_Firmware_UpdateAvailable_Bool = 1014,
__Prop_Firmware_ManualUpdate_Bool = 1015,
__Prop_Firmware_ManualUpdateURL_String = 1016,
__Prop_HardwareRevision_Uint64 = 1017,
__Prop_FirmwareVersion_Uint64 = 1018,
__Prop_FPGAVersion_Uint64 = 1019,
__Prop_VRCVersion_Uint64 = 1020,
__Prop_RadioVersion_Uint64 = 1021,
__Prop_DongleVersion_Uint64 = 1022,
__Prop_BlockServerShutdown_Bool = 1023,
__Prop_CanUnifyCoordinateSystemWithHmd_Bool = 1024,
__Prop_ContainsProximitySensor_Bool = 1025,
__Prop_DeviceProvidesBatteryStatus_Bool = 1026,
__Prop_DeviceCanPowerOff_Bool = 1027,
__Prop_Firmware_ProgrammingTarget_String = 1028,
__Prop_DeviceClass_Int32 = 1029,
__Prop_HasCamera_Bool = 1030,
__Prop_DriverVersion_String = 1031,
__Prop_Firmware_ForceUpdateRequired_Bool = 1032,
__Prop_ViveSystemButtonFixRequired_Bool = 1033,
__Prop_ParentDriver_Uint64 = 1034,
__Prop_ResourceRoot_String = 1035,
__Prop_RegisteredDeviceType_String = 1036,
__Prop_InputProfilePath_String = 1037,
__Prop_NeverTracked_Bool = 1038,
__Prop_NumCameras_Int32 = 1039,
__Prop_CameraFrameLayout_Int32 = 1040,
__Prop_ReportsTimeSinceVSync_Bool = 2000,
__Prop_SecondsFromVsyncToPhotons_Float = 2001,
__Prop_DisplayFrequency_Float = 2002,
__Prop_UserIpdMeters_Float = 2003,
__Prop_CurrentUniverseId_Uint64 = 2004,
__Prop_PreviousUniverseId_Uint64 = 2005,
__Prop_DisplayFirmwareVersion_Uint64 = 2006,
__Prop_IsOnDesktop_Bool = 2007,
__Prop_DisplayMCType_Int32 = 2008,
__Prop_DisplayMCOffset_Float = 2009,
__Prop_DisplayMCScale_Float = 2010,
__Prop_EdidVendorID_Int32 = 2011,
__Prop_DisplayMCImageLeft_String = 2012,
__Prop_DisplayMCImageRight_String = 2013,
__Prop_DisplayGCBlackClamp_Float = 2014,
__Prop_EdidProductID_Int32 = 2015,
__Prop_CameraToHeadTransform_Matrix34 = 2016,
__Prop_DisplayGCType_Int32 = 2017,
__Prop_DisplayGCOffset_Float = 2018,
__Prop_DisplayGCScale_Float = 2019,
__Prop_DisplayGCPrescale_Float = 2020,
__Prop_DisplayGCImage_String = 2021,
__Prop_LensCenterLeftU_Float = 2022,
__Prop_LensCenterLeftV_Float = 2023,
__Prop_LensCenterRightU_Float = 2024,
__Prop_LensCenterRightV_Float = 2025,
__Prop_UserHeadToEyeDepthMeters_Float = 2026,
__Prop_CameraFirmwareVersion_Uint64 = 2027,
__Prop_CameraFirmwareDescription_String = 2028,
__Prop_DisplayFPGAVersion_Uint64 = 2029,
__Prop_DisplayBootloaderVersion_Uint64 = 2030,
__Prop_DisplayHardwareVersion_Uint64 = 2031,
__Prop_AudioFirmwareVersion_Uint64 = 2032,
__Prop_CameraCompatibilityMode_Int32 = 2033,
__Prop_ScreenshotHorizontalFieldOfViewDegrees_Float = 2034,
__Prop_ScreenshotVerticalFieldOfViewDegrees_Float = 2035,
__Prop_DisplaySuppressed_Bool = 2036,
__Prop_DisplayAllowNightMode_Bool = 2037,
__Prop_DisplayMCImageWidth_Int32 = 2038,
__Prop_DisplayMCImageHeight_Int32 = 2039,
__Prop_DisplayMCImageNumChannels_Int32 = 2040,
__Prop_DisplayMCImageData_Binary = 2041,
__Prop_SecondsFromPhotonsToVblank_Float = 2042,
__Prop_DriverDirectModeSendsVsyncEvents_Bool = 2043,
__Prop_DisplayDebugMode_Bool = 2044,
__Prop_GraphicsAdapterLuid_Uint64 = 2045,
__Prop_DriverProvidedChaperonePath_String = 2048,
__Prop_ExpectedTrackingReferenceCount_Int32 = 2049,
__Prop_ExpectedControllerCount_Int32 = 2050,
__Prop_NamedIconPathControllerLeftDeviceOff_String = 2051,
__Prop_NamedIconPathControllerRightDeviceOff_String = 2052,
__Prop_NamedIconPathTrackingReferenceDeviceOff_String = 2053,
__Prop_DoNotApplyPrediction_Bool = 2054,
__Prop_CameraToHeadTransforms_Matrix34_Array = 2055,
__Prop_DistortionMeshResolution_Int32 = 2056,
__Prop_DriverIsDrawingControllers_Bool = 2057,
__Prop_DriverRequestsApplicationPause_Bool = 2058,
__Prop_DriverRequestsReducedRendering_Bool = 2059,
__Prop_MinimumIpdStepMeters_Float = 2060,
__Prop_AudioBridgeFirmwareVersion_Uint64 = 2061,
__Prop_ImageBridgeFirmwareVersion_Uint64 = 2062,
__Prop_ImuToHeadTransform_Matrix34 = 2063,
__Prop_ImuFactoryGyroBias_Vector3 = 2064,
__Prop_ImuFactoryGyroScale_Vector3 = 2065,
__Prop_ImuFactoryAccelerometerBias_Vector3 = 2066,
__Prop_ImuFactoryAccelerometerScale_Vector3 = 2067,
__Prop_ConfigurationIncludesLighthouse20Features_Bool = 2069,
__Prop_DriverRequestedMuraCorrectionMode_Int32 = 2200,
__Prop_DriverRequestedMuraFeather_InnerLeft_Int32 = 2201,
__Prop_DriverRequestedMuraFeather_InnerRight_Int32 = 2202,
__Prop_DriverRequestedMuraFeather_InnerTop_Int32 = 2203,
__Prop_DriverRequestedMuraFeather_InnerBottom_Int32 = 2204,
__Prop_DriverRequestedMuraFeather_OuterLeft_Int32 = 2205,
__Prop_DriverRequestedMuraFeather_OuterRight_Int32 = 2206,
__Prop_DriverRequestedMuraFeather_OuterTop_Int32 = 2207,
__Prop_DriverRequestedMuraFeather_OuterBottom_Int32 = 2208,
__Prop_AttachedDeviceId_String = 3000,
__Prop_SupportedButtons_Uint64 = 3001,
__Prop_Axis0Type_Int32 = 3002,
__Prop_Axis1Type_Int32 = 3003,
__Prop_Axis2Type_Int32 = 3004,
__Prop_Axis3Type_Int32 = 3005,
__Prop_Axis4Type_Int32 = 3006,
__Prop_ControllerRoleHint_Int32 = 3007,
__Prop_FieldOfViewLeftDegrees_Float = 4000,
__Prop_FieldOfViewRightDegrees_Float = 4001,
__Prop_FieldOfViewTopDegrees_Float = 4002,
__Prop_FieldOfViewBottomDegrees_Float = 4003,
__Prop_TrackingRangeMinimumMeters_Float = 4004,
__Prop_TrackingRangeMaximumMeters_Float = 4005,
__Prop_ModeLabel_String = 4006,
__Prop_IconPathName_String = 5000,
__Prop_NamedIconPathDeviceOff_String = 5001,
__Prop_NamedIconPathDeviceSearching_String = 5002,
__Prop_NamedIconPathDeviceSearchingAlert_String = 5003,
__Prop_NamedIconPathDeviceReady_String = 5004,
__Prop_NamedIconPathDeviceReadyAlert_String = 5005,
__Prop_NamedIconPathDeviceNotReady_String = 5006,
__Prop_NamedIconPathDeviceStandby_String = 5007,
__Prop_NamedIconPathDeviceAlertLow_String = 5008,
__Prop_DisplayHiddenArea_Binary_Start = 5100,
__Prop_DisplayHiddenArea_Binary_End = 5150,
__Prop_ParentContainer = 5151,
__Prop_UserConfigPath_String = 6000,
__Prop_InstallPath_String = 6001,
__Prop_HasDisplayComponent_Bool = 6002,
__Prop_HasControllerComponent_Bool = 6003,
__Prop_HasCameraComponent_Bool = 6004,
__Prop_HasDriverDirectModeComponent_Bool = 6005,
__Prop_HasVirtualDisplayComponent_Bool = 6006,
__Prop_HasSpatialAnchorsSupport_Bool = 6007,
__Prop_ControllerType_String = 7000,
__Prop_LegacyInputProfile_String = 7001,
__Prop_VendorSpecific_Reserved_Start = 10000,
__Prop_VendorSpecific_Reserved_End = 10999,
__Prop_TrackedDeviceProperty_Max = 1000000,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ETrackedDeviceProperty_Unwrapped () const noexcept {
return std::bit_cast<__ETrackedDeviceProperty_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Prop_Invalid offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Invalid;

/// @brief Field Prop_TrackingSystemName_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackingSystemName_String;

/// @brief Field Prop_ModelNumber_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ModelNumber_String;

/// @brief Field Prop_SerialNumber_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_SerialNumber_String;

/// @brief Field Prop_RenderModelName_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_RenderModelName_String;

/// @brief Field Prop_WillDriftInYaw_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_WillDriftInYaw_Bool;

/// @brief Field Prop_ManufacturerName_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ManufacturerName_String;

/// @brief Field Prop_TrackingFirmwareVersion_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackingFirmwareVersion_String;

/// @brief Field Prop_HardwareRevision_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HardwareRevision_String;

/// @brief Field Prop_AllWirelessDongleDescriptions_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_AllWirelessDongleDescriptions_String;

/// @brief Field Prop_ConnectedWirelessDongle_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ConnectedWirelessDongle_String;

/// @brief Field Prop_DeviceIsWireless_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceIsWireless_Bool;

/// @brief Field Prop_DeviceIsCharging_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceIsCharging_Bool;

/// @brief Field Prop_DeviceBatteryPercentage_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceBatteryPercentage_Float;

/// @brief Field Prop_StatusDisplayTransform_Matrix34 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_StatusDisplayTransform_Matrix34;

/// @brief Field Prop_Firmware_UpdateAvailable_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_UpdateAvailable_Bool;

/// @brief Field Prop_Firmware_ManualUpdate_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_ManualUpdate_Bool;

/// @brief Field Prop_Firmware_ManualUpdateURL_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_ManualUpdateURL_String;

/// @brief Field Prop_HardwareRevision_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HardwareRevision_Uint64;

/// @brief Field Prop_FirmwareVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FirmwareVersion_Uint64;

/// @brief Field Prop_FPGAVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FPGAVersion_Uint64;

/// @brief Field Prop_VRCVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_VRCVersion_Uint64;

/// @brief Field Prop_RadioVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_RadioVersion_Uint64;

/// @brief Field Prop_DongleVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DongleVersion_Uint64;

/// @brief Field Prop_BlockServerShutdown_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_BlockServerShutdown_Bool;

/// @brief Field Prop_CanUnifyCoordinateSystemWithHmd_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CanUnifyCoordinateSystemWithHmd_Bool;

/// @brief Field Prop_ContainsProximitySensor_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ContainsProximitySensor_Bool;

/// @brief Field Prop_DeviceProvidesBatteryStatus_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceProvidesBatteryStatus_Bool;

/// @brief Field Prop_DeviceCanPowerOff_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceCanPowerOff_Bool;

/// @brief Field Prop_Firmware_ProgrammingTarget_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_ProgrammingTarget_String;

/// @brief Field Prop_DeviceClass_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceClass_Int32;

/// @brief Field Prop_HasCamera_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasCamera_Bool;

/// @brief Field Prop_DriverVersion_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverVersion_String;

/// @brief Field Prop_Firmware_ForceUpdateRequired_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_ForceUpdateRequired_Bool;

/// @brief Field Prop_ViveSystemButtonFixRequired_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ViveSystemButtonFixRequired_Bool;

/// @brief Field Prop_ParentDriver_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ParentDriver_Uint64;

/// @brief Field Prop_ResourceRoot_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ResourceRoot_String;

/// @brief Field Prop_RegisteredDeviceType_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_RegisteredDeviceType_String;

/// @brief Field Prop_InputProfilePath_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_InputProfilePath_String;

/// @brief Field Prop_NeverTracked_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NeverTracked_Bool;

/// @brief Field Prop_NumCameras_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NumCameras_Int32;

/// @brief Field Prop_CameraFrameLayout_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraFrameLayout_Int32;

/// @brief Field Prop_ReportsTimeSinceVSync_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ReportsTimeSinceVSync_Bool;

/// @brief Field Prop_SecondsFromVsyncToPhotons_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_SecondsFromVsyncToPhotons_Float;

/// @brief Field Prop_DisplayFrequency_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayFrequency_Float;

/// @brief Field Prop_UserIpdMeters_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_UserIpdMeters_Float;

/// @brief Field Prop_CurrentUniverseId_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CurrentUniverseId_Uint64;

/// @brief Field Prop_PreviousUniverseId_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_PreviousUniverseId_Uint64;

/// @brief Field Prop_DisplayFirmwareVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayFirmwareVersion_Uint64;

/// @brief Field Prop_IsOnDesktop_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_IsOnDesktop_Bool;

/// @brief Field Prop_DisplayMCType_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCType_Int32;

/// @brief Field Prop_DisplayMCOffset_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCOffset_Float;

/// @brief Field Prop_DisplayMCScale_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCScale_Float;

/// @brief Field Prop_EdidVendorID_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_EdidVendorID_Int32;

/// @brief Field Prop_DisplayMCImageLeft_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageLeft_String;

/// @brief Field Prop_DisplayMCImageRight_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageRight_String;

/// @brief Field Prop_DisplayGCBlackClamp_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCBlackClamp_Float;

/// @brief Field Prop_EdidProductID_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_EdidProductID_Int32;

/// @brief Field Prop_CameraToHeadTransform_Matrix34 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraToHeadTransform_Matrix34;

/// @brief Field Prop_DisplayGCType_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCType_Int32;

/// @brief Field Prop_DisplayGCOffset_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCOffset_Float;

/// @brief Field Prop_DisplayGCScale_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCScale_Float;

/// @brief Field Prop_DisplayGCPrescale_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCPrescale_Float;

/// @brief Field Prop_DisplayGCImage_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCImage_String;

/// @brief Field Prop_LensCenterLeftU_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LensCenterLeftU_Float;

/// @brief Field Prop_LensCenterLeftV_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LensCenterLeftV_Float;

/// @brief Field Prop_LensCenterRightU_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LensCenterRightU_Float;

/// @brief Field Prop_LensCenterRightV_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LensCenterRightV_Float;

/// @brief Field Prop_UserHeadToEyeDepthMeters_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_UserHeadToEyeDepthMeters_Float;

/// @brief Field Prop_CameraFirmwareVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraFirmwareVersion_Uint64;

/// @brief Field Prop_CameraFirmwareDescription_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraFirmwareDescription_String;

/// @brief Field Prop_DisplayFPGAVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayFPGAVersion_Uint64;

/// @brief Field Prop_DisplayBootloaderVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayBootloaderVersion_Uint64;

/// @brief Field Prop_DisplayHardwareVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayHardwareVersion_Uint64;

/// @brief Field Prop_AudioFirmwareVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_AudioFirmwareVersion_Uint64;

/// @brief Field Prop_CameraCompatibilityMode_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraCompatibilityMode_Int32;

/// @brief Field Prop_ScreenshotHorizontalFieldOfViewDegrees_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ScreenshotHorizontalFieldOfViewDegrees_Float;

/// @brief Field Prop_ScreenshotVerticalFieldOfViewDegrees_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ScreenshotVerticalFieldOfViewDegrees_Float;

/// @brief Field Prop_DisplaySuppressed_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplaySuppressed_Bool;

/// @brief Field Prop_DisplayAllowNightMode_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayAllowNightMode_Bool;

/// @brief Field Prop_DisplayMCImageWidth_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageWidth_Int32;

/// @brief Field Prop_DisplayMCImageHeight_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageHeight_Int32;

/// @brief Field Prop_DisplayMCImageNumChannels_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageNumChannels_Int32;

/// @brief Field Prop_DisplayMCImageData_Binary offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageData_Binary;

/// @brief Field Prop_SecondsFromPhotonsToVblank_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_SecondsFromPhotonsToVblank_Float;

/// @brief Field Prop_DriverDirectModeSendsVsyncEvents_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverDirectModeSendsVsyncEvents_Bool;

/// @brief Field Prop_DisplayDebugMode_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayDebugMode_Bool;

/// @brief Field Prop_GraphicsAdapterLuid_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_GraphicsAdapterLuid_Uint64;

/// @brief Field Prop_DriverProvidedChaperonePath_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverProvidedChaperonePath_String;

/// @brief Field Prop_ExpectedTrackingReferenceCount_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ExpectedTrackingReferenceCount_Int32;

/// @brief Field Prop_ExpectedControllerCount_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ExpectedControllerCount_Int32;

/// @brief Field Prop_NamedIconPathControllerLeftDeviceOff_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathControllerLeftDeviceOff_String;

/// @brief Field Prop_NamedIconPathControllerRightDeviceOff_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathControllerRightDeviceOff_String;

/// @brief Field Prop_NamedIconPathTrackingReferenceDeviceOff_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathTrackingReferenceDeviceOff_String;

/// @brief Field Prop_DoNotApplyPrediction_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DoNotApplyPrediction_Bool;

/// @brief Field Prop_CameraToHeadTransforms_Matrix34_Array offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraToHeadTransforms_Matrix34_Array;

/// @brief Field Prop_DistortionMeshResolution_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DistortionMeshResolution_Int32;

/// @brief Field Prop_DriverIsDrawingControllers_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverIsDrawingControllers_Bool;

/// @brief Field Prop_DriverRequestsApplicationPause_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestsApplicationPause_Bool;

/// @brief Field Prop_DriverRequestsReducedRendering_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestsReducedRendering_Bool;

/// @brief Field Prop_MinimumIpdStepMeters_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_MinimumIpdStepMeters_Float;

/// @brief Field Prop_AudioBridgeFirmwareVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_AudioBridgeFirmwareVersion_Uint64;

/// @brief Field Prop_ImageBridgeFirmwareVersion_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImageBridgeFirmwareVersion_Uint64;

/// @brief Field Prop_ImuToHeadTransform_Matrix34 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuToHeadTransform_Matrix34;

/// @brief Field Prop_ImuFactoryGyroBias_Vector3 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuFactoryGyroBias_Vector3;

/// @brief Field Prop_ImuFactoryGyroScale_Vector3 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuFactoryGyroScale_Vector3;

/// @brief Field Prop_ImuFactoryAccelerometerBias_Vector3 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuFactoryAccelerometerBias_Vector3;

/// @brief Field Prop_ImuFactoryAccelerometerScale_Vector3 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuFactoryAccelerometerScale_Vector3;

/// @brief Field Prop_ConfigurationIncludesLighthouse20Features_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ConfigurationIncludesLighthouse20Features_Bool;

/// @brief Field Prop_DriverRequestedMuraCorrectionMode_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraCorrectionMode_Int32;

/// @brief Field Prop_DriverRequestedMuraFeather_InnerLeft_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_InnerLeft_Int32;

/// @brief Field Prop_DriverRequestedMuraFeather_InnerRight_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_InnerRight_Int32;

/// @brief Field Prop_DriverRequestedMuraFeather_InnerTop_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_InnerTop_Int32;

/// @brief Field Prop_DriverRequestedMuraFeather_InnerBottom_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_InnerBottom_Int32;

/// @brief Field Prop_DriverRequestedMuraFeather_OuterLeft_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_OuterLeft_Int32;

/// @brief Field Prop_DriverRequestedMuraFeather_OuterRight_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_OuterRight_Int32;

/// @brief Field Prop_DriverRequestedMuraFeather_OuterTop_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_OuterTop_Int32;

/// @brief Field Prop_DriverRequestedMuraFeather_OuterBottom_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_OuterBottom_Int32;

/// @brief Field Prop_AttachedDeviceId_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_AttachedDeviceId_String;

/// @brief Field Prop_SupportedButtons_Uint64 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_SupportedButtons_Uint64;

/// @brief Field Prop_Axis0Type_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis0Type_Int32;

/// @brief Field Prop_Axis1Type_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis1Type_Int32;

/// @brief Field Prop_Axis2Type_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis2Type_Int32;

/// @brief Field Prop_Axis3Type_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis3Type_Int32;

/// @brief Field Prop_Axis4Type_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis4Type_Int32;

/// @brief Field Prop_ControllerRoleHint_Int32 offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ControllerRoleHint_Int32;

/// @brief Field Prop_FieldOfViewLeftDegrees_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FieldOfViewLeftDegrees_Float;

/// @brief Field Prop_FieldOfViewRightDegrees_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FieldOfViewRightDegrees_Float;

/// @brief Field Prop_FieldOfViewTopDegrees_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FieldOfViewTopDegrees_Float;

/// @brief Field Prop_FieldOfViewBottomDegrees_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FieldOfViewBottomDegrees_Float;

/// @brief Field Prop_TrackingRangeMinimumMeters_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackingRangeMinimumMeters_Float;

/// @brief Field Prop_TrackingRangeMaximumMeters_Float offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackingRangeMaximumMeters_Float;

/// @brief Field Prop_ModeLabel_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ModeLabel_String;

/// @brief Field Prop_IconPathName_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_IconPathName_String;

/// @brief Field Prop_NamedIconPathDeviceOff_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceOff_String;

/// @brief Field Prop_NamedIconPathDeviceSearching_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceSearching_String;

/// @brief Field Prop_NamedIconPathDeviceSearchingAlert_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceSearchingAlert_String;

/// @brief Field Prop_NamedIconPathDeviceReady_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceReady_String;

/// @brief Field Prop_NamedIconPathDeviceReadyAlert_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceReadyAlert_String;

/// @brief Field Prop_NamedIconPathDeviceNotReady_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceNotReady_String;

/// @brief Field Prop_NamedIconPathDeviceStandby_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceStandby_String;

/// @brief Field Prop_NamedIconPathDeviceAlertLow_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceAlertLow_String;

/// @brief Field Prop_DisplayHiddenArea_Binary_Start offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayHiddenArea_Binary_Start;

/// @brief Field Prop_DisplayHiddenArea_Binary_End offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayHiddenArea_Binary_End;

/// @brief Field Prop_ParentContainer offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ParentContainer;

/// @brief Field Prop_UserConfigPath_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_UserConfigPath_String;

/// @brief Field Prop_InstallPath_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_InstallPath_String;

/// @brief Field Prop_HasDisplayComponent_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasDisplayComponent_Bool;

/// @brief Field Prop_HasControllerComponent_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasControllerComponent_Bool;

/// @brief Field Prop_HasCameraComponent_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasCameraComponent_Bool;

/// @brief Field Prop_HasDriverDirectModeComponent_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasDriverDirectModeComponent_Bool;

/// @brief Field Prop_HasVirtualDisplayComponent_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasVirtualDisplayComponent_Bool;

/// @brief Field Prop_HasSpatialAnchorsSupport_Bool offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasSpatialAnchorsSupport_Bool;

/// @brief Field Prop_ControllerType_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ControllerType_String;

/// @brief Field Prop_LegacyInputProfile_String offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LegacyInputProfile_String;

/// @brief Field Prop_VendorSpecific_Reserved_Start offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_VendorSpecific_Reserved_Start;

/// @brief Field Prop_VendorSpecific_Reserved_End offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_VendorSpecific_Reserved_End;

/// @brief Field Prop_TrackedDeviceProperty_Max offset 0
static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackedDeviceProperty_Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackedDeviceProperty, "OVR.OpenVR", "ETrackedDeviceProperty");
