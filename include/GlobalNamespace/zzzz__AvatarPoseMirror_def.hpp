#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class AvatarPoseController;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPoseMirror;
}
// Type: ::AvatarPoseMirror
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4077))
// CS Name: AvatarPoseMirror
class CORDL_TYPE AvatarPoseMirror : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AvatarPoseMirror() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPoseMirror", modifiers: " const&", def_value: None }]
constexpr AvatarPoseMirror(AvatarPoseMirror const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPoseMirror", modifiers: "&&", def_value: None }]
constexpr AvatarPoseMirror(AvatarPoseMirror&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarPoseMirror(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AvatarPoseMirror& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarPoseMirror& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarPoseMirror& operator=(AvatarPoseMirror&& o) noexcept = default;
  constexpr AvatarPoseMirror& operator=(AvatarPoseMirror const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AvatarPoseController __declspec(property(get=__get__avatarPoseController, put=__set__avatarPoseController))  _avatarPoseController;

constexpr void __set__avatarPoseController(::GlobalNamespace::AvatarPoseController value) ;

constexpr ::GlobalNamespace::AvatarPoseController __get__avatarPoseController() const;


// Methods

/// @brief Method Start addr 0x20c037c size 0xd0 virtual false final false
 void Start() ;

/// @brief Method HandleAvatarPoseControllerPositionsWillBeSet addr 0x20c044c size 0x30 virtual false final false
static void HandleAvatarPoseControllerPositionsWillBeSet(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition) ;

/// @brief Method HandleAvatarPoseControllerRotationsWillBeSet addr 0x20c0484 size 0x3c virtual false final false
static void HandleAvatarPoseControllerRotationsWillBeSet(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation, ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation) ;

/// @brief Method MirrorRotation addr 0x20c04c0 size 0xc virtual false final false
static ::UnityEngine::Quaternion MirrorRotation(::UnityEngine::Quaternion rotation) ;

/// @brief Method MirrorPosition addr 0x20c047c size 0x8 virtual false final false
static ::UnityEngine::Vector3 MirrorPosition(::UnityEngine::Vector3 position) ;

// Ctor Parameters []
explicit AvatarPoseMirror() ;

/// @brief Method .ctor addr 0x20c04cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AvatarPoseMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPoseMirror, "", "AvatarPoseMirror");
