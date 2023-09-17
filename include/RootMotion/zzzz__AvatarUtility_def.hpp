#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace RootMotion {
class TQ;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Avatar;
}
// Forward declare root types
namespace RootMotion {
class AvatarUtility;
}
// Type: RootMotion::AvatarUtility
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12416))
// CS Name: RootMotion.AvatarUtility
class CORDL_TYPE AvatarUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AvatarUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarUtility", modifiers: " const&", def_value: None }]
constexpr AvatarUtility(AvatarUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarUtility", modifiers: "&&", def_value: None }]
constexpr AvatarUtility(AvatarUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarUtility& operator=(AvatarUtility&& o) noexcept = default;
  constexpr AvatarUtility& operator=(AvatarUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetPostRotation addr 0x11a7a3c size 0x230 virtual false final false
static ::UnityEngine::Quaternion GetPostRotation(::UnityEngine::Avatar avatar, ::UnityEngine::AvatarIKGoal avatarIKGoal) ;

/// @brief Method GetIKGoalTQ addr 0x11a7c8c size 0x658 virtual false final false
static ::RootMotion::TQ GetIKGoalTQ(::UnityEngine::Avatar avatar, float_t humanScale, ::UnityEngine::AvatarIKGoal avatarIKGoal, ::RootMotion::TQ bodyPositionRotation, ::RootMotion::TQ boneTQ) ;

/// @brief Method HumanIDFromAvatarIKGoal addr 0x11a7c6c size 0x20 virtual false final false
static ::UnityEngine::HumanBodyBones HumanIDFromAvatarIKGoal(::UnityEngine::AvatarIKGoal avatarIKGoal) ;

// Ctor Parameters []
explicit AvatarUtility() ;

/// @brief Method .ctor addr 0x11a82e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::AvatarUtility);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::AvatarUtility, "RootMotion", "AvatarUtility");
