#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class VFXController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerLevelFailController;
}
// Type: ::MultiplayerConnectedPlayerLevelFailController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5226))
// CS Name: MultiplayerConnectedPlayerLevelFailController
class CORDL_TYPE MultiplayerConnectedPlayerLevelFailController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerConnectedPlayerLevelFailController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerLevelFailController", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerLevelFailController(MultiplayerConnectedPlayerLevelFailController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerLevelFailController", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerLevelFailController(MultiplayerConnectedPlayerLevelFailController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerLevelFailController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConnectedPlayerLevelFailController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerLevelFailController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerLevelFailController& operator=(MultiplayerConnectedPlayerLevelFailController&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerLevelFailController& operator=(MultiplayerConnectedPlayerLevelFailController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::VFXController __declspec(property(get=__get__failVFXController, put=__set__failVFXController))  _failVFXController;

constexpr void __set__failVFXController(::GlobalNamespace::VFXController value) ;

constexpr ::GlobalNamespace::VFXController __get__failVFXController() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 ::System::Action __declspec(property(get=__get_playerDidFailEvent, put=__set_playerDidFailEvent))  playerDidFailEvent;

constexpr void __set_playerDidFailEvent(::System::Action value) ;

constexpr ::System::Action __get_playerDidFailEvent() const;

 bool __declspec(property(get=__get__wasActive, put=__set__wasActive))  _wasActive;

constexpr void __set__wasActive(bool value) ;

constexpr bool __get__wasActive() const;


// Methods

/// @brief Method add_playerDidFailEvent addr 0x20e0028 size 0x9c virtual false final false
 void add_playerDidFailEvent(::System::Action value) ;

/// @brief Method remove_playerDidFailEvent addr 0x20dfb44 size 0x9c virtual false final false
 void remove_playerDidFailEvent(::System::Action value) ;

/// @brief Method Start addr 0x20e0ea8 size 0x1a8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20e1050 size 0x1a4 virtual false final false
 void OnDestroy() ;

/// @brief Method CheckIfPlayerFailed addr 0x20e11f4 size 0x1ec virtual false final false
 void CheckIfPlayerFailed(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerDisconnected addr 0x20e13e0 size 0x4 virtual false final false
 void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerStateChanged addr 0x20e13e4 size 0x4 virtual false final false
 void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer player) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerLevelFailController() ;

/// @brief Method .ctor addr 0x20e13e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController, "", "MultiplayerConnectedPlayerLevelFailController");
