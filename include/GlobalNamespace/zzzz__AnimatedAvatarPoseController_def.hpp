#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class AvatarPoseController;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimatedAvatarPoseController;
}
// Type: ::AnimatedAvatarPoseController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4070))
// CS Name: AnimatedAvatarPoseController
class CORDL_TYPE AnimatedAvatarPoseController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AnimatedAvatarPoseController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAvatarPoseController", modifiers: " const&", def_value: None }]
constexpr AnimatedAvatarPoseController(AnimatedAvatarPoseController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAvatarPoseController", modifiers: "&&", def_value: None }]
constexpr AnimatedAvatarPoseController(AnimatedAvatarPoseController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimatedAvatarPoseController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnimatedAvatarPoseController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimatedAvatarPoseController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimatedAvatarPoseController& operator=(AnimatedAvatarPoseController&& o) noexcept = default;
  constexpr AnimatedAvatarPoseController& operator=(AnimatedAvatarPoseController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AvatarPoseController __declspec(property(get=__get__avatarPoseController, put=__set__avatarPoseController))  _avatarPoseController;

constexpr void __set__avatarPoseController(GlobalNamespace::AvatarPoseController value) ;

constexpr GlobalNamespace::AvatarPoseController __get__avatarPoseController() const;


// Methods

/// @brief Method LateUpdate addr 0x20bf4c0 size 0x18 virtual false final false
 void LateUpdate() ;

static GlobalNamespace::AnimatedAvatarPoseController New_ctor() ;

/// @brief Method .ctor addr 0x20bf688 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AnimatedAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnimatedAvatarPoseController, "", "AnimatedAvatarPoseController");
