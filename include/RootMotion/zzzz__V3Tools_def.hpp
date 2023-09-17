#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
class V3Tools;
}
// Type: RootMotion::V3Tools
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12443))
// CS Name: RootMotion.V3Tools
class CORDL_TYPE V3Tools : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~V3Tools() = default;

// Ctor Parameters [CppParam { name: "", ty: "V3Tools", modifiers: " const&", def_value: None }]
constexpr V3Tools(V3Tools const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "V3Tools", modifiers: "&&", def_value: None }]
constexpr V3Tools(V3Tools&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit V3Tools(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr V3Tools& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr V3Tools& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr V3Tools& operator=(V3Tools&& o) noexcept = default;
  constexpr V3Tools& operator=(V3Tools const& o) noexcept = default;
                


// Methods

/// @brief Method Lerp addr 0x11b5790 size 0x5c virtual false final false
static ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 fromVector, ::UnityEngine::Vector3 toVector, float_t weight) ;

/// @brief Method Slerp addr 0x11b57ec size 0x38 virtual false final false
static ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 fromVector, ::UnityEngine::Vector3 toVector, float_t weight) ;

/// @brief Method ExtractVertical addr 0x11b5824 size 0x150 virtual false final false
static ::UnityEngine::Vector3 ExtractVertical(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 verticalAxis, float_t weight) ;

/// @brief Method ExtractHorizontal addr 0x11b5974 size 0x17c virtual false final false
static ::UnityEngine::Vector3 ExtractHorizontal(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 normal, float_t weight) ;

/// @brief Method ClampDirection addr 0x11b5af0 size 0x230 virtual false final false
static ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, float_t clampWeight, int32_t clampSmoothing) ;

/// @brief Method ClampDirection addr 0x11b5d20 size 0x250 virtual false final false
static ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, float_t clampWeight, int32_t clampSmoothing, ByRef<bool> changed) ;

/// @brief Method ClampDirection addr 0x11b5f70 size 0x258 virtual false final false
static ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, float_t clampWeight, int32_t clampSmoothing, ByRef<float_t> clampValue) ;

/// @brief Method LineToPlane addr 0x11b61c8 size 0x1ac virtual false final false
static ::UnityEngine::Vector3 LineToPlane(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint) ;

/// @brief Method PointToPlane addr 0x11b6374 size 0x1f8 virtual false final false
static ::UnityEngine::Vector3 PointToPlane(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 planePosition, ::UnityEngine::Vector3 planeNormal) ;

/// @brief Method TransformPointUnscaled addr 0x11b656c size 0x7c virtual false final false
static ::UnityEngine::Vector3 TransformPointUnscaled(::UnityEngine::Transform t, ::UnityEngine::Vector3 point) ;

/// @brief Method InverseTransformPointUnscaled addr 0x11b65e8 size 0x90 virtual false final false
static ::UnityEngine::Vector3 InverseTransformPointUnscaled(::UnityEngine::Transform t, ::UnityEngine::Vector3 point) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::V3Tools);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::V3Tools, "RootMotion", "V3Tools");
