#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
struct ____System__Collections__Generic__List_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class NetworkPlayerModel_1;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__NetworkPlayerModel_1____c;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class NetworkPlayerModel_1<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__NetworkPlayerModel_1____c<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>;
}
// Type: ::NetworkPlayer
// Type: ::JoinMatchmakingPartyConfig
// Type: ::StartClientPartyConfig
// Type: ::NetworkServer
// Type: ::<InitAuthenticationTokenProvider>d__56
// Type: ::<GetPartyPlayers>d__57
// Type: ::<GetOtherPlayers>d__58
// Type: ::<>c__DisplayClass59_0
// Type: ::<>c
// Type: ::NetworkPlayerModel`1
// Type: ::NetworkPlayer
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4564))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4564), inst: 2 })
// CS Name: NetworkPlayerModel`1::NetworkPlayer
class CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayer
constexpr operator  ::GlobalNamespace::INetworkPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer(____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer(____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer& operator=(____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer& operator=(____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NetworkPlayerModel_1<T> __declspec(property(get=__get__playerModel, put=__set__playerModel))  _playerModel;

constexpr void __set__playerModel(::GlobalNamespace::NetworkPlayerModel_1<T> value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T> __get__playerModel() const;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isMe))  isMe;

 int32_t __declspec(property(get=get_sortIndex))  sortIndex;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 bool __declspec(property(get=get_isMyPartyOwner))  isMyPartyOwner;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=get_connectedPlayer))  connectedPlayer;

 bool __declspec(property(get=get_canJoin))  canJoin;

 bool __declspec(property(get=get_requiresPassword))  requiresPassword;

 bool __declspec(property(get=get_isWaitingOnJoin))  isWaitingOnJoin;

 bool __declspec(property(get=get_canInvite))  canInvite;

 bool __declspec(property(get=get_isWaitingOnInvite))  isWaitingOnInvite;

 bool __declspec(property(get=get_canKick))  canKick;

 bool __declspec(property(get=get_canLeave))  canLeave;

 bool __declspec(property(get=get_canBlock))  canBlock;

 bool __declspec(property(get=get_canUnblock))  canUnblock;


// Methods

// Ctor Parameters [CppParam { name: "playerModel", ty: "::GlobalNamespace::NetworkPlayerModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "connectedPlayer", ty: "::GlobalNamespace::IConnectedPlayer", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer(::GlobalNamespace::NetworkPlayerModel_1<T> playerModel, ::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::NetworkPlayerModel_1<T> playerModel, ::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_isMe addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isMe() ;

/// @brief Method get_sortIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_sortIndex() ;

/// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_currentPartySize() ;

/// @brief Method get_selectionMask addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_isMyPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isMyPartyOwner() ;

/// @brief Method get_connectedPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::IConnectedPlayer get_connectedPlayer() ;

/// @brief Method get_canJoin addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canJoin() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final true
 void Join() ;

/// @brief Method get_requiresPassword addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_requiresPassword() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final true
 void Join(::StringW password) ;

/// @brief Method get_isWaitingOnJoin addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isWaitingOnJoin() ;

/// @brief Method get_canInvite addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canInvite() ;

/// @brief Method Invite addr 0x0 size 0xffffffffffffffff virtual true final true
 void Invite() ;

/// @brief Method get_isWaitingOnInvite addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isWaitingOnInvite() ;

/// @brief Method get_canKick addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canKick() ;

/// @brief Method Kick addr 0x0 size 0xffffffffffffffff virtual true final true
 void Kick() ;

/// @brief Method get_canLeave addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canLeave() ;

/// @brief Method Leave addr 0x0 size 0xffffffffffffffff virtual true final true
 void Leave() ;

/// @brief Method get_canBlock addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canBlock() ;

/// @brief Method Block addr 0x0 size 0xffffffffffffffff virtual true final true
 void Block() ;

/// @brief Method get_canUnblock addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canUnblock() ;

/// @brief Method Unblock addr 0x0 size 0xffffffffffffffff virtual true final true
 void Unblock() ;

/// @brief Method SendJoinResponse addr 0x0 size 0xffffffffffffffff virtual true final true
 void SendJoinResponse(bool accept) ;

/// @brief Method SendInviteResponse addr 0x0 size 0xffffffffffffffff virtual true final true
 void SendInviteResponse(bool accept) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JoinMatchmakingPartyConfig
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4532)), TypeDefinitionIndex(TypeDefinitionIndex(4565))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4565), inst: 2 })
// CS Name: NetworkPlayerModel`1::JoinMatchmakingPartyConfig
class CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T> : public ::GlobalNamespace::____GlobalNamespace__BaseNetworkPlayerModel__PartyConfig {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::NetworkPlayerModel_1<T>>
constexpr operator  ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::NetworkPlayerModel_1<T>>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig(____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig(____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BaseNetworkPlayerModel__PartyConfig(ptr) {
}


  constexpr ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig& operator=(____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig& operator=(____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::StringW value) ;

constexpr ::StringW __get_secret() const;

 ::StringW __declspec(property(get=__get_code, put=__set_code))  code;

constexpr void __set_code(::StringW value) ;

constexpr ::StringW __get_code() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartClientPartyConfig
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4532)), TypeDefinitionIndex(TypeDefinitionIndex(4566))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4566), inst: 2 })
// CS Name: NetworkPlayerModel`1::StartClientPartyConfig
class CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T> : public ::GlobalNamespace::____GlobalNamespace__BaseNetworkPlayerModel__PartyConfig {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::NetworkPlayerModel_1<T>>
constexpr operator  ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::NetworkPlayerModel_1<T>>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig(____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig(____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BaseNetworkPlayerModel__PartyConfig(ptr) {
}


  constexpr ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig& operator=(____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig& operator=(____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetworkServer
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4567))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4567), inst: 2 })
// CS Name: NetworkPlayerModel`1::NetworkServer
class CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayer
constexpr operator  ::GlobalNamespace::INetworkPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__NetworkPlayerModel_1__NetworkServer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1__NetworkServer", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer(____GlobalNamespace__NetworkPlayerModel_1__NetworkServer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1__NetworkServer", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer(____GlobalNamespace__NetworkPlayerModel_1__NetworkServer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer& operator=(____GlobalNamespace__NetworkPlayerModel_1__NetworkServer&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer& operator=(____GlobalNamespace__NetworkPlayerModel_1__NetworkServer const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NetworkPlayerModel_1<T> __declspec(property(get=__get__playerModel, put=__set__playerModel))  _playerModel;

constexpr void __set__playerModel(::GlobalNamespace::NetworkPlayerModel_1<T> value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T> __get__playerModel() const;

 ::StringW __declspec(property(get=__get__code, put=__set__code))  _code;

constexpr void __set__code(::StringW value) ;

constexpr ::StringW __get__code() const;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get__selectionMask, put=__set__selectionMask))  _selectionMask;

constexpr void __set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask __get__selectionMask() const;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get__configuration, put=__set__configuration))  _configuration;

constexpr void __set__configuration(::GlobalNamespace::GameplayServerConfiguration value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration __get__configuration() const;

 int32_t __declspec(property(get=__get__currentPlayerCount, put=__set__currentPlayerCount))  _currentPlayerCount;

constexpr void __set__currentPlayerCount(int32_t value) ;

constexpr int32_t __get__currentPlayerCount() const;

 float_t __declspec(property(get=__get__lastUpdateTime, put=__set__lastUpdateTime))  _lastUpdateTime;

constexpr void __set__lastUpdateTime(float_t value) ;

constexpr float_t __get__lastUpdateTime() const;


// Properties

 ::StringW __declspec(property(get=INetworkPlayer_get_userId))  INetworkPlayer_userId;

 ::StringW __declspec(property(get=get_code))  code;

 ::StringW __declspec(property(get=INetworkPlayer_get_userName))  INetworkPlayer_userName;

 ::StringW __declspec(property(get=get_serverName))  serverName;

 bool __declspec(property(get=get_isMe))  isMe;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=get_connectedPlayer))  connectedPlayer;

 bool __declspec(property(get=get_isMyPartyOwner))  isMyPartyOwner;

 bool __declspec(property(get=get_hasTimedOut))  hasTimedOut;

 bool __declspec(property(get=get_canJoin))  canJoin;

 bool __declspec(property(get=get_requiresPassword))  requiresPassword;

 bool __declspec(property(get=get_isWaitingOnJoin))  isWaitingOnJoin;

 bool __declspec(property(get=get_canInvite))  canInvite;

 bool __declspec(property(get=get_isWaitingOnInvite))  isWaitingOnInvite;

 bool __declspec(property(get=get_canKick))  canKick;

 bool __declspec(property(get=get_canLeave))  canLeave;

 bool __declspec(property(get=get_canBlock))  canBlock;

 bool __declspec(property(get=get_canUnblock))  canUnblock;


// Methods

// Ctor Parameters [CppParam { name: "playerModel", ty: "::GlobalNamespace::NetworkPlayerModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "selectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "configuration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__NetworkPlayerModel_1__NetworkServer(::GlobalNamespace::NetworkPlayerModel_1<T> playerModel, ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::NetworkPlayerModel_1<T> playerModel, ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual false final false
 void Update(int32_t currentPlayerCount) ;

/// @brief Method INetworkPlayer.get_userId addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW INetworkPlayer_get_userId() ;

/// @brief Method get_code addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_code() ;

/// @brief Method INetworkPlayer.get_userName addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW INetworkPlayer_get_userName() ;

/// @brief Method get_serverName addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_serverName() ;

/// @brief Method get_isMe addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isMe() ;

/// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_currentPartySize() ;

/// @brief Method get_selectionMask addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_connectedPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::IConnectedPlayer get_connectedPlayer() ;

/// @brief Method get_isMyPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isMyPartyOwner() ;

/// @brief Method get_hasTimedOut addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasTimedOut() ;

/// @brief Method get_canJoin addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canJoin() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final true
 void Join() ;

/// @brief Method get_requiresPassword addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_requiresPassword() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final true
 void Join(::StringW password) ;

/// @brief Method get_isWaitingOnJoin addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isWaitingOnJoin() ;

/// @brief Method get_canInvite addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canInvite() ;

/// @brief Method Invite addr 0x0 size 0xffffffffffffffff virtual true final true
 void Invite() ;

/// @brief Method get_isWaitingOnInvite addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isWaitingOnInvite() ;

/// @brief Method get_canKick addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canKick() ;

/// @brief Method Kick addr 0x0 size 0xffffffffffffffff virtual true final true
 void Kick() ;

/// @brief Method get_canLeave addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canLeave() ;

/// @brief Method Leave addr 0x0 size 0xffffffffffffffff virtual true final true
 void Leave() ;

/// @brief Method get_canBlock addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canBlock() ;

/// @brief Method Block addr 0x0 size 0xffffffffffffffff virtual true final true
 void Block() ;

/// @brief Method get_canUnblock addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_canUnblock() ;

/// @brief Method Unblock addr 0x0 size 0xffffffffffffffff virtual true final true
 void Unblock() ;

/// @brief Method SendJoinResponse addr 0x0 size 0xffffffffffffffff virtual true final true
 void SendJoinResponse(bool accept) ;

/// @brief Method SendInviteResponse addr 0x0 size 0xffffffffffffffff virtual true final true
 void SendInviteResponse(bool accept) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<InitAuthenticationTokenProvider>d__56
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4568)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4568), inst: 2 })
// CS Name: NetworkPlayerModel`1::<InitAuthenticationTokenProvider>d__56
struct CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::NetworkPlayerModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider> __t__builder, ::GlobalNamespace::NetworkPlayerModel_1<T> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __u__1) noexcept;


                    constexpr ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56(____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56 const&) = default;
                    constexpr ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56(____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56&&) = default;
                    constexpr ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56& operator=(____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56& operator=(____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider> __get___t__builder() const;

 ::GlobalNamespace::NetworkPlayerModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerModel_1<T> value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T> __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetPartyPlayers>d__57
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4569), inst: 2 })
// CS Name: NetworkPlayerModel`1::<GetPartyPlayers>d__57
class CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57(____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57(____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57& operator=(____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57& operator=(____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::GlobalNamespace::INetworkPlayer __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::GlobalNamespace::INetworkPlayer value) ;

constexpr ::GlobalNamespace::INetworkPlayer __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::GlobalNamespace::NetworkPlayerModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerModel_1<T> value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T> __get___4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 ::GlobalNamespace::INetworkPlayer __declspec(property(get=System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))  System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::INetworkPlayer System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer> System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetOtherPlayers>d__58
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4570))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4570), inst: 2 })
// CS Name: NetworkPlayerModel`1::<GetOtherPlayers>d__58
class CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58(____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58(____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58& operator=(____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58& operator=(____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::GlobalNamespace::INetworkPlayer __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::GlobalNamespace::INetworkPlayer value) ;

constexpr ::GlobalNamespace::INetworkPlayer __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::GlobalNamespace::NetworkPlayerModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerModel_1<T> value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T> __get___4__this() const;

 ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> __get___7__wrap1() const;


// Properties

 ::GlobalNamespace::INetworkPlayer __declspec(property(get=System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))  System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::INetworkPlayer System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer> System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass59_0
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4571), inst: 2 })
// CS Name: NetworkPlayerModel`1::<>c__DisplayClass59_0
class CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0(____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0(____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0& operator=(____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0& operator=(____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_clearCurrentList, put=__set_clearCurrentList))  clearCurrentList;

constexpr void __set_clearCurrentList(bool value) ;

constexpr bool __get_clearCurrentList() const;

 ::GlobalNamespace::NetworkPlayerModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerModel_1<T> value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T> __get___4__this() const;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_localSelectionMask, put=__set_localSelectionMask))  localSelectionMask;

constexpr void __set_localSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask __get_localSelectionMask() const;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_localConfiguration, put=__set_localConfiguration))  localConfiguration;

constexpr void __set_localConfiguration(::GlobalNamespace::GameplayServerConfiguration value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration __get_localConfiguration() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Refresh>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _Refresh_b__0(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo> servers) ;

/// @brief Method <Refresh>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _Refresh_b__1(::GlobalNamespace::ConnectionFailedReason reason) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4572), inst: 2 })
// CS Name: NetworkPlayerModel`1::<>c
class CORDL_TYPE ____GlobalNamespace__NetworkPlayerModel_1____c<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__NetworkPlayerModel_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1____c(____GlobalNamespace__NetworkPlayerModel_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkPlayerModel_1____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerModel_1____c(____GlobalNamespace__NetworkPlayerModel_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerModel_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__NetworkPlayerModel_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkPlayerModel_1____c& operator=(____GlobalNamespace__NetworkPlayerModel_1____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkPlayerModel_1____c& operator=(____GlobalNamespace__NetworkPlayerModel_1____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1____c<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1____c<T> value) ;

static ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1____c<T> __get___9() ;

static ::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> __declspec(property(get=__get___9__71_0, put=__set___9__71_0))  __9__71_0;

static void __set___9__71_0(::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> value) ;

static ::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> __get___9__71_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__NetworkPlayerModel_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <PlayerOrderChanged>b__71_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t _PlayerOrderChanged_b__71_0(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> a, ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetworkPlayerModel`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4573)), TypeDefinitionIndex(TypeDefinitionIndex(4535))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4573), inst: 2 })
// CS Name: NetworkPlayerModel`1
class CORDL_TYPE NetworkPlayerModel_1<T> : public ::GlobalNamespace::BaseNetworkPlayerModel {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1____c<T>;

using __c__DisplayClass59_0 = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>;

using _GetOtherPlayers_d__58 = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>;

using _GetPartyPlayers_d__57 = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>;

using _InitAuthenticationTokenProvider_d__56 = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>;

using NetworkServer = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>;

using StartClientPartyConfig = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T>;

using JoinMatchmakingPartyConfig = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>;

using NetworkPlayer = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>;

/// @brief Convert operator to ::GlobalNamespace::INetworkPlayerModel
constexpr operator  ::GlobalNamespace::INetworkPlayerModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~NetworkPlayerModel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1", modifiers: " const&", def_value: None }]
constexpr NetworkPlayerModel_1(NetworkPlayerModel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1", modifiers: "&&", def_value: None }]
constexpr NetworkPlayerModel_1(NetworkPlayerModel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkPlayerModel_1(void* ptr) noexcept : ::GlobalNamespace::BaseNetworkPlayerModel(ptr) {
}


  constexpr NetworkPlayerModel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkPlayerModel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkPlayerModel_1& operator=(NetworkPlayerModel_1&& o) noexcept = default;
  constexpr NetworkPlayerModel_1& operator=(NetworkPlayerModel_1 const& o) noexcept = default;
                


// Fields

/// @brief Field kServerRefreshFrequency offset 0
static constexpr float_t  kServerRefreshFrequency{10};

/// @brief Field kServerTimeoutPeriod offset 0
static constexpr float_t  kServerTimeoutPeriod{21};

 ::GlobalNamespace::IPlatformUserModel __declspec(property(get=__get__platformUserModel, put=__set__platformUserModel))  _platformUserModel;

constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel value) ;

constexpr ::GlobalNamespace::IPlatformUserModel __get__platformUserModel() const;

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider> __declspec(property(get=__get__authenticationTokenProviderTask, put=__set__authenticationTokenProviderTask))  _authenticationTokenProviderTask;

constexpr void __set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider> __get__authenticationTokenProviderTask() const;

 ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> __declspec(property(get=__get__localPlayer, put=__set__localPlayer))  _localPlayer;

constexpr void __set__localPlayer(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> __get__localPlayer() const;

 bool __declspec(property(get=__get__networkingFailed, put=__set__networkingFailed))  _networkingFailed;

constexpr void __set__networkingFailed(bool value) ;

constexpr bool __get__networkingFailed() const;

 bool __declspec(property(get=__get__masterServerUnreachable, put=__set__masterServerUnreachable))  _masterServerUnreachable;

constexpr void __set__masterServerUnreachable(bool value) ;

constexpr bool __get__masterServerUnreachable() const;

 int32_t __declspec(property(get=__get__currentPlayerCount, put=__set__currentPlayerCount))  _currentPlayerCount;

constexpr void __set__currentPlayerCount(int32_t value) ;

constexpr int32_t __get__currentPlayerCount() const;

 ::System::Action_1<int32_t> __declspec(property(get=__get_partySizeChangedEvent, put=__set_partySizeChangedEvent))  partySizeChangedEvent;

constexpr void __set_partySizeChangedEvent(::System::Action_1<int32_t> value) ;

constexpr ::System::Action_1<int32_t> __get_partySizeChangedEvent() const;

 ::System::Action __declspec(property(get=__get_partyRefreshingEvent, put=__set_partyRefreshingEvent))  partyRefreshingEvent;

constexpr void __set_partyRefreshingEvent(::System::Action value) ;

constexpr ::System::Action __get_partyRefreshingEvent() const;

 ::System::Action_1<::GlobalNamespace::INetworkPlayerModel> __declspec(property(get=__get_partyChangedEvent, put=__set_partyChangedEvent))  partyChangedEvent;

constexpr void __set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel> __get_partyChangedEvent() const;

 ::System::Action_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_joinRequestedEvent, put=__set_joinRequestedEvent))  joinRequestedEvent;

constexpr void __set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer> __get_joinRequestedEvent() const;

 ::System::Action_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_inviteRequestedEvent, put=__set_inviteRequestedEvent))  inviteRequestedEvent;

constexpr void __set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer> __get_inviteRequestedEvent() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> __declspec(property(get=__get__partyPlayers, put=__set__partyPlayers))  _partyPlayers;

constexpr void __set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> __get__partyPlayers() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> __declspec(property(get=__get__publicServers, put=__set__publicServers))  _publicServers;

constexpr void __set__publicServers(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> __get__publicServers() const;

 float_t __declspec(property(get=__get__lastServerRefresh, put=__set__lastServerRefresh))  _lastServerRefresh;

constexpr void __set__lastServerRefresh(float_t value) ;

constexpr float_t __get__lastServerRefresh() const;

 bool __declspec(property(get=__get__isRefreshing, put=__set__isRefreshing))  _isRefreshing;

constexpr void __set__isRefreshing(bool value) ;

constexpr bool __get__isRefreshing() const;

 bool __declspec(property(get=__get__filterChanged, put=__set__filterChanged))  _filterChanged;

constexpr void __set__filterChanged(bool value) ;

constexpr bool __get__filterChanged() const;


// Properties

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider> __declspec(property(get=get_authenticationTokenProviderTask))  authenticationTokenProviderTask;

 bool __declspec(property(get=get_localPlayerIsPartyOwner))  localPlayerIsPartyOwner;

 bool __declspec(property(get=get_hasNetworkingFailed))  hasNetworkingFailed;

 ::StringW __declspec(property(get=get_secret))  secret;

 ::StringW __declspec(property(get=get_code))  code;

 ::StringW __declspec(property(get=get_partyOwnerId))  partyOwnerId;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=get_publicServers))  publicServers;

 T __declspec(property(get=get_connectionManager))  connectionManager;


// Methods

/// @brief Method get_authenticationTokenProviderTask addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider> get_authenticationTokenProviderTask() ;

/// @brief Method add_partySizeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_partySizeChangedEvent(::System::Action_1<int32_t> value) ;

/// @brief Method remove_partySizeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_partySizeChangedEvent(::System::Action_1<int32_t> value) ;

/// @brief Method add_partyRefreshingEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_partyRefreshingEvent(::System::Action value) ;

/// @brief Method remove_partyRefreshingEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_partyRefreshingEvent(::System::Action value) ;

/// @brief Method add_partyChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_partyChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_joinRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_joinRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method add_inviteRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_inviteRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method get_localPlayerIsPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_localPlayerIsPartyOwner() ;

/// @brief Method get_hasNetworkingFailed addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_hasNetworkingFailed() ;

/// @brief Method get_secret addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_secret() ;

/// @brief Method get_code addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_code() ;

/// @brief Method get_partyOwnerId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_partyOwnerId() ;

/// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_currentPartySize() ;

/// @brief Method get_publicServers addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> get_publicServers() ;

/// @brief Method get_connectionManager addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_connectionManager() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 void Start() ;

/// @brief Method HandlePlatformUserInfoDidChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandlePlatformUserInfoDidChange(::GlobalNamespace::UserInfo newInfo) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update() ;

/// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T2>
 bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2> config) ;

/// @brief Method GetConnectToServerParams addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IConnectionInitParams_1<T> GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, ::StringW code) ;

/// @brief Method GetStartClientParams addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IConnectionInitParams_1<T> GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method RefreshPublicServers addr 0x0 size 0xffffffffffffffff virtual true final false
 void RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask, ::GlobalNamespace::GameplayServerConfiguration localConfiguration, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>> onSuccess, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason> onFailure) ;

/// @brief Method InitAuthenticationTokenProvider addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider> InitAuthenticationTokenProvider() ;

/// @brief Method GetPartyPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> GetPartyPlayers() ;

/// @brief Method GetOtherPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> GetOtherPlayers() ;

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual false final false
 void Refresh() ;

/// @brief Method HandlePlayersChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandlePlayersChanged() ;

/// @brief Method HandleInviteRequested addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleInviteRequested(::GlobalNamespace::INetworkPlayer player) ;

/// @brief Method HandleJoinRequested addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleJoinRequested(::GlobalNamespace::INetworkPlayer player) ;

/// @brief Method HandlePartyChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel playerModel) ;

/// @brief Method ResetMasterServerReachability addr 0x0 size 0xffffffffffffffff virtual false final false
 void ResetMasterServerReachability() ;

/// @brief Method Connected addr 0x0 size 0xffffffffffffffff virtual true final false
 void Connected() ;

/// @brief Method Disconnected addr 0x0 size 0xffffffffffffffff virtual true final false
 void Disconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method ConnectionFailed addr 0x0 size 0xffffffffffffffff virtual true final false
 void ConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method PlayerConnected addr 0x0 size 0xffffffffffffffff virtual true final false
 void PlayerConnected(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method PlayerDisconnected addr 0x0 size 0xffffffffffffffff virtual true final false
 void PlayerDisconnected(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method PlayerStateChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void PlayerStateChanged(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method PlayerOrderChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void PlayerOrderChanged(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method GetPlayer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> GetPlayer(::StringW userId) ;

/// @brief Method GetServer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T> GetServer(::StringW code) ;

// Ctor Parameters []
explicit NetworkPlayerModel_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1, "", "NetworkPlayerModel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig, "", "NetworkPlayerModel`1/JoinMatchmakingPartyConfig");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer, "", "NetworkPlayerModel`1/NetworkPlayer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__NetworkServer, "", "NetworkPlayerModel`1/NetworkServer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig, "", "NetworkPlayerModel`1/StartClientPartyConfig");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58, "", "NetworkPlayerModel`1/<GetOtherPlayers>d__58");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57, "", "NetworkPlayerModel`1/<GetPartyPlayers>d__57");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1____c, "", "NetworkPlayerModel`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0, "", "NetworkPlayerModel`1/<>c__DisplayClass59_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56, "", "NetworkPlayerModel`1/<InitAuthenticationTokenProvider>d__56");
