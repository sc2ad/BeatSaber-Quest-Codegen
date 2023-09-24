#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace OVR::OpenVR {
class CVRTrackedCamera;
}
namespace OVR::OpenVR {
class CVRCompositor;
}
namespace OVR::OpenVR {
class CVRInput;
}
namespace OVR::OpenVR {
class CVRSettings;
}
namespace OVR::OpenVR {
class CVRChaperone;
}
namespace OVR::OpenVR {
class CVRApplications;
}
namespace OVR::OpenVR {
class CVRScreenshots;
}
namespace OVR::OpenVR {
class CVRSpatialAnchors;
}
namespace OVR::OpenVR {
class CVRSystem;
}
namespace OVR::OpenVR {
class CVRExtendedDisplay;
}
namespace OVR::OpenVR {
class CVROverlay;
}
namespace OVR::OpenVR {
class CVRRenderModels;
}
namespace OVR::OpenVR {
class CVRChaperoneSetup;
}
namespace OVR::OpenVR {
struct EVRInitError;
}
namespace OVR::OpenVR {
class OVR__OpenVR__OpenVR__COpenVRContext;
}
namespace OVR::OpenVR {
struct EVRApplicationType;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__OpenVR__COpenVRContext;
}
namespace OVR::OpenVR {
class OpenVR;
}
// Type: ::COpenVRContext
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9511))
// CS Name: OVR.OpenVR.OpenVR::COpenVRContext
class CORDL_TYPE OVR__OpenVR__OpenVR__COpenVRContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~OVR__OpenVR__OpenVR__COpenVRContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__OpenVR__COpenVRContext", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__OpenVR__COpenVRContext(OVR__OpenVR__OpenVR__COpenVRContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__OpenVR__COpenVRContext", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__OpenVR__COpenVRContext(OVR__OpenVR__OpenVR__COpenVRContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__OpenVR__COpenVRContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVR__OpenVR__OpenVR__COpenVRContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__OpenVR__COpenVRContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__OpenVR__COpenVRContext& operator=(OVR__OpenVR__OpenVR__COpenVRContext&& o) noexcept = default;
  constexpr OVR__OpenVR__OpenVR__COpenVRContext& operator=(OVR__OpenVR__OpenVR__COpenVRContext const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::CVRSystem __declspec(property(get=__get_m_pVRSystem, put=__set_m_pVRSystem))  m_pVRSystem;

constexpr void __set_m_pVRSystem(OVR::OpenVR::CVRSystem value) ;

constexpr OVR::OpenVR::CVRSystem __get_m_pVRSystem() const;

 OVR::OpenVR::CVRChaperone __declspec(property(get=__get_m_pVRChaperone, put=__set_m_pVRChaperone))  m_pVRChaperone;

constexpr void __set_m_pVRChaperone(OVR::OpenVR::CVRChaperone value) ;

constexpr OVR::OpenVR::CVRChaperone __get_m_pVRChaperone() const;

 OVR::OpenVR::CVRChaperoneSetup __declspec(property(get=__get_m_pVRChaperoneSetup, put=__set_m_pVRChaperoneSetup))  m_pVRChaperoneSetup;

constexpr void __set_m_pVRChaperoneSetup(OVR::OpenVR::CVRChaperoneSetup value) ;

constexpr OVR::OpenVR::CVRChaperoneSetup __get_m_pVRChaperoneSetup() const;

 OVR::OpenVR::CVRCompositor __declspec(property(get=__get_m_pVRCompositor, put=__set_m_pVRCompositor))  m_pVRCompositor;

constexpr void __set_m_pVRCompositor(OVR::OpenVR::CVRCompositor value) ;

constexpr OVR::OpenVR::CVRCompositor __get_m_pVRCompositor() const;

 OVR::OpenVR::CVROverlay __declspec(property(get=__get_m_pVROverlay, put=__set_m_pVROverlay))  m_pVROverlay;

constexpr void __set_m_pVROverlay(OVR::OpenVR::CVROverlay value) ;

constexpr OVR::OpenVR::CVROverlay __get_m_pVROverlay() const;

 OVR::OpenVR::CVRRenderModels __declspec(property(get=__get_m_pVRRenderModels, put=__set_m_pVRRenderModels))  m_pVRRenderModels;

constexpr void __set_m_pVRRenderModels(OVR::OpenVR::CVRRenderModels value) ;

constexpr OVR::OpenVR::CVRRenderModels __get_m_pVRRenderModels() const;

 OVR::OpenVR::CVRExtendedDisplay __declspec(property(get=__get_m_pVRExtendedDisplay, put=__set_m_pVRExtendedDisplay))  m_pVRExtendedDisplay;

constexpr void __set_m_pVRExtendedDisplay(OVR::OpenVR::CVRExtendedDisplay value) ;

constexpr OVR::OpenVR::CVRExtendedDisplay __get_m_pVRExtendedDisplay() const;

 OVR::OpenVR::CVRSettings __declspec(property(get=__get_m_pVRSettings, put=__set_m_pVRSettings))  m_pVRSettings;

constexpr void __set_m_pVRSettings(OVR::OpenVR::CVRSettings value) ;

constexpr OVR::OpenVR::CVRSettings __get_m_pVRSettings() const;

 OVR::OpenVR::CVRApplications __declspec(property(get=__get_m_pVRApplications, put=__set_m_pVRApplications))  m_pVRApplications;

constexpr void __set_m_pVRApplications(OVR::OpenVR::CVRApplications value) ;

constexpr OVR::OpenVR::CVRApplications __get_m_pVRApplications() const;

 OVR::OpenVR::CVRScreenshots __declspec(property(get=__get_m_pVRScreenshots, put=__set_m_pVRScreenshots))  m_pVRScreenshots;

constexpr void __set_m_pVRScreenshots(OVR::OpenVR::CVRScreenshots value) ;

constexpr OVR::OpenVR::CVRScreenshots __get_m_pVRScreenshots() const;

 OVR::OpenVR::CVRTrackedCamera __declspec(property(get=__get_m_pVRTrackedCamera, put=__set_m_pVRTrackedCamera))  m_pVRTrackedCamera;

constexpr void __set_m_pVRTrackedCamera(OVR::OpenVR::CVRTrackedCamera value) ;

constexpr OVR::OpenVR::CVRTrackedCamera __get_m_pVRTrackedCamera() const;

 OVR::OpenVR::CVRInput __declspec(property(get=__get_m_pVRInput, put=__set_m_pVRInput))  m_pVRInput;

constexpr void __set_m_pVRInput(OVR::OpenVR::CVRInput value) ;

constexpr OVR::OpenVR::CVRInput __get_m_pVRInput() const;

 OVR::OpenVR::CVRSpatialAnchors __declspec(property(get=__get_m_pVRSpatialAnchors, put=__set_m_pVRSpatialAnchors))  m_pVRSpatialAnchors;

constexpr void __set_m_pVRSpatialAnchors(OVR::OpenVR::CVRSpatialAnchors value) ;

constexpr OVR::OpenVR::CVRSpatialAnchors __get_m_pVRSpatialAnchors() const;


// Methods

static OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext New_ctor() ;

/// @brief Method .ctor addr 0x26699b4 size 0x2c virtual false final false
 void _ctor() ;

/// @brief Method Clear addr 0x266a838 size 0x18 virtual false final false
 void Clear() ;

/// @brief Method CheckClear addr 0x266a85c size 0xa0 virtual false final false
 void CheckClear() ;

/// @brief Method VRSystem addr 0x26699f8 size 0xe4 virtual false final false
 OVR::OpenVR::CVRSystem VRSystem() ;

/// @brief Method VRChaperone addr 0x2669af4 size 0xe4 virtual false final false
 OVR::OpenVR::CVRChaperone VRChaperone() ;

/// @brief Method VRChaperoneSetup addr 0x2669bf0 size 0xe4 virtual false final false
 OVR::OpenVR::CVRChaperoneSetup VRChaperoneSetup() ;

/// @brief Method VRCompositor addr 0x2669cec size 0xe4 virtual false final false
 OVR::OpenVR::CVRCompositor VRCompositor() ;

/// @brief Method VROverlay addr 0x2669de8 size 0xe4 virtual false final false
 OVR::OpenVR::CVROverlay VROverlay() ;

/// @brief Method VRRenderModels addr 0x2669ee4 size 0xe4 virtual false final false
 OVR::OpenVR::CVRRenderModels VRRenderModels() ;

/// @brief Method VRExtendedDisplay addr 0x2669fe0 size 0xe4 virtual false final false
 OVR::OpenVR::CVRExtendedDisplay VRExtendedDisplay() ;

/// @brief Method VRSettings addr 0x266a0dc size 0xe4 virtual false final false
 OVR::OpenVR::CVRSettings VRSettings() ;

/// @brief Method VRApplications addr 0x266a1d8 size 0xe4 virtual false final false
 OVR::OpenVR::CVRApplications VRApplications() ;

/// @brief Method VRScreenshots addr 0x266a2d4 size 0xe4 virtual false final false
 OVR::OpenVR::CVRScreenshots VRScreenshots() ;

/// @brief Method VRTrackedCamera addr 0x266a3d0 size 0xe4 virtual false final false
 OVR::OpenVR::CVRTrackedCamera VRTrackedCamera() ;

/// @brief Method VRInput addr 0x266a4cc size 0xe4 virtual false final false
 OVR::OpenVR::CVRInput VRInput() ;

/// @brief Method VRSpatialAnchors addr 0x266a5c8 size 0xe4 virtual false final false
 OVR::OpenVR::CVRSpatialAnchors VRSpatialAnchors() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::OpenVR
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9512))
// CS Name: OVR.OpenVR.OpenVR
class CORDL_TYPE OpenVR : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using COpenVRContext = OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OpenVR() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVR", modifiers: " const&", def_value: None }]
constexpr OpenVR(OpenVR const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVR", modifiers: "&&", def_value: None }]
constexpr OpenVR(OpenVR&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenVR(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OpenVR& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenVR& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenVR& operator=(OpenVR&& o) noexcept = default;
  constexpr OpenVR& operator=(OpenVR const& o) noexcept = default;
                


// Fields

/// @brief Field k_nDriverNone offset 0
static constexpr uint32_t  k_nDriverNone{4294967295u};

/// @brief Field k_unMaxDriverDebugResponseSize offset 0
static constexpr uint32_t  k_unMaxDriverDebugResponseSize{32768u};

/// @brief Field k_unTrackedDeviceIndex_Hmd offset 0
static constexpr uint32_t  k_unTrackedDeviceIndex_Hmd{0u};

/// @brief Field k_unMaxTrackedDeviceCount offset 0
static constexpr uint32_t  k_unMaxTrackedDeviceCount{64u};

/// @brief Field k_unTrackedDeviceIndexOther offset 0
static constexpr uint32_t  k_unTrackedDeviceIndexOther{4294967294u};

/// @brief Field k_unTrackedDeviceIndexInvalid offset 0
static constexpr uint32_t  k_unTrackedDeviceIndexInvalid{4294967295u};

/// @brief Field k_ulInvalidPropertyContainer offset 0
static constexpr uint64_t  k_ulInvalidPropertyContainer{0u};

/// @brief Field k_unInvalidPropertyTag offset 0
static constexpr uint32_t  k_unInvalidPropertyTag{0u};

/// @brief Field k_ulInvalidDriverHandle offset 0
static constexpr uint64_t  k_ulInvalidDriverHandle{0u};

/// @brief Field k_unFloatPropertyTag offset 0
static constexpr uint32_t  k_unFloatPropertyTag{1u};

/// @brief Field k_unInt32PropertyTag offset 0
static constexpr uint32_t  k_unInt32PropertyTag{2u};

/// @brief Field k_unUint64PropertyTag offset 0
static constexpr uint32_t  k_unUint64PropertyTag{3u};

/// @brief Field k_unBoolPropertyTag offset 0
static constexpr uint32_t  k_unBoolPropertyTag{4u};

/// @brief Field k_unStringPropertyTag offset 0
static constexpr uint32_t  k_unStringPropertyTag{5u};

/// @brief Field k_unHmdMatrix34PropertyTag offset 0
static constexpr uint32_t  k_unHmdMatrix34PropertyTag{20u};

/// @brief Field k_unHmdMatrix44PropertyTag offset 0
static constexpr uint32_t  k_unHmdMatrix44PropertyTag{21u};

/// @brief Field k_unHmdVector3PropertyTag offset 0
static constexpr uint32_t  k_unHmdVector3PropertyTag{22u};

/// @brief Field k_unHmdVector4PropertyTag offset 0
static constexpr uint32_t  k_unHmdVector4PropertyTag{23u};

/// @brief Field k_unHiddenAreaPropertyTag offset 0
static constexpr uint32_t  k_unHiddenAreaPropertyTag{30u};

/// @brief Field k_unPathHandleInfoTag offset 0
static constexpr uint32_t  k_unPathHandleInfoTag{31u};

/// @brief Field k_unActionPropertyTag offset 0
static constexpr uint32_t  k_unActionPropertyTag{32u};

/// @brief Field k_unInputValuePropertyTag offset 0
static constexpr uint32_t  k_unInputValuePropertyTag{33u};

/// @brief Field k_unWildcardPropertyTag offset 0
static constexpr uint32_t  k_unWildcardPropertyTag{34u};

/// @brief Field k_unHapticVibrationPropertyTag offset 0
static constexpr uint32_t  k_unHapticVibrationPropertyTag{35u};

/// @brief Field k_unSkeletonPropertyTag offset 0
static constexpr uint32_t  k_unSkeletonPropertyTag{36u};

/// @brief Field k_unSpatialAnchorPosePropertyTag offset 0
static constexpr uint32_t  k_unSpatialAnchorPosePropertyTag{40u};

/// @brief Field k_unOpenVRInternalReserved_Start offset 0
static constexpr uint32_t  k_unOpenVRInternalReserved_Start{1000u};

/// @brief Field k_unOpenVRInternalReserved_End offset 0
static constexpr uint32_t  k_unOpenVRInternalReserved_End{10000u};

/// @brief Field k_unMaxPropertyStringSize offset 0
static constexpr uint32_t  k_unMaxPropertyStringSize{32768u};

/// @brief Field k_ulInvalidActionHandle offset 0
static constexpr uint64_t  k_ulInvalidActionHandle{0u};

/// @brief Field k_ulInvalidActionSetHandle offset 0
static constexpr uint64_t  k_ulInvalidActionSetHandle{0u};

/// @brief Field k_ulInvalidInputValueHandle offset 0
static constexpr uint64_t  k_ulInvalidInputValueHandle{0u};

/// @brief Field k_unControllerStateAxisCount offset 0
static constexpr uint32_t  k_unControllerStateAxisCount{5u};

/// @brief Field k_ulOverlayHandleInvalid offset 0
static constexpr uint64_t  k_ulOverlayHandleInvalid{0u};

/// @brief Field k_unScreenshotHandleInvalid offset 0
static constexpr uint32_t  k_unScreenshotHandleInvalid{0u};

/// @brief Field IVRSystem_Version offset 0
static constexpr ::ConstString  IVRSystem_Version{u"IVRSystem_019"};

/// @brief Field IVRExtendedDisplay_Version offset 0
static constexpr ::ConstString  IVRExtendedDisplay_Version{u"IVRExtendedDisplay_001"};

/// @brief Field IVRTrackedCamera_Version offset 0
static constexpr ::ConstString  IVRTrackedCamera_Version{u"IVRTrackedCamera_003"};

/// @brief Field k_unMaxApplicationKeyLength offset 0
static constexpr uint32_t  k_unMaxApplicationKeyLength{128u};

/// @brief Field k_pch_MimeType_HomeApp offset 0
static constexpr ::ConstString  k_pch_MimeType_HomeApp{u"vr/home"};

/// @brief Field k_pch_MimeType_GameTheater offset 0
static constexpr ::ConstString  k_pch_MimeType_GameTheater{u"vr/game_theater"};

/// @brief Field IVRApplications_Version offset 0
static constexpr ::ConstString  IVRApplications_Version{u"IVRApplications_006"};

/// @brief Field IVRChaperone_Version offset 0
static constexpr ::ConstString  IVRChaperone_Version{u"IVRChaperone_003"};

/// @brief Field IVRChaperoneSetup_Version offset 0
static constexpr ::ConstString  IVRChaperoneSetup_Version{u"IVRChaperoneSetup_005"};

/// @brief Field IVRCompositor_Version offset 0
static constexpr ::ConstString  IVRCompositor_Version{u"IVRCompositor_022"};

/// @brief Field k_unVROverlayMaxKeyLength offset 0
static constexpr uint32_t  k_unVROverlayMaxKeyLength{128u};

/// @brief Field k_unVROverlayMaxNameLength offset 0
static constexpr uint32_t  k_unVROverlayMaxNameLength{128u};

/// @brief Field k_unMaxOverlayCount offset 0
static constexpr uint32_t  k_unMaxOverlayCount{64u};

/// @brief Field k_unMaxOverlayIntersectionMaskPrimitivesCount offset 0
static constexpr uint32_t  k_unMaxOverlayIntersectionMaskPrimitivesCount{32u};

/// @brief Field IVROverlay_Version offset 0
static constexpr ::ConstString  IVROverlay_Version{u"IVROverlay_018"};

/// @brief Field k_pch_Controller_Component_GDC2015 offset 0
static constexpr ::ConstString  k_pch_Controller_Component_GDC2015{u"gdc2015"};

/// @brief Field k_pch_Controller_Component_Base offset 0
static constexpr ::ConstString  k_pch_Controller_Component_Base{u"base"};

/// @brief Field k_pch_Controller_Component_Tip offset 0
static constexpr ::ConstString  k_pch_Controller_Component_Tip{u"tip"};

/// @brief Field k_pch_Controller_Component_HandGrip offset 0
static constexpr ::ConstString  k_pch_Controller_Component_HandGrip{u"handgrip"};

/// @brief Field k_pch_Controller_Component_Status offset 0
static constexpr ::ConstString  k_pch_Controller_Component_Status{u"status"};

/// @brief Field IVRRenderModels_Version offset 0
static constexpr ::ConstString  IVRRenderModels_Version{u"IVRRenderModels_006"};

/// @brief Field k_unNotificationTextMaxSize offset 0
static constexpr uint32_t  k_unNotificationTextMaxSize{256u};

/// @brief Field IVRNotifications_Version offset 0
static constexpr ::ConstString  IVRNotifications_Version{u"IVRNotifications_002"};

/// @brief Field k_unMaxSettingsKeyLength offset 0
static constexpr uint32_t  k_unMaxSettingsKeyLength{128u};

/// @brief Field IVRSettings_Version offset 0
static constexpr ::ConstString  IVRSettings_Version{u"IVRSettings_002"};

/// @brief Field k_pch_SteamVR_Section offset 0
static constexpr ::ConstString  k_pch_SteamVR_Section{u"steamvr"};

/// @brief Field k_pch_SteamVR_RequireHmd_String offset 0
static constexpr ::ConstString  k_pch_SteamVR_RequireHmd_String{u"requireHmd"};

/// @brief Field k_pch_SteamVR_ForcedDriverKey_String offset 0
static constexpr ::ConstString  k_pch_SteamVR_ForcedDriverKey_String{u"forcedDriver"};

/// @brief Field k_pch_SteamVR_ForcedHmdKey_String offset 0
static constexpr ::ConstString  k_pch_SteamVR_ForcedHmdKey_String{u"forcedHmd"};

/// @brief Field k_pch_SteamVR_DisplayDebug_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_DisplayDebug_Bool{u"displayDebug"};

/// @brief Field k_pch_SteamVR_DebugProcessPipe_String offset 0
static constexpr ::ConstString  k_pch_SteamVR_DebugProcessPipe_String{u"debugProcessPipe"};

/// @brief Field k_pch_SteamVR_DisplayDebugX_Int32 offset 0
static constexpr ::ConstString  k_pch_SteamVR_DisplayDebugX_Int32{u"displayDebugX"};

/// @brief Field k_pch_SteamVR_DisplayDebugY_Int32 offset 0
static constexpr ::ConstString  k_pch_SteamVR_DisplayDebugY_Int32{u"displayDebugY"};

/// @brief Field k_pch_SteamVR_SendSystemButtonToAllApps_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_SendSystemButtonToAllApps_Bool{u"sendSystemButtonToAllApps"};

/// @brief Field k_pch_SteamVR_LogLevel_Int32 offset 0
static constexpr ::ConstString  k_pch_SteamVR_LogLevel_Int32{u"loglevel"};

/// @brief Field k_pch_SteamVR_IPD_Float offset 0
static constexpr ::ConstString  k_pch_SteamVR_IPD_Float{u"ipd"};

/// @brief Field k_pch_SteamVR_Background_String offset 0
static constexpr ::ConstString  k_pch_SteamVR_Background_String{u"background"};

/// @brief Field k_pch_SteamVR_BackgroundUseDomeProjection_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_BackgroundUseDomeProjection_Bool{u"backgroundUseDomeProjection"};

/// @brief Field k_pch_SteamVR_BackgroundCameraHeight_Float offset 0
static constexpr ::ConstString  k_pch_SteamVR_BackgroundCameraHeight_Float{u"backgroundCameraHeight"};

/// @brief Field k_pch_SteamVR_BackgroundDomeRadius_Float offset 0
static constexpr ::ConstString  k_pch_SteamVR_BackgroundDomeRadius_Float{u"backgroundDomeRadius"};

/// @brief Field k_pch_SteamVR_GridColor_String offset 0
static constexpr ::ConstString  k_pch_SteamVR_GridColor_String{u"gridColor"};

/// @brief Field k_pch_SteamVR_PlayAreaColor_String offset 0
static constexpr ::ConstString  k_pch_SteamVR_PlayAreaColor_String{u"playAreaColor"};

/// @brief Field k_pch_SteamVR_ShowStage_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_ShowStage_Bool{u"showStage"};

/// @brief Field k_pch_SteamVR_ActivateMultipleDrivers_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_ActivateMultipleDrivers_Bool{u"activateMultipleDrivers"};

/// @brief Field k_pch_SteamVR_DirectMode_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_DirectMode_Bool{u"directMode"};

/// @brief Field k_pch_SteamVR_DirectModeEdidVid_Int32 offset 0
static constexpr ::ConstString  k_pch_SteamVR_DirectModeEdidVid_Int32{u"directModeEdidVid"};

/// @brief Field k_pch_SteamVR_DirectModeEdidPid_Int32 offset 0
static constexpr ::ConstString  k_pch_SteamVR_DirectModeEdidPid_Int32{u"directModeEdidPid"};

/// @brief Field k_pch_SteamVR_UsingSpeakers_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_UsingSpeakers_Bool{u"usingSpeakers"};

/// @brief Field k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float offset 0
static constexpr ::ConstString  k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float{u"speakersForwardYawOffsetDegrees"};

/// @brief Field k_pch_SteamVR_BaseStationPowerManagement_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_BaseStationPowerManagement_Bool{u"basestationPowerManagement"};

/// @brief Field k_pch_SteamVR_NeverKillProcesses_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_NeverKillProcesses_Bool{u"neverKillProcesses"};

/// @brief Field k_pch_SteamVR_SupersampleScale_Float offset 0
static constexpr ::ConstString  k_pch_SteamVR_SupersampleScale_Float{u"supersampleScale"};

/// @brief Field k_pch_SteamVR_AllowAsyncReprojection_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_AllowAsyncReprojection_Bool{u"allowAsyncReprojection"};

/// @brief Field k_pch_SteamVR_AllowReprojection_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_AllowReprojection_Bool{u"allowInterleavedReprojection"};

/// @brief Field k_pch_SteamVR_ForceReprojection_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_ForceReprojection_Bool{u"forceReprojection"};

/// @brief Field k_pch_SteamVR_ForceFadeOnBadTracking_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_ForceFadeOnBadTracking_Bool{u"forceFadeOnBadTracking"};

/// @brief Field k_pch_SteamVR_DefaultMirrorView_Int32 offset 0
static constexpr ::ConstString  k_pch_SteamVR_DefaultMirrorView_Int32{u"defaultMirrorView"};

/// @brief Field k_pch_SteamVR_ShowMirrorView_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_ShowMirrorView_Bool{u"showMirrorView"};

/// @brief Field k_pch_SteamVR_MirrorViewGeometry_String offset 0
static constexpr ::ConstString  k_pch_SteamVR_MirrorViewGeometry_String{u"mirrorViewGeometry"};

/// @brief Field k_pch_SteamVR_StartMonitorFromAppLaunch offset 0
static constexpr ::ConstString  k_pch_SteamVR_StartMonitorFromAppLaunch{u"startMonitorFromAppLaunch"};

/// @brief Field k_pch_SteamVR_StartCompositorFromAppLaunch_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_StartCompositorFromAppLaunch_Bool{u"startCompositorFromAppLaunch"};

/// @brief Field k_pch_SteamVR_StartDashboardFromAppLaunch_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_StartDashboardFromAppLaunch_Bool{u"startDashboardFromAppLaunch"};

/// @brief Field k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool{u"startOverlayAppsFromDashboard"};

/// @brief Field k_pch_SteamVR_EnableHomeApp offset 0
static constexpr ::ConstString  k_pch_SteamVR_EnableHomeApp{u"enableHomeApp"};

/// @brief Field k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32 offset 0
static constexpr ::ConstString  k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32{u"CycleBackgroundImageTimeSec"};

/// @brief Field k_pch_SteamVR_RetailDemo_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_RetailDemo_Bool{u"retailDemo"};

/// @brief Field k_pch_SteamVR_IpdOffset_Float offset 0
static constexpr ::ConstString  k_pch_SteamVR_IpdOffset_Float{u"ipdOffset"};

/// @brief Field k_pch_SteamVR_AllowSupersampleFiltering_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_AllowSupersampleFiltering_Bool{u"allowSupersampleFiltering"};

/// @brief Field k_pch_SteamVR_SupersampleManualOverride_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_SupersampleManualOverride_Bool{u"supersampleManualOverride"};

/// @brief Field k_pch_SteamVR_EnableLinuxVulkanAsync_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_EnableLinuxVulkanAsync_Bool{u"enableLinuxVulkanAsync"};

/// @brief Field k_pch_SteamVR_AllowDisplayLockedMode_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_AllowDisplayLockedMode_Bool{u"allowDisplayLockedMode"};

/// @brief Field k_pch_SteamVR_HaveStartedTutorialForNativeChaperoneDriver_Bool offset 0
static constexpr ::ConstString  k_pch_SteamVR_HaveStartedTutorialForNativeChaperoneDriver_Bool{u"haveStartedTutorialForNativeChaperoneDriver"};

/// @brief Field k_pch_SteamVR_ForceWindows32bitVRMonitor offset 0
static constexpr ::ConstString  k_pch_SteamVR_ForceWindows32bitVRMonitor{u"forceWindows32BitVRMonitor"};

/// @brief Field k_pch_SteamVR_DebugInput offset 0
static constexpr ::ConstString  k_pch_SteamVR_DebugInput{u"debugInput"};

/// @brief Field k_pch_SteamVR_LegacyInputRebinding offset 0
static constexpr ::ConstString  k_pch_SteamVR_LegacyInputRebinding{u"legacyInputRebinding"};

/// @brief Field k_pch_SteamVR_DebugInputBinding offset 0
static constexpr ::ConstString  k_pch_SteamVR_DebugInputBinding{u"debugInputBinding"};

/// @brief Field k_pch_SteamVR_InputBindingUIBlock offset 0
static constexpr ::ConstString  k_pch_SteamVR_InputBindingUIBlock{u"inputBindingUI"};

/// @brief Field k_pch_SteamVR_RenderCameraMode offset 0
static constexpr ::ConstString  k_pch_SteamVR_RenderCameraMode{u"renderCameraMode"};

/// @brief Field k_pch_Lighthouse_Section offset 0
static constexpr ::ConstString  k_pch_Lighthouse_Section{u"driver_lighthouse"};

/// @brief Field k_pch_Lighthouse_DisableIMU_Bool offset 0
static constexpr ::ConstString  k_pch_Lighthouse_DisableIMU_Bool{u"disableimu"};

/// @brief Field k_pch_Lighthouse_DisableIMUExceptHMD_Bool offset 0
static constexpr ::ConstString  k_pch_Lighthouse_DisableIMUExceptHMD_Bool{u"disableimuexcepthmd"};

/// @brief Field k_pch_Lighthouse_UseDisambiguation_String offset 0
static constexpr ::ConstString  k_pch_Lighthouse_UseDisambiguation_String{u"usedisambiguation"};

/// @brief Field k_pch_Lighthouse_DisambiguationDebug_Int32 offset 0
static constexpr ::ConstString  k_pch_Lighthouse_DisambiguationDebug_Int32{u"disambiguationdebug"};

/// @brief Field k_pch_Lighthouse_PrimaryBasestation_Int32 offset 0
static constexpr ::ConstString  k_pch_Lighthouse_PrimaryBasestation_Int32{u"primarybasestation"};

/// @brief Field k_pch_Lighthouse_DBHistory_Bool offset 0
static constexpr ::ConstString  k_pch_Lighthouse_DBHistory_Bool{u"dbhistory"};

/// @brief Field k_pch_Lighthouse_EnableBluetooth_Bool offset 0
static constexpr ::ConstString  k_pch_Lighthouse_EnableBluetooth_Bool{u"enableBluetooth"};

/// @brief Field k_pch_Lighthouse_PowerManagedBaseStations_String offset 0
static constexpr ::ConstString  k_pch_Lighthouse_PowerManagedBaseStations_String{u"PowerManagedBaseStations"};

/// @brief Field k_pch_Null_Section offset 0
static constexpr ::ConstString  k_pch_Null_Section{u"driver_null"};

/// @brief Field k_pch_Null_SerialNumber_String offset 0
static constexpr ::ConstString  k_pch_Null_SerialNumber_String{u"serialNumber"};

/// @brief Field k_pch_Null_ModelNumber_String offset 0
static constexpr ::ConstString  k_pch_Null_ModelNumber_String{u"modelNumber"};

/// @brief Field k_pch_Null_WindowX_Int32 offset 0
static constexpr ::ConstString  k_pch_Null_WindowX_Int32{u"windowX"};

/// @brief Field k_pch_Null_WindowY_Int32 offset 0
static constexpr ::ConstString  k_pch_Null_WindowY_Int32{u"windowY"};

/// @brief Field k_pch_Null_WindowWidth_Int32 offset 0
static constexpr ::ConstString  k_pch_Null_WindowWidth_Int32{u"windowWidth"};

/// @brief Field k_pch_Null_WindowHeight_Int32 offset 0
static constexpr ::ConstString  k_pch_Null_WindowHeight_Int32{u"windowHeight"};

/// @brief Field k_pch_Null_RenderWidth_Int32 offset 0
static constexpr ::ConstString  k_pch_Null_RenderWidth_Int32{u"renderWidth"};

/// @brief Field k_pch_Null_RenderHeight_Int32 offset 0
static constexpr ::ConstString  k_pch_Null_RenderHeight_Int32{u"renderHeight"};

/// @brief Field k_pch_Null_SecondsFromVsyncToPhotons_Float offset 0
static constexpr ::ConstString  k_pch_Null_SecondsFromVsyncToPhotons_Float{u"secondsFromVsyncToPhotons"};

/// @brief Field k_pch_Null_DisplayFrequency_Float offset 0
static constexpr ::ConstString  k_pch_Null_DisplayFrequency_Float{u"displayFrequency"};

/// @brief Field k_pch_UserInterface_Section offset 0
static constexpr ::ConstString  k_pch_UserInterface_Section{u"userinterface"};

/// @brief Field k_pch_UserInterface_StatusAlwaysOnTop_Bool offset 0
static constexpr ::ConstString  k_pch_UserInterface_StatusAlwaysOnTop_Bool{u"StatusAlwaysOnTop"};

/// @brief Field k_pch_UserInterface_MinimizeToTray_Bool offset 0
static constexpr ::ConstString  k_pch_UserInterface_MinimizeToTray_Bool{u"MinimizeToTray"};

/// @brief Field k_pch_UserInterface_Screenshots_Bool offset 0
static constexpr ::ConstString  k_pch_UserInterface_Screenshots_Bool{u"screenshots"};

/// @brief Field k_pch_UserInterface_ScreenshotType_Int offset 0
static constexpr ::ConstString  k_pch_UserInterface_ScreenshotType_Int{u"screenshotType"};

/// @brief Field k_pch_Notifications_Section offset 0
static constexpr ::ConstString  k_pch_Notifications_Section{u"notifications"};

/// @brief Field k_pch_Notifications_DoNotDisturb_Bool offset 0
static constexpr ::ConstString  k_pch_Notifications_DoNotDisturb_Bool{u"DoNotDisturb"};

/// @brief Field k_pch_Keyboard_Section offset 0
static constexpr ::ConstString  k_pch_Keyboard_Section{u"keyboard"};

/// @brief Field k_pch_Keyboard_TutorialCompletions offset 0
static constexpr ::ConstString  k_pch_Keyboard_TutorialCompletions{u"TutorialCompletions"};

/// @brief Field k_pch_Keyboard_ScaleX offset 0
static constexpr ::ConstString  k_pch_Keyboard_ScaleX{u"ScaleX"};

/// @brief Field k_pch_Keyboard_ScaleY offset 0
static constexpr ::ConstString  k_pch_Keyboard_ScaleY{u"ScaleY"};

/// @brief Field k_pch_Keyboard_OffsetLeftX offset 0
static constexpr ::ConstString  k_pch_Keyboard_OffsetLeftX{u"OffsetLeftX"};

/// @brief Field k_pch_Keyboard_OffsetRightX offset 0
static constexpr ::ConstString  k_pch_Keyboard_OffsetRightX{u"OffsetRightX"};

/// @brief Field k_pch_Keyboard_OffsetY offset 0
static constexpr ::ConstString  k_pch_Keyboard_OffsetY{u"OffsetY"};

/// @brief Field k_pch_Keyboard_Smoothing offset 0
static constexpr ::ConstString  k_pch_Keyboard_Smoothing{u"Smoothing"};

/// @brief Field k_pch_Perf_Section offset 0
static constexpr ::ConstString  k_pch_Perf_Section{u"perfcheck"};

/// @brief Field k_pch_Perf_HeuristicActive_Bool offset 0
static constexpr ::ConstString  k_pch_Perf_HeuristicActive_Bool{u"heuristicActive"};

/// @brief Field k_pch_Perf_NotifyInHMD_Bool offset 0
static constexpr ::ConstString  k_pch_Perf_NotifyInHMD_Bool{u"warnInHMD"};

/// @brief Field k_pch_Perf_NotifyOnlyOnce_Bool offset 0
static constexpr ::ConstString  k_pch_Perf_NotifyOnlyOnce_Bool{u"warnOnlyOnce"};

/// @brief Field k_pch_Perf_AllowTimingStore_Bool offset 0
static constexpr ::ConstString  k_pch_Perf_AllowTimingStore_Bool{u"allowTimingStore"};

/// @brief Field k_pch_Perf_SaveTimingsOnExit_Bool offset 0
static constexpr ::ConstString  k_pch_Perf_SaveTimingsOnExit_Bool{u"saveTimingsOnExit"};

/// @brief Field k_pch_Perf_TestData_Float offset 0
static constexpr ::ConstString  k_pch_Perf_TestData_Float{u"perfTestData"};

/// @brief Field k_pch_Perf_LinuxGPUProfiling_Bool offset 0
static constexpr ::ConstString  k_pch_Perf_LinuxGPUProfiling_Bool{u"linuxGPUProfiling"};

/// @brief Field k_pch_CollisionBounds_Section offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_Section{u"collisionBounds"};

/// @brief Field k_pch_CollisionBounds_Style_Int32 offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_Style_Int32{u"CollisionBoundsStyle"};

/// @brief Field k_pch_CollisionBounds_GroundPerimeterOn_Bool offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_GroundPerimeterOn_Bool{u"CollisionBoundsGroundPerimeterOn"};

/// @brief Field k_pch_CollisionBounds_CenterMarkerOn_Bool offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_CenterMarkerOn_Bool{u"CollisionBoundsCenterMarkerOn"};

/// @brief Field k_pch_CollisionBounds_PlaySpaceOn_Bool offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_PlaySpaceOn_Bool{u"CollisionBoundsPlaySpaceOn"};

/// @brief Field k_pch_CollisionBounds_FadeDistance_Float offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_FadeDistance_Float{u"CollisionBoundsFadeDistance"};

/// @brief Field k_pch_CollisionBounds_ColorGammaR_Int32 offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_ColorGammaR_Int32{u"CollisionBoundsColorGammaR"};

/// @brief Field k_pch_CollisionBounds_ColorGammaG_Int32 offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_ColorGammaG_Int32{u"CollisionBoundsColorGammaG"};

/// @brief Field k_pch_CollisionBounds_ColorGammaB_Int32 offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_ColorGammaB_Int32{u"CollisionBoundsColorGammaB"};

/// @brief Field k_pch_CollisionBounds_ColorGammaA_Int32 offset 0
static constexpr ::ConstString  k_pch_CollisionBounds_ColorGammaA_Int32{u"CollisionBoundsColorGammaA"};

/// @brief Field k_pch_Camera_Section offset 0
static constexpr ::ConstString  k_pch_Camera_Section{u"camera"};

/// @brief Field k_pch_Camera_EnableCamera_Bool offset 0
static constexpr ::ConstString  k_pch_Camera_EnableCamera_Bool{u"enableCamera"};

/// @brief Field k_pch_Camera_EnableCameraInDashboard_Bool offset 0
static constexpr ::ConstString  k_pch_Camera_EnableCameraInDashboard_Bool{u"enableCameraInDashboard"};

/// @brief Field k_pch_Camera_EnableCameraForCollisionBounds_Bool offset 0
static constexpr ::ConstString  k_pch_Camera_EnableCameraForCollisionBounds_Bool{u"enableCameraForCollisionBounds"};

/// @brief Field k_pch_Camera_EnableCameraForRoomView_Bool offset 0
static constexpr ::ConstString  k_pch_Camera_EnableCameraForRoomView_Bool{u"enableCameraForRoomView"};

/// @brief Field k_pch_Camera_BoundsColorGammaR_Int32 offset 0
static constexpr ::ConstString  k_pch_Camera_BoundsColorGammaR_Int32{u"cameraBoundsColorGammaR"};

/// @brief Field k_pch_Camera_BoundsColorGammaG_Int32 offset 0
static constexpr ::ConstString  k_pch_Camera_BoundsColorGammaG_Int32{u"cameraBoundsColorGammaG"};

/// @brief Field k_pch_Camera_BoundsColorGammaB_Int32 offset 0
static constexpr ::ConstString  k_pch_Camera_BoundsColorGammaB_Int32{u"cameraBoundsColorGammaB"};

/// @brief Field k_pch_Camera_BoundsColorGammaA_Int32 offset 0
static constexpr ::ConstString  k_pch_Camera_BoundsColorGammaA_Int32{u"cameraBoundsColorGammaA"};

/// @brief Field k_pch_Camera_BoundsStrength_Int32 offset 0
static constexpr ::ConstString  k_pch_Camera_BoundsStrength_Int32{u"cameraBoundsStrength"};

/// @brief Field k_pch_Camera_RoomViewMode_Int32 offset 0
static constexpr ::ConstString  k_pch_Camera_RoomViewMode_Int32{u"cameraRoomViewMode"};

/// @brief Field k_pch_audio_Section offset 0
static constexpr ::ConstString  k_pch_audio_Section{u"audio"};

/// @brief Field k_pch_audio_OnPlaybackDevice_String offset 0
static constexpr ::ConstString  k_pch_audio_OnPlaybackDevice_String{u"onPlaybackDevice"};

/// @brief Field k_pch_audio_OnRecordDevice_String offset 0
static constexpr ::ConstString  k_pch_audio_OnRecordDevice_String{u"onRecordDevice"};

/// @brief Field k_pch_audio_OnPlaybackMirrorDevice_String offset 0
static constexpr ::ConstString  k_pch_audio_OnPlaybackMirrorDevice_String{u"onPlaybackMirrorDevice"};

/// @brief Field k_pch_audio_OffPlaybackDevice_String offset 0
static constexpr ::ConstString  k_pch_audio_OffPlaybackDevice_String{u"offPlaybackDevice"};

/// @brief Field k_pch_audio_OffRecordDevice_String offset 0
static constexpr ::ConstString  k_pch_audio_OffRecordDevice_String{u"offRecordDevice"};

/// @brief Field k_pch_audio_VIVEHDMIGain offset 0
static constexpr ::ConstString  k_pch_audio_VIVEHDMIGain{u"viveHDMIGain"};

/// @brief Field k_pch_Power_Section offset 0
static constexpr ::ConstString  k_pch_Power_Section{u"power"};

/// @brief Field k_pch_Power_PowerOffOnExit_Bool offset 0
static constexpr ::ConstString  k_pch_Power_PowerOffOnExit_Bool{u"powerOffOnExit"};

/// @brief Field k_pch_Power_TurnOffScreensTimeout_Float offset 0
static constexpr ::ConstString  k_pch_Power_TurnOffScreensTimeout_Float{u"turnOffScreensTimeout"};

/// @brief Field k_pch_Power_TurnOffControllersTimeout_Float offset 0
static constexpr ::ConstString  k_pch_Power_TurnOffControllersTimeout_Float{u"turnOffControllersTimeout"};

/// @brief Field k_pch_Power_ReturnToWatchdogTimeout_Float offset 0
static constexpr ::ConstString  k_pch_Power_ReturnToWatchdogTimeout_Float{u"returnToWatchdogTimeout"};

/// @brief Field k_pch_Power_AutoLaunchSteamVROnButtonPress offset 0
static constexpr ::ConstString  k_pch_Power_AutoLaunchSteamVROnButtonPress{u"autoLaunchSteamVROnButtonPress"};

/// @brief Field k_pch_Power_PauseCompositorOnStandby_Bool offset 0
static constexpr ::ConstString  k_pch_Power_PauseCompositorOnStandby_Bool{u"pauseCompositorOnStandby"};

/// @brief Field k_pch_Dashboard_Section offset 0
static constexpr ::ConstString  k_pch_Dashboard_Section{u"dashboard"};

/// @brief Field k_pch_Dashboard_EnableDashboard_Bool offset 0
static constexpr ::ConstString  k_pch_Dashboard_EnableDashboard_Bool{u"enableDashboard"};

/// @brief Field k_pch_Dashboard_ArcadeMode_Bool offset 0
static constexpr ::ConstString  k_pch_Dashboard_ArcadeMode_Bool{u"arcadeMode"};

/// @brief Field k_pch_Dashboard_EnableWebUI offset 0
static constexpr ::ConstString  k_pch_Dashboard_EnableWebUI{u"webUI"};

/// @brief Field k_pch_Dashboard_EnableWebUIDevTools offset 0
static constexpr ::ConstString  k_pch_Dashboard_EnableWebUIDevTools{u"webUIDevTools"};

/// @brief Field k_pch_Dashboard_EnableWebUIDashboardReplacement offset 0
static constexpr ::ConstString  k_pch_Dashboard_EnableWebUIDashboardReplacement{u"webUIDashboard"};

/// @brief Field k_pch_modelskin_Section offset 0
static constexpr ::ConstString  k_pch_modelskin_Section{u"modelskins"};

/// @brief Field k_pch_Driver_Enable_Bool offset 0
static constexpr ::ConstString  k_pch_Driver_Enable_Bool{u"enable"};

/// @brief Field k_pch_WebInterface_Section offset 0
static constexpr ::ConstString  k_pch_WebInterface_Section{u"WebInterface"};

/// @brief Field k_pch_WebInterface_WebEnable_Bool offset 0
static constexpr ::ConstString  k_pch_WebInterface_WebEnable_Bool{u"WebEnable"};

/// @brief Field k_pch_WebInterface_WebPort_String offset 0
static constexpr ::ConstString  k_pch_WebInterface_WebPort_String{u"WebPort"};

/// @brief Field k_pch_TrackingOverride_Section offset 0
static constexpr ::ConstString  k_pch_TrackingOverride_Section{u"TrackingOverrides"};

/// @brief Field k_pch_App_BindingAutosaveURLSuffix_String offset 0
static constexpr ::ConstString  k_pch_App_BindingAutosaveURLSuffix_String{u"AutosaveURL"};

/// @brief Field k_pch_App_BindingCurrentURLSuffix_String offset 0
static constexpr ::ConstString  k_pch_App_BindingCurrentURLSuffix_String{u"CurrentURL"};

/// @brief Field k_pch_App_NeedToUpdateAutosaveSuffix_Bool offset 0
static constexpr ::ConstString  k_pch_App_NeedToUpdateAutosaveSuffix_Bool{u"NeedToUpdateAutosave"};

/// @brief Field k_pch_App_ActionManifestURL_String offset 0
static constexpr ::ConstString  k_pch_App_ActionManifestURL_String{u"ActionManifestURL"};

/// @brief Field k_pch_Trackers_Section offset 0
static constexpr ::ConstString  k_pch_Trackers_Section{u"trackers"};

/// @brief Field IVRScreenshots_Version offset 0
static constexpr ::ConstString  IVRScreenshots_Version{u"IVRScreenshots_001"};

/// @brief Field IVRResources_Version offset 0
static constexpr ::ConstString  IVRResources_Version{u"IVRResources_001"};

/// @brief Field IVRDriverManager_Version offset 0
static constexpr ::ConstString  IVRDriverManager_Version{u"IVRDriverManager_001"};

/// @brief Field k_unMaxActionNameLength offset 0
static constexpr uint32_t  k_unMaxActionNameLength{64u};

/// @brief Field k_unMaxActionSetNameLength offset 0
static constexpr uint32_t  k_unMaxActionSetNameLength{64u};

/// @brief Field k_unMaxActionOriginCount offset 0
static constexpr uint32_t  k_unMaxActionOriginCount{16u};

/// @brief Field IVRInput_Version offset 0
static constexpr ::ConstString  IVRInput_Version{u"IVRInput_004"};

/// @brief Field k_ulInvalidIOBufferHandle offset 0
static constexpr uint64_t  k_ulInvalidIOBufferHandle{0u};

/// @brief Field IVRIOBuffer_Version offset 0
static constexpr ::ConstString  IVRIOBuffer_Version{u"IVRIOBuffer_001"};

/// @brief Field k_ulInvalidSpatialAnchorHandle offset 0
static constexpr uint32_t  k_ulInvalidSpatialAnchorHandle{0u};

/// @brief Field IVRSpatialAnchors_Version offset 0
static constexpr ::ConstString  IVRSpatialAnchors_Version{u"IVRSpatialAnchors_001"};

static uint32_t __declspec(property(get=__get__VRToken_k__BackingField, put=__set__VRToken_k__BackingField))  _VRToken_k__BackingField;

static void __set__VRToken_k__BackingField(uint32_t value) ;

static uint32_t __get__VRToken_k__BackingField() ;

/// @brief Field FnTable_Prefix offset 0
static constexpr ::ConstString  FnTable_Prefix{u"FnTable:"};

static OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext __declspec(property(get=__get__OpenVRInternal_ModuleContext, put=__set__OpenVRInternal_ModuleContext))  _OpenVRInternal_ModuleContext;

static void __set__OpenVRInternal_ModuleContext(OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext value) ;

static OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext __get__OpenVRInternal_ModuleContext() ;


// Properties

static uint32_t __declspec(property(get=get_VRToken, put=set_VRToken))  VRToken;

static OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext __declspec(property(get=get_OpenVRInternal_ModuleContext))  OpenVRInternal_ModuleContext;

static OVR::OpenVR::CVRSystem __declspec(property(get=get_System))  System;

static OVR::OpenVR::CVRChaperone __declspec(property(get=get_Chaperone))  Chaperone;

static OVR::OpenVR::CVRChaperoneSetup __declspec(property(get=get_ChaperoneSetup))  ChaperoneSetup;

static OVR::OpenVR::CVRCompositor __declspec(property(get=get_Compositor))  Compositor;

static OVR::OpenVR::CVROverlay __declspec(property(get=get_Overlay))  Overlay;

static OVR::OpenVR::CVRRenderModels __declspec(property(get=get_RenderModels))  RenderModels;

static OVR::OpenVR::CVRExtendedDisplay __declspec(property(get=get_ExtendedDisplay))  ExtendedDisplay;

static OVR::OpenVR::CVRSettings __declspec(property(get=get_Settings))  Settings;

static OVR::OpenVR::CVRApplications __declspec(property(get=get_Applications))  Applications;

static OVR::OpenVR::CVRScreenshots __declspec(property(get=get_Screenshots))  Screenshots;

static OVR::OpenVR::CVRTrackedCamera __declspec(property(get=get_TrackedCamera))  TrackedCamera;

static OVR::OpenVR::CVRInput __declspec(property(get=get_Input))  Input;

static OVR::OpenVR::CVRSpatialAnchors __declspec(property(get=get_SpatialAnchors))  SpatialAnchors;


// Methods

/// @brief Method InitInternal addr 0x26697f8 size 0x4 virtual false final false
static uint32_t InitInternal(ByRef<OVR::OpenVR::EVRInitError> peError, OVR::OpenVR::EVRApplicationType eApplicationType) ;

/// @brief Method InitInternal2 addr 0x26697fc size 0x4 virtual false final false
static uint32_t InitInternal2(ByRef<OVR::OpenVR::EVRInitError> peError, OVR::OpenVR::EVRApplicationType eApplicationType, ::StringW pchStartupInfo) ;

/// @brief Method ShutdownInternal addr 0x2669800 size 0x4 virtual false final false
static void ShutdownInternal() ;

/// @brief Method IsHmdPresent addr 0x2669804 size 0x4 virtual false final false
static bool IsHmdPresent() ;

/// @brief Method IsRuntimeInstalled addr 0x2669808 size 0x4 virtual false final false
static bool IsRuntimeInstalled() ;

/// @brief Method GetStringForHmdError addr 0x266980c size 0x68 virtual false final false
static ::StringW GetStringForHmdError(OVR::OpenVR::EVRInitError error) ;

/// @brief Method GetGenericInterface addr 0x2669874 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetGenericInterface(::StringW pchInterfaceVersion, ByRef<OVR::OpenVR::EVRInitError> peError) ;

/// @brief Method IsInterfaceVersionValid addr 0x2669878 size 0x4 virtual false final false
static bool IsInterfaceVersionValid(::StringW pchInterfaceVersion) ;

/// @brief Method GetInitToken addr 0x266987c size 0x4 virtual false final false
static uint32_t GetInitToken() ;

/// @brief Method get_VRToken addr 0x2669880 size 0x48 virtual false final false
static uint32_t get_VRToken() ;

/// @brief Method set_VRToken addr 0x26698c8 size 0x4c virtual false final false
static void set_VRToken(uint32_t value) ;

/// @brief Method get_OpenVRInternal_ModuleContext addr 0x2669914 size 0xa0 virtual false final false
static OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext get_OpenVRInternal_ModuleContext() ;

/// @brief Method get_System addr 0x26699e0 size 0x18 virtual false final false
static OVR::OpenVR::CVRSystem get_System() ;

/// @brief Method get_Chaperone addr 0x2669adc size 0x18 virtual false final false
static OVR::OpenVR::CVRChaperone get_Chaperone() ;

/// @brief Method get_ChaperoneSetup addr 0x2669bd8 size 0x18 virtual false final false
static OVR::OpenVR::CVRChaperoneSetup get_ChaperoneSetup() ;

/// @brief Method get_Compositor addr 0x2669cd4 size 0x18 virtual false final false
static OVR::OpenVR::CVRCompositor get_Compositor() ;

/// @brief Method get_Overlay addr 0x2669dd0 size 0x18 virtual false final false
static OVR::OpenVR::CVROverlay get_Overlay() ;

/// @brief Method get_RenderModels addr 0x2669ecc size 0x18 virtual false final false
static OVR::OpenVR::CVRRenderModels get_RenderModels() ;

/// @brief Method get_ExtendedDisplay addr 0x2669fc8 size 0x18 virtual false final false
static OVR::OpenVR::CVRExtendedDisplay get_ExtendedDisplay() ;

/// @brief Method get_Settings addr 0x266a0c4 size 0x18 virtual false final false
static OVR::OpenVR::CVRSettings get_Settings() ;

/// @brief Method get_Applications addr 0x266a1c0 size 0x18 virtual false final false
static OVR::OpenVR::CVRApplications get_Applications() ;

/// @brief Method get_Screenshots addr 0x266a2bc size 0x18 virtual false final false
static OVR::OpenVR::CVRScreenshots get_Screenshots() ;

/// @brief Method get_TrackedCamera addr 0x266a3b8 size 0x18 virtual false final false
static OVR::OpenVR::CVRTrackedCamera get_TrackedCamera() ;

/// @brief Method get_Input addr 0x266a4b4 size 0x18 virtual false final false
static OVR::OpenVR::CVRInput get_Input() ;

/// @brief Method get_SpatialAnchors addr 0x266a5b0 size 0x18 virtual false final false
static OVR::OpenVR::CVRSpatialAnchors get_SpatialAnchors() ;

/// @brief Method Init addr 0x266a6ac size 0x18c virtual false final false
static OVR::OpenVR::CVRSystem Init(ByRef<OVR::OpenVR::EVRInitError> peError, OVR::OpenVR::EVRApplicationType eApplicationType, ::StringW pchStartupInfo) ;

/// @brief Method Shutdown addr 0x266a850 size 0x4 virtual false final false
static void Shutdown() ;

static OVR::OpenVR::OpenVR New_ctor() ;

/// @brief Method .ctor addr 0x266a854 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__OpenVR__COpenVRContext, "OVR.OpenVR", "OpenVR/COpenVRContext");
NEED_NO_BOX(OVR::OpenVR::OpenVR);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OpenVR, "OVR.OpenVR", "OpenVR");
