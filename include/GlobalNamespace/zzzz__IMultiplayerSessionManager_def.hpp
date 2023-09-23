#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerSessionManager__SessionType;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketSubSerializer_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Type: ::IMultiplayerSessionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12741))
// CS Name: IMultiplayerSessionManager
class CORDL_TYPE IMultiplayerSessionManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMultiplayerSessionManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMultiplayerSessionManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_localPlayer))  localPlayer;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 float_t __declspec(property(get=get_syncTime))  syncTime;

 bool __declspec(property(get=get_isSyncTimeInitialized))  isSyncTimeInitialized;

 int32_t __declspec(property(get=get_maxPlayerCount))  maxPlayerCount;

 int32_t __declspec(property(get=get_connectedPlayerCount))  connectedPlayerCount;

 bool __declspec(property(get=get_isConnectingOrConnected))  isConnectingOrConnected;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_isDisconnecting))  isDisconnecting;

 bool __declspec(property(get=get_isSpectating))  isSpectating;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_connectedPlayers))  connectedPlayers;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_connectionOwner))  connectionOwner;


// Methods

/// @brief Method get_localPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_localPlayer() ;

/// @brief Method get_isConnectionOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnectionOwner() ;

/// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_syncTime() ;

/// @brief Method get_isSyncTimeInitialized addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isSyncTimeInitialized() ;

/// @brief Method get_maxPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_maxPlayerCount() ;

/// @brief Method get_connectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_connectedPlayerCount() ;

/// @brief Method get_isConnectingOrConnected addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnectingOrConnected() ;

/// @brief Method get_isConnected addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isDisconnecting() ;

/// @brief Method get_isSpectating addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isSpectating() ;

/// @brief Method get_connectedPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> get_connectedPlayers() ;

/// @brief Method get_connectionOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_connectionOwner() ;

/// @brief Method add_connectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectedEvent(System::Action value) ;

/// @brief Method remove_connectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectedEvent(System::Action value) ;

/// @brief Method add_connectionFailedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_connectionFailedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method add_playerConnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerConnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerAvatarChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerAvatarChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerStateChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerStateChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_connectionOwnerStateChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectionOwnerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_connectionOwnerStateChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectionOwnerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_disconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_disconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_pollUpdateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_pollUpdateEvent(System::Action value) ;

/// @brief Method remove_pollUpdateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_pollUpdateEvent(System::Action value) ;

/// @brief Method SetMaxPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetMaxPlayerCount(int32_t maxPlayerCount) ;

/// @brief Method StartSession addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartSession(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType sessionType, GlobalNamespace::ConnectedPlayerManager connectedPlayerManager) ;

/// @brief Method EndSession addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndSession() ;

/// @brief Method GetPlayerByUserId addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer GetPlayerByUserId(::StringW userId) ;

/// @brief Method GetConnectedPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer GetConnectedPlayer(int32_t index) ;

/// @brief Method KickPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
 void KickPlayer(::StringW userId) ;

/// @brief Method Disconnect addr 0x0 size 0xffffffffffffffff virtual true final false
 void Disconnect() ;

/// @brief Method Send addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void Send(T message) ;

/// @brief Method SendToPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void SendToPlayer(T message, GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method SendUnreliable addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void SendUnreliable(T message) ;

/// @brief Method SendUnreliableEncryptedToPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void SendUnreliableEncryptedToPlayer(T message, GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void RegisterCallback(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, System::Action_2<T,GlobalNamespace::IConnectedPlayer> callback, System::Func_1<T> constructor) ;

/// @brief Method UnregisterCallback addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void UnregisterCallback(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType) ;

/// @brief Method SetLocalPlayerState addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLocalPlayerState(::StringW state, bool hasState) ;

/// @brief Method LocalPlayerHasState addr 0x0 size 0xffffffffffffffff virtual true final false
 bool LocalPlayerHasState(::StringW state) ;

/// @brief Method RegisterSerializer addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterSerializer(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer> subSerializer) ;

/// @brief Method UnregisterSerializer addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterSerializer(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer> subSerializer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IMultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerSessionManager, "", "IMultiplayerSessionManager");
