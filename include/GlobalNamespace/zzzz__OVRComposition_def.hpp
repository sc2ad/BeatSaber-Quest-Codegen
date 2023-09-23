#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__CompositionMethod;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__CameraExtrinsics;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__TrackingOrigin;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRComposition;
}
// Type: ::OVRComposition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8439))
// CS Name: OVRComposition
class CORDL_TYPE OVRComposition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OVRComposition() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRComposition", modifiers: " const&", def_value: None }]
constexpr OVRComposition(OVRComposition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRComposition", modifiers: "&&", def_value: None }]
constexpr OVRComposition(OVRComposition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRComposition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRComposition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRComposition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRComposition& operator=(OVRComposition&& o) noexcept = default;
  constexpr OVRComposition& operator=(OVRComposition const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_cameraInTrackingSpace, put=__set_cameraInTrackingSpace))  cameraInTrackingSpace;

constexpr void __set_cameraInTrackingSpace(bool value) ;

constexpr bool __get_cameraInTrackingSpace() const;

 GlobalNamespace::OVRCameraRig __declspec(property(get=__get_cameraRig, put=__set_cameraRig))  cameraRig;

constexpr void __set_cameraRig(GlobalNamespace::OVRCameraRig value) ;

constexpr GlobalNamespace::OVRCameraRig __get_cameraRig() const;

 bool __declspec(property(get=__get_usingLastAttachedNodePose, put=__set_usingLastAttachedNodePose))  usingLastAttachedNodePose;

constexpr void __set_usingLastAttachedNodePose(bool value) ;

constexpr bool __get_usingLastAttachedNodePose() const;

 GlobalNamespace::OVRPose __declspec(property(get=__get_lastAttachedNodePose, put=__set_lastAttachedNodePose))  lastAttachedNodePose;

constexpr void __set_lastAttachedNodePose(GlobalNamespace::OVRPose value) ;

constexpr GlobalNamespace::OVRPose __get_lastAttachedNodePose() const;


// Methods

// Ctor Parameters [CppParam { name: "parentObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "mainCamera", ty: "UnityEngine::Camera", modifiers: "", def_value: None }, CppParam { name: "configuration", ty: "GlobalNamespace::OVRMixedRealityCaptureConfiguration", modifiers: "", def_value: None }]
explicit OVRComposition(UnityEngine::GameObject parentObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration) ;

/// @brief Method .ctor addr 0x25a4d88 size 0x34 virtual false final false
 void _ctor(UnityEngine::GameObject parentObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration) ;

/// @brief Method CompositionMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod CompositionMethod() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(UnityEngine::GameObject gameObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration, GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin trackingOrigin, float_t displayFrequency) ;

/// @brief Method Cleanup addr 0x0 size 0xffffffffffffffff virtual true final false
 void Cleanup() ;

/// @brief Method RecenterPose addr 0x25a4f74 size 0x4 virtual true final false
 void RecenterPose() ;

/// @brief Method RefreshCameraRig addr 0x25a4dbc size 0x1b8 virtual false final false
 void RefreshCameraRig(UnityEngine::GameObject parentObject, UnityEngine::Camera mainCamera) ;

/// @brief Method ComputeCameraWorldSpacePose addr 0x25a4f78 size 0x68 virtual false final false
 GlobalNamespace::OVRPose ComputeCameraWorldSpacePose(GlobalNamespace::GlobalNamespace__OVRPlugin__CameraExtrinsics extrinsics, UnityEngine::Camera mainCamera) ;

/// @brief Method ComputeCameraTrackingSpacePose addr 0x25a4fe0 size 0x288 virtual false final false
 GlobalNamespace::OVRPose ComputeCameraTrackingSpacePose(GlobalNamespace::GlobalNamespace__OVRPlugin__CameraExtrinsics extrinsics) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRComposition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRComposition, "", "OVRComposition");
