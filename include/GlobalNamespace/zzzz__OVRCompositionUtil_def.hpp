#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRBoundary__BoundaryType;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCompositionUtil;
}
// Type: ::OVRCompositionUtil
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8440))
// CS Name: OVRCompositionUtil
class CORDL_TYPE OVRCompositionUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRCompositionUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCompositionUtil", modifiers: " const&", def_value: None }]
constexpr OVRCompositionUtil(OVRCompositionUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCompositionUtil", modifiers: "&&", def_value: None }]
constexpr OVRCompositionUtil(OVRCompositionUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRCompositionUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRCompositionUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRCompositionUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRCompositionUtil& operator=(OVRCompositionUtil&& o) noexcept = default;
  constexpr OVRCompositionUtil& operator=(OVRCompositionUtil const& o) noexcept = default;
                


// Methods

/// @brief Method SafeDestroy addr 0x25a552c size 0x78 virtual false final false
static void SafeDestroy(UnityEngine::GameObject obj) ;

/// @brief Method SafeDestroy addr 0x25a55a4 size 0x74 virtual false final false
static void SafeDestroy(ByRef<UnityEngine::GameObject> obj) ;

/// @brief Method GetWorldPosition addr 0x25a5618 size 0x3c virtual false final false
static UnityEngine::Vector3 GetWorldPosition(UnityEngine::Vector3 trackingSpacePosition) ;

/// @brief Method GetWorldPosition addr 0x25a5654 size 0x94 virtual false final false
static UnityEngine::Vector3 GetWorldPosition(UnityEngine::Camera camera, UnityEngine::Vector3 trackingSpacePosition) ;

/// @brief Method GetMaximumBoundaryDistance addr 0x25a56e8 size 0x1c0 virtual false final false
static float_t GetMaximumBoundaryDistance(UnityEngine::Camera camera, GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType) ;

/// @brief Method BuildBoundaryMesh addr 0x25a5d7c size 0x480 virtual false final false
static UnityEngine::Mesh BuildBoundaryMesh(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType, float_t topY, float_t bottomY) ;

static GlobalNamespace::OVRCompositionUtil New_ctor() ;

/// @brief Method .ctor addr 0x25a61fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRCompositionUtil);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCompositionUtil, "", "OVRCompositionUtil");
