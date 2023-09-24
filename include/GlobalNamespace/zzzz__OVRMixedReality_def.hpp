#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__TrackingOrigin;
}
namespace GlobalNamespace {
class OVRComposition;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedReality;
}
// Type: ::OVRMixedReality
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8555))
// CS Name: OVRMixedReality
class CORDL_TYPE OVRMixedReality : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRMixedReality() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedReality", modifiers: " const&", def_value: None }]
constexpr OVRMixedReality(OVRMixedReality const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedReality", modifiers: "&&", def_value: None }]
constexpr OVRMixedReality(OVRMixedReality&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMixedReality(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRMixedReality& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMixedReality& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMixedReality& operator=(OVRMixedReality&& o) noexcept = default;
  constexpr OVRMixedReality& operator=(OVRMixedReality const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_useFakeExternalCamera, put=__set_useFakeExternalCamera))  useFakeExternalCamera;

static void __set_useFakeExternalCamera(bool value) ;

static bool __get_useFakeExternalCamera() ;

static UnityEngine::Vector3 __declspec(property(get=__get_fakeCameraFloorLevelPosition, put=__set_fakeCameraFloorLevelPosition))  fakeCameraFloorLevelPosition;

static void __set_fakeCameraFloorLevelPosition(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_fakeCameraFloorLevelPosition() ;

static UnityEngine::Vector3 __declspec(property(get=__get_fakeCameraEyeLevelPosition, put=__set_fakeCameraEyeLevelPosition))  fakeCameraEyeLevelPosition;

static void __set_fakeCameraEyeLevelPosition(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_fakeCameraEyeLevelPosition() ;

static UnityEngine::Quaternion __declspec(property(get=__get_fakeCameraRotation, put=__set_fakeCameraRotation))  fakeCameraRotation;

static void __set_fakeCameraRotation(UnityEngine::Quaternion value) ;

static UnityEngine::Quaternion __get_fakeCameraRotation() ;

static float_t __declspec(property(get=__get_fakeCameraFov, put=__set_fakeCameraFov))  fakeCameraFov;

static void __set_fakeCameraFov(float_t value) ;

static float_t __get_fakeCameraFov() ;

static float_t __declspec(property(get=__get_fakeCameraAspect, put=__set_fakeCameraAspect))  fakeCameraAspect;

static void __set_fakeCameraAspect(float_t value) ;

static float_t __get_fakeCameraAspect() ;

static GlobalNamespace::OVRComposition __declspec(property(get=__get_currentComposition, put=__set_currentComposition))  currentComposition;

static void __set_currentComposition(GlobalNamespace::OVRComposition value) ;

static GlobalNamespace::OVRComposition __get_currentComposition() ;


// Methods

/// @brief Method Update addr 0x25cf61c size 0x4e0 virtual false final false
static void Update(UnityEngine::GameObject parentObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration, GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin trackingOrigin, float_t displayFrequency) ;

/// @brief Method Cleanup addr 0x25cfdd4 size 0xe0 virtual false final false
static void Cleanup() ;

/// @brief Method RecenterPose addr 0x25cff88 size 0x94 virtual false final false
static void RecenterPose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRMixedReality);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedReality, "", "OVRMixedReality");
