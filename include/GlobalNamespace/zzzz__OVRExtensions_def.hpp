#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRTracker__Frustum;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSpace__StorageLocation;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Colorf;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Quatf;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Gradient;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__SpaceStorageLocation;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Frustumf;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRExtensions;
}
// Type: ::OVRExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8451))
// CS Name: OVRExtensions
class CORDL_TYPE OVRExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: " const&", def_value: None }]
constexpr OVRExtensions(OVRExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "&&", def_value: None }]
constexpr OVRExtensions(OVRExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRExtensions& operator=(OVRExtensions&& o) noexcept = default;
  constexpr OVRExtensions& operator=(OVRExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToTrackingSpacePose addr 0x25ac904 size 0x12c virtual false final false
static ::GlobalNamespace::OVRPose ToTrackingSpacePose(::UnityEngine::Transform transform, ::UnityEngine::Camera camera) ;

/// @brief Method ToWorldSpacePose addr 0x25acabc size 0x50 virtual false final false
static ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose) ;

/// @brief Method ToWorldSpacePose addr 0x25a5268 size 0x1b8 virtual false final false
static ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose, ::UnityEngine::Camera mainCamera) ;

/// @brief Method ToHeadSpacePose addr 0x25acb0c size 0x120 virtual false final false
static ::GlobalNamespace::OVRPose ToHeadSpacePose(::GlobalNamespace::OVRPose trackingSpacePose) ;

/// @brief Method ToHeadSpacePose addr 0x25aca30 size 0x8c virtual false final false
static ::GlobalNamespace::OVRPose ToHeadSpacePose(::UnityEngine::Transform transform, ::UnityEngine::Camera camera) ;

/// @brief Method ToOVRPose addr 0x25acc2c size 0x88 virtual false final false
static ::GlobalNamespace::OVRPose ToOVRPose(::UnityEngine::Transform t, bool isLocal) ;

/// @brief Method FromOVRPose addr 0x25a8ca0 size 0x68 virtual false final false
static void FromOVRPose(::UnityEngine::Transform t, ::GlobalNamespace::OVRPose pose, bool isLocal) ;

/// @brief Method ToOVRPose addr 0x25a5420 size 0x28 virtual false final false
static ::GlobalNamespace::OVRPose ToOVRPose(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef p) ;

/// @brief Method ToFrustum addr 0x25accb4 size 0x14 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRTracker__Frustum ToFrustum(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Frustumf f) ;

/// @brief Method FromColorf addr 0x25accc8 size 0x4 virtual false final false
static ::UnityEngine::Color FromColorf(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Colorf c) ;

/// @brief Method ToColorf addr 0x25acccc size 0x4 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Colorf ToColorf(::UnityEngine::Color c) ;

/// @brief Method FromVector3f addr 0x25a99dc size 0x4 virtual false final false
static ::UnityEngine::Vector3 FromVector3f(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f v) ;

/// @brief Method FromFlippedXVector3f addr 0x25accd0 size 0x8 virtual false final false
static ::UnityEngine::Vector3 FromFlippedXVector3f(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f v) ;

/// @brief Method FromFlippedZVector3f addr 0x25a9774 size 0x8 virtual false final false
static ::UnityEngine::Vector3 FromFlippedZVector3f(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f v) ;

/// @brief Method ToVector3f addr 0x25accd8 size 0x4 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f ToVector3f(::UnityEngine::Vector3 v) ;

/// @brief Method ToFlippedXVector3f addr 0x25accdc size 0x8 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f ToFlippedXVector3f(::UnityEngine::Vector3 v) ;

/// @brief Method ToFlippedZVector3f addr 0x25a9864 size 0x8 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f ToFlippedZVector3f(::UnityEngine::Vector3 v) ;

/// @brief Method FromVector4f addr 0x25acce4 size 0x4 virtual false final false
static ::UnityEngine::Vector4 FromVector4f(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f v) ;

/// @brief Method ToVector4f addr 0x25acce8 size 0x4 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f ToVector4f(::UnityEngine::Vector4 v) ;

/// @brief Method FromQuatf addr 0x25accec size 0x4 virtual false final false
static ::UnityEngine::Quaternion FromQuatf(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf q) ;

/// @brief Method FromFlippedXQuatf addr 0x25accf0 size 0xc virtual false final false
static ::UnityEngine::Quaternion FromFlippedXQuatf(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf q) ;

/// @brief Method FromFlippedZQuatf addr 0x25accfc size 0xc virtual false final false
static ::UnityEngine::Quaternion FromFlippedZQuatf(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf q) ;

/// @brief Method ToQuatf addr 0x25acd08 size 0x4 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf ToQuatf(::UnityEngine::Quaternion q) ;

/// @brief Method ToFlippedXQuatf addr 0x25acd0c size 0xc virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf ToFlippedXQuatf(::UnityEngine::Quaternion q) ;

/// @brief Method ToFlippedZQuatf addr 0x25acd18 size 0xc virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf ToFlippedZQuatf(::UnityEngine::Quaternion q) ;

/// @brief Method ConvertToHMDMatrix34 addr 0x25acd24 size 0x15c virtual false final false
static ::OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(::UnityEngine::Matrix4x4 m) ;

/// @brief Method FindChildRecursive addr 0x25ace80 size 0xf8 virtual false final false
static ::UnityEngine::Transform FindChildRecursive(::UnityEngine::Transform parent, ::StringW name) ;

/// @brief Method Equals addr 0x25acf78 size 0x210 virtual false final false
static bool Equals(::UnityEngine::Gradient gradient, ::UnityEngine::Gradient otherGradient) ;

/// @brief Method CopyFrom addr 0x25ad188 size 0x200 virtual false final false
static void CopyFrom(::UnityEngine::Gradient gradient, ::UnityEngine::Gradient otherGradient) ;

/// @brief Method ToSpaceStorageLocation addr 0x25ad388 size 0xb4 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation ToSpaceStorageLocation(::GlobalNamespace::____GlobalNamespace__OVRSpace__StorageLocation storageLocation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRExtensions, "", "OVRExtensions");
