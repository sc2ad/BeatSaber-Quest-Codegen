#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyStateDataModel;
}
// Type: ::LobbyStateDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4519))
// CS Name: LobbyStateDataModel
class CORDL_TYPE LobbyStateDataModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ILobbyStateDataModel
constexpr operator  GlobalNamespace::ILobbyStateDataModel() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~LobbyStateDataModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyStateDataModel", modifiers: " const&", def_value: None }]
constexpr LobbyStateDataModel(LobbyStateDataModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyStateDataModel", modifiers: "&&", def_value: None }]
constexpr LobbyStateDataModel(LobbyStateDataModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyStateDataModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LobbyStateDataModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyStateDataModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyStateDataModel& operator=(LobbyStateDataModel&& o) noexcept = default;
  constexpr LobbyStateDataModel& operator=(LobbyStateDataModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::IUnifiedNetworkPlayerModel __declspec(property(get=__get__unifiedNetworkPlayerModel, put=__set__unifiedNetworkPlayerModel))  _unifiedNetworkPlayerModel;

constexpr void __set__unifiedNetworkPlayerModel(GlobalNamespace::IUnifiedNetworkPlayerModel value) ;

constexpr GlobalNamespace::IUnifiedNetworkPlayerModel __get__unifiedNetworkPlayerModel() const;

 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__connectedPlayers, put=__set__connectedPlayers))  _connectedPlayers;

constexpr void __set__connectedPlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __get__connectedPlayers() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__connectedPlayersById, put=__set__connectedPlayersById))  _connectedPlayersById;

constexpr void __set__connectedPlayersById(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IConnectedPlayer> __get__connectedPlayersById() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get__configuration, put=__set__configuration))  _configuration;

constexpr void __set__configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get__configuration() const;

 System::Action_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerConnectedEvent, put=__set_playerConnectedEvent))  playerConnectedEvent;

constexpr void __set_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> __get_playerConnectedEvent() const;

 System::Action_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerDisconnectedEvent, put=__set_playerDisconnectedEvent))  playerDisconnectedEvent;

constexpr void __set_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> __get_playerDisconnectedEvent() const;


// Properties

 bool __declspec(property(get=get_isConnected))  isConnected;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_localPlayer))  localPlayer;

 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_connectedPlayers))  connectedPlayers;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_rawConnectedPlayers))  rawConnectedPlayers;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;


// Methods

/// @brief Method add_playerConnectedEvent addr 0x21fd684 size 0xb0 virtual true final true
 void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerConnectedEvent addr 0x21fd734 size 0xb0 virtual true final true
 void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerDisconnectedEvent addr 0x21fd7e4 size 0xb0 virtual true final true
 void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerDisconnectedEvent addr 0x21fd894 size 0xb0 virtual true final true
 void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method get_isConnected addr 0x21fd944 size 0xa4 virtual true final true
 bool get_isConnected() ;

/// @brief Method get_localPlayer addr 0x21fd9e8 size 0xa0 virtual true final true
 GlobalNamespace::IConnectedPlayer get_localPlayer() ;

/// @brief Method get_connectedPlayers addr 0x21fda88 size 0x8 virtual true final true
 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> get_connectedPlayers() ;

/// @brief Method get_rawConnectedPlayers addr 0x21fda90 size 0xa4 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> get_rawConnectedPlayers() ;

/// @brief Method get_configuration addr 0x21fdb34 size 0x14 virtual true final true
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method Activate addr 0x21fdb48 size 0x7f0 virtual true final true
 void Activate() ;

/// @brief Method Deactivate addr 0x21fe338 size 0x194 virtual true final true
 void Deactivate() ;

/// @brief Method Dispose addr 0x21fe4cc size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method GetPlayerById addr 0x21fe4d0 size 0x94 virtual true final true
 GlobalNamespace::IConnectedPlayer GetPlayerById(::StringW userId) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerConnected addr 0x21fe564 size 0x170 virtual false final false
 void HandleMultiplayerSessionManagerPlayerConnected(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerDisconnected addr 0x21fe6d4 size 0x120 virtual false final false
 void HandleMultiplayerSessionManagerPlayerDisconnected(GlobalNamespace::IConnectedPlayer player) ;

static GlobalNamespace::LobbyStateDataModel New_ctor() ;

/// @brief Method .ctor addr 0x21fe7f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LobbyStateDataModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyStateDataModel, "", "LobbyStateDataModel");
