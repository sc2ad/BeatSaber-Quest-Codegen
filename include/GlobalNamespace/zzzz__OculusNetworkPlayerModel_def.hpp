#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class OculusConnectionManager;
}
namespace Oculus::Platform::Models {
class Room;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace Oculus::Platform::Models {
class User;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
namespace Oculus::Platform {
template<typename T>
class ____Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
class UserInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42;
}
// Type: ::OculusNetworkPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4584))
// CS Name: OculusNetworkPlayerModel::OculusNetworkPlayer
class CORDL_TYPE ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayer
constexpr operator  ::GlobalNamespace::INetworkPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer(____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer(____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer& operator=(____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer& operator=(____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get__playerModel, put=__set__playerModel))  _playerModel;

constexpr void __set__playerModel(::GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr ::GlobalNamespace::OculusNetworkPlayerModel __get__playerModel() const;

 uint64_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(uint64_t value) ;

constexpr uint64_t __get__id() const;

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 bool __declspec(property(get=__get__isMe, put=__set__isMe))  _isMe;

constexpr void __set__isMe(bool value) ;

constexpr bool __get__isMe() const;

 ::Oculus::Platform::Models::Room __declspec(property(get=__get__room, put=__set__room))  _room;

constexpr void __set__room(::Oculus::Platform::Models::Room value) ;

constexpr ::Oculus::Platform::Models::Room __get__room() const;

 ::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> __declspec(property(get=__get__cachedSelectionMask, put=__set__cachedSelectionMask))  _cachedSelectionMask;

constexpr void __set__cachedSelectionMask(::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> __get__cachedSelectionMask() const;

 ::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> __declspec(property(get=__get__cachedConfiguration, put=__set__cachedConfiguration))  _cachedConfiguration;

constexpr void __set__cachedConfiguration(::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> __get__cachedConfiguration() const;

 bool __declspec(property(get=__get_removed, put=__set_removed))  removed;

constexpr void __set_removed(bool value) ;

constexpr bool __get_removed() const;

 ::StringW __declspec(property(get=__get_inviteToken, put=__set_inviteToken))  inviteToken;

constexpr void __set_inviteToken(::StringW value) ;

constexpr ::StringW __get_inviteToken() const;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer_k__BackingField, put=__set__connectedPlayer_k__BackingField))  _connectedPlayer_k__BackingField;

constexpr void __set__connectedPlayer_k__BackingField(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get__connectedPlayer_k__BackingField() const;

 bool __declspec(property(get=__get__isWaitingOnJoin_k__BackingField, put=__set__isWaitingOnJoin_k__BackingField))  _isWaitingOnJoin_k__BackingField;

constexpr void __set__isWaitingOnJoin_k__BackingField(bool value) ;

constexpr bool __get__isWaitingOnJoin_k__BackingField() const;

 bool __declspec(property(get=__get__isWaitingOnInvite_k__BackingField, put=__set__isWaitingOnInvite_k__BackingField))  _isWaitingOnInvite_k__BackingField;

constexpr void __set__isWaitingOnInvite_k__BackingField(bool value) ;

constexpr bool __get__isWaitingOnInvite_k__BackingField() const;


// Properties

 uint64_t __declspec(property(get=get_id))  id;

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isMe))  isMe;

 bool __declspec(property(get=get_isPartyOwner))  isPartyOwner;

 bool __declspec(property(get=get_isRoomOwner))  isRoomOwner;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 ::Oculus::Platform::Models::Room __declspec(property(get=get_room, put=set_room))  room;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=get_connectedPlayer, put=set_connectedPlayer))  connectedPlayer;

 bool __declspec(property(get=get_isMyPartyOwner))  isMyPartyOwner;

 bool __declspec(property(get=get_canJoin))  canJoin;

 bool __declspec(property(get=get_requiresPassword))  requiresPassword;

 bool __declspec(property(get=get_isWaitingOnJoin, put=set_isWaitingOnJoin))  isWaitingOnJoin;

 bool __declspec(property(get=get_canInvite))  canInvite;

 bool __declspec(property(get=get_isWaitingOnInvite, put=set_isWaitingOnInvite))  isWaitingOnInvite;

 bool __declspec(property(get=get_canKick))  canKick;

 bool __declspec(property(get=get_canLeave))  canLeave;

 bool __declspec(property(get=get_canBlock))  canBlock;

 bool __declspec(property(get=get_canUnblock))  canUnblock;


// Methods

/// @brief Method get_id addr 0x220e584 size 0x8 virtual false final false
 uint64_t get_id() ;

/// @brief Method get_userId addr 0x220e58c size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x220e594 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_isMe addr 0x220e59c size 0x8 virtual true final true
 bool get_isMe() ;

/// @brief Method get_isPartyOwner addr 0x220c848 size 0x14 virtual false final false
 bool get_isPartyOwner() ;

/// @brief Method get_isRoomOwner addr 0x220e5a4 size 0xac virtual false final false
 bool get_isRoomOwner() ;

/// @brief Method get_currentPartySize addr 0x220e650 size 0xdc virtual true final true
 int32_t get_currentPartySize() ;

/// @brief Method get_selectionMask addr 0x220e72c size 0x218 virtual true final true
 ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_configuration addr 0x220e944 size 0x39c virtual true final true
 ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_room addr 0x220ece0 size 0x8 virtual false final false
 ::Oculus::Platform::Models::Room get_room() ;

/// @brief Method set_room addr 0x220dd2c size 0x18 virtual false final false
 void set_room(::Oculus::Platform::Models::Room value) ;

/// @brief Method get_connectedPlayer addr 0x220ece8 size 0x8 virtual true final true
 ::GlobalNamespace::IConnectedPlayer get_connectedPlayer() ;

/// @brief Method set_connectedPlayer addr 0x220ecf0 size 0x8 virtual false final false
 void set_connectedPlayer(::GlobalNamespace::IConnectedPlayer value) ;

// Ctor Parameters [CppParam { name: "playerModel", ty: "::GlobalNamespace::OculusNetworkPlayerModel", modifiers: "", def_value: None }, CppParam { name: "id", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isMe", ty: "bool", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer(::GlobalNamespace::OculusNetworkPlayerModel playerModel, uint64_t id, ::StringW userName, bool isMe) ;

/// @brief Method .ctor addr 0x220ddb4 size 0xb8 virtual false final false
 void _ctor(::GlobalNamespace::OculusNetworkPlayerModel playerModel, uint64_t id, ::StringW userName, bool isMe) ;

/// @brief Method get_isMyPartyOwner addr 0x220ecf8 size 0x70 virtual true final true
 bool get_isMyPartyOwner() ;

/// @brief Method get_canJoin addr 0x220ed68 size 0x20 virtual true final true
 bool get_canJoin() ;

/// @brief Method Join addr 0x220ed88 size 0xe4 virtual true final true
 void Join() ;

/// @brief Method get_requiresPassword addr 0x220ee6c size 0x8 virtual true final true
 bool get_requiresPassword() ;

/// @brief Method Join addr 0x220ee74 size 0x4 virtual true final true
 void Join(::StringW password) ;

/// @brief Method get_isWaitingOnJoin addr 0x220ee78 size 0x8 virtual true final true
 bool get_isWaitingOnJoin() ;

/// @brief Method set_isWaitingOnJoin addr 0x220ee80 size 0xc virtual false final false
 void set_isWaitingOnJoin(bool value) ;

/// @brief Method get_canInvite addr 0x220ee8c size 0x74 virtual true final true
 bool get_canInvite() ;

/// @brief Method Invite addr 0x220ef00 size 0x5c virtual true final true
 void Invite() ;

/// @brief Method get_isWaitingOnInvite addr 0x220ef5c size 0x8 virtual true final true
 bool get_isWaitingOnInvite() ;

/// @brief Method set_isWaitingOnInvite addr 0x220ef64 size 0xc virtual false final false
 void set_isWaitingOnInvite(bool value) ;

/// @brief Method get_canKick addr 0x220ef70 size 0x70 virtual true final true
 bool get_canKick() ;

/// @brief Method Kick addr 0x220efe0 size 0x11c virtual true final true
 void Kick() ;

/// @brief Method get_canLeave addr 0x220f0fc size 0x94 virtual true final true
 bool get_canLeave() ;

/// @brief Method Leave addr 0x220f190 size 0x24 virtual true final true
 void Leave() ;

/// @brief Method get_canBlock addr 0x220f1b4 size 0x8 virtual true final true
 bool get_canBlock() ;

/// @brief Method Block addr 0x220f1bc size 0x4 virtual true final true
 void Block() ;

/// @brief Method get_canUnblock addr 0x220f1c0 size 0x8 virtual true final true
 bool get_canUnblock() ;

/// @brief Method Unblock addr 0x220f1c8 size 0x4 virtual true final true
 void Unblock() ;

/// @brief Method SendJoinResponse addr 0x220f1cc size 0x40 virtual true final true
 void SendJoinResponse(bool accept) ;

/// @brief Method SendInviteResponse addr 0x220f20c size 0xc virtual true final true
 void SendInviteResponse(bool accept) ;

/// @brief Method SameRoomAs addr 0x220e400 size 0x3c virtual false final false
 bool SameRoomAs(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer other) ;

/// @brief Method <Join>b__40_0 addr 0x220f218 size 0x20 virtual false final false
 void _Join_b__40_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Start>d__42
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4585))
// CS Name: OculusNetworkPlayerModel::<Start>d__42
struct CORDL_TYPE ____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusNetworkPlayerModel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::OculusNetworkPlayerModel __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __u__1) noexcept;


                    constexpr ____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42(____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42 const&) = default;
                    constexpr ____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42(____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42&&) = default;
                    constexpr ____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42& operator=(____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42& operator=(____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr ::GlobalNamespace::OculusNetworkPlayerModel __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x220f238 size 0x49c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x220f6d4 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass50_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4586))
// CS Name: OculusNetworkPlayerModel::<>c__DisplayClass50_0
class CORDL_TYPE ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0& operator=(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0& operator=(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0 const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(uint64_t value) ;

constexpr uint64_t __get_id() const;

 ::System::Threading::Tasks::TaskCompletionSource_1<::StringW> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW> __get_tcs() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0() ;

/// @brief Method .ctor addr 0x220d664 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUserNameAsync>b__0 addr 0x220f6e0 size 0x108 virtual false final false
 void _GetUserNameAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass51_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4587))
// CS Name: OculusNetworkPlayerModel::<>c__DisplayClass51_0
class CORDL_TYPE ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0& operator=(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0& operator=(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer __declspec(property(get=__get_player, put=__set_player))  player;

constexpr void __set_player(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer __get_player() const;

 ::GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr ::GlobalNamespace::OculusNetworkPlayerModel __get___4__this() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0() ;

/// @brief Method .ctor addr 0x220f7e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleRoomInviteReceived>b__0 addr 0x220f7f0 size 0xa0 virtual false final false
 void _HandleRoomInviteReceived_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<HandleRoomInviteReceived>d__51
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4588))
// CS Name: OculusNetworkPlayerModel::<HandleRoomInviteReceived>d__51
struct CORDL_TYPE ____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusNetworkPlayerModel", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::OculusNetworkPlayerModel __4__this, ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> message, ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;


                    constexpr ____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51(____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51 const&) = default;
                    constexpr ____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51(____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51&&) = default;
                    constexpr ____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51& operator=(____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51& operator=(____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr ::GlobalNamespace::OculusNetworkPlayerModel __get___4__this() const;

 ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> value) ;

constexpr ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> __get_message() const;

 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0 __get___8__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x220f890 size 0x3c8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x220fc58 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass55_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4589))
// CS Name: OculusNetworkPlayerModel::<>c__DisplayClass55_0
class CORDL_TYPE ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0& operator=(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0& operator=(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr ::GlobalNamespace::OculusNetworkPlayerModel __get___4__this() const;

 ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList> __declspec(property(get=__get_onGetFriends, put=__set_onGetFriends))  onGetFriends;

constexpr void __set_onGetFriends(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList> value) ;

constexpr ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserAndRoomList> __get_onGetFriends() const;

 ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserList> __declspec(property(get=__get_onGetInvitable, put=__set_onGetInvitable))  onGetInvitable;

constexpr void __set_onGetInvitable(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserList> value) ;

constexpr ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::UserList> __get_onGetInvitable() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0() ;

/// @brief Method .ctor addr 0x220df2c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Refresh>b__0 addr 0x220fc64 size 0x670 virtual false final false
 void _Refresh_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList> result) ;

/// @brief Method <Refresh>b__1 addr 0x22102d4 size 0x548 virtual false final false
 void _Refresh_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass64_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4590))
// CS Name: OculusNetworkPlayerModel::<>c__DisplayClass64_0
class CORDL_TYPE ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0& operator=(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0& operator=(____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr ::GlobalNamespace::OculusNetworkPlayerModel __get___4__this() const;

 ::System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> __get_tcs() const;

 uint64_t __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(uint64_t value) ;

constexpr uint64_t __get_userId() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0() ;

/// @brief Method .ctor addr 0x220e3f8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ShouldAcceptConnectionFromPlayer>b__0 addr 0x221081c size 0xb4 virtual false final false
 void _ShouldAcceptConnectionFromPlayer_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4597))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4591))
// CS Name: OculusNetworkPlayerModel
class CORDL_TYPE OculusNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
// Declarations
using __c__DisplayClass64_0 = ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0;

using __c__DisplayClass55_0 = ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0;

using _HandleRoomInviteReceived_d__51 = ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51;

using __c__DisplayClass51_0 = ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0;

using __c__DisplayClass50_0 = ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0;

using _Start_d__42 = ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42;

using OculusNetworkPlayer = ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer;

/// @brief Convert operator to ::GlobalNamespace::INetworkPlayerModel
constexpr operator  ::GlobalNamespace::INetworkPlayerModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~OculusNetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusNetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr OculusNetworkPlayerModel(OculusNetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusNetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr OculusNetworkPlayerModel(OculusNetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusNetworkPlayerModel(void* ptr) noexcept : ::GlobalNamespace::PlatformNetworkPlayerModel(ptr) {
}


  constexpr OculusNetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusNetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusNetworkPlayerModel& operator=(OculusNetworkPlayerModel&& o) noexcept = default;
  constexpr OculusNetworkPlayerModel& operator=(OculusNetworkPlayerModel const& o) noexcept = default;
                


// Fields

/// @brief Field kConnectionTypeKey offset 0
static constexpr ::ConstString  kConnectionTypeKey{u"connection"};

/// @brief Field kConnectionTypeOculus offset 0
static constexpr ::ConstString  kConnectionTypeOculus{u"oculus"};

/// @brief Field kConnectionTypeLiteNetLib offset 0
static constexpr ::ConstString  kConnectionTypeLiteNetLib{u"litenetlib"};

/// @brief Field kCurrentPartySizeKey offset 0
static constexpr ::ConstString  kCurrentPartySizeKey{u"currentPartySize"};

/// @brief Field kDifficultiesKey offset 0
static constexpr ::ConstString  kDifficultiesKey{u"difficulties"};

/// @brief Field kModifiersKey offset 0
static constexpr ::ConstString  kModifiersKey{u"modifiers"};

/// @brief Field kSongPacksKey offset 0
static constexpr ::ConstString  kSongPacksKey{u"songPacks"};

/// @brief Field kMaxPlayerCountKey offset 0
static constexpr ::ConstString  kMaxPlayerCountKey{u"maxPlayerCount"};

/// @brief Field kDiscoveryPolicyKey offset 0
static constexpr ::ConstString  kDiscoveryPolicyKey{u"discoveryPolicy"};

/// @brief Field kInvitePolicyKey offset 0
static constexpr ::ConstString  kInvitePolicyKey{u"invitePolicy"};

/// @brief Field kGameplayServerModeKey offset 0
static constexpr ::ConstString  kGameplayServerModeKey{u"gameplayServerMode"};

/// @brief Field kSongSelectionModeKey offset 0
static constexpr ::ConstString  kSongSelectionModeKey{u"songSelectionMode"};

/// @brief Field kGameplayServerControlSettingsKey offset 0
static constexpr ::ConstString  kGameplayServerControlSettingsKey{u"gameplayServerControlSettings"};

 ::GlobalNamespace::IPlatformUserModel __declspec(property(get=__get__platformUserModel, put=__set__platformUserModel))  _platformUserModel;

constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel value) ;

constexpr ::GlobalNamespace::IPlatformUserModel __get__platformUserModel() const;

/// @brief Field kAutoRefreshRate offset 0
static constexpr float_t  kAutoRefreshRate{30};

 float_t __declspec(property(get=__get__lastRefreshTime, put=__set__lastRefreshTime))  _lastRefreshTime;

constexpr void __set__lastRefreshTime(float_t value) ;

constexpr float_t __get__lastRefreshTime() const;

 bool __declspec(property(get=__get__isRefreshing, put=__set__isRefreshing))  _isRefreshing;

constexpr void __set__isRefreshing(bool value) ;

constexpr bool __get__isRefreshing() const;

 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer __declspec(property(get=__get__localPlayer, put=__set__localPlayer))  _localPlayer;

constexpr void __set__localPlayer(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer __get__localPlayer() const;

 ::Oculus::Platform::RoomJoinPolicy __declspec(property(get=__get__joinPolicy, put=__set__joinPolicy))  _joinPolicy;

constexpr void __set__joinPolicy(::Oculus::Platform::RoomJoinPolicy value) ;

constexpr ::Oculus::Platform::RoomJoinPolicy __get__joinPolicy() const;

 bool __declspec(property(get=__get__partyEnabled, put=__set__partyEnabled))  _partyEnabled;

constexpr void __set__partyEnabled(bool value) ;

constexpr bool __get__partyEnabled() const;

 bool __declspec(property(get=__get__waitingOnRoomCreate, put=__set__waitingOnRoomCreate))  _waitingOnRoomCreate;

constexpr void __set__waitingOnRoomCreate(bool value) ;

constexpr bool __get__waitingOnRoomCreate() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get__roomDataStore, put=__set__roomDataStore))  _roomDataStore;

constexpr void __set__roomDataStore(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get__roomDataStore() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> __declspec(property(get=__get__partyPlayers, put=__set__partyPlayers))  _partyPlayers;

constexpr void __set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> __get__partyPlayers() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> __declspec(property(get=__get__otherPlayers, put=__set__otherPlayers))  _otherPlayers;

constexpr void __set__otherPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer> __get__otherPlayers() const;

 ::System::Action_1<int32_t> __declspec(property(get=__get_partySizeChangedEvent, put=__set_partySizeChangedEvent))  partySizeChangedEvent;

constexpr void __set_partySizeChangedEvent(::System::Action_1<int32_t> value) ;

constexpr ::System::Action_1<int32_t> __get_partySizeChangedEvent() const;

 ::System::Action_1<::GlobalNamespace::INetworkPlayerModel> __declspec(property(get=__get_partyChangedEvent, put=__set_partyChangedEvent))  partyChangedEvent;

constexpr void __set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel> __get_partyChangedEvent() const;

 ::System::Action_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_inviteRequestedEvent, put=__set_inviteRequestedEvent))  inviteRequestedEvent;

constexpr void __set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer> __get_inviteRequestedEvent() const;


// Properties

 ::GlobalNamespace::INetworkPlayer __declspec(property(get=get_localPlayer))  localPlayer;

 bool __declspec(property(get=get_localPlayerIsPartyOwner))  localPlayerIsPartyOwner;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 ::GlobalNamespace::OculusConnectionManager __declspec(property(get=get_oculusConnectionManager))  oculusConnectionManager;


// Methods

/// @brief Method get_localPlayer addr 0x220c814 size 0x8 virtual false final false
 ::GlobalNamespace::INetworkPlayer get_localPlayer() ;

/// @brief Method get_localPlayerIsPartyOwner addr 0x220c81c size 0x2c virtual true final false
 bool get_localPlayerIsPartyOwner() ;

/// @brief Method get_currentPartySize addr 0x220c85c size 0x48 virtual true final false
 int32_t get_currentPartySize() ;

/// @brief Method add_partySizeChangedEvent addr 0x220c8a4 size 0xb0 virtual true final false
 void add_partySizeChangedEvent(::System::Action_1<int32_t> value) ;

/// @brief Method remove_partySizeChangedEvent addr 0x220c954 size 0xb0 virtual true final false
 void remove_partySizeChangedEvent(::System::Action_1<int32_t> value) ;

/// @brief Method add_partyChangedEvent addr 0x220ca04 size 0xb0 virtual true final false
 void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_partyChangedEvent addr 0x220cab4 size 0xb0 virtual true final false
 void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_inviteRequestedEvent addr 0x220cb64 size 0xb0 virtual true final false
 void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_inviteRequestedEvent addr 0x220cc14 size 0xb0 virtual true final false
 void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method get_oculusConnectionManager addr 0x220ccc4 size 0x58 virtual false final false
 ::GlobalNamespace::OculusConnectionManager get_oculusConnectionManager() ;

/// @brief Method Start addr 0x220cd1c size 0x94 virtual true final false
 void Start() ;

/// @brief Method Update addr 0x220cdb0 size 0x64 virtual true final false
 void Update() ;

/// @brief Method GetPartyPlayers addr 0x220cff4 size 0x8 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> GetPartyPlayers() ;

/// @brief Method GetOtherPlayers addr 0x220cffc size 0x8 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> GetOtherPlayers() ;

/// @brief Method GetPlayer addr 0x220d004 size 0x110 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer GetPlayer(uint64_t id) ;

/// @brief Method GetPlayer addr 0x220d114 size 0x120 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer GetPlayer(::StringW userId) ;

/// @brief Method TryCreateRoom addr 0x220d234 size 0x2d8 virtual false final false
 bool TryCreateRoom() ;

/// @brief Method GetUserName addr 0x220d50c size 0x18 virtual false final false
 ::StringW GetUserName(uint64_t id) ;

/// @brief Method GetUserNameAsync addr 0x220d524 size 0x140 virtual false final false
 ::System::Threading::Tasks::Task_1<::StringW> GetUserNameAsync(uint64_t id) ;

/// @brief Method HandleRoomInviteReceived addr 0x220d66c size 0xa0 virtual false final false
 void HandleRoomInviteReceived(::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification> message) ;

/// @brief Method HandleRoomInviteAccepted addr 0x220d70c size 0x4 virtual false final false
 void HandleRoomInviteAccepted(::Oculus::Platform::Message_1<::StringW> message) ;

/// @brief Method HandleRoomUpdate addr 0x220d710 size 0x61c virtual false final false
 void HandleRoomUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> message) ;

/// @brief Method HandlePlayersChanged addr 0x220dd44 size 0x70 virtual false final false
 void HandlePlayersChanged() ;

/// @brief Method Refresh addr 0x220ce14 size 0x1e0 virtual false final false
 void Refresh() ;

/// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T> createConfig) ;

/// @brief Method DestroyPartyConnection addr 0x220df34 size 0x2c virtual true final false
 void DestroyPartyConnection() ;

/// @brief Method PlayerConnected addr 0x220e198 size 0xbc virtual true final false
 void PlayerConnected(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method PlayerDisconnected addr 0x220e254 size 0xd8 virtual true final false
 void PlayerDisconnected(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method PartySizeChanged addr 0x220e32c size 0xa4 virtual true final false
 void PartySizeChanged(int32_t currentPartySize) ;

/// @brief Method UpdateRoomDataStore addr 0x220e3d0 size 0x28 virtual false final false
 void UpdateRoomDataStore() ;

/// @brief Method TryLeaveRoom addr 0x220df80 size 0x218 virtual false final false
 void TryLeaveRoom() ;

/// @brief Method TryConnectToServer addr 0x220de6c size 0xc0 virtual false final false
 void TryConnectToServer() ;

/// @brief Method ShouldAcceptConnectionFromPlayer addr 0x220c634 size 0x1d4 virtual false final false
 ::System::Threading::Tasks::Task_1<bool> ShouldAcceptConnectionFromPlayer(uint64_t userId) ;

// Ctor Parameters []
explicit OculusNetworkPlayerModel() ;

/// @brief Method .ctor addr 0x220e43c size 0xf4 virtual false final false
 void _ctor() ;

/// @brief Method <TryCreateRoom>b__48_0 addr 0x220e538 size 0x4c virtual false final false
 void _TryCreateRoom_b__48_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OculusNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusNetworkPlayerModel, "", "OculusNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel__OculusNetworkPlayer, "", "OculusNetworkPlayerModel/OculusNetworkPlayer");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass50_0, "", "OculusNetworkPlayerModel/<>c__DisplayClass50_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass51_0, "", "OculusNetworkPlayerModel/<>c__DisplayClass51_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass55_0, "", "OculusNetworkPlayerModel/<>c__DisplayClass55_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel____c__DisplayClass64_0, "", "OculusNetworkPlayerModel/<>c__DisplayClass64_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___HandleRoomInviteReceived_d__51, "", "OculusNetworkPlayerModel/<HandleRoomInviteReceived>d__51");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusNetworkPlayerModel___Start_d__42, "", "OculusNetworkPlayerModel/<Start>d__42");
