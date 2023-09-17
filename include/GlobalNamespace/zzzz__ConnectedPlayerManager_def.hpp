#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EncryptionUtility__IEncryptionState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
template<typename TType,typename TData>
class NetworkPacketSerializer_2;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Action;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class RollingAverage;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketSubSerializer_1;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace GlobalNamespace {
struct PlayerStateHash;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__ConnectedPlayerManager__InternalMessageType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ConnectedPlayerManager__MessageType;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__PingPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__PongPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129;
}
// Type: ::ConnectedPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12633))
// CS Name: ConnectedPlayerManager::ConnectedPlayer
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IConnectedPlayer
constexpr operator  ::GlobalNamespace::IConnectedPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer(____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer(____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer& operator=(____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer& operator=(____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer const& o) noexcept = default;
                


// Fields

/// @brief Field kFixedSyncTimeOffset offset 0
static constexpr float_t  kFixedSyncTimeOffset{0.033333335};

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 bool __declspec(property(get=__get__isMe, put=__set__isMe))  _isMe;

constexpr void __set__isMe(bool value) ;

constexpr bool __get__isMe() const;

 bool __declspec(property(get=__get__isConnectionOwner, put=__set__isConnectionOwner))  _isConnectionOwner;

constexpr void __set__isConnectionOwner(bool value) ;

constexpr bool __get__isConnectionOwner() const;

 ::GlobalNamespace::ConnectedPlayerManager __declspec(property(get=__get__manager, put=__set__manager))  _manager;

constexpr void __set__manager(::GlobalNamespace::ConnectedPlayerManager value) ;

constexpr ::GlobalNamespace::ConnectedPlayerManager __get__manager() const;

 ::GlobalNamespace::IConnection __declspec(property(get=__get__connection, put=__set__connection))  _connection;

constexpr void __set__connection(::GlobalNamespace::IConnection value) ;

constexpr ::GlobalNamespace::IConnection __get__connection() const;

 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer __get__parent() const;

 uint8_t __declspec(property(get=__get__connectionId, put=__set__connectionId))  _connectionId;

constexpr void __set__connectionId(uint8_t value) ;

constexpr uint8_t __get__connectionId() const;

 uint8_t __declspec(property(get=__get__remoteConnectionId, put=__set__remoteConnectionId))  _remoteConnectionId;

constexpr void __set__remoteConnectionId(uint8_t value) ;

constexpr uint8_t __get__remoteConnectionId() const;

 int32_t __declspec(property(get=__get__sortIndex, put=__set__sortIndex))  _sortIndex;

constexpr void __set__sortIndex(int32_t value) ;

constexpr int32_t __get__sortIndex() const;

 bool __declspec(property(get=__get__isConnected, put=__set__isConnected))  _isConnected;

constexpr void __set__isConnected(bool value) ;

constexpr bool __get__isConnected() const;

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=__get__disconnectedReason, put=__set__disconnectedReason))  _disconnectedReason;

constexpr void __set__disconnectedReason(::GlobalNamespace::DisconnectedReason value) ;

constexpr ::GlobalNamespace::DisconnectedReason __get__disconnectedReason() const;

 bool __declspec(property(get=__get__isKicked, put=__set__isKicked))  _isKicked;

constexpr void __set__isKicked(bool value) ;

constexpr bool __get__isKicked() const;

 ::GlobalNamespace::PlayerStateHash __declspec(property(get=__get__playerState, put=__set__playerState))  _playerState;

constexpr void __set__playerState(::GlobalNamespace::PlayerStateHash value) ;

constexpr ::GlobalNamespace::PlayerStateHash __get__playerState() const;

 ::GlobalNamespace::MultiplayerAvatarData __declspec(property(get=__get__playerAvatar, put=__set__playerAvatar))  _playerAvatar;

constexpr void __set__playerAvatar(::GlobalNamespace::MultiplayerAvatarData value) ;

constexpr ::GlobalNamespace::MultiplayerAvatarData __get__playerAvatar() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__publicEncryptionKey, put=__set__publicEncryptionKey))  _publicEncryptionKey;

constexpr void __set__publicEncryptionKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__publicEncryptionKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__random, put=__set__random))  _random;

constexpr void __set__random(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__random() const;

 ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState __declspec(property(get=__get__encryptionState, put=__set__encryptionState))  _encryptionState;

constexpr void __set__encryptionState(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState __get__encryptionState() const;

 ::GlobalNamespace::RollingAverage __declspec(property(get=__get__latency, put=__set__latency))  _latency;

constexpr void __set__latency(::GlobalNamespace::RollingAverage value) ;

constexpr ::GlobalNamespace::RollingAverage __get__latency() const;


// Properties

 ::GlobalNamespace::IConnection __declspec(property(get=get_connection))  connection;

 uint8_t __declspec(property(get=get_connectionId))  connectionId;

 uint8_t __declspec(property(get=get_remoteConnectionId))  remoteConnectionId;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 bool __declspec(property(get=get_isKicked))  isKicked;

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=get_disconnectedReason))  disconnectedReason;

 int32_t __declspec(property(get=get_sortIndex))  sortIndex;

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isMe))  isMe;

 bool __declspec(property(get=get_hasValidLatency))  hasValidLatency;

 float_t __declspec(property(get=get_currentLatency))  currentLatency;

 float_t __declspec(property(get=get_offsetSyncTime))  offsetSyncTime;

 ::GlobalNamespace::MultiplayerAvatarData __declspec(property(get=get_multiplayerAvatarData))  multiplayerAvatarData;

 ::ArrayW<uint8_t> __declspec(property(get=get_publicEncryptionKey))  publicEncryptionKey;

 ::ArrayW<uint8_t> __declspec(property(get=get_random))  random;

 bool __declspec(property(get=get_isDirectConnection))  isDirectConnection;

 ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState __declspec(property(get=get_encryptionState))  encryptionState;


// Methods

/// @brief Method get_connection addr 0xda3e38 size 0x8 virtual false final false
 ::GlobalNamespace::IConnection get_connection() ;

/// @brief Method get_connectionId addr 0xda3e40 size 0x8 virtual false final false
 uint8_t get_connectionId() ;

/// @brief Method get_remoteConnectionId addr 0xda3e48 size 0x8 virtual false final false
 uint8_t get_remoteConnectionId() ;

/// @brief Method get_isConnected addr 0xda3e50 size 0x8 virtual true final true
 bool get_isConnected() ;

/// @brief Method get_isConnectionOwner addr 0xda3e58 size 0x8 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method get_isKicked addr 0xda3e60 size 0x8 virtual true final true
 bool get_isKicked() ;

/// @brief Method get_disconnectedReason addr 0xda3e68 size 0x8 virtual true final true
 ::GlobalNamespace::DisconnectedReason get_disconnectedReason() ;

/// @brief Method get_sortIndex addr 0xda3e70 size 0x8 virtual true final true
 int32_t get_sortIndex() ;

/// @brief Method get_userId addr 0xda3e78 size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0xda3e80 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_isMe addr 0xda3e88 size 0x8 virtual true final true
 bool get_isMe() ;

/// @brief Method get_hasValidLatency addr 0xda3e90 size 0x30 virtual true final true
 bool get_hasValidLatency() ;

/// @brief Method get_currentLatency addr 0xda3ec0 size 0x24 virtual true final true
 float_t get_currentLatency() ;

/// @brief Method get_offsetSyncTime addr 0xda3ee4 size 0x50 virtual true final true
 float_t get_offsetSyncTime() ;

/// @brief Method get_multiplayerAvatarData addr 0xda3f34 size 0x10 virtual true final true
 ::GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData() ;

/// @brief Method get_publicEncryptionKey addr 0xda3f44 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_publicEncryptionKey() ;

/// @brief Method get_random addr 0xda3f4c size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_random() ;

/// @brief Method get_isDirectConnection addr 0xd9e5bc size 0x10 virtual false final false
 bool get_isDirectConnection() ;

/// @brief Method get_encryptionState addr 0xda3f54 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState get_encryptionState() ;

// Ctor Parameters [CppParam { name: "manager", ty: "::GlobalNamespace::ConnectedPlayerManager", modifiers: "", def_value: None }, CppParam { name: "connectionId", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "remoteConnectionId", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "connection", ty: "::GlobalNamespace::IConnection", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isMe", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "publicEncryptionKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "random", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager manager, uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection connection, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random) ;

/// @brief Method .ctor addr 0xda3f5c size 0x100 virtual false final false
 void _ctor(::GlobalNamespace::ConnectedPlayerManager manager, uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection connection, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random) ;

/// @brief Method CreateLocalPlayer addr 0xda2114 size 0xc0 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer CreateLocalPlayer(::GlobalNamespace::ConnectedPlayerManager manager, ::StringW userId, ::StringW userName, bool isConnectionOwner, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random) ;

/// @brief Method CreateDirectlyConnectedPlayer addr 0xda223c size 0x1e0 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer CreateDirectlyConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager manager, uint8_t connectionId, ::GlobalNamespace::IConnection connection) ;

/// @brief Method CreateRemoteConnectedPlayer addr 0xda2edc size 0xd0 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer CreateRemoteConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager manager, uint8_t connectionId, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket packet, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer parent) ;

/// @brief Method GetPlayerConnectedPacket addr 0xd9e458 size 0x70 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket GetPlayerConnectedPacket() ;

/// @brief Method GetPlayerIdentityPacket addr 0xd9e714 size 0xb8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket GetPlayerIdentityPacket() ;

/// @brief Method GetPlayerStatePacket addr 0xda1e14 size 0x60 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket GetPlayerStatePacket() ;

/// @brief Method GetPlayerAvatarPacket addr 0xda1f04 size 0x88 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket GetPlayerAvatarPacket() ;

/// @brief Method GetPlayerSortOrderPacket addr 0xd9e6ac size 0x68 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket GetPlayerSortOrderPacket() ;

/// @brief Method Disconnect addr 0xd9dd34 size 0x148 virtual false final false
 void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method UpdateLatency addr 0xda3d90 size 0x1c virtual false final false
 void UpdateLatency(float_t latency) ;

/// @brief Method UpdateSortIndex addr 0xda2074 size 0x20 virtual false final false
 bool UpdateSortIndex(int32_t index) ;

/// @brief Method SetKicked addr 0xda1d28 size 0xc virtual false final false
 void SetKicked() ;

/// @brief Method UpdateIdentity addr 0xda3134 size 0x64 virtual false final false
 void UpdateIdentity(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket packet) ;

/// @brief Method UpdateState addr 0xda32f8 size 0x1c virtual false final false
 void UpdateState(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket packet) ;

/// @brief Method UpdateAvatar addr 0xda33dc size 0x24 virtual false final false
 void UpdateAvatar(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket packet) ;

/// @brief Method SetEncryptionState addr 0xda4100 size 0x8 virtual false final false
 void SetEncryptionState(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState) ;

/// @brief Method HasState addr 0xda4108 size 0xc virtual true final true
 bool HasState(::StringW state) ;

/// @brief Method SetPlayerState addr 0xda4114 size 0x8 virtual false final false
 void SetPlayerState(::GlobalNamespace::PlayerStateHash playerState) ;

/// @brief Method SetPlayerAvatar addr 0xda411c size 0x18 virtual false final false
 void SetPlayerAvatar(::GlobalNamespace::MultiplayerAvatarData avatarData) ;

/// @brief Method ToString addr 0xda4134 size 0x17c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternalMessageType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12634))
// CS Name: ConnectedPlayerManager::InternalMessageType
struct CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__InternalMessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__InternalMessageType(uint8_t value__) noexcept;


                    constexpr ____GlobalNamespace__ConnectedPlayerManager__InternalMessageType(____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const&) = default;
                    constexpr ____GlobalNamespace__ConnectedPlayerManager__InternalMessageType(____GlobalNamespace__ConnectedPlayerManager__InternalMessageType&&) = default;
                    constexpr ____GlobalNamespace__ConnectedPlayerManager__InternalMessageType& operator=(____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ConnectedPlayerManager__InternalMessageType& operator=(____GlobalNamespace__ConnectedPlayerManager__InternalMessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__InternalMessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__ConnectedPlayerManager__InternalMessageType_Unwrapped : uint8_t {
__SyncTime = 0u,
__PlayerConnected = 1u,
__PlayerIdentity = 2u,
__PlayerLatencyUpdate = 3u,
__PlayerDisconnected = 4u,
__PlayerSortOrderUpdate = 5u,
__Party = 6u,
__MultiplayerSession = 7u,
__KickPlayer = 8u,
__PlayerStateUpdate = 9u,
__PlayerAvatarUpdate = 10u,
__Ping = 11u,
__Pong = 12u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__ConnectedPlayerManager__InternalMessageType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__ConnectedPlayerManager__InternalMessageType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field SyncTime offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const SyncTime;

/// @brief Field PlayerConnected offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const PlayerConnected;

/// @brief Field PlayerIdentity offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const PlayerIdentity;

/// @brief Field PlayerLatencyUpdate offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const PlayerLatencyUpdate;

/// @brief Field PlayerDisconnected offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const PlayerDisconnected;

/// @brief Field PlayerSortOrderUpdate offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const PlayerSortOrderUpdate;

/// @brief Field Party offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const Party;

/// @brief Field MultiplayerSession offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const MultiplayerSession;

/// @brief Field KickPlayer offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const KickPlayer;

/// @brief Field PlayerStateUpdate offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const PlayerStateUpdate;

/// @brief Field PlayerAvatarUpdate offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const PlayerAvatarUpdate;

/// @brief Field Ping offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const Ping;

/// @brief Field Pong offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType const Pong;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MessageType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12635))
// CS Name: ConnectedPlayerManager::MessageType
struct CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__MessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__MessageType(uint8_t value__) noexcept;


                    constexpr ____GlobalNamespace__ConnectedPlayerManager__MessageType(____GlobalNamespace__ConnectedPlayerManager__MessageType const&) = default;
                    constexpr ____GlobalNamespace__ConnectedPlayerManager__MessageType(____GlobalNamespace__ConnectedPlayerManager__MessageType&&) = default;
                    constexpr ____GlobalNamespace__ConnectedPlayerManager__MessageType& operator=(____GlobalNamespace__ConnectedPlayerManager__MessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ConnectedPlayerManager__MessageType& operator=(____GlobalNamespace__ConnectedPlayerManager__MessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__MessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__ConnectedPlayerManager__MessageType_Unwrapped : uint8_t {
__Party = 6u,
__MultiplayerSession = 7u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__ConnectedPlayerManager__MessageType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__ConnectedPlayerManager__MessageType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Party offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__MessageType const Party;

/// @brief Field MultiplayerSession offset 0
static ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__MessageType const MultiplayerSession;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerConnectedPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12636))
// CS Name: ConnectedPlayerManager::PlayerConnectedPacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_remoteConnectionId, put=__set_remoteConnectionId))  remoteConnectionId;

constexpr void __set_remoteConnectionId(uint8_t value) ;

constexpr uint8_t __get_remoteConnectionId() const;

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;

 bool __declspec(property(get=__get_isConnectionOwner, put=__set_isConnectionOwner))  isConnectionOwner;

constexpr void __set_isConnectionOwner(bool value) ;

constexpr bool __get_isConnectionOwner() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0d1c size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket> get_pool() ;

/// @brief Method Serialize addr 0xda42b0 size 0x60 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda4310 size 0x68 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xda2fac size 0x54 virtual true final true
 void Release() ;

/// @brief Method Init addr 0xda405c size 0x14 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket Init(uint8_t connectionId, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket() ;

/// @brief Method .ctor addr 0xda4378 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerIdentityPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12637))
// CS Name: ConnectedPlayerManager::PlayerIdentityPacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::PlayerStateHash __declspec(property(get=__get_playerState, put=__set_playerState))  playerState;

constexpr void __set_playerState(::GlobalNamespace::PlayerStateHash value) ;

constexpr ::GlobalNamespace::PlayerStateHash __get_playerState() const;

 ::GlobalNamespace::MultiplayerAvatarData __declspec(property(get=__get_playerAvatar, put=__set_playerAvatar))  playerAvatar;

constexpr void __set_playerAvatar(::GlobalNamespace::MultiplayerAvatarData value) ;

constexpr ::GlobalNamespace::MultiplayerAvatarData __get_playerAvatar() const;

 ::GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr ::GlobalNamespace::ByteArrayNetSerializable __get_random() const;

 ::GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_publicEncryptionKey, put=__set_publicEncryptionKey))  publicEncryptionKey;

constexpr void __set_publicEncryptionKey(::GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr ::GlobalNamespace::ByteArrayNetSerializable __get_publicEncryptionKey() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0d5c size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket> get_pool() ;

/// @brief Method Serialize addr 0xda4380 size 0x58 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda43d8 size 0x88 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xda4460 size 0x6c virtual true final true
 void Release() ;

/// @brief Method Init addr 0xda4070 size 0x5c virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket Init(::GlobalNamespace::PlayerStateHash states, ::GlobalNamespace::MultiplayerAvatarData avatar, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicEncryptionKey) ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket() ;

/// @brief Method .ctor addr 0xda44cc size 0xec virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerAvatarPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12638))
// CS Name: ConnectedPlayerManager::PlayerAvatarPacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerAvatarData __declspec(property(get=__get_playerAvatar, put=__set_playerAvatar))  playerAvatar;

constexpr void __set_playerAvatar(::GlobalNamespace::MultiplayerAvatarData value) ;

constexpr ::GlobalNamespace::MultiplayerAvatarData __get_playerAvatar() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0e9c size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket> get_pool() ;

/// @brief Method Serialize addr 0xda45b8 size 0xc virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda45c4 size 0x48 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xda460c size 0x54 virtual true final true
 void Release() ;

/// @brief Method Init addr 0xda40d4 size 0x20 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket Init(::GlobalNamespace::MultiplayerAvatarData avatar) ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket() ;

/// @brief Method .ctor addr 0xda4660 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerStatePacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12639))
// CS Name: ConnectedPlayerManager::PlayerStatePacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket(____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket(____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::PlayerStateHash __declspec(property(get=__get_playerState, put=__set_playerState))  playerState;

constexpr void __set_playerState(::GlobalNamespace::PlayerStateHash value) ;

constexpr ::GlobalNamespace::PlayerStateHash __get_playerState() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0edc size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket> get_pool() ;

/// @brief Method Serialize addr 0xda4668 size 0xc virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda4674 size 0x20 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xda4694 size 0x54 virtual true final true
 void Release() ;

/// @brief Method Init addr 0xda40cc size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket Init(::GlobalNamespace::PlayerStateHash states) ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket() ;

/// @brief Method .ctor addr 0xda46e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerSortOrderPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12640))
// CS Name: ConnectedPlayerManager::PlayerSortOrderPacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 int32_t __declspec(property(get=__get_sortIndex, put=__set_sortIndex))  sortIndex;

constexpr void __set_sortIndex(int32_t value) ;

constexpr int32_t __get_sortIndex() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0ddc size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket> get_pool() ;

/// @brief Method Serialize addr 0xda46f0 size 0x40 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda4730 size 0x44 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xda375c size 0x54 virtual true final true
 void Release() ;

/// @brief Method Init addr 0xda40f4 size 0xc virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket Init(::StringW userId, int32_t sortIndex) ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket() ;

/// @brief Method .ctor addr 0xda4774 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerDisconnectedPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12641))
// CS Name: ConnectedPlayerManager::PlayerDisconnectedPacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket(____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=__get_disconnectedReason, put=__set_disconnectedReason))  disconnectedReason;

constexpr void __set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) ;

constexpr ::GlobalNamespace::DisconnectedReason __get_disconnectedReason() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0d9c size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket> get_pool() ;

/// @brief Method Init addr 0xda2534 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket Init(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method Serialize addr 0xda477c size 0x14 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda4790 size 0x20 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xda34a8 size 0x54 virtual true final true
 void Release() ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket() ;

/// @brief Method .ctor addr 0xda47b0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::KickPlayerPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12642))
// CS Name: ConnectedPlayerManager::KickPlayerPacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket(____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket(____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=__get_disconnectedReason, put=__set_disconnectedReason))  disconnectedReason;

constexpr void __set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) ;

constexpr ::GlobalNamespace::DisconnectedReason __get_disconnectedReason() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0e5c size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket> get_pool() ;

/// @brief Method Init addr 0xda1d20 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket Init(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method Serialize addr 0xda47c0 size 0x14 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda47d4 size 0x20 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xda35dc size 0x54 virtual true final true
 void Release() ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket() ;

/// @brief Method .ctor addr 0xda47f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SyncTimePacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12643))
// CS Name: ConnectedPlayerManager::SyncTimePacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket(____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket(____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket& operator=(____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket& operator=(____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_syncTime, put=__set_syncTime))  syncTime;

constexpr void __set_syncTime(float_t value) ;

constexpr float_t __get_syncTime() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0e1c size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket> get_pool() ;

/// @brief Method Serialize addr 0xda47fc size 0x20 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda481c size 0x28 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Init addr 0xda3bb0 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket Init(float_t syncTime) ;

/// @brief Method Release addr 0xda3904 size 0x54 virtual true final true
 void Release() ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket() ;

/// @brief Method .ctor addr 0xda4844 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PingPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12644))
// CS Name: ConnectedPlayerManager::PingPacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__PingPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__ConnectedPlayerManager__PingPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PingPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PingPacket(____GlobalNamespace__ConnectedPlayerManager__PingPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PingPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PingPacket(____GlobalNamespace__ConnectedPlayerManager__PingPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__PingPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__PingPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PingPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PingPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PingPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__PingPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PingPacket const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_pingTime, put=__set_pingTime))  pingTime;

constexpr void __set_pingTime(float_t value) ;

constexpr float_t __get_pingTime() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PingPacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xd9e268 size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PingPacket> get_pool() ;

/// @brief Method Serialize addr 0xda484c size 0x20 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda486c size 0x28 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Init addr 0xd9e36c size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PingPacket Init(float_t pingTime) ;

/// @brief Method Release addr 0xda3b54 size 0x54 virtual true final true
 void Release() ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__PingPacket() ;

/// @brief Method .ctor addr 0xda4894 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PongPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12645))
// CS Name: ConnectedPlayerManager::PongPacket
class CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager__PongPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__ConnectedPlayerManager__PongPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PongPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PongPacket(____GlobalNamespace__ConnectedPlayerManager__PongPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectedPlayerManager__PongPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager__PongPacket(____GlobalNamespace__ConnectedPlayerManager__PongPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager__PongPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectedPlayerManager__PongPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PongPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectedPlayerManager__PongPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PongPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectedPlayerManager__PongPacket& operator=(____GlobalNamespace__ConnectedPlayerManager__PongPacket const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_pingTime, put=__set_pingTime))  pingTime;

constexpr void __set_pingTime(float_t value) ;

constexpr float_t __get_pingTime() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PongPacket> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xda0f1c size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PongPacket> get_pool() ;

/// @brief Method Serialize addr 0xda489c size 0x20 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xda48bc size 0x28 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Init addr 0xda3ba8 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PongPacket Init(float_t pingTime) ;

/// @brief Method Release addr 0xda3d3c size 0x54 virtual true final true
 void Release() ;

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectedPlayerManager__PongPacket() ;

/// @brief Method .ctor addr 0xda48e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<InitializePlayerEncryption>d__129
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12646))
// CS Name: ConnectedPlayerManager::<InitializePlayerEncryption>d__129
struct CORDL_TYPE ____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::ConnectedPlayerManager", modifiers: "", def_value: None }, CppParam { name: "player", ty: "::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer", modifiers: "", def_value: None }, CppParam { name: "_isClient_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::ConnectedPlayerManager __4__this, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer player, bool _isClient_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState> __u__2) noexcept;


                    constexpr ____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129(____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129 const&) = default;
                    constexpr ____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129(____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129&&) = default;
                    constexpr ____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129& operator=(____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129& operator=(____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 ::GlobalNamespace::ConnectedPlayerManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::ConnectedPlayerManager value) ;

constexpr ::GlobalNamespace::ConnectedPlayerManager __get___4__this() const;

 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer __declspec(property(get=__get_player, put=__set_player))  player;

constexpr void __set_player(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer __get_player() const;

 bool __declspec(property(get=__get__isClient_5__2, put=__set__isClient_5__2))  _isClient_5__2;

constexpr void __set__isClient_5__2(bool value) ;

constexpr bool __get__isClient_5__2() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __get___u__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0xda48ec size 0x4e8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xda4f40 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectedPlayerManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12647))
// CS Name: ConnectedPlayerManager
class CORDL_TYPE ConnectedPlayerManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _InitializePlayerEncryption_d__129 = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129;

using PongPacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PongPacket;

using PingPacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PingPacket;

using SyncTimePacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket;

using KickPlayerPacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket;

using PlayerDisconnectedPacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket;

using PlayerSortOrderPacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket;

using PlayerStatePacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket;

using PlayerAvatarPacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket;

using PlayerIdentityPacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket;

using PlayerConnectedPacket = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket;

using MessageType = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__MessageType;

using InternalMessageType = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType;

using ConnectedPlayer = ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~ConnectedPlayerManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager", modifiers: " const&", def_value: None }]
constexpr ConnectedPlayerManager(ConnectedPlayerManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager", modifiers: "&&", def_value: None }]
constexpr ConnectedPlayerManager(ConnectedPlayerManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectedPlayerManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConnectedPlayerManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectedPlayerManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectedPlayerManager& operator=(ConnectedPlayerManager&& o) noexcept = default;
  constexpr ConnectedPlayerManager& operator=(ConnectedPlayerManager const& o) noexcept = default;
                


// Fields

/// @brief Field invalidSortIndex offset 0
static constexpr int32_t  invalidSortIndex{-1};

/// @brief Field kEncryptedMessageBit offset 0
static constexpr uint8_t  kEncryptedMessageBit{128u};

/// @brief Field kAllConnectionsId offset 0
static constexpr uint8_t  kAllConnectionsId{127u};

/// @brief Field kLocalConnectionId offset 0
static constexpr uint8_t  kLocalConnectionId{0u};

/// @brief Field kTimeSensitiveAllowedReceiveWindow offset 0
static constexpr float_t  kTimeSensitiveAllowedReceiveWindow{0.03};

/// @brief Field kMaxUnreliableMessageLength offset 0
static constexpr int32_t  kMaxUnreliableMessageLength{412};

/// @brief Field kPingUpdateFrequency offset 0
static constexpr float_t  kPingUpdateFrequency{2};

 ::System::Action __declspec(property(get=__get_connectedEvent, put=__set_connectedEvent))  connectedEvent;

constexpr void __set_connectedEvent(::System::Action value) ;

constexpr ::System::Action __get_connectedEvent() const;

 ::System::Action __declspec(property(get=__get_initializedEvent, put=__set_initializedEvent))  initializedEvent;

constexpr void __set_initializedEvent(::System::Action value) ;

constexpr ::System::Action __get_initializedEvent() const;

 ::System::Action_1<::GlobalNamespace::DisconnectedReason> __declspec(property(get=__get_disconnectedEvent, put=__set_disconnectedEvent))  disconnectedEvent;

constexpr void __set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason> __get_disconnectedEvent() const;

 ::System::Action_1<::GlobalNamespace::ConnectionFailedReason> __declspec(property(get=__get_connectionFailedEvent, put=__set_connectionFailedEvent))  connectionFailedEvent;

constexpr void __set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason> value) ;

constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason> __get_connectionFailedEvent() const;

 ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerConnectedEvent, put=__set_playerConnectedEvent))  playerConnectedEvent;

constexpr void __set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __get_playerConnectedEvent() const;

 ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerDisconnectedEvent, put=__set_playerDisconnectedEvent))  playerDisconnectedEvent;

constexpr void __set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __get_playerDisconnectedEvent() const;

 ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerStateChangedEvent, put=__set_playerStateChangedEvent))  playerStateChangedEvent;

constexpr void __set_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __get_playerStateChangedEvent() const;

 ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerAvatarChangedEvent, put=__set_playerAvatarChangedEvent))  playerAvatarChangedEvent;

constexpr void __set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __get_playerAvatarChangedEvent() const;

 ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerOrderChangedEvent, put=__set_playerOrderChangedEvent))  playerOrderChangedEvent;

constexpr void __set_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __get_playerOrderChangedEvent() const;

 ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerLatencyInitializedEvent, put=__set_playerLatencyInitializedEvent))  playerLatencyInitializedEvent;

constexpr void __set_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer> __get_playerLatencyInitializedEvent() const;

 ::System::Action __declspec(property(get=__get_syncTimeInitializedEvent, put=__set_syncTimeInitializedEvent))  syncTimeInitializedEvent;

constexpr void __set_syncTimeInitializedEvent(::System::Action value) ;

constexpr ::System::Action __get_syncTimeInitializedEvent() const;

 int64_t __declspec(property(get=__get__startTicks, put=__set__startTicks))  _startTicks;

constexpr void __set__startTicks(int64_t value) ;

constexpr int64_t __get__startTicks() const;

 ::GlobalNamespace::RollingAverage __declspec(property(get=__get__syncTimeOffset, put=__set__syncTimeOffset))  _syncTimeOffset;

constexpr void __set__syncTimeOffset(::GlobalNamespace::RollingAverage value) ;

constexpr ::GlobalNamespace::RollingAverage __get__syncTimeOffset() const;

 ::BGNet::Core::ITimeProvider __declspec(property(get=__get__timeProvider, put=__set__timeProvider))  _timeProvider;

constexpr void __set__timeProvider(::BGNet::Core::ITimeProvider value) ;

constexpr ::BGNet::Core::ITimeProvider __get__timeProvider() const;

 ::BGNet::Core::ITaskUtility __declspec(property(get=__get__taskUtility, put=__set__taskUtility))  _taskUtility;

constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility value) ;

constexpr ::BGNet::Core::ITaskUtility __get__taskUtility() const;

 ::GlobalNamespace::IConnectionManager __declspec(property(get=__get__connectionManager, put=__set__connectionManager))  _connectionManager;

constexpr void __set__connectionManager(::GlobalNamespace::IConnectionManager value) ;

constexpr ::GlobalNamespace::IConnectionManager __get__connectionManager() const;

 ::LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__temporaryDataWriter, put=__set__temporaryDataWriter))  _temporaryDataWriter;

constexpr void __set__temporaryDataWriter(::LiteNetLib::Utils::NetDataWriter value) ;

constexpr ::LiteNetLib::Utils::NetDataWriter __get__temporaryDataWriter() const;

 ::LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__temporaryEncryptedDataWriter, put=__set__temporaryEncryptedDataWriter))  _temporaryEncryptedDataWriter;

constexpr void __set__temporaryEncryptedDataWriter(::LiteNetLib::Utils::NetDataWriter value) ;

constexpr ::LiteNetLib::Utils::NetDataWriter __get__temporaryEncryptedDataWriter() const;

 ::LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__reliableDataWriter, put=__set__reliableDataWriter))  _reliableDataWriter;

constexpr void __set__reliableDataWriter(::LiteNetLib::Utils::NetDataWriter value) ;

constexpr ::LiteNetLib::Utils::NetDataWriter __get__reliableDataWriter() const;

 ::LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__unreliableDataWriter, put=__set__unreliableDataWriter))  _unreliableDataWriter;

constexpr void __set__unreliableDataWriter(::LiteNetLib::Utils::NetDataWriter value) ;

constexpr ::LiteNetLib::Utils::NetDataWriter __get__unreliableDataWriter() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer> __declspec(property(get=__get__players, put=__set__players))  _players;

constexpr void __set__players(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer> __get__players() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__localPlayerState, put=__set__localPlayerState))  _localPlayerState;

constexpr void __set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__localPlayerState() const;

 ::GlobalNamespace::MultiplayerAvatarData __declspec(property(get=__get__localPlayerAvatar, put=__set__localPlayerAvatar))  _localPlayerAvatar;

constexpr void __set__localPlayerAvatar(::GlobalNamespace::MultiplayerAvatarData value) ;

constexpr ::GlobalNamespace::MultiplayerAvatarData __get__localPlayerAvatar() const;

 ::GlobalNamespace::IDiffieHellmanKeyPair __declspec(property(get=__get__encryptionKeys, put=__set__encryptionKeys))  _encryptionKeys;

constexpr void __set__encryptionKeys(::GlobalNamespace::IDiffieHellmanKeyPair value) ;

constexpr ::GlobalNamespace::IDiffieHellmanKeyPair __get__encryptionKeys() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__encryptionRandom, put=__set__encryptionRandom))  _encryptionRandom;

constexpr void __set__encryptionRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__encryptionRandom() const;

 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer __declspec(property(get=__get__localPlayer, put=__set__localPlayer))  _localPlayer;

constexpr void __set__localPlayer(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer __get__localPlayer() const;

 uint8_t __declspec(property(get=__get__lastConnectionId, put=__set__lastConnectionId))  _lastConnectionId;

constexpr void __set__lastConnectionId(uint8_t value) ;

constexpr uint8_t __get__lastConnectionId() const;

 float_t __declspec(property(get=__get__lastPollTime, put=__set__lastPollTime))  _lastPollTime;

constexpr void __set__lastPollTime(float_t value) ;

constexpr float_t __get__lastPollTime() const;

 int32_t __declspec(property(get=__get__lastPollFrame, put=__set__lastPollFrame))  _lastPollFrame;

constexpr void __set__lastPollFrame(int32_t value) ;

constexpr int32_t __get__lastPollFrame() const;

 float_t __declspec(property(get=__get__lastPingTime, put=__set__lastPingTime))  _lastPingTime;

constexpr void __set__lastPingTime(float_t value) ;

constexpr float_t __get__lastPingTime() const;

 ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType,::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__messageSerializer, put=__set__messageSerializer))  _messageSerializer;

constexpr void __set__messageSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType,::GlobalNamespace::IConnectedPlayer> value) ;

constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType,::GlobalNamespace::IConnectedPlayer> __get__messageSerializer() const;


// Properties

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 bool __declspec(property(get=get_isConnectedOrConnecting))  isConnectedOrConnecting;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_isDisconnecting))  isDisconnecting;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=get_localPlayer))  localPlayer;

 int32_t __declspec(property(get=get_connectedPlayerCount))  connectedPlayerCount;

 float_t __declspec(property(get=get_syncTime))  syncTime;

 bool __declspec(property(get=get_syncTimeInitialized))  syncTimeInitialized;

 float_t __declspec(property(get=get_runTime))  runTime;


// Methods

/// @brief Method GetNextConnectionId addr 0xd9dae0 size 0x40 virtual false final false
 uint8_t GetNextConnectionId() ;

/// @brief Method RemoveAllPlayers addr 0xd9dbe4 size 0x8c virtual false final false
 void RemoveAllPlayers(::GlobalNamespace::DisconnectedReason reason) ;

/// @brief Method RemovePlayer addr 0xd9dc70 size 0xc4 virtual false final false
 void RemovePlayer(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer player, ::GlobalNamespace::DisconnectedReason reason) ;

/// @brief Method AddPlayer addr 0xd9dfcc size 0x29c virtual false final false
 void AddPlayer(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer player) ;

/// @brief Method GetPlayer addr 0xd9db20 size 0xc4 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GetPlayer(uint8_t connectionId) ;

/// @brief Method GetPlayer addr 0xd9e8ac size 0xf4 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GetPlayer(::GlobalNamespace::IConnection connection, uint8_t remoteConnectionId) ;

/// @brief Method GetPlayer addr 0xd9e9a0 size 0xcc virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GetPlayer(::StringW userId) ;

/// @brief Method GetConnectedPlayer addr 0xd9ea6c size 0x58 virtual false final false
 ::GlobalNamespace::IConnectedPlayer GetConnectedPlayer(int32_t index) ;

/// @brief Method add_connectedEvent addr 0xd9eac4 size 0x9c virtual false final false
 void add_connectedEvent(::System::Action value) ;

/// @brief Method remove_connectedEvent addr 0xd9eb60 size 0x9c virtual false final false
 void remove_connectedEvent(::System::Action value) ;

/// @brief Method add_initializedEvent addr 0xd9ebfc size 0x9c virtual false final false
 void add_initializedEvent(::System::Action value) ;

/// @brief Method remove_initializedEvent addr 0xd9ec98 size 0x9c virtual false final false
 void remove_initializedEvent(::System::Action value) ;

/// @brief Method add_disconnectedEvent addr 0xd9ed34 size 0xb0 virtual false final false
 void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_disconnectedEvent addr 0xd9ede4 size 0xb0 virtual false final false
 void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_connectionFailedEvent addr 0xd9ee94 size 0xb0 virtual false final false
 void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_connectionFailedEvent addr 0xd9ef44 size 0xb0 virtual false final false
 void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method add_playerConnectedEvent addr 0xd9eff4 size 0xb0 virtual false final false
 void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerConnectedEvent addr 0xd9f0a4 size 0xb0 virtual false final false
 void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerDisconnectedEvent addr 0xd9f154 size 0xb0 virtual false final false
 void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerDisconnectedEvent addr 0xd9f204 size 0xb0 virtual false final false
 void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerStateChangedEvent addr 0xd9f2b4 size 0xb0 virtual false final false
 void add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerStateChangedEvent addr 0xd9f364 size 0xb0 virtual false final false
 void remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerAvatarChangedEvent addr 0xd9f414 size 0xb0 virtual false final false
 void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerAvatarChangedEvent addr 0xd9f4c4 size 0xb0 virtual false final false
 void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerOrderChangedEvent addr 0xd9f574 size 0xb0 virtual false final false
 void add_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerOrderChangedEvent addr 0xd9f624 size 0xb0 virtual false final false
 void remove_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerLatencyInitializedEvent addr 0xd9f6d4 size 0xb0 virtual false final false
 void add_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerLatencyInitializedEvent addr 0xd9f784 size 0xb0 virtual false final false
 void remove_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_syncTimeInitializedEvent addr 0xd9f834 size 0x9c virtual false final false
 void add_syncTimeInitializedEvent(::System::Action value) ;

/// @brief Method remove_syncTimeInitializedEvent addr 0xd9f8d0 size 0x9c virtual false final false
 void remove_syncTimeInitializedEvent(::System::Action value) ;

/// @brief Method get_isConnectionOwner addr 0xd9f96c size 0xa4 virtual false final false
 bool get_isConnectionOwner() ;

/// @brief Method get_isConnectedOrConnecting addr 0xd9fa10 size 0x28 virtual false final false
 bool get_isConnectedOrConnecting() ;

/// @brief Method get_isConnected addr 0xd9de7c size 0xa4 virtual false final false
 bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0xd9fa38 size 0xa4 virtual false final false
 bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0xd9fadc size 0xa4 virtual false final false
 bool get_isDisconnecting() ;

/// @brief Method get_localPlayer addr 0xd9fb80 size 0x8 virtual false final false
 ::GlobalNamespace::IConnectedPlayer get_localPlayer() ;

/// @brief Method get_connectedPlayerCount addr 0xd9fb88 size 0x48 virtual false final false
 int32_t get_connectedPlayerCount() ;

/// @brief Method get_syncTime addr 0xd9fbd0 size 0x28 virtual false final false
 float_t get_syncTime() ;

/// @brief Method get_syncTimeInitialized addr 0xd9fbf8 size 0x34 virtual false final false
 bool get_syncTimeInitialized() ;

/// @brief Method get_runTime addr 0xd9e2a8 size 0xc4 virtual false final false
 float_t get_runTime() ;

// Ctor Parameters [CppParam { name: "connectionManager", ty: "::GlobalNamespace::IConnectionManager", modifiers: "", def_value: None }]
explicit ConnectedPlayerManager(::GlobalNamespace::IConnectionManager connectionManager) ;

/// @brief Method .ctor addr 0xd9fc2c size 0xbc virtual false final false
 void _ctor(::GlobalNamespace::IConnectionManager connectionManager) ;

// Ctor Parameters [CppParam { name: "timeProvider", ty: "::BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "connectionManager", ty: "::GlobalNamespace::IConnectionManager", modifiers: "", def_value: None }]
explicit ConnectedPlayerManager(::BGNet::Core::ITimeProvider timeProvider, ::BGNet::Core::ITaskUtility taskUtility, ::GlobalNamespace::IConnectionManager connectionManager) ;

/// @brief Method .ctor addr 0xd9fce8 size 0x1034 virtual false final false
 void _ctor(::BGNet::Core::ITimeProvider timeProvider, ::BGNet::Core::ITaskUtility taskUtility, ::GlobalNamespace::IConnectionManager connectionManager) ;

/// @brief Method PollUpdate addr 0xda12a4 size 0x178 virtual false final false
 void PollUpdate(int32_t frameCount) ;

/// @brief Method PollLateUpdateOptional addr 0xda15d4 size 0x2c virtual false final false
 void PollLateUpdateOptional() ;

/// @brief Method RegisterSerializer addr 0xda1600 size 0x68 virtual false final false
 void RegisterSerializer(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__MessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer> subSerializer) ;

/// @brief Method UnregisterSerializer addr 0xda1668 size 0x68 virtual false final false
 void UnregisterSerializer(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__MessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer> subSerializer) ;

/// @brief Method GetConnectionManager addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetConnectionManager() ;

/// @brief Method Dispose addr 0xda16d0 size 0x584 virtual true final true
 void Dispose() ;

/// @brief Method Disconnect addr 0xd9df20 size 0xac virtual false final false
 void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method KickPlayer addr 0xda1c54 size 0xcc virtual false final false
 void KickPlayer(::StringW userId, ::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method SetLocalPlayerState addr 0xda1d34 size 0xe0 virtual false final false
 void SetLocalPlayerState(::StringW state, bool setState) ;

/// @brief Method SetLocalPlayerAvatar addr 0xda1e74 size 0x90 virtual false final false
 void SetLocalPlayerAvatar(::GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData) ;

/// @brief Method SetLocalPlayerSortIndex addr 0xda1f8c size 0x10 virtual false final false
 void SetLocalPlayerSortIndex(int32_t sortIndex) ;

/// @brief Method SetPlayerSortIndex addr 0xda1f9c size 0xd8 virtual false final false
 void SetPlayerSortIndex(::GlobalNamespace::IConnectedPlayer player, int32_t sortIndex) ;

/// @brief Method ResetLocalState addr 0xda0f5c size 0x28 virtual false final false
 void ResetLocalState() ;

/// @brief Method HandleInitialized addr 0xda2094 size 0x1c virtual false final false
 void HandleInitialized() ;

/// @brief Method HandleConnected addr 0xda0f84 size 0x2e8 virtual false final false
 void HandleConnected() ;

/// @brief Method HandleDisconnected addr 0xda21d4 size 0x4c virtual false final false
 void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method HandleConnectionFailed addr 0xda2220 size 0x1c virtual false final false
 void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method HandleConnectionConnected addr 0xda126c size 0x38 virtual false final false
 void HandleConnectionConnected(::GlobalNamespace::IConnection connection) ;

/// @brief Method HandleConnectionDisconnected addr 0xda241c size 0x118 virtual false final false
 void HandleConnectionDisconnected(::GlobalNamespace::IConnection connection, ::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method HandleNetworkReceive addr 0xda2628 size 0x4fc virtual false final false
 void HandleNetworkReceive(::GlobalNamespace::IConnection connection, ::LiteNetLib::Utils::NetDataReader reader, ::BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method Send addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Send(T message) ;

/// @brief Method SendUnreliable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SendUnreliable(T message) ;

/// @brief Method SendToPlayer addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method SendUnreliableEncryptedToPlayer addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method SendImmediately addr 0xd9e374 size 0xe4 virtual false final false
 void SendImmediately(::LiteNetLib::Utils::INetSerializable message, bool onlyFirstDegree) ;

/// @brief Method SendImmediatelyExcludingPlayer addr 0xd9e4c8 size 0xf4 virtual false final false
 void SendImmediatelyExcludingPlayer(::LiteNetLib::Utils::INetSerializable message, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer excludingPlayer, bool onlyFirstDegree) ;

/// @brief Method SendImmediatelyToPlayer addr 0xd9e5cc size 0xe0 virtual false final false
 void SendImmediatelyToPlayer(::LiteNetLib::Utils::INetSerializable message, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer toPlayer) ;

/// @brief Method SendImmediatelyFromPlayer addr 0xda253c size 0xec virtual false final false
 void SendImmediatelyFromPlayer(::LiteNetLib::Utils::INetSerializable message, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer fromPlayer, bool onlyFirstDegree) ;

/// @brief Method SendImmediatelyFromPlayerToPlayer addr 0xd9e7cc size 0xe0 virtual false final false
 void SendImmediatelyFromPlayerToPlayer(::LiteNetLib::Utils::INetSerializable message, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer fromPlayer, ::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer toPlayer) ;

/// @brief Method FlushReliableQueue addr 0xda141c size 0xdc virtual false final false
 void FlushReliableQueue() ;

/// @brief Method FlushUnreliableQueue addr 0xda14f8 size 0xdc virtual false final false
 void FlushUnreliableQueue() ;

/// @brief Method WriteOne addr 0xda2b24 size 0x7c virtual false final false
 ::LiteNetLib::Utils::NetDataWriter WriteOne(uint8_t senderId, uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable message) ;

/// @brief Method WriteOneEncrypted addr 0xda2c98 size 0x178 virtual false final false
 ::LiteNetLib::Utils::NetDataWriter WriteOneEncrypted(::GlobalNamespace::____GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState, uint8_t senderId, uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable message) ;

/// @brief Method Write addr 0xda2ba0 size 0xf8 virtual false final false
 void Write(::LiteNetLib::Utils::NetDataWriter writer, ::LiteNetLib::Utils::INetSerializable packet) ;

/// @brief Method HandleServerPlayerConnected addr 0xda2e10 size 0xcc virtual false final false
 void HandleServerPlayerConnected(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket packet, ::GlobalNamespace::IConnectedPlayer iPlayer) ;

/// @brief Method HandlePlayerIdentityUpdate addr 0xda3000 size 0x134 virtual false final false
 void HandlePlayerIdentityUpdate(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket packet, ::GlobalNamespace::IConnectedPlayer iPlayer) ;

/// @brief Method InitializePlayerEncryption addr 0xda3198 size 0xa0 virtual false final false
 void InitializePlayerEncryption(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer player) ;

/// @brief Method HandlePlayerStateUpdate addr 0xda3238 size 0xc0 virtual false final false
 void HandlePlayerStateUpdate(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket packet, ::GlobalNamespace::IConnectedPlayer iPlayer) ;

/// @brief Method HandlePlayerAvatarUpdate addr 0xda3314 size 0xc8 virtual false final false
 void HandlePlayerAvatarUpdate(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket packet, ::GlobalNamespace::IConnectedPlayer iPlayer) ;

/// @brief Method HandleServerPlayerDisconnected addr 0xda3400 size 0xa8 virtual false final false
 void HandleServerPlayerDisconnected(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket packet, ::GlobalNamespace::IConnectedPlayer iPlayer) ;

/// @brief Method HandleKickPlayerPacket addr 0xda34fc size 0xe0 virtual false final false
 void HandleKickPlayerPacket(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket packet, ::GlobalNamespace::IConnectedPlayer iPlayer) ;

/// @brief Method HandlePlayerSortOrderUpdate addr 0xda3630 size 0x12c virtual false final false
 void HandlePlayerSortOrderUpdate(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket packet, ::GlobalNamespace::IConnectedPlayer iPlayer) ;

/// @brief Method HandleSyncTimePacket addr 0xda37b0 size 0x154 virtual false final false
 void HandleSyncTimePacket(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket packet, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePing addr 0xda3958 size 0x1fc virtual false final false
 void HandlePing(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PingPacket packet, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePong addr 0xda3bb8 size 0x184 virtual false final false
 void HandlePong(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PongPacket packet, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method Log addr 0xda3dac size 0x8c virtual false final false
 void Log(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__InternalMessageType, "", "ConnectedPlayerManager/InternalMessageType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__MessageType, "", "ConnectedPlayerManager/MessageType");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager, "", "ConnectedPlayerManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, "", "ConnectedPlayerManager/ConnectedPlayer");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket, "", "ConnectedPlayerManager/KickPlayerPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PingPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PingPacket, "", "ConnectedPlayerManager/PingPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket, "", "ConnectedPlayerManager/PlayerAvatarPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket, "", "ConnectedPlayerManager/PlayerConnectedPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket, "", "ConnectedPlayerManager/PlayerDisconnectedPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket, "", "ConnectedPlayerManager/PlayerIdentityPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket, "", "ConnectedPlayerManager/PlayerSortOrderPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket, "", "ConnectedPlayerManager/PlayerStatePacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PongPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__PongPacket, "", "ConnectedPlayerManager/PongPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager__SyncTimePacket, "", "ConnectedPlayerManager/SyncTimePacket");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129, "", "ConnectedPlayerManager/<InitializePlayerEncryption>d__129");
