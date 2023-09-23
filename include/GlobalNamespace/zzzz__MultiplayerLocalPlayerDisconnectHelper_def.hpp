#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
// Type: ::MultiplayerLocalPlayerDisconnectHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5267))
// CS Name: MultiplayerLocalPlayerDisconnectHelper
class CORDL_TYPE MultiplayerLocalPlayerDisconnectHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerLocalPlayerDisconnectHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerDisconnectHelper", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalPlayerDisconnectHelper(MultiplayerLocalPlayerDisconnectHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerDisconnectHelper", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalPlayerDisconnectHelper(MultiplayerLocalPlayerDisconnectHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalPlayerDisconnectHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerLocalPlayerDisconnectHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalPlayerDisconnectHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalPlayerDisconnectHelper& operator=(MultiplayerLocalPlayerDisconnectHelper&& o) noexcept = default;
  constexpr MultiplayerLocalPlayerDisconnectHelper& operator=(MultiplayerLocalPlayerDisconnectHelper const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager))  _gameplayRpcManager;

constexpr void __set__gameplayRpcManager(GlobalNamespace::IGameplayRpcManager value) ;

constexpr GlobalNamespace::IGameplayRpcManager __get__gameplayRpcManager() const;

 GlobalNamespace::IMultiplayerLevelEndActionsListener __declspec(property(get=__get__multiplayerLevelEndActions, put=__set__multiplayerLevelEndActions))  _multiplayerLevelEndActions;

constexpr void __set__multiplayerLevelEndActions(GlobalNamespace::IMultiplayerLevelEndActionsListener value) ;

constexpr GlobalNamespace::IMultiplayerLevelEndActionsListener __get__multiplayerLevelEndActions() const;

 GlobalNamespace::LobbyPlayerPermissionsModel __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel))  _lobbyPlayerPermissionsModel;

constexpr void __set__lobbyPlayerPermissionsModel(GlobalNamespace::LobbyPlayerPermissionsModel value) ;

constexpr GlobalNamespace::LobbyPlayerPermissionsModel __get__lobbyPlayerPermissionsModel() const;

/// @brief Field kDisconnectLabel offset 0
static constexpr ::ConstString  kDisconnectLabel{u"BUTTON_DISCONNECT"};

/// @brief Field kEndGameLabel offset 0
static constexpr ::ConstString  kEndGameLabel{u"BUTTON_END_GAME"};


// Methods

/// @brief Method Disconnect addr 0x20e7b78 size 0x210 virtual false final false
 void Disconnect(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState, GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

/// @brief Method ResolveDisconnectButtonString addr 0x20e9b00 size 0x70 virtual false final false
 ::StringW ResolveDisconnectButtonString() ;

// Ctor Parameters []
explicit MultiplayerLocalPlayerDisconnectHelper() ;

/// @brief Method .ctor addr 0x20e9b70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper, "", "MultiplayerLocalPlayerDisconnectHelper");
