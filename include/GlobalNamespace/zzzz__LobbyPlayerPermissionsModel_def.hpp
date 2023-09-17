#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Action;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
// Type: ::LobbyPlayerPermissionsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4514))
// CS Name: LobbyPlayerPermissionsModel
class CORDL_TYPE LobbyPlayerPermissionsModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LobbyPlayerPermissionsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerPermissionsModel", modifiers: " const&", def_value: None }]
constexpr LobbyPlayerPermissionsModel(LobbyPlayerPermissionsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerPermissionsModel", modifiers: "&&", def_value: None }]
constexpr LobbyPlayerPermissionsModel(LobbyPlayerPermissionsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyPlayerPermissionsModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LobbyPlayerPermissionsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyPlayerPermissionsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyPlayerPermissionsModel& operator=(LobbyPlayerPermissionsModel&& o) noexcept = default;
  constexpr LobbyPlayerPermissionsModel& operator=(LobbyPlayerPermissionsModel const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IMenuRpcManager __declspec(property(get=__get__menuRpcManager, put=__set__menuRpcManager))  _menuRpcManager;

constexpr void __set__menuRpcManager(::GlobalNamespace::IMenuRpcManager value) ;

constexpr ::GlobalNamespace::IMenuRpcManager __get__menuRpcManager() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 bool __declspec(property(get=__get__isPartyOwner_k__BackingField, put=__set__isPartyOwner_k__BackingField))  _isPartyOwner_k__BackingField;

constexpr void __set__isPartyOwner_k__BackingField(bool value) ;

constexpr bool __get__isPartyOwner_k__BackingField() const;

 bool __declspec(property(get=__get__hasRecommendBeatmapPermission_k__BackingField, put=__set__hasRecommendBeatmapPermission_k__BackingField))  _hasRecommendBeatmapPermission_k__BackingField;

constexpr void __set__hasRecommendBeatmapPermission_k__BackingField(bool value) ;

constexpr bool __get__hasRecommendBeatmapPermission_k__BackingField() const;

 bool __declspec(property(get=__get__hasRecommendModifiersPermission_k__BackingField, put=__set__hasRecommendModifiersPermission_k__BackingField))  _hasRecommendModifiersPermission_k__BackingField;

constexpr void __set__hasRecommendModifiersPermission_k__BackingField(bool value) ;

constexpr bool __get__hasRecommendModifiersPermission_k__BackingField() const;

 bool __declspec(property(get=__get__hasKickVotePermission_k__BackingField, put=__set__hasKickVotePermission_k__BackingField))  _hasKickVotePermission_k__BackingField;

constexpr void __set__hasKickVotePermission_k__BackingField(bool value) ;

constexpr bool __get__hasKickVotePermission_k__BackingField() const;

 bool __declspec(property(get=__get__hasInvitePermission_k__BackingField, put=__set__hasInvitePermission_k__BackingField))  _hasInvitePermission_k__BackingField;

constexpr void __set__hasInvitePermission_k__BackingField(bool value) ;

constexpr bool __get__hasInvitePermission_k__BackingField() const;

 ::System::Action __declspec(property(get=__get_permissionsChangedEvent, put=__set_permissionsChangedEvent))  permissionsChangedEvent;

constexpr void __set_permissionsChangedEvent(::System::Action value) ;

constexpr ::System::Action __get_permissionsChangedEvent() const;


// Properties

 bool __declspec(property(get=get_isPartyOwner, put=set_isPartyOwner))  isPartyOwner;

 bool __declspec(property(get=get_hasRecommendBeatmapPermission, put=set_hasRecommendBeatmapPermission))  hasRecommendBeatmapPermission;

 bool __declspec(property(get=get_hasRecommendModifiersPermission, put=set_hasRecommendModifiersPermission))  hasRecommendModifiersPermission;

 bool __declspec(property(get=get_hasKickVotePermission, put=set_hasKickVotePermission))  hasKickVotePermission;

 bool __declspec(property(get=get_hasInvitePermission, put=set_hasInvitePermission))  hasInvitePermission;


// Methods

/// @brief Method get_isPartyOwner addr 0x21f8cb0 size 0x8 virtual false final false
 bool get_isPartyOwner() ;

/// @brief Method set_isPartyOwner addr 0x21f8cb8 size 0xc virtual false final false
 void set_isPartyOwner(bool value) ;

/// @brief Method get_hasRecommendBeatmapPermission addr 0x21f8cc4 size 0x8 virtual false final false
 bool get_hasRecommendBeatmapPermission() ;

/// @brief Method set_hasRecommendBeatmapPermission addr 0x21f8ccc size 0xc virtual false final false
 void set_hasRecommendBeatmapPermission(bool value) ;

/// @brief Method get_hasRecommendModifiersPermission addr 0x21f8cd8 size 0x8 virtual false final false
 bool get_hasRecommendModifiersPermission() ;

/// @brief Method set_hasRecommendModifiersPermission addr 0x21f8ce0 size 0xc virtual false final false
 void set_hasRecommendModifiersPermission(bool value) ;

/// @brief Method get_hasKickVotePermission addr 0x21f8cec size 0x8 virtual false final false
 bool get_hasKickVotePermission() ;

/// @brief Method set_hasKickVotePermission addr 0x21f8cf4 size 0xc virtual false final false
 void set_hasKickVotePermission(bool value) ;

/// @brief Method get_hasInvitePermission addr 0x21f8d00 size 0x8 virtual false final false
 bool get_hasInvitePermission() ;

/// @brief Method set_hasInvitePermission addr 0x21f8d08 size 0xc virtual false final false
 void set_hasInvitePermission(bool value) ;

/// @brief Method add_permissionsChangedEvent addr 0x21f8d14 size 0x9c virtual false final false
 void add_permissionsChangedEvent(::System::Action value) ;

/// @brief Method remove_permissionsChangedEvent addr 0x21f8db0 size 0x9c virtual false final false
 void remove_permissionsChangedEvent(::System::Action value) ;

/// @brief Method Activate addr 0x21f3570 size 0xf0 virtual false final false
 void Activate() ;

/// @brief Method Deactivate addr 0x21f3800 size 0xf0 virtual false final false
 void Deactivate() ;

/// @brief Method SetPlayerPermissions addr 0x21f868c size 0x44 virtual false final false
 void SetPlayerPermissions(bool isPartyOwner, bool hasRecommendBeatmapPermission, bool hasRecommendModifiersPermission, bool hasKickVotePermission, bool hasInvitePermission) ;

/// @brief Method HandleMenuRpcManagerSetPlayersPermissionConfiguration addr 0x21f8e4c size 0x2ac virtual false final false
 void HandleMenuRpcManagerSetPlayersPermissionConfiguration(::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable playersLobbyPermissionConfiguration) ;

// Ctor Parameters []
explicit LobbyPlayerPermissionsModel() ;

/// @brief Method .ctor addr 0x21f90f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayerPermissionsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayerPermissionsModel, "", "LobbyPlayerPermissionsModel");
