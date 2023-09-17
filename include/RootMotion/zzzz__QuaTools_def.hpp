#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class QuaTools;
}
// Type: RootMotion::QuaTools
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12439))
// CS Name: RootMotion.QuaTools
class CORDL_TYPE QuaTools : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~QuaTools() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuaTools", modifiers: " const&", def_value: None }]
constexpr QuaTools(QuaTools const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuaTools", modifiers: "&&", def_value: None }]
constexpr QuaTools(QuaTools&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuaTools(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QuaTools& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuaTools& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuaTools& operator=(QuaTools&& o) noexcept = default;
  constexpr QuaTools& operator=(QuaTools const& o) noexcept = default;
                


// Methods

/// @brief Method Lerp addr 0x11b43ac size 0x4c virtual false final false
static ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion fromRotation, ::UnityEngine::Quaternion toRotation, float_t weight) ;

/// @brief Method Slerp addr 0x11b43f8 size 0x4c virtual false final false
static ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion fromRotation, ::UnityEngine::Quaternion toRotation, float_t weight) ;

/// @brief Method LinearBlend addr 0x11b4444 size 0x104 virtual false final false
static ::UnityEngine::Quaternion LinearBlend(::UnityEngine::Quaternion q, float_t weight) ;

/// @brief Method SphericalBlend addr 0x11b4548 size 0x104 virtual false final false
static ::UnityEngine::Quaternion SphericalBlend(::UnityEngine::Quaternion q, float_t weight) ;

/// @brief Method FromToAroundAxis addr 0x11b464c size 0x114 virtual false final false
static ::UnityEngine::Quaternion FromToAroundAxis(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection, ::UnityEngine::Vector3 axis) ;

/// @brief Method RotationToLocalSpace addr 0x11b4760 size 0xa8 virtual false final false
static ::UnityEngine::Quaternion RotationToLocalSpace(::UnityEngine::Quaternion space, ::UnityEngine::Quaternion rotation) ;

/// @brief Method FromToRotation addr 0x11b4808 size 0x10c virtual false final false
static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to) ;

/// @brief Method GetAxis addr 0x11b4914 size 0x168 virtual false final false
static ::UnityEngine::Vector3 GetAxis(::UnityEngine::Vector3 v) ;

/// @brief Method ClampRotation addr 0x11b4a7c size 0x1e4 virtual false final false
static ::UnityEngine::Quaternion ClampRotation(::UnityEngine::Quaternion rotation, float_t clampWeight, int32_t clampSmoothing) ;

/// @brief Method ClampAngle addr 0x11b4c60 size 0xd0 virtual false final false
static float_t ClampAngle(float_t angle, float_t clampWeight, int32_t clampSmoothing) ;

/// @brief Method MatchRotation addr 0x11b4d30 size 0x184 virtual false final false
static ::UnityEngine::Quaternion MatchRotation(::UnityEngine::Quaternion targetRotation, ::UnityEngine::Vector3 targetforwardAxis, ::UnityEngine::Vector3 targetUpAxis, ::UnityEngine::Vector3 forwardAxis, ::UnityEngine::Vector3 upAxis) ;

/// @brief Method ToBiPolar addr 0x11b4eb4 size 0x10c virtual false final false
static ::UnityEngine::Vector3 ToBiPolar(::UnityEngine::Vector3 euler) ;

/// @brief Method ToBiPolar addr 0x11b4fc0 size 0x58 virtual false final false
static float_t ToBiPolar(float_t angle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::QuaTools);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::QuaTools, "RootMotion", "QuaTools");
