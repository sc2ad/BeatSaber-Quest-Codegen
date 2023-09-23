#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class AvatarPoseController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarHeadOffset;
}
// Type: ::AvatarHeadOffset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4072))
// CS Name: AvatarHeadOffset
class CORDL_TYPE AvatarHeadOffset : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AvatarHeadOffset() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarHeadOffset", modifiers: " const&", def_value: None }]
constexpr AvatarHeadOffset(AvatarHeadOffset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarHeadOffset", modifiers: "&&", def_value: None }]
constexpr AvatarHeadOffset(AvatarHeadOffset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarHeadOffset(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AvatarHeadOffset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarHeadOffset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarHeadOffset& operator=(AvatarHeadOffset&& o) noexcept = default;
  constexpr AvatarHeadOffset& operator=(AvatarHeadOffset const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__positionOffset, put=__set__positionOffset))  _positionOffset;

constexpr void __set__positionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__positionOffset() const;

 GlobalNamespace::AvatarPoseController __declspec(property(get=__get__avatarPoseController, put=__set__avatarPoseController))  _avatarPoseController;

constexpr void __set__avatarPoseController(GlobalNamespace::AvatarPoseController value) ;

constexpr GlobalNamespace::AvatarPoseController __get__avatarPoseController() const;


// Methods

/// @brief Method Start addr 0x20bf7b8 size 0x88 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20bf8f0 size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMultiplayerAvatarPoseControllerDidUpdatePose addr 0x20bfa70 size 0x54 virtual false final false
 void HandleMultiplayerAvatarPoseControllerDidUpdatePose(UnityEngine::Vector3 headLocalPosition) ;

// Ctor Parameters []
explicit AvatarHeadOffset() ;

/// @brief Method .ctor addr 0x20bfac4 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarHeadOffset);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarHeadOffset, "", "AvatarHeadOffset");
