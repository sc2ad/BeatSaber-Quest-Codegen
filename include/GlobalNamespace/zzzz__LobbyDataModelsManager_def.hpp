#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyDataModelsManager;
}
// Type: ::LobbyDataModelsManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4508))
// CS Name: LobbyDataModelsManager
class CORDL_TYPE LobbyDataModelsManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LobbyDataModelsManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelsManager", modifiers: " const&", def_value: None }]
constexpr LobbyDataModelsManager(LobbyDataModelsManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelsManager", modifiers: "&&", def_value: None }]
constexpr LobbyDataModelsManager(LobbyDataModelsManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyDataModelsManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LobbyDataModelsManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyDataModelsManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyDataModelsManager& operator=(LobbyDataModelsManager&& o) noexcept = default;
  constexpr LobbyDataModelsManager& operator=(LobbyDataModelsManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ILobbyStateDataModel __declspec(property(get=__get__lobbyStateDataModel, put=__set__lobbyStateDataModel))  _lobbyStateDataModel;

constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel value) ;

constexpr ::GlobalNamespace::ILobbyStateDataModel __get__lobbyStateDataModel() const;

 ::GlobalNamespace::ILobbyPlayersDataModel __declspec(property(get=__get__lobbyPlayersDataModel, put=__set__lobbyPlayersDataModel))  _lobbyPlayersDataModel;

constexpr void __set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel value) ;

constexpr ::GlobalNamespace::ILobbyPlayersDataModel __get__lobbyPlayersDataModel() const;

 ::GlobalNamespace::ILobbyGameStateController __declspec(property(get=__get__lobbyGameStateController, put=__set__lobbyGameStateController))  _lobbyGameStateController;

constexpr void __set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController value) ;

constexpr ::GlobalNamespace::ILobbyGameStateController __get__lobbyGameStateController() const;

 ::GlobalNamespace::INodePoseSyncStateManager __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager))  _nodePoseSyncStateManager;

constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager value) ;

constexpr ::GlobalNamespace::INodePoseSyncStateManager __get__nodePoseSyncStateManager() const;

 ::GlobalNamespace::LobbyPlayerPermissionsModel __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel))  _lobbyPlayerPermissionsModel;

constexpr void __set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel value) ;

constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel __get__lobbyPlayerPermissionsModel() const;


// Methods

/// @brief Method Activate addr 0x21f3358 size 0x218 virtual false final false
 void Activate() ;

/// @brief Method Deactivate addr 0x21f3660 size 0x1a0 virtual false final false
 void Deactivate() ;

// Ctor Parameters []
explicit LobbyDataModelsManager() ;

/// @brief Method .ctor addr 0x21f38f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LobbyDataModelsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyDataModelsManager, "", "LobbyDataModelsManager");
