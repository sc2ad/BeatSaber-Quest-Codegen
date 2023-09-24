#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct DistortionCoordinates_t;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct ETrackedPropertyError;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace OVR::OpenVR {
struct EVRButtonId;
}
namespace OVR::OpenVR {
struct EVRControllerAxisType;
}
namespace OVR::OpenVR {
struct ETrackedControllerRole;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVREventType;
}
namespace OVR::OpenVR {
struct HiddenAreaMesh_t;
}
namespace OVR::OpenVR {
struct EHiddenAreaMeshType;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
struct ETrackedDeviceClass;
}
namespace OVR::OpenVR {
struct EDeviceActivityLevel;
}
namespace OVR::OpenVR {
struct EVRFirmwareError;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ApplyTransform;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetProjectionRaw;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ShouldApplicationPause;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ComputeDistortion;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___IsDisplayOnDesktop;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___SetDisplayVisibility;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ResetSeatedZeroPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___IsInputAvailable;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___PollNextEventWithPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___PerformFirmwareUpdate;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___PollNextEvent;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetProjectionMatrix;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetOutputDevice;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetTrackedDeviceClass;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___TriggerHapticPulse;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerState;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___DriverDebugRequest;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetHiddenAreaMesh;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetEyeToHeadTransform;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ApplyTransform;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ComputeDistortion;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___DriverDebugRequest;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerState;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetEyeToHeadTransform;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetHiddenAreaMesh;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetOutputDevice;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetProjectionMatrix;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetProjectionRaw;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetTrackedDeviceClass;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___IsDisplayOnDesktop;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___IsInputAvailable;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___PerformFirmwareUpdate;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___PollNextEvent;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___PollNextEventWithPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ResetSeatedZeroPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___SetDisplayVisibility;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ShouldApplicationPause;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___TriggerHapticPulse;
}
namespace OVR::OpenVR {
struct IVRSystem;
}
// Type: ::_GetRecommendedRenderTargetSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9000))
// CS Name: OVR.OpenVR.IVRSystem::_GetRecommendedRenderTargetSize
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize(OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize(OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize& operator=(OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize& operator=(OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2641878 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2641950 size 0x14 virtual true final false
 void Invoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) ;

/// @brief Method BeginInvoke addr 0x2641964 size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2641a08 size 0x24 virtual true final false
 void EndInvoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetProjectionMatrix
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9001))
// CS Name: OVR.OpenVR.IVRSystem::_GetProjectionMatrix
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetProjectionMatrix : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetProjectionMatrix() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetProjectionMatrix", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetProjectionMatrix(OVR__OpenVR__IVRSystem___GetProjectionMatrix const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetProjectionMatrix", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetProjectionMatrix(OVR__OpenVR__IVRSystem___GetProjectionMatrix&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetProjectionMatrix(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetProjectionMatrix& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetProjectionMatrix& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetProjectionMatrix& operator=(OVR__OpenVR__IVRSystem___GetProjectionMatrix&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetProjectionMatrix& operator=(OVR__OpenVR__IVRSystem___GetProjectionMatrix const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2641a2c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2641af0 size 0x14 virtual true final false
 OVR::OpenVR::HmdMatrix44_t Invoke(OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ) ;

/// @brief Method BeginInvoke addr 0x2641b04 size 0xd0 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2641bd4 size 0x38 virtual true final false
 OVR::OpenVR::HmdMatrix44_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetProjectionRaw
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9002))
// CS Name: OVR.OpenVR.IVRSystem::_GetProjectionRaw
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetProjectionRaw : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetProjectionRaw() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetProjectionRaw", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetProjectionRaw(OVR__OpenVR__IVRSystem___GetProjectionRaw const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetProjectionRaw", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetProjectionRaw(OVR__OpenVR__IVRSystem___GetProjectionRaw&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetProjectionRaw(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetProjectionRaw& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetProjectionRaw& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetProjectionRaw& operator=(OVR__OpenVR__IVRSystem___GetProjectionRaw&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetProjectionRaw& operator=(OVR__OpenVR__IVRSystem___GetProjectionRaw const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2641c0c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2641cd0 size 0x14 virtual true final false
 void Invoke(OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom) ;

/// @brief Method BeginInvoke addr 0x2641ce4 size 0x110 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2641df4 size 0x28 virtual true final false
 void EndInvoke(ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ComputeDistortion
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9003))
// CS Name: OVR.OpenVR.IVRSystem::_ComputeDistortion
class CORDL_TYPE OVR__OpenVR__IVRSystem___ComputeDistortion : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___ComputeDistortion() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ComputeDistortion", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ComputeDistortion(OVR__OpenVR__IVRSystem___ComputeDistortion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ComputeDistortion", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ComputeDistortion(OVR__OpenVR__IVRSystem___ComputeDistortion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___ComputeDistortion(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___ComputeDistortion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ComputeDistortion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ComputeDistortion& operator=(OVR__OpenVR__IVRSystem___ComputeDistortion&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___ComputeDistortion& operator=(OVR__OpenVR__IVRSystem___ComputeDistortion const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2641e1c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2641ee0 size 0x14 virtual true final false
 bool Invoke(OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates) ;

/// @brief Method BeginInvoke addr 0x2641ef4 size 0x104 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2641ff8 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetEyeToHeadTransform
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9004))
// CS Name: OVR.OpenVR.IVRSystem::_GetEyeToHeadTransform
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetEyeToHeadTransform : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetEyeToHeadTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetEyeToHeadTransform", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetEyeToHeadTransform(OVR__OpenVR__IVRSystem___GetEyeToHeadTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetEyeToHeadTransform", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetEyeToHeadTransform(OVR__OpenVR__IVRSystem___GetEyeToHeadTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetEyeToHeadTransform(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetEyeToHeadTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetEyeToHeadTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetEyeToHeadTransform& operator=(OVR__OpenVR__IVRSystem___GetEyeToHeadTransform&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetEyeToHeadTransform& operator=(OVR__OpenVR__IVRSystem___GetEyeToHeadTransform const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642024 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26420e8 size 0x14 virtual true final false
 OVR::OpenVR::HmdMatrix34_t Invoke(OVR::OpenVR::EVREye eEye) ;

/// @brief Method BeginInvoke addr 0x26420fc size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVREye eEye, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642180 size 0x38 virtual true final false
 OVR::OpenVR::HmdMatrix34_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetTimeSinceLastVsync
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9005))
// CS Name: OVR.OpenVR.IVRSystem::_GetTimeSinceLastVsync
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync(OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync(OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync& operator=(OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync& operator=(OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26421b8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642290 size 0x14 virtual true final false
 bool Invoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter) ;

/// @brief Method BeginInvoke addr 0x26422a4 size 0xc0 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642364 size 0x34 virtual true final false
 bool EndInvoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetD3D9AdapterIndex
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9006))
// CS Name: OVR.OpenVR.IVRSystem::_GetD3D9AdapterIndex
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex(OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex(OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex& operator=(OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex& operator=(OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642398 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642454 size 0x14 virtual true final false
 int32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x2642468 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642488 size 0x28 virtual true final false
 int32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetDXGIOutputInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9007))
// CS Name: OVR.OpenVR.IVRSystem::_GetDXGIOutputInfo
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetDXGIOutputInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetDXGIOutputInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetDXGIOutputInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetDXGIOutputInfo(OVR__OpenVR__IVRSystem___GetDXGIOutputInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetDXGIOutputInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetDXGIOutputInfo(OVR__OpenVR__IVRSystem___GetDXGIOutputInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetDXGIOutputInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetDXGIOutputInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetDXGIOutputInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetDXGIOutputInfo& operator=(OVR__OpenVR__IVRSystem___GetDXGIOutputInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetDXGIOutputInfo& operator=(OVR__OpenVR__IVRSystem___GetDXGIOutputInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26424b0 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642584 size 0x14 virtual true final false
 void Invoke(ByRef<int32_t> pnAdapterIndex) ;

/// @brief Method BeginInvoke addr 0x2642598 size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<int32_t> pnAdapterIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642624 size 0x1c virtual true final false
 void EndInvoke(ByRef<int32_t> pnAdapterIndex, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOutputDevice
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9008))
// CS Name: OVR.OpenVR.IVRSystem::_GetOutputDevice
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetOutputDevice : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetOutputDevice() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetOutputDevice", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetOutputDevice(OVR__OpenVR__IVRSystem___GetOutputDevice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetOutputDevice", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetOutputDevice(OVR__OpenVR__IVRSystem___GetOutputDevice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetOutputDevice(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetOutputDevice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetOutputDevice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetOutputDevice& operator=(OVR__OpenVR__IVRSystem___GetOutputDevice&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetOutputDevice& operator=(OVR__OpenVR__IVRSystem___GetOutputDevice const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642640 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642718 size 0x14 virtual true final false
 void Invoke(ByRef<uint64_t> pnDevice, OVR::OpenVR::ETextureType textureType, ::cordl_internals::intptr_t pInstance) ;

/// @brief Method BeginInvoke addr 0x264272c size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<uint64_t> pnDevice, OVR::OpenVR::ETextureType textureType, ::cordl_internals::intptr_t pInstance, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642814 size 0x1c virtual true final false
 void EndInvoke(ByRef<uint64_t> pnDevice, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsDisplayOnDesktop
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9009))
// CS Name: OVR.OpenVR.IVRSystem::_IsDisplayOnDesktop
class CORDL_TYPE OVR__OpenVR__IVRSystem___IsDisplayOnDesktop : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___IsDisplayOnDesktop() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___IsDisplayOnDesktop", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___IsDisplayOnDesktop(OVR__OpenVR__IVRSystem___IsDisplayOnDesktop const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___IsDisplayOnDesktop", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___IsDisplayOnDesktop(OVR__OpenVR__IVRSystem___IsDisplayOnDesktop&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___IsDisplayOnDesktop(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___IsDisplayOnDesktop& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___IsDisplayOnDesktop& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___IsDisplayOnDesktop& operator=(OVR__OpenVR__IVRSystem___IsDisplayOnDesktop&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___IsDisplayOnDesktop& operator=(OVR__OpenVR__IVRSystem___IsDisplayOnDesktop const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642830 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26428ec size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x2642900 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642920 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetDisplayVisibility
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9010))
// CS Name: OVR.OpenVR.IVRSystem::_SetDisplayVisibility
class CORDL_TYPE OVR__OpenVR__IVRSystem___SetDisplayVisibility : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___SetDisplayVisibility() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___SetDisplayVisibility", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___SetDisplayVisibility(OVR__OpenVR__IVRSystem___SetDisplayVisibility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___SetDisplayVisibility", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___SetDisplayVisibility(OVR__OpenVR__IVRSystem___SetDisplayVisibility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___SetDisplayVisibility(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___SetDisplayVisibility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___SetDisplayVisibility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___SetDisplayVisibility& operator=(OVR__OpenVR__IVRSystem___SetDisplayVisibility&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___SetDisplayVisibility& operator=(OVR__OpenVR__IVRSystem___SetDisplayVisibility const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642948 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642a0c size 0x18 virtual true final false
 bool Invoke(bool bIsVisibleOnDesktop) ;

/// @brief Method BeginInvoke addr 0x2642a24 size 0x88 virtual true final false
 System::IAsyncResult BeginInvoke(bool bIsVisibleOnDesktop, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642aac size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetDeviceToAbsoluteTrackingPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9011))
// CS Name: OVR.OpenVR.IVRSystem::_GetDeviceToAbsoluteTrackingPose
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose(OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose(OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose& operator=(OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose& operator=(OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642ad4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642b98 size 0x14 virtual true final false
 void Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount) ;

/// @brief Method BeginInvoke addr 0x2642bac size 0xf0 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642c9c size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ResetSeatedZeroPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9012))
// CS Name: OVR.OpenVR.IVRSystem::_ResetSeatedZeroPose
class CORDL_TYPE OVR__OpenVR__IVRSystem___ResetSeatedZeroPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___ResetSeatedZeroPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ResetSeatedZeroPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ResetSeatedZeroPose(OVR__OpenVR__IVRSystem___ResetSeatedZeroPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ResetSeatedZeroPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ResetSeatedZeroPose(OVR__OpenVR__IVRSystem___ResetSeatedZeroPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___ResetSeatedZeroPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___ResetSeatedZeroPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ResetSeatedZeroPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ResetSeatedZeroPose& operator=(OVR__OpenVR__IVRSystem___ResetSeatedZeroPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___ResetSeatedZeroPose& operator=(OVR__OpenVR__IVRSystem___ResetSeatedZeroPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642ca8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642d64 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x2642d78 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642d98 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9013))
// CS Name: OVR.OpenVR.IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose(OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose(OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose& operator=(OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose& operator=(OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642da4 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642e60 size 0x14 virtual true final false
 OVR::OpenVR::HmdMatrix34_t Invoke() ;

/// @brief Method BeginInvoke addr 0x2642e74 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642e94 size 0x38 virtual true final false
 OVR::OpenVR::HmdMatrix34_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetRawZeroPoseToStandingAbsoluteTrackingPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9014))
// CS Name: OVR.OpenVR.IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose(OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose(OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose& operator=(OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose& operator=(OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642ecc size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2642f88 size 0x14 virtual true final false
 OVR::OpenVR::HmdMatrix34_t Invoke() ;

/// @brief Method BeginInvoke addr 0x2642f9c size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2642fbc size 0x38 virtual true final false
 OVR::OpenVR::HmdMatrix34_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetSortedTrackedDeviceIndicesOfClass
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9015))
// CS Name: OVR.OpenVR.IVRSystem::_GetSortedTrackedDeviceIndicesOfClass
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass(OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass(OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass& operator=(OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass& operator=(OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2642ff4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26430b8 size 0x14 virtual true final false
 uint32_t Invoke(OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ByRef<::ArrayW<uint32_t>> punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex) ;

/// @brief Method BeginInvoke addr 0x26430cc size 0xd0 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ByRef<::ArrayW<uint32_t>> punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264319c size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetTrackedDeviceActivityLevel
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9016))
// CS Name: OVR.OpenVR.IVRSystem::_GetTrackedDeviceActivityLevel
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel(OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel(OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel& operator=(OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel& operator=(OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26431c4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2643288 size 0x14 virtual true final false
 OVR::OpenVR::EDeviceActivityLevel Invoke(uint32_t unDeviceId) ;

/// @brief Method BeginInvoke addr 0x264329c size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceId, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2643320 size 0x28 virtual true final false
 OVR::OpenVR::EDeviceActivityLevel EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ApplyTransform
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9017))
// CS Name: OVR.OpenVR.IVRSystem::_ApplyTransform
class CORDL_TYPE OVR__OpenVR__IVRSystem___ApplyTransform : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___ApplyTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ApplyTransform", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ApplyTransform(OVR__OpenVR__IVRSystem___ApplyTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ApplyTransform", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ApplyTransform(OVR__OpenVR__IVRSystem___ApplyTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___ApplyTransform(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___ApplyTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ApplyTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ApplyTransform& operator=(OVR__OpenVR__IVRSystem___ApplyTransform&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___ApplyTransform& operator=(OVR__OpenVR__IVRSystem___ApplyTransform const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2643348 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2643420 size 0x14 virtual true final false
 void Invoke(ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<OVR::OpenVR::HmdMatrix34_t> pTransform) ;

/// @brief Method BeginInvoke addr 0x2643434 size 0xd8 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<OVR::OpenVR::HmdMatrix34_t> pTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264350c size 0x24 virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<OVR::OpenVR::HmdMatrix34_t> pTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetTrackedDeviceIndexForControllerRole
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9018))
// CS Name: OVR.OpenVR.IVRSystem::_GetTrackedDeviceIndexForControllerRole
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole(OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole(OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole& operator=(OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole& operator=(OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2643530 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26435f4 size 0x14 virtual true final false
 uint32_t Invoke(OVR::OpenVR::ETrackedControllerRole unDeviceType) ;

/// @brief Method BeginInvoke addr 0x2643608 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::ETrackedControllerRole unDeviceType, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264368c size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetControllerRoleForTrackedDeviceIndex
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9019))
// CS Name: OVR.OpenVR.IVRSystem::_GetControllerRoleForTrackedDeviceIndex
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex(OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex(OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex& operator=(OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex& operator=(OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26436b4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2643778 size 0x14 virtual true final false
 OVR::OpenVR::ETrackedControllerRole Invoke(uint32_t unDeviceIndex) ;

/// @brief Method BeginInvoke addr 0x264378c size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2643810 size 0x28 virtual true final false
 OVR::OpenVR::ETrackedControllerRole EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetTrackedDeviceClass
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9020))
// CS Name: OVR.OpenVR.IVRSystem::_GetTrackedDeviceClass
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetTrackedDeviceClass : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetTrackedDeviceClass() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetTrackedDeviceClass", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceClass(OVR__OpenVR__IVRSystem___GetTrackedDeviceClass const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetTrackedDeviceClass", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceClass(OVR__OpenVR__IVRSystem___GetTrackedDeviceClass&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetTrackedDeviceClass(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceClass& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceClass& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceClass& operator=(OVR__OpenVR__IVRSystem___GetTrackedDeviceClass&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetTrackedDeviceClass& operator=(OVR__OpenVR__IVRSystem___GetTrackedDeviceClass const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2643838 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26438fc size 0x14 virtual true final false
 OVR::OpenVR::ETrackedDeviceClass Invoke(uint32_t unDeviceIndex) ;

/// @brief Method BeginInvoke addr 0x2643910 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2643994 size 0x28 virtual true final false
 OVR::OpenVR::ETrackedDeviceClass EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsTrackedDeviceConnected
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9021))
// CS Name: OVR.OpenVR.IVRSystem::_IsTrackedDeviceConnected
class CORDL_TYPE OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected(OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected(OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected& operator=(OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected& operator=(OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26439bc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2643a80 size 0x14 virtual true final false
 bool Invoke(uint32_t unDeviceIndex) ;

/// @brief Method BeginInvoke addr 0x2643a94 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2643b18 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetBoolTrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9022))
// CS Name: OVR.OpenVR.IVRSystem::_GetBoolTrackedDeviceProperty
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2643b40 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2643c04 size 0x14 virtual true final false
 bool Invoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method BeginInvoke addr 0x2643c18 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2643d00 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetFloatTrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9023))
// CS Name: OVR.OpenVR.IVRSystem::_GetFloatTrackedDeviceProperty
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2643d2c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2643df0 size 0x14 virtual true final false
 float_t Invoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method BeginInvoke addr 0x2643e04 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2643eec size 0x2c virtual true final false
 float_t EndInvoke(ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetInt32TrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9024))
// CS Name: OVR.OpenVR.IVRSystem::_GetInt32TrackedDeviceProperty
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2643f18 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2643fdc size 0x14 virtual true final false
 int32_t Invoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method BeginInvoke addr 0x2643ff0 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26440d8 size 0x2c virtual true final false
 int32_t EndInvoke(ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetUint64TrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9025))
// CS Name: OVR.OpenVR.IVRSystem::_GetUint64TrackedDeviceProperty
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2644104 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26441c8 size 0x14 virtual true final false
 uint64_t Invoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method BeginInvoke addr 0x26441dc size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26442c4 size 0x2c virtual true final false
 uint64_t EndInvoke(ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetMatrix34TrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9026))
// CS Name: OVR.OpenVR.IVRSystem::_GetMatrix34TrackedDeviceProperty
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26442f0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26443b4 size 0x14 virtual true final false
 OVR::OpenVR::HmdMatrix34_t Invoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method BeginInvoke addr 0x26443c8 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26444b0 size 0x44 virtual true final false
 OVR::OpenVR::HmdMatrix34_t EndInvoke(ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetArrayTrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9027))
// CS Name: OVR.OpenVR.IVRSystem::_GetArrayTrackedDeviceProperty
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26444f4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26445b8 size 0x14 virtual true final false
 uint32_t Invoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::cordl_internals::intptr_t pBuffer, uint32_t unBufferSize, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method BeginInvoke addr 0x26445cc size 0x144 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::cordl_internals::intptr_t pBuffer, uint32_t unBufferSize, ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2644710 size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetStringTrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9028))
// CS Name: OVR.OpenVR.IVRSystem::_GetStringTrackedDeviceProperty
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty(OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty& operator=(OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264473c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2644800 size 0x14 virtual true final false
 uint32_t Invoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method BeginInvoke addr 0x2644814 size 0x104 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2644918 size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::ETrackedPropertyError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetPropErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9029))
// CS Name: OVR.OpenVR.IVRSystem::_GetPropErrorNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum(OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum(OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum& operator=(OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum& operator=(OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2644944 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2644a08 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::ETrackedPropertyError error) ;

/// @brief Method BeginInvoke addr 0x2644a1c size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::ETrackedPropertyError error, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2644aa0 size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_PollNextEvent
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9030))
// CS Name: OVR.OpenVR.IVRSystem::_PollNextEvent
class CORDL_TYPE OVR__OpenVR__IVRSystem___PollNextEvent : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___PollNextEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___PollNextEvent", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___PollNextEvent(OVR__OpenVR__IVRSystem___PollNextEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___PollNextEvent", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___PollNextEvent(OVR__OpenVR__IVRSystem___PollNextEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___PollNextEvent(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___PollNextEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___PollNextEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___PollNextEvent& operator=(OVR__OpenVR__IVRSystem___PollNextEvent&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___PollNextEvent& operator=(OVR__OpenVR__IVRSystem___PollNextEvent const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2644ac8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2644ba0 size 0x14 virtual true final false
 bool Invoke(ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) ;

/// @brief Method BeginInvoke addr 0x2644bb4 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2644c6c size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VREvent_t> pEvent, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_PollNextEventWithPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9031))
// CS Name: OVR.OpenVR.IVRSystem::_PollNextEventWithPose
class CORDL_TYPE OVR__OpenVR__IVRSystem___PollNextEventWithPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___PollNextEventWithPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___PollNextEventWithPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___PollNextEventWithPose(OVR__OpenVR__IVRSystem___PollNextEventWithPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___PollNextEventWithPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___PollNextEventWithPose(OVR__OpenVR__IVRSystem___PollNextEventWithPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___PollNextEventWithPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___PollNextEventWithPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___PollNextEventWithPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___PollNextEventWithPose& operator=(OVR__OpenVR__IVRSystem___PollNextEventWithPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___PollNextEventWithPose& operator=(OVR__OpenVR__IVRSystem___PollNextEventWithPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2644c98 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2644d5c size 0x14 virtual true final false
 bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) ;

/// @brief Method BeginInvoke addr 0x2644d70 size 0x11c virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2644e8c size 0x34 virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VREvent_t> pEvent, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetEventTypeNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9032))
// CS Name: OVR.OpenVR.IVRSystem::_GetEventTypeNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum(OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum(OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum& operator=(OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum& operator=(OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2644ec0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2644f84 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVREventType eType) ;

/// @brief Method BeginInvoke addr 0x2644f98 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVREventType eType, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264501c size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetHiddenAreaMesh
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9033))
// CS Name: OVR.OpenVR.IVRSystem::_GetHiddenAreaMesh
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetHiddenAreaMesh : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetHiddenAreaMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetHiddenAreaMesh", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetHiddenAreaMesh(OVR__OpenVR__IVRSystem___GetHiddenAreaMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetHiddenAreaMesh", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetHiddenAreaMesh(OVR__OpenVR__IVRSystem___GetHiddenAreaMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetHiddenAreaMesh(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetHiddenAreaMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetHiddenAreaMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetHiddenAreaMesh& operator=(OVR__OpenVR__IVRSystem___GetHiddenAreaMesh&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetHiddenAreaMesh& operator=(OVR__OpenVR__IVRSystem___GetHiddenAreaMesh const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2645044 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645108 size 0x14 virtual true final false
 OVR::OpenVR::HiddenAreaMesh_t Invoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type) ;

/// @brief Method BeginInvoke addr 0x264511c size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26451d0 size 0x2c virtual true final false
 OVR::OpenVR::HiddenAreaMesh_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetControllerState
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9034))
// CS Name: OVR.OpenVR.IVRSystem::_GetControllerState
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetControllerState : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetControllerState() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetControllerState", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetControllerState(OVR__OpenVR__IVRSystem___GetControllerState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetControllerState", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetControllerState(OVR__OpenVR__IVRSystem___GetControllerState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetControllerState(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetControllerState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetControllerState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetControllerState& operator=(OVR__OpenVR__IVRSystem___GetControllerState&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetControllerState& operator=(OVR__OpenVR__IVRSystem___GetControllerState const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26451fc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26452c0 size 0x14 virtual true final false
 bool Invoke(uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize) ;

/// @brief Method BeginInvoke addr 0x26452d4 size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26453a0 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetControllerStateWithPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9035))
// CS Name: OVR.OpenVR.IVRSystem::_GetControllerStateWithPose
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetControllerStateWithPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetControllerStateWithPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetControllerStateWithPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetControllerStateWithPose(OVR__OpenVR__IVRSystem___GetControllerStateWithPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetControllerStateWithPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetControllerStateWithPose(OVR__OpenVR__IVRSystem___GetControllerStateWithPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetControllerStateWithPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetControllerStateWithPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetControllerStateWithPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetControllerStateWithPose& operator=(OVR__OpenVR__IVRSystem___GetControllerStateWithPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetControllerStateWithPose& operator=(OVR__OpenVR__IVRSystem___GetControllerStateWithPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26453cc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645490 size 0x14 virtual true final false
 bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) ;

/// @brief Method BeginInvoke addr 0x26454a4 size 0x134 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26455d8 size 0x34 virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_TriggerHapticPulse
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9036))
// CS Name: OVR.OpenVR.IVRSystem::_TriggerHapticPulse
class CORDL_TYPE OVR__OpenVR__IVRSystem___TriggerHapticPulse : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___TriggerHapticPulse() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___TriggerHapticPulse", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___TriggerHapticPulse(OVR__OpenVR__IVRSystem___TriggerHapticPulse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___TriggerHapticPulse", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___TriggerHapticPulse(OVR__OpenVR__IVRSystem___TriggerHapticPulse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___TriggerHapticPulse(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___TriggerHapticPulse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___TriggerHapticPulse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___TriggerHapticPulse& operator=(OVR__OpenVR__IVRSystem___TriggerHapticPulse&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___TriggerHapticPulse& operator=(OVR__OpenVR__IVRSystem___TriggerHapticPulse const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264560c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26456d0 size 0x14 virtual true final false
 void Invoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec) ;

/// @brief Method BeginInvoke addr 0x26456e4 size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26457b0 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetButtonIdNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9037))
// CS Name: OVR.OpenVR.IVRSystem::_GetButtonIdNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum(OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum(OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum& operator=(OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum& operator=(OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26457bc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645880 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVRButtonId eButtonId) ;

/// @brief Method BeginInvoke addr 0x2645894 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVRButtonId eButtonId, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2645918 size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetControllerAxisTypeNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9038))
// CS Name: OVR.OpenVR.IVRSystem::_GetControllerAxisTypeNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum(OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum(OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum& operator=(OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum& operator=(OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2645940 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645a04 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVRControllerAxisType eAxisType) ;

/// @brief Method BeginInvoke addr 0x2645a18 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVRControllerAxisType eAxisType, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2645a9c size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsInputAvailable
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9039))
// CS Name: OVR.OpenVR.IVRSystem::_IsInputAvailable
class CORDL_TYPE OVR__OpenVR__IVRSystem___IsInputAvailable : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___IsInputAvailable() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___IsInputAvailable", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___IsInputAvailable(OVR__OpenVR__IVRSystem___IsInputAvailable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___IsInputAvailable", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___IsInputAvailable(OVR__OpenVR__IVRSystem___IsInputAvailable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___IsInputAvailable(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___IsInputAvailable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___IsInputAvailable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___IsInputAvailable& operator=(OVR__OpenVR__IVRSystem___IsInputAvailable&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___IsInputAvailable& operator=(OVR__OpenVR__IVRSystem___IsInputAvailable const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2645ac4 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645b80 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x2645b94 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2645bb4 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsSteamVRDrawingControllers
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9040))
// CS Name: OVR.OpenVR.IVRSystem::_IsSteamVRDrawingControllers
class CORDL_TYPE OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers(OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers(OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers& operator=(OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers& operator=(OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2645bdc size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645c98 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x2645cac size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2645ccc size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShouldApplicationPause
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9041))
// CS Name: OVR.OpenVR.IVRSystem::_ShouldApplicationPause
class CORDL_TYPE OVR__OpenVR__IVRSystem___ShouldApplicationPause : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___ShouldApplicationPause() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ShouldApplicationPause", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ShouldApplicationPause(OVR__OpenVR__IVRSystem___ShouldApplicationPause const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ShouldApplicationPause", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ShouldApplicationPause(OVR__OpenVR__IVRSystem___ShouldApplicationPause&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___ShouldApplicationPause(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___ShouldApplicationPause& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ShouldApplicationPause& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ShouldApplicationPause& operator=(OVR__OpenVR__IVRSystem___ShouldApplicationPause&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___ShouldApplicationPause& operator=(OVR__OpenVR__IVRSystem___ShouldApplicationPause const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2645cf4 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645db0 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x2645dc4 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2645de4 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShouldApplicationReduceRenderingWork
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9042))
// CS Name: OVR.OpenVR.IVRSystem::_ShouldApplicationReduceRenderingWork
class CORDL_TYPE OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork(OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork(OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork& operator=(OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork& operator=(OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2645e0c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645ec8 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x2645edc size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2645efc size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_DriverDebugRequest
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9043))
// CS Name: OVR.OpenVR.IVRSystem::_DriverDebugRequest
class CORDL_TYPE OVR__OpenVR__IVRSystem___DriverDebugRequest : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___DriverDebugRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___DriverDebugRequest", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___DriverDebugRequest(OVR__OpenVR__IVRSystem___DriverDebugRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___DriverDebugRequest", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___DriverDebugRequest(OVR__OpenVR__IVRSystem___DriverDebugRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___DriverDebugRequest(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___DriverDebugRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___DriverDebugRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___DriverDebugRequest& operator=(OVR__OpenVR__IVRSystem___DriverDebugRequest&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___DriverDebugRequest& operator=(OVR__OpenVR__IVRSystem___DriverDebugRequest const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2645f24 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2645fe8 size 0x14 virtual true final false
 uint32_t Invoke(uint32_t unDeviceIndex, ::StringW pchRequest, System::Text::StringBuilder pchResponseBuffer, uint32_t unResponseBufferSize) ;

/// @brief Method BeginInvoke addr 0x2645ffc size 0xac virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, ::StringW pchRequest, System::Text::StringBuilder pchResponseBuffer, uint32_t unResponseBufferSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26460a8 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_PerformFirmwareUpdate
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9044))
// CS Name: OVR.OpenVR.IVRSystem::_PerformFirmwareUpdate
class CORDL_TYPE OVR__OpenVR__IVRSystem___PerformFirmwareUpdate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___PerformFirmwareUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___PerformFirmwareUpdate", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___PerformFirmwareUpdate(OVR__OpenVR__IVRSystem___PerformFirmwareUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___PerformFirmwareUpdate", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___PerformFirmwareUpdate(OVR__OpenVR__IVRSystem___PerformFirmwareUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___PerformFirmwareUpdate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___PerformFirmwareUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___PerformFirmwareUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___PerformFirmwareUpdate& operator=(OVR__OpenVR__IVRSystem___PerformFirmwareUpdate&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___PerformFirmwareUpdate& operator=(OVR__OpenVR__IVRSystem___PerformFirmwareUpdate const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26460d0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2646194 size 0x14 virtual true final false
 OVR::OpenVR::EVRFirmwareError Invoke(uint32_t unDeviceIndex) ;

/// @brief Method BeginInvoke addr 0x26461a8 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264622c size 0x28 virtual true final false
 OVR::OpenVR::EVRFirmwareError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_AcknowledgeQuit_Exiting
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9045))
// CS Name: OVR.OpenVR.IVRSystem::_AcknowledgeQuit_Exiting
class CORDL_TYPE OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting(OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting(OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting& operator=(OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting& operator=(OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2646254 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2646310 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x2646324 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2646344 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_AcknowledgeQuit_UserPrompt
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9046))
// CS Name: OVR.OpenVR.IVRSystem::_AcknowledgeQuit_UserPrompt
class CORDL_TYPE OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt(OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt(OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt& operator=(OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt& operator=(OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2646350 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264640c size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x2646420 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2646440 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRSystem
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9047))
// CS Name: OVR.OpenVR.IVRSystem
struct CORDL_TYPE IVRSystem : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _AcknowledgeQuit_UserPrompt = OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt;

using _AcknowledgeQuit_Exiting = OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting;

using _PerformFirmwareUpdate = OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate;

using _DriverDebugRequest = OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest;

using _ShouldApplicationReduceRenderingWork = OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork;

using _ShouldApplicationPause = OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause;

using _IsSteamVRDrawingControllers = OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers;

using _IsInputAvailable = OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable;

using _GetControllerAxisTypeNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum;

using _GetButtonIdNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum;

using _TriggerHapticPulse = OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse;

using _GetControllerStateWithPose = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose;

using _GetControllerState = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState;

using _GetHiddenAreaMesh = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh;

using _GetEventTypeNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum;

using _PollNextEventWithPose = OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose;

using _PollNextEvent = OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent;

using _GetPropErrorNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum;

using _GetStringTrackedDeviceProperty = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty;

using _GetArrayTrackedDeviceProperty = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty;

using _GetMatrix34TrackedDeviceProperty = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty;

using _GetUint64TrackedDeviceProperty = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty;

using _GetInt32TrackedDeviceProperty = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty;

using _GetFloatTrackedDeviceProperty = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty;

using _GetBoolTrackedDeviceProperty = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty;

using _IsTrackedDeviceConnected = OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected;

using _GetTrackedDeviceClass = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass;

using _GetControllerRoleForTrackedDeviceIndex = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex;

using _GetTrackedDeviceIndexForControllerRole = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole;

using _ApplyTransform = OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform;

using _GetTrackedDeviceActivityLevel = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel;

using _GetSortedTrackedDeviceIndicesOfClass = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass;

using _GetRawZeroPoseToStandingAbsoluteTrackingPose = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose;

using _GetSeatedZeroPoseToStandingAbsoluteTrackingPose = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose;

using _ResetSeatedZeroPose = OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose;

using _GetDeviceToAbsoluteTrackingPose = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose;

using _SetDisplayVisibility = OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility;

using _IsDisplayOnDesktop = OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop;

using _GetOutputDevice = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice;

using _GetDXGIOutputInfo = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo;

using _GetD3D9AdapterIndex = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex;

using _GetTimeSinceLastVsync = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync;

using _GetEyeToHeadTransform = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform;

using _ComputeDistortion = OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion;

using _GetProjectionRaw = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw;

using _GetProjectionMatrix = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix;

using _GetRecommendedRenderTargetSize = OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize;

// Ctor Parameters [CppParam { name: "GetRecommendedRenderTargetSize", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize", modifiers: "", def_value: None }, CppParam { name: "GetProjectionMatrix", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix", modifiers: "", def_value: None }, CppParam { name: "GetProjectionRaw", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw", modifiers: "", def_value: None }, CppParam { name: "ComputeDistortion", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion", modifiers: "", def_value: None }, CppParam { name: "GetEyeToHeadTransform", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform", modifiers: "", def_value: None }, CppParam { name: "GetTimeSinceLastVsync", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync", modifiers: "", def_value: None }, CppParam { name: "GetD3D9AdapterIndex", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex", modifiers: "", def_value: None }, CppParam { name: "GetDXGIOutputInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo", modifiers: "", def_value: None }, CppParam { name: "GetOutputDevice", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice", modifiers: "", def_value: None }, CppParam { name: "IsDisplayOnDesktop", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop", modifiers: "", def_value: None }, CppParam { name: "SetDisplayVisibility", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility", modifiers: "", def_value: None }, CppParam { name: "GetDeviceToAbsoluteTrackingPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose", modifiers: "", def_value: None }, CppParam { name: "ResetSeatedZeroPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose", modifiers: "", def_value: None }, CppParam { name: "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: "", def_value: None }, CppParam { name: "GetRawZeroPoseToStandingAbsoluteTrackingPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: "", def_value: None }, CppParam { name: "GetSortedTrackedDeviceIndicesOfClass", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass", modifiers: "", def_value: None }, CppParam { name: "GetTrackedDeviceActivityLevel", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel", modifiers: "", def_value: None }, CppParam { name: "ApplyTransform", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform", modifiers: "", def_value: None }, CppParam { name: "GetTrackedDeviceIndexForControllerRole", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole", modifiers: "", def_value: None }, CppParam { name: "GetControllerRoleForTrackedDeviceIndex", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex", modifiers: "", def_value: None }, CppParam { name: "GetTrackedDeviceClass", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass", modifiers: "", def_value: None }, CppParam { name: "IsTrackedDeviceConnected", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected", modifiers: "", def_value: None }, CppParam { name: "GetBoolTrackedDeviceProperty", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty", modifiers: "", def_value: None }, CppParam { name: "GetFloatTrackedDeviceProperty", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty", modifiers: "", def_value: None }, CppParam { name: "GetInt32TrackedDeviceProperty", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty", modifiers: "", def_value: None }, CppParam { name: "GetUint64TrackedDeviceProperty", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty", modifiers: "", def_value: None }, CppParam { name: "GetMatrix34TrackedDeviceProperty", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty", modifiers: "", def_value: None }, CppParam { name: "GetArrayTrackedDeviceProperty", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty", modifiers: "", def_value: None }, CppParam { name: "GetStringTrackedDeviceProperty", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty", modifiers: "", def_value: None }, CppParam { name: "GetPropErrorNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "PollNextEvent", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent", modifiers: "", def_value: None }, CppParam { name: "PollNextEventWithPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose", modifiers: "", def_value: None }, CppParam { name: "GetEventTypeNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "GetHiddenAreaMesh", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh", modifiers: "", def_value: None }, CppParam { name: "GetControllerState", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState", modifiers: "", def_value: None }, CppParam { name: "GetControllerStateWithPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose", modifiers: "", def_value: None }, CppParam { name: "TriggerHapticPulse", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse", modifiers: "", def_value: None }, CppParam { name: "GetButtonIdNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "GetControllerAxisTypeNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "IsInputAvailable", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable", modifiers: "", def_value: None }, CppParam { name: "IsSteamVRDrawingControllers", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers", modifiers: "", def_value: None }, CppParam { name: "ShouldApplicationPause", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause", modifiers: "", def_value: None }, CppParam { name: "ShouldApplicationReduceRenderingWork", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork", modifiers: "", def_value: None }, CppParam { name: "DriverDebugRequest", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest", modifiers: "", def_value: None }, CppParam { name: "PerformFirmwareUpdate", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate", modifiers: "", def_value: None }, CppParam { name: "AcknowledgeQuit_Exiting", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting", modifiers: "", def_value: None }, CppParam { name: "AcknowledgeQuit_UserPrompt", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt", modifiers: "", def_value: None }]
constexpr IVRSystem(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize GetRecommendedRenderTargetSize, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix GetProjectionMatrix, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw GetProjectionRaw, OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion ComputeDistortion, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform GetEyeToHeadTransform, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync GetTimeSinceLastVsync, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex GetD3D9AdapterIndex, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo GetDXGIOutputInfo, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice GetOutputDevice, OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop IsDisplayOnDesktop, OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility SetDisplayVisibility, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose GetDeviceToAbsoluteTrackingPose, OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose ResetSeatedZeroPose, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose GetSeatedZeroPoseToStandingAbsoluteTrackingPose, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose GetRawZeroPoseToStandingAbsoluteTrackingPose, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass GetSortedTrackedDeviceIndicesOfClass, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel GetTrackedDeviceActivityLevel, OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform ApplyTransform, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole GetTrackedDeviceIndexForControllerRole, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex GetControllerRoleForTrackedDeviceIndex, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass GetTrackedDeviceClass, OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected IsTrackedDeviceConnected, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty GetBoolTrackedDeviceProperty, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty GetFloatTrackedDeviceProperty, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty GetInt32TrackedDeviceProperty, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty GetUint64TrackedDeviceProperty, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty GetMatrix34TrackedDeviceProperty, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty GetArrayTrackedDeviceProperty, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty GetStringTrackedDeviceProperty, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum GetPropErrorNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent PollNextEvent, OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose PollNextEventWithPose, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum GetEventTypeNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh GetHiddenAreaMesh, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState GetControllerState, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose GetControllerStateWithPose, OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse TriggerHapticPulse, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum GetButtonIdNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum GetControllerAxisTypeNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable IsInputAvailable, OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers IsSteamVRDrawingControllers, OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause ShouldApplicationPause, OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork ShouldApplicationReduceRenderingWork, OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest DriverDebugRequest, OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate PerformFirmwareUpdate, OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting AcknowledgeQuit_Exiting, OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt AcknowledgeQuit_UserPrompt) noexcept;


                    constexpr IVRSystem(IVRSystem const&) = default;
                    constexpr IVRSystem(IVRSystem&&) = default;
                    constexpr IVRSystem& operator=(IVRSystem const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRSystem& operator=(IVRSystem&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x178};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRSystem(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize __declspec(property(get=__get_GetRecommendedRenderTargetSize, put=__set_GetRecommendedRenderTargetSize))  GetRecommendedRenderTargetSize;

constexpr void __set_GetRecommendedRenderTargetSize(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize __get_GetRecommendedRenderTargetSize() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix __declspec(property(get=__get_GetProjectionMatrix, put=__set_GetProjectionMatrix))  GetProjectionMatrix;

constexpr void __set_GetProjectionMatrix(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix __get_GetProjectionMatrix() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw __declspec(property(get=__get_GetProjectionRaw, put=__set_GetProjectionRaw))  GetProjectionRaw;

constexpr void __set_GetProjectionRaw(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw __get_GetProjectionRaw() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion __declspec(property(get=__get_ComputeDistortion, put=__set_ComputeDistortion))  ComputeDistortion;

constexpr void __set_ComputeDistortion(OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion __get_ComputeDistortion() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform __declspec(property(get=__get_GetEyeToHeadTransform, put=__set_GetEyeToHeadTransform))  GetEyeToHeadTransform;

constexpr void __set_GetEyeToHeadTransform(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform __get_GetEyeToHeadTransform() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync __declspec(property(get=__get_GetTimeSinceLastVsync, put=__set_GetTimeSinceLastVsync))  GetTimeSinceLastVsync;

constexpr void __set_GetTimeSinceLastVsync(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync __get_GetTimeSinceLastVsync() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex __declspec(property(get=__get_GetD3D9AdapterIndex, put=__set_GetD3D9AdapterIndex))  GetD3D9AdapterIndex;

constexpr void __set_GetD3D9AdapterIndex(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex __get_GetD3D9AdapterIndex() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo __declspec(property(get=__get_GetDXGIOutputInfo, put=__set_GetDXGIOutputInfo))  GetDXGIOutputInfo;

constexpr void __set_GetDXGIOutputInfo(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo __get_GetDXGIOutputInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice __declspec(property(get=__get_GetOutputDevice, put=__set_GetOutputDevice))  GetOutputDevice;

constexpr void __set_GetOutputDevice(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice __get_GetOutputDevice() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop __declspec(property(get=__get_IsDisplayOnDesktop, put=__set_IsDisplayOnDesktop))  IsDisplayOnDesktop;

constexpr void __set_IsDisplayOnDesktop(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop __get_IsDisplayOnDesktop() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility __declspec(property(get=__get_SetDisplayVisibility, put=__set_SetDisplayVisibility))  SetDisplayVisibility;

constexpr void __set_SetDisplayVisibility(OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility __get_SetDisplayVisibility() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose __declspec(property(get=__get_GetDeviceToAbsoluteTrackingPose, put=__set_GetDeviceToAbsoluteTrackingPose))  GetDeviceToAbsoluteTrackingPose;

constexpr void __set_GetDeviceToAbsoluteTrackingPose(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose __get_GetDeviceToAbsoluteTrackingPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose __declspec(property(get=__get_ResetSeatedZeroPose, put=__set_ResetSeatedZeroPose))  ResetSeatedZeroPose;

constexpr void __set_ResetSeatedZeroPose(OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose __get_ResetSeatedZeroPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose __declspec(property(get=__get_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, put=__set_GetSeatedZeroPoseToStandingAbsoluteTrackingPose))  GetSeatedZeroPoseToStandingAbsoluteTrackingPose;

constexpr void __set_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose __get_GetSeatedZeroPoseToStandingAbsoluteTrackingPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose __declspec(property(get=__get_GetRawZeroPoseToStandingAbsoluteTrackingPose, put=__set_GetRawZeroPoseToStandingAbsoluteTrackingPose))  GetRawZeroPoseToStandingAbsoluteTrackingPose;

constexpr void __set_GetRawZeroPoseToStandingAbsoluteTrackingPose(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose __get_GetRawZeroPoseToStandingAbsoluteTrackingPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass __declspec(property(get=__get_GetSortedTrackedDeviceIndicesOfClass, put=__set_GetSortedTrackedDeviceIndicesOfClass))  GetSortedTrackedDeviceIndicesOfClass;

constexpr void __set_GetSortedTrackedDeviceIndicesOfClass(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass __get_GetSortedTrackedDeviceIndicesOfClass() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel __declspec(property(get=__get_GetTrackedDeviceActivityLevel, put=__set_GetTrackedDeviceActivityLevel))  GetTrackedDeviceActivityLevel;

constexpr void __set_GetTrackedDeviceActivityLevel(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel __get_GetTrackedDeviceActivityLevel() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform __declspec(property(get=__get_ApplyTransform, put=__set_ApplyTransform))  ApplyTransform;

constexpr void __set_ApplyTransform(OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform __get_ApplyTransform() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole __declspec(property(get=__get_GetTrackedDeviceIndexForControllerRole, put=__set_GetTrackedDeviceIndexForControllerRole))  GetTrackedDeviceIndexForControllerRole;

constexpr void __set_GetTrackedDeviceIndexForControllerRole(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole __get_GetTrackedDeviceIndexForControllerRole() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex __declspec(property(get=__get_GetControllerRoleForTrackedDeviceIndex, put=__set_GetControllerRoleForTrackedDeviceIndex))  GetControllerRoleForTrackedDeviceIndex;

constexpr void __set_GetControllerRoleForTrackedDeviceIndex(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex __get_GetControllerRoleForTrackedDeviceIndex() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass __declspec(property(get=__get_GetTrackedDeviceClass, put=__set_GetTrackedDeviceClass))  GetTrackedDeviceClass;

constexpr void __set_GetTrackedDeviceClass(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass __get_GetTrackedDeviceClass() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected __declspec(property(get=__get_IsTrackedDeviceConnected, put=__set_IsTrackedDeviceConnected))  IsTrackedDeviceConnected;

constexpr void __set_IsTrackedDeviceConnected(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected __get_IsTrackedDeviceConnected() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty __declspec(property(get=__get_GetBoolTrackedDeviceProperty, put=__set_GetBoolTrackedDeviceProperty))  GetBoolTrackedDeviceProperty;

constexpr void __set_GetBoolTrackedDeviceProperty(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty __get_GetBoolTrackedDeviceProperty() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty __declspec(property(get=__get_GetFloatTrackedDeviceProperty, put=__set_GetFloatTrackedDeviceProperty))  GetFloatTrackedDeviceProperty;

constexpr void __set_GetFloatTrackedDeviceProperty(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty __get_GetFloatTrackedDeviceProperty() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty __declspec(property(get=__get_GetInt32TrackedDeviceProperty, put=__set_GetInt32TrackedDeviceProperty))  GetInt32TrackedDeviceProperty;

constexpr void __set_GetInt32TrackedDeviceProperty(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty __get_GetInt32TrackedDeviceProperty() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty __declspec(property(get=__get_GetUint64TrackedDeviceProperty, put=__set_GetUint64TrackedDeviceProperty))  GetUint64TrackedDeviceProperty;

constexpr void __set_GetUint64TrackedDeviceProperty(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty __get_GetUint64TrackedDeviceProperty() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty __declspec(property(get=__get_GetMatrix34TrackedDeviceProperty, put=__set_GetMatrix34TrackedDeviceProperty))  GetMatrix34TrackedDeviceProperty;

constexpr void __set_GetMatrix34TrackedDeviceProperty(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty __get_GetMatrix34TrackedDeviceProperty() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty __declspec(property(get=__get_GetArrayTrackedDeviceProperty, put=__set_GetArrayTrackedDeviceProperty))  GetArrayTrackedDeviceProperty;

constexpr void __set_GetArrayTrackedDeviceProperty(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty __get_GetArrayTrackedDeviceProperty() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty __declspec(property(get=__get_GetStringTrackedDeviceProperty, put=__set_GetStringTrackedDeviceProperty))  GetStringTrackedDeviceProperty;

constexpr void __set_GetStringTrackedDeviceProperty(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty __get_GetStringTrackedDeviceProperty() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum __declspec(property(get=__get_GetPropErrorNameFromEnum, put=__set_GetPropErrorNameFromEnum))  GetPropErrorNameFromEnum;

constexpr void __set_GetPropErrorNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum __get_GetPropErrorNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent __declspec(property(get=__get_PollNextEvent, put=__set_PollNextEvent))  PollNextEvent;

constexpr void __set_PollNextEvent(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent __get_PollNextEvent() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose __declspec(property(get=__get_PollNextEventWithPose, put=__set_PollNextEventWithPose))  PollNextEventWithPose;

constexpr void __set_PollNextEventWithPose(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose __get_PollNextEventWithPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum __declspec(property(get=__get_GetEventTypeNameFromEnum, put=__set_GetEventTypeNameFromEnum))  GetEventTypeNameFromEnum;

constexpr void __set_GetEventTypeNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum __get_GetEventTypeNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh __declspec(property(get=__get_GetHiddenAreaMesh, put=__set_GetHiddenAreaMesh))  GetHiddenAreaMesh;

constexpr void __set_GetHiddenAreaMesh(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh __get_GetHiddenAreaMesh() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState __declspec(property(get=__get_GetControllerState, put=__set_GetControllerState))  GetControllerState;

constexpr void __set_GetControllerState(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState __get_GetControllerState() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose __declspec(property(get=__get_GetControllerStateWithPose, put=__set_GetControllerStateWithPose))  GetControllerStateWithPose;

constexpr void __set_GetControllerStateWithPose(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose __get_GetControllerStateWithPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse __declspec(property(get=__get_TriggerHapticPulse, put=__set_TriggerHapticPulse))  TriggerHapticPulse;

constexpr void __set_TriggerHapticPulse(OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse __get_TriggerHapticPulse() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum __declspec(property(get=__get_GetButtonIdNameFromEnum, put=__set_GetButtonIdNameFromEnum))  GetButtonIdNameFromEnum;

constexpr void __set_GetButtonIdNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum __get_GetButtonIdNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum __declspec(property(get=__get_GetControllerAxisTypeNameFromEnum, put=__set_GetControllerAxisTypeNameFromEnum))  GetControllerAxisTypeNameFromEnum;

constexpr void __set_GetControllerAxisTypeNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum __get_GetControllerAxisTypeNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable __declspec(property(get=__get_IsInputAvailable, put=__set_IsInputAvailable))  IsInputAvailable;

constexpr void __set_IsInputAvailable(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable __get_IsInputAvailable() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers __declspec(property(get=__get_IsSteamVRDrawingControllers, put=__set_IsSteamVRDrawingControllers))  IsSteamVRDrawingControllers;

constexpr void __set_IsSteamVRDrawingControllers(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers __get_IsSteamVRDrawingControllers() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause __declspec(property(get=__get_ShouldApplicationPause, put=__set_ShouldApplicationPause))  ShouldApplicationPause;

constexpr void __set_ShouldApplicationPause(OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause __get_ShouldApplicationPause() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork __declspec(property(get=__get_ShouldApplicationReduceRenderingWork, put=__set_ShouldApplicationReduceRenderingWork))  ShouldApplicationReduceRenderingWork;

constexpr void __set_ShouldApplicationReduceRenderingWork(OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork __get_ShouldApplicationReduceRenderingWork() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest __declspec(property(get=__get_DriverDebugRequest, put=__set_DriverDebugRequest))  DriverDebugRequest;

constexpr void __set_DriverDebugRequest(OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest __get_DriverDebugRequest() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate __declspec(property(get=__get_PerformFirmwareUpdate, put=__set_PerformFirmwareUpdate))  PerformFirmwareUpdate;

constexpr void __set_PerformFirmwareUpdate(OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate __get_PerformFirmwareUpdate() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting __declspec(property(get=__get_AcknowledgeQuit_Exiting, put=__set_AcknowledgeQuit_Exiting))  AcknowledgeQuit_Exiting;

constexpr void __set_AcknowledgeQuit_Exiting(OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting __get_AcknowledgeQuit_Exiting() const;

 OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt __declspec(property(get=__get_AcknowledgeQuit_UserPrompt, put=__set_AcknowledgeQuit_UserPrompt))  AcknowledgeQuit_UserPrompt;

constexpr void __set_AcknowledgeQuit_UserPrompt(OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt __get_AcknowledgeQuit_UserPrompt() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_Exiting, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_Exiting");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___AcknowledgeQuit_UserPrompt, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_UserPrompt");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___ApplyTransform, "OVR.OpenVR", "IVRSystem/_ApplyTransform");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___ComputeDistortion, "OVR.OpenVR", "IVRSystem/_ComputeDistortion");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___DriverDebugRequest, "OVR.OpenVR", "IVRSystem/_DriverDebugRequest");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetArrayTrackedDeviceProperty, "OVR.OpenVR", "IVRSystem/_GetArrayTrackedDeviceProperty");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetBoolTrackedDeviceProperty, "OVR.OpenVR", "IVRSystem/_GetBoolTrackedDeviceProperty");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetButtonIdNameFromEnum, "OVR.OpenVR", "IVRSystem/_GetButtonIdNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerAxisTypeNameFromEnum, "OVR.OpenVR", "IVRSystem/_GetControllerAxisTypeNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerRoleForTrackedDeviceIndex, "OVR.OpenVR", "IVRSystem/_GetControllerRoleForTrackedDeviceIndex");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState, "OVR.OpenVR", "IVRSystem/_GetControllerState");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose, "OVR.OpenVR", "IVRSystem/_GetControllerStateWithPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetD3D9AdapterIndex, "OVR.OpenVR", "IVRSystem/_GetD3D9AdapterIndex");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDXGIOutputInfo, "OVR.OpenVR", "IVRSystem/_GetDXGIOutputInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetDeviceToAbsoluteTrackingPose, "OVR.OpenVR", "IVRSystem/_GetDeviceToAbsoluteTrackingPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEventTypeNameFromEnum, "OVR.OpenVR", "IVRSystem/_GetEventTypeNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetEyeToHeadTransform, "OVR.OpenVR", "IVRSystem/_GetEyeToHeadTransform");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetFloatTrackedDeviceProperty, "OVR.OpenVR", "IVRSystem/_GetFloatTrackedDeviceProperty");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetHiddenAreaMesh, "OVR.OpenVR", "IVRSystem/_GetHiddenAreaMesh");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetInt32TrackedDeviceProperty, "OVR.OpenVR", "IVRSystem/_GetInt32TrackedDeviceProperty");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetMatrix34TrackedDeviceProperty, "OVR.OpenVR", "IVRSystem/_GetMatrix34TrackedDeviceProperty");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetOutputDevice, "OVR.OpenVR", "IVRSystem/_GetOutputDevice");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionMatrix, "OVR.OpenVR", "IVRSystem/_GetProjectionMatrix");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetProjectionRaw, "OVR.OpenVR", "IVRSystem/_GetProjectionRaw");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetPropErrorNameFromEnum, "OVR.OpenVR", "IVRSystem/_GetPropErrorNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose, "OVR.OpenVR", "IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetRecommendedRenderTargetSize, "OVR.OpenVR", "IVRSystem/_GetRecommendedRenderTargetSize");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose, "OVR.OpenVR", "IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetSortedTrackedDeviceIndicesOfClass, "OVR.OpenVR", "IVRSystem/_GetSortedTrackedDeviceIndicesOfClass");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetStringTrackedDeviceProperty, "OVR.OpenVR", "IVRSystem/_GetStringTrackedDeviceProperty");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTimeSinceLastVsync, "OVR.OpenVR", "IVRSystem/_GetTimeSinceLastVsync");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceActivityLevel, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceActivityLevel");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceClass, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceClass");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetTrackedDeviceIndexForControllerRole, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceIndexForControllerRole");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetUint64TrackedDeviceProperty, "OVR.OpenVR", "IVRSystem/_GetUint64TrackedDeviceProperty");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsDisplayOnDesktop, "OVR.OpenVR", "IVRSystem/_IsDisplayOnDesktop");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsInputAvailable, "OVR.OpenVR", "IVRSystem/_IsInputAvailable");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsSteamVRDrawingControllers, "OVR.OpenVR", "IVRSystem/_IsSteamVRDrawingControllers");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___IsTrackedDeviceConnected, "OVR.OpenVR", "IVRSystem/_IsTrackedDeviceConnected");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___PerformFirmwareUpdate, "OVR.OpenVR", "IVRSystem/_PerformFirmwareUpdate");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent, "OVR.OpenVR", "IVRSystem/_PollNextEvent");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEventWithPose, "OVR.OpenVR", "IVRSystem/_PollNextEventWithPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___ResetSeatedZeroPose, "OVR.OpenVR", "IVRSystem/_ResetSeatedZeroPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___SetDisplayVisibility, "OVR.OpenVR", "IVRSystem/_SetDisplayVisibility");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationPause, "OVR.OpenVR", "IVRSystem/_ShouldApplicationPause");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___ShouldApplicationReduceRenderingWork, "OVR.OpenVR", "IVRSystem/_ShouldApplicationReduceRenderingWork");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSystem___TriggerHapticPulse, "OVR.OpenVR", "IVRSystem/_TriggerHapticPulse");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem, "OVR.OpenVR", "IVRSystem");
