#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType;
}
namespace GlobalNamespace {
class MultiplayerLobbyConnectionController;
}
// Type: ::LobbyConnectionState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4520))
// CS Name: MultiplayerLobbyConnectionController::LobbyConnectionState
struct CORDL_TYPE ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState(____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState const&) = default;
                    constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState(____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState&&) = default;
                    constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState& operator=(____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState& operator=(____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState_Unwrapped : int32_t {
__None = 0,
__Connecting = 1,
__Connected = 2,
__ConnectionFailed = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState const None;

/// @brief Field Connecting offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState const Connecting;

/// @brief Field Connected offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState const Connected;

/// @brief Field ConnectionFailed offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState const ConnectionFailed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LobbyConnectionType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4521))
// CS Name: MultiplayerLobbyConnectionController::LobbyConnectionType
struct CORDL_TYPE ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType(____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType const&) = default;
                    constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType(____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType&&) = default;
                    constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType& operator=(____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType& operator=(____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType_Unwrapped : int32_t {
__None = 0,
__PartyHost = 1,
__PartyClient = 2,
__QuickPlay = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType const None;

/// @brief Field PartyHost offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType const PartyHost;

/// @brief Field PartyClient offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType const PartyClient;

/// @brief Field QuickPlay offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType const QuickPlay;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLobbyConnectionController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4522))
// CS Name: MultiplayerLobbyConnectionController
class CORDL_TYPE MultiplayerLobbyConnectionController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LobbyConnectionType = ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType;

using LobbyConnectionState = ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MultiplayerLobbyConnectionController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyConnectionController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyConnectionController(MultiplayerLobbyConnectionController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyConnectionController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyConnectionController(MultiplayerLobbyConnectionController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyConnectionController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerLobbyConnectionController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyConnectionController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyConnectionController& operator=(MultiplayerLobbyConnectionController&& o) noexcept = default;
  constexpr MultiplayerLobbyConnectionController& operator=(MultiplayerLobbyConnectionController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::IUnifiedNetworkPlayerModel __declspec(property(get=__get__unifiedNetworkPlayerModel, put=__set__unifiedNetworkPlayerModel))  _unifiedNetworkPlayerModel;

constexpr void __set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel value) ;

constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel __get__unifiedNetworkPlayerModel() const;

 ::System::Action __declspec(property(get=__get_connectionSuccessEvent, put=__set_connectionSuccessEvent))  connectionSuccessEvent;

constexpr void __set_connectionSuccessEvent(::System::Action value) ;

constexpr ::System::Action __get_connectionSuccessEvent() const;

 ::System::Action_2<::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason> __declspec(property(get=__get_connectionFailedEvent, put=__set_connectionFailedEvent))  connectionFailedEvent;

constexpr void __set_connectionFailedEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason> value) ;

constexpr ::System::Action_2<::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason> __get_connectionFailedEvent() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState __declspec(property(get=__get__connectionState_k__BackingField, put=__set__connectionState_k__BackingField))  _connectionState_k__BackingField;

constexpr void __set__connectionState_k__BackingField(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState __get__connectionState_k__BackingField() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType __declspec(property(get=__get__connectionType_k__BackingField, put=__set__connectionType_k__BackingField))  _connectionType_k__BackingField;

constexpr void __set__connectionType_k__BackingField(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType __get__connectionType_k__BackingField() const;

 ::GlobalNamespace::ConnectionFailedReason __declspec(property(get=__get__connectionFailedReason_k__BackingField, put=__set__connectionFailedReason_k__BackingField))  _connectionFailedReason_k__BackingField;

constexpr void __set__connectionFailedReason_k__BackingField(::GlobalNamespace::ConnectionFailedReason value) ;

constexpr ::GlobalNamespace::ConnectionFailedReason __get__connectionFailedReason_k__BackingField() const;

 ::GlobalNamespace::____GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig __declspec(property(get=__get__partyConfig, put=__set__partyConfig))  _partyConfig;

constexpr void __set__partyConfig(::GlobalNamespace::____GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig __get__partyConfig() const;

 int32_t __declspec(property(get=__get__retryAttemptsLeft, put=__set__retryAttemptsLeft))  _retryAttemptsLeft;

constexpr void __set__retryAttemptsLeft(int32_t value) ;

constexpr int32_t __get__retryAttemptsLeft() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState __declspec(property(get=get_connectionState, put=set_connectionState))  connectionState;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType __declspec(property(get=get_connectionType, put=set_connectionType))  connectionType;

 ::GlobalNamespace::ConnectionFailedReason __declspec(property(get=get_connectionFailedReason, put=set_connectionFailedReason))  connectionFailedReason;


// Methods

/// @brief Method add_connectionSuccessEvent addr 0x21fe7fc size 0x9c virtual false final false
 void add_connectionSuccessEvent(::System::Action value) ;

/// @brief Method remove_connectionSuccessEvent addr 0x21fe898 size 0x9c virtual false final false
 void remove_connectionSuccessEvent(::System::Action value) ;

/// @brief Method add_connectionFailedEvent addr 0x21fe934 size 0xb0 virtual false final false
 void add_connectionFailedEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_connectionFailedEvent addr 0x21fe9e4 size 0xb0 virtual false final false
 void remove_connectionFailedEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method get_connectionState addr 0x21fea94 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState get_connectionState() ;

/// @brief Method set_connectionState addr 0x21fea9c size 0x8 virtual false final false
 void set_connectionState(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState value) ;

/// @brief Method get_connectionType addr 0x21feaa4 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType get_connectionType() ;

/// @brief Method set_connectionType addr 0x21feaac size 0x8 virtual false final false
 void set_connectionType(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType value) ;

/// @brief Method get_connectionFailedReason addr 0x21feab4 size 0x8 virtual false final false
 ::GlobalNamespace::ConnectionFailedReason get_connectionFailedReason() ;

/// @brief Method set_connectionFailedReason addr 0x21feabc size 0x8 virtual false final false
 void set_connectionFailedReason(::GlobalNamespace::ConnectionFailedReason value) ;

/// @brief Method CreateParty addr 0x21feac4 size 0x42c virtual false final false
 void CreateParty(::GlobalNamespace::CreateServerFormData data) ;

/// @brief Method ConnectToParty addr 0x21ff180 size 0x318 virtual false final false
 void ConnectToParty(::StringW serverCode) ;

/// @brief Method CreateOrConnectToDestinationParty addr 0x21ff498 size 0x408 virtual false final false
 void CreateOrConnectToDestinationParty(::GlobalNamespace::SelectMultiplayerLobbyDestination lobbyDestination) ;

/// @brief Method ConnectToServer addr 0x21ff8a0 size 0x23c virtual false final false
 void ConnectToServer(::GlobalNamespace::INetworkPlayer server, ::StringW password) ;

/// @brief Method ConnectToMatchmaking addr 0x21ffadc size 0x330 virtual false final false
 void ConnectToMatchmaking(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask, bool allowSongSelection) ;

/// @brief Method LeaveLobby addr 0x21ffe0c size 0xa8 virtual false final false
 void LeaveLobby() ;

/// @brief Method ClearCurrentConnection addr 0x21ffeb4 size 0x8 virtual false final false
 void ClearCurrentConnection() ;

/// @brief Method HandleMultiplayerSessionManagerConnected addr 0x21ffebc size 0x274 virtual false final false
 void HandleMultiplayerSessionManagerConnected() ;

/// @brief Method HandleMultiplayerSessionManagerConnectionFailed addr 0x21feef0 size 0x290 virtual false final false
 void HandleMultiplayerSessionManagerConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method HandleMultiplayerSessionManagerConnectionFailedWithRetry addr 0x2200130 size 0x12c virtual false final false
 void HandleMultiplayerSessionManagerConnectionFailedWithRetry(::GlobalNamespace::ConnectionFailedReason reason) ;

// Ctor Parameters []
explicit MultiplayerLobbyConnectionController() ;

/// @brief Method .ctor addr 0x220025c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState, "", "MultiplayerLobbyConnectionController/LobbyConnectionState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType, "", "MultiplayerLobbyConnectionController/LobbyConnectionType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyConnectionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyConnectionController, "", "MultiplayerLobbyConnectionController");
