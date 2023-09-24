#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class AvatarPoseController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerAvatarPoseController;
}
// Type: ::MultiplayerAvatarPoseController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4094))
// CS Name: MultiplayerAvatarPoseController
class CORDL_TYPE MultiplayerAvatarPoseController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MultiplayerAvatarPoseController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarPoseController", modifiers: " const&", def_value: None }]
constexpr MultiplayerAvatarPoseController(MultiplayerAvatarPoseController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarPoseController", modifiers: "&&", def_value: None }]
constexpr MultiplayerAvatarPoseController(MultiplayerAvatarPoseController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerAvatarPoseController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerAvatarPoseController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerAvatarPoseController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerAvatarPoseController& operator=(MultiplayerAvatarPoseController&& o) noexcept = default;
  constexpr MultiplayerAvatarPoseController& operator=(MultiplayerAvatarPoseController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AvatarPoseController __declspec(property(get=__get__avatarPoseController, put=__set__avatarPoseController))  _avatarPoseController;

constexpr void __set__avatarPoseController(GlobalNamespace::AvatarPoseController value) ;

constexpr GlobalNamespace::AvatarPoseController __get__avatarPoseController() const;

 GlobalNamespace::INodePoseSyncStateManager __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager))  _nodePoseSyncStateManager;

constexpr void __set__nodePoseSyncStateManager(GlobalNamespace::INodePoseSyncStateManager value) ;

constexpr GlobalNamespace::INodePoseSyncStateManager __get__nodePoseSyncStateManager() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Properties

 GlobalNamespace::IConnectedPlayer __declspec(property(put=set_connectedPlayer))  connectedPlayer;


// Methods

/// @brief Method set_connectedPlayer addr 0x20c35e8 size 0x8 virtual false final false
 void set_connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

/// @brief Method Start addr 0x20c35f0 size 0x18 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x20c3608 size 0x3b8 virtual false final false
 void Update() ;

static GlobalNamespace::MultiplayerAvatarPoseController New_ctor() ;

/// @brief Method .ctor addr 0x20c39c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerAvatarPoseController, "", "MultiplayerAvatarPoseController");
