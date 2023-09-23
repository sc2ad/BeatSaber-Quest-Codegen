#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Keyframe;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion {
class BakerUtilities;
}
// Type: RootMotion::BakerUtilities
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12417))
// CS Name: RootMotion.BakerUtilities
class CORDL_TYPE BakerUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BakerUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakerUtilities", modifiers: " const&", def_value: None }]
constexpr BakerUtilities(BakerUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakerUtilities", modifiers: "&&", def_value: None }]
constexpr BakerUtilities(BakerUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakerUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BakerUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakerUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakerUtilities& operator=(BakerUtilities&& o) noexcept = default;
  constexpr BakerUtilities& operator=(BakerUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method ReduceKeyframes addr 0x11a82ec size 0x38 virtual false final false
static void ReduceKeyframes(UnityEngine::AnimationCurve curve, float_t maxError) ;

/// @brief Method GetReducedKeyframes addr 0x11a8324 size 0x3c4 virtual false final false
static ::ArrayW<UnityEngine::Keyframe> GetReducedKeyframes(UnityEngine::AnimationCurve curve, float_t maxError) ;

/// @brief Method SetLoopFrame addr 0x11a86e8 size 0x1e0 virtual false final false
static void SetLoopFrame(float_t time, UnityEngine::AnimationCurve curve) ;

/// @brief Method SetTangentMode addr 0x11a88c8 size 0x4 virtual false final false
static void SetTangentMode(UnityEngine::AnimationCurve curve) ;

/// @brief Method EnsureQuaternionContinuity addr 0x11a88cc size 0x194 virtual false final false
static UnityEngine::Quaternion EnsureQuaternionContinuity(UnityEngine::Quaternion lastQ, UnityEngine::Quaternion q) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::BakerUtilities);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerUtilities, "RootMotion", "BakerUtilities");
