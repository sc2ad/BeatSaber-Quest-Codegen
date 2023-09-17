#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
template<typename TType>
class RpcHandler_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__MenuRpcManager__RpcType;
}
namespace GlobalNamespace {
class MenuRpcManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuRpcManager__StartLevelRpc;
}
// Type: ::RpcType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12774))
// CS Name: MenuRpcManager::RpcType
struct CORDL_TYPE ____GlobalNamespace__MenuRpcManager__RpcType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__RpcType(uint8_t value__) noexcept;


                    constexpr ____GlobalNamespace__MenuRpcManager__RpcType(____GlobalNamespace__MenuRpcManager__RpcType const&) = default;
                    constexpr ____GlobalNamespace__MenuRpcManager__RpcType(____GlobalNamespace__MenuRpcManager__RpcType&&) = default;
                    constexpr ____GlobalNamespace__MenuRpcManager__RpcType& operator=(____GlobalNamespace__MenuRpcManager__RpcType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MenuRpcManager__RpcType& operator=(____GlobalNamespace__MenuRpcManager__RpcType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__RpcType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__MenuRpcManager__RpcType_Unwrapped : uint8_t {
__SetPlayersMissingEntitlementsToLevel = 0u,
__GetIsEntitledToLevel = 1u,
__SetIsEntitledToLevel = 2u,
__InvalidateLevelEntitlementStatuses = 3u,
__SelectLevelPack = 4u,
__SetSelectedBeatmap = 5u,
__GetSelectedBeatmap = 6u,
__RecommendBeatmap = 7u,
__ClearRecommendedBeatmap = 8u,
__GetRecommendedBeatmap = 9u,
__SetSelectedGameplayModifiers = 10u,
__GetSelectedGameplayModifiers = 11u,
__RecommendGameplayModifiers = 12u,
__ClearRecommendedGameplayModifiers = 13u,
__GetRecommendedGameplayModifiers = 14u,
__LevelLoadError = 15u,
__LevelLoadSuccess = 16u,
__StartLevel = 17u,
__GetStartedLevel = 18u,
__CancelLevelStart = 19u,
__GetMultiplayerGameState = 20u,
__SetMultiplayerGameState = 21u,
__GetIsReady = 22u,
__SetIsReady = 23u,
__SetStartGameTime = 24u,
__CancelStartGameTime = 25u,
__GetIsInLobby = 26u,
__SetIsInLobby = 27u,
__GetCountdownEndTime = 28u,
__SetCountdownEndTime = 29u,
__CancelCountdown = 30u,
__GetOwnedSongPacks = 31u,
__SetOwnedSongPacks = 32u,
__RequestKickPlayer = 33u,
__GetPermissionConfiguration = 34u,
__SetPermissionConfiguration = 35u,
__GetIsStartButtonEnabled = 36u,
__SetIsStartButtonEnabled = 37u,
__ClearSelectedBeatmap = 38u,
__ClearSelectedGameplayModifiers = 39u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__MenuRpcManager__RpcType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__MenuRpcManager__RpcType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field SetPlayersMissingEntitlementsToLevel offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetPlayersMissingEntitlementsToLevel;

/// @brief Field GetIsEntitledToLevel offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetIsEntitledToLevel;

/// @brief Field SetIsEntitledToLevel offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetIsEntitledToLevel;

/// @brief Field InvalidateLevelEntitlementStatuses offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const InvalidateLevelEntitlementStatuses;

/// @brief Field SelectLevelPack offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SelectLevelPack;

/// @brief Field SetSelectedBeatmap offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetSelectedBeatmap;

/// @brief Field GetSelectedBeatmap offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetSelectedBeatmap;

/// @brief Field RecommendBeatmap offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const RecommendBeatmap;

/// @brief Field ClearRecommendedBeatmap offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const ClearRecommendedBeatmap;

/// @brief Field GetRecommendedBeatmap offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetRecommendedBeatmap;

/// @brief Field SetSelectedGameplayModifiers offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetSelectedGameplayModifiers;

/// @brief Field GetSelectedGameplayModifiers offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetSelectedGameplayModifiers;

/// @brief Field RecommendGameplayModifiers offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const RecommendGameplayModifiers;

/// @brief Field ClearRecommendedGameplayModifiers offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const ClearRecommendedGameplayModifiers;

/// @brief Field GetRecommendedGameplayModifiers offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetRecommendedGameplayModifiers;

/// @brief Field LevelLoadError offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const LevelLoadError;

/// @brief Field LevelLoadSuccess offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const LevelLoadSuccess;

/// @brief Field StartLevel offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const StartLevel;

/// @brief Field GetStartedLevel offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetStartedLevel;

/// @brief Field CancelLevelStart offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const CancelLevelStart;

/// @brief Field GetMultiplayerGameState offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetMultiplayerGameState;

/// @brief Field SetMultiplayerGameState offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetMultiplayerGameState;

/// @brief Field GetIsReady offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetIsReady;

/// @brief Field SetIsReady offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetIsReady;

/// @brief Field SetStartGameTime offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetStartGameTime;

/// @brief Field CancelStartGameTime offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const CancelStartGameTime;

/// @brief Field GetIsInLobby offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetIsInLobby;

/// @brief Field SetIsInLobby offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetIsInLobby;

/// @brief Field GetCountdownEndTime offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetCountdownEndTime;

/// @brief Field SetCountdownEndTime offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetCountdownEndTime;

/// @brief Field CancelCountdown offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const CancelCountdown;

/// @brief Field GetOwnedSongPacks offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetOwnedSongPacks;

/// @brief Field SetOwnedSongPacks offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetOwnedSongPacks;

/// @brief Field RequestKickPlayer offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const RequestKickPlayer;

/// @brief Field GetPermissionConfiguration offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetPermissionConfiguration;

/// @brief Field SetPermissionConfiguration offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetPermissionConfiguration;

/// @brief Field GetIsStartButtonEnabled offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const GetIsStartButtonEnabled;

/// @brief Field SetIsStartButtonEnabled offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const SetIsStartButtonEnabled;

/// @brief Field ClearSelectedBeatmap offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const ClearSelectedBeatmap;

/// @brief Field ClearSelectedGameplayModifiers offset 0
static ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType const ClearSelectedGameplayModifiers;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetPlayersPermissionConfigurationRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12775))
// CS Name: MenuRpcManager::GetPlayersPermissionConfigurationRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc(____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc(____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc& operator=(____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc& operator=(____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc() ;

/// @brief Method .ctor addr 0xdbc188 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetPlayersPermissionConfigurationRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 4756 }), TypeDefinitionIndex(TypeDefinitionIndex(15120)), TypeDefinitionIndex(TypeDefinitionIndex(12876))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12776))
// CS Name: MenuRpcManager::SetPlayersPermissionConfigurationRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc(____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc(____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc& operator=(____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc& operator=(____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc() ;

/// @brief Method .ctor addr 0xdbc198 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetPlayersMissingEntitlementsToLevelRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), TypeDefinitionIndex(TypeDefinitionIndex(15121)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 362 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12777))
// CS Name: MenuRpcManager::SetPlayersMissingEntitlementsToLevelRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc(____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc(____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc() ;

/// @brief Method .ctor addr 0xdbc1e0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetIsEntitledToLevelRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12778))
// CS Name: MenuRpcManager::GetIsEntitledToLevelRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc(____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc(____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::StringW>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc() ;

/// @brief Method .ctor addr 0xdbc228 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetIsEntitledToLevelRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 1366 }), TypeDefinitionIndex(TypeDefinitionIndex(12877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12779))
// CS Name: MenuRpcManager::SetIsEntitledToLevelRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_2<::StringW,int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc(____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc(____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_2<::StringW,int32_t>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc() ;

/// @brief Method .ctor addr 0xdbc270 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InvalidateLevelEntitlementStatusesRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12780))
// CS Name: MenuRpcManager::InvalidateLevelEntitlementStatusesRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc(____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc(____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc& operator=(____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc& operator=(____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc() ;

/// @brief Method .ctor addr 0xdbc2b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SelectLevelPackRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12781))
// CS Name: MenuRpcManager::SelectLevelPackRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc(____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc(____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::StringW>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc& operator=(____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc& operator=(____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc() ;

/// @brief Method .ctor addr 0xdbc2c0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetSelectedBeatmapRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 3155 }), TypeDefinitionIndex(TypeDefinitionIndex(15079))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12782))
// CS Name: MenuRpcManager::SetSelectedBeatmapRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::BeatmapIdentifierNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc(____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc(____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::BeatmapIdentifierNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc() ;

/// @brief Method .ctor addr 0xdbc308 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ClearSelectedBeatmapRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12783))
// CS Name: MenuRpcManager::ClearSelectedBeatmapRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc(____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc(____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc() ;

/// @brief Method .ctor addr 0xdbc350 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetSelectedBeatmapRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12784))
// CS Name: MenuRpcManager::GetSelectedBeatmapRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc(____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc(____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc() ;

/// @brief Method .ctor addr 0xdbc358 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RecommendBeatmapRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15079)), TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 3155 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12785))
// CS Name: MenuRpcManager::RecommendBeatmapRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::BeatmapIdentifierNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc(____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc(____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::BeatmapIdentifierNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc() ;

/// @brief Method .ctor addr 0xdbc360 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ClearRecommendedBeatmapRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12786))
// CS Name: MenuRpcManager::ClearRecommendedBeatmapRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc(____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc(____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc() ;

/// @brief Method .ctor addr 0xdbc3a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetRecommendedBeatmapRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12787))
// CS Name: MenuRpcManager::GetRecommendedBeatmapRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc(____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc(____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc& operator=(____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc() ;

/// @brief Method .ctor addr 0xdbc3b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetSelectedGameplayModifiersRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15093)), TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 299 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12788))
// CS Name: MenuRpcManager::SetSelectedGameplayModifiersRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc() ;

/// @brief Method .ctor addr 0xdbc3b8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ClearSelectedGameplayModifiersRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12789))
// CS Name: MenuRpcManager::ClearSelectedGameplayModifiersRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc() ;

/// @brief Method .ctor addr 0xdbc400 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetSelectedGameplayModifiersRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12790))
// CS Name: MenuRpcManager::GetSelectedGameplayModifiersRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc() ;

/// @brief Method .ctor addr 0xdbc408 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RecommendGameplayModifiersRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 299 }), TypeDefinitionIndex(TypeDefinitionIndex(15093))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12791))
// CS Name: MenuRpcManager::RecommendGameplayModifiersRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc() ;

/// @brief Method .ctor addr 0xdbc410 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ClearRecommendedGameplayModifiersRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12792))
// CS Name: MenuRpcManager::ClearRecommendedGameplayModifiersRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc() ;

/// @brief Method .ctor addr 0xdbc458 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetRecommendedGameplayModifiersRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12793))
// CS Name: MenuRpcManager::GetRecommendedGameplayModifiersRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc(____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc& operator=(____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc() ;

/// @brief Method .ctor addr 0xdbc460 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetIsStartButtonEnabledRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12794))
// CS Name: MenuRpcManager::GetIsStartButtonEnabledRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc(____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc(____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc& operator=(____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc& operator=(____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc() ;

/// @brief Method .ctor addr 0xdbc468 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetIsStartButtonEnabledRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), TypeDefinitionIndex(TypeDefinitionIndex(12630)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 278 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12795))
// CS Name: MenuRpcManager::SetIsStartButtonEnabledRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::CannotStartGameReason> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc(____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc(____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::CannotStartGameReason>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc& operator=(____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc& operator=(____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc() ;

/// @brief Method .ctor addr 0xdbc470 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelLoadErrorRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12796))
// CS Name: MenuRpcManager::LevelLoadErrorRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc(____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc(____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::StringW>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc& operator=(____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc& operator=(____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc() ;

/// @brief Method .ctor addr 0xdbc4b8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelLoadSuccessRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12797))
// CS Name: MenuRpcManager::LevelLoadSuccessRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc(____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc(____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::StringW>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc& operator=(____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc& operator=(____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc() ;

/// @brief Method .ctor addr 0xdbc500 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartLevelRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12878), inst: 4773 }), TypeDefinitionIndex(TypeDefinitionIndex(15079)), TypeDefinitionIndex(TypeDefinitionIndex(12878)), TypeDefinitionIndex(TypeDefinitionIndex(15093))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12798))
// CS Name: MenuRpcManager::StartLevelRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__StartLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_3<::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__MenuRpcManager__StartLevelRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__StartLevelRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__StartLevelRpc(____GlobalNamespace__MenuRpcManager__StartLevelRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__StartLevelRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__StartLevelRpc(____GlobalNamespace__MenuRpcManager__StartLevelRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__StartLevelRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_3<::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__StartLevelRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__StartLevelRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__StartLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__StartLevelRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__StartLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__StartLevelRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__StartLevelRpc() ;

/// @brief Method .ctor addr 0xdbc548 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetStartedLevelRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12799))
// CS Name: MenuRpcManager::GetStartedLevelRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc(____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc(____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc& operator=(____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc() ;

/// @brief Method .ctor addr 0xdbc590 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetMultiplayerGameStateRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12800))
// CS Name: MenuRpcManager::GetMultiplayerGameStateRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc(____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc(____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc& operator=(____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc& operator=(____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc() ;

/// @brief Method .ctor addr 0xdbc598 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetMultiplayerGameStateRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12821)), TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 341 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12801))
// CS Name: MenuRpcManager::SetMultiplayerGameStateRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerGameState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc(____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc(____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerGameState>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc& operator=(____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc& operator=(____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc() ;

/// @brief Method .ctor addr 0xdbc5a0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CancelCountdownRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12802))
// CS Name: MenuRpcManager::CancelCountdownRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__CancelCountdownRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__CancelCountdownRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc(____GlobalNamespace__MenuRpcManager__CancelCountdownRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__CancelCountdownRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc(____GlobalNamespace__MenuRpcManager__CancelCountdownRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc& operator=(____GlobalNamespace__MenuRpcManager__CancelCountdownRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc& operator=(____GlobalNamespace__MenuRpcManager__CancelCountdownRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__CancelCountdownRpc() ;

/// @brief Method .ctor addr 0xdbc5e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetCountdownEndTimeRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(12876))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12803))
// CS Name: MenuRpcManager::SetCountdownEndTimeRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc(____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc(____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<float_t>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc& operator=(____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc& operator=(____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc() ;

/// @brief Method .ctor addr 0xdbc5f0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetCountdownEndTimeRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12804))
// CS Name: MenuRpcManager::GetCountdownEndTimeRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc(____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc(____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc& operator=(____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc& operator=(____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc() ;

/// @brief Method .ctor addr 0xdbc638 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CancelLevelStartRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12805))
// CS Name: MenuRpcManager::CancelLevelStartRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc(____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc(____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc& operator=(____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc& operator=(____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc() ;

/// @brief Method .ctor addr 0xdbc640 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetIsReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12806))
// CS Name: MenuRpcManager::GetIsReadyRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetIsReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetIsReadyRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc(____GlobalNamespace__MenuRpcManager__GetIsReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetIsReadyRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc(____GlobalNamespace__MenuRpcManager__GetIsReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc& operator=(____GlobalNamespace__MenuRpcManager__GetIsReadyRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc& operator=(____GlobalNamespace__MenuRpcManager__GetIsReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetIsReadyRpc() ;

/// @brief Method .ctor addr 0xdbc648 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetIsReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 99 }), TypeDefinitionIndex(TypeDefinitionIndex(12876))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12807))
// CS Name: MenuRpcManager::SetIsReadyRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetIsReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetIsReadyRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc(____GlobalNamespace__MenuRpcManager__SetIsReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetIsReadyRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc(____GlobalNamespace__MenuRpcManager__SetIsReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<bool>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc& operator=(____GlobalNamespace__MenuRpcManager__SetIsReadyRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc& operator=(____GlobalNamespace__MenuRpcManager__SetIsReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetIsReadyRpc() ;

/// @brief Method .ctor addr 0xdbc650 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetStartGameTimeRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(12876))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12808))
// CS Name: MenuRpcManager::SetStartGameTimeRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc(____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc(____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<float_t>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc& operator=(____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc& operator=(____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc() ;

/// @brief Method .ctor addr 0xdbc698 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CancelStartGameTimeRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12809))
// CS Name: MenuRpcManager::CancelStartGameTimeRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc(____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc(____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc& operator=(____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc& operator=(____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc() ;

/// @brief Method .ctor addr 0xdbc6e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetIsInLobbyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12810))
// CS Name: MenuRpcManager::GetIsInLobbyRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc(____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc(____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc& operator=(____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc& operator=(____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc() ;

/// @brief Method .ctor addr 0xdbc6e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetIsInLobbyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 99 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12811))
// CS Name: MenuRpcManager::SetIsInLobbyRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc(____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc(____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<bool>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc& operator=(____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc& operator=(____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc() ;

/// @brief Method .ctor addr 0xdbc6f0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetOwnedSongPacksRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12812))
// CS Name: MenuRpcManager::GetOwnedSongPacksRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc(____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc(____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc& operator=(____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc& operator=(____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc() ;

/// @brief Method .ctor addr 0xdbc738 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetOwnedSongPacksRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15136)), TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 3232 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12813))
// CS Name: MenuRpcManager::SetOwnedSongPacksRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::SongPackMask> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc(____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc(____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::SongPackMask>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc& operator=(____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc& operator=(____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc() ;

/// @brief Method .ctor addr 0xdbc740 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RequestKickPlayerRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(12876))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12814))
// CS Name: MenuRpcManager::RequestKickPlayerRpc
class CORDL_TYPE ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc(____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc(____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::StringW>(ptr) {
}


  constexpr ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc& operator=(____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc& operator=(____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc() ;

/// @brief Method .ctor addr 0xdbc788 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MenuRpcManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12815))
// CS Name: MenuRpcManager
class CORDL_TYPE MenuRpcManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RequestKickPlayerRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc;

using SetOwnedSongPacksRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc;

using GetOwnedSongPacksRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc;

using SetIsInLobbyRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc;

using GetIsInLobbyRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc;

using CancelStartGameTimeRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc;

using SetStartGameTimeRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc;

using SetIsReadyRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsReadyRpc;

using GetIsReadyRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsReadyRpc;

using CancelLevelStartRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc;

using GetCountdownEndTimeRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc;

using SetCountdownEndTimeRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc;

using CancelCountdownRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelCountdownRpc;

using SetMultiplayerGameStateRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc;

using GetMultiplayerGameStateRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc;

using GetStartedLevelRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc;

using StartLevelRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__StartLevelRpc;

using LevelLoadSuccessRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc;

using LevelLoadErrorRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc;

using SetIsStartButtonEnabledRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc;

using GetIsStartButtonEnabledRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc;

using GetRecommendedGameplayModifiersRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc;

using ClearRecommendedGameplayModifiersRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc;

using RecommendGameplayModifiersRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc;

using GetSelectedGameplayModifiersRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc;

using ClearSelectedGameplayModifiersRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc;

using SetSelectedGameplayModifiersRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc;

using GetRecommendedBeatmapRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc;

using ClearRecommendedBeatmapRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc;

using RecommendBeatmapRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc;

using GetSelectedBeatmapRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc;

using ClearSelectedBeatmapRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc;

using SetSelectedBeatmapRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc;

using SelectLevelPackRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc;

using InvalidateLevelEntitlementStatusesRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc;

using SetIsEntitledToLevelRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc;

using GetIsEntitledToLevelRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc;

using SetPlayersMissingEntitlementsToLevelRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc;

using SetPlayersPermissionConfigurationRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc;

using GetPlayersPermissionConfigurationRpc = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc;

using RpcType = ::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType;

/// @brief Convert operator to ::GlobalNamespace::IMenuRpcManager
constexpr operator  ::GlobalNamespace::IMenuRpcManager() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~MenuRpcManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager", modifiers: " const&", def_value: None }]
constexpr MenuRpcManager(MenuRpcManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager", modifiers: "&&", def_value: None }]
constexpr MenuRpcManager(MenuRpcManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuRpcManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MenuRpcManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuRpcManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuRpcManager& operator=(MenuRpcManager&& o) noexcept = default;
  constexpr MenuRpcManager& operator=(MenuRpcManager const& o) noexcept = default;
                


// Fields

/// @brief Field kMenuState offset 0
static constexpr ::ConstString  kMenuState{u"in_menu"};

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType> __declspec(property(get=__get__rpcHandler, put=__set__rpcHandler))  _rpcHandler;

constexpr void __set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType> value) ;

constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType> __get__rpcHandler() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getPlayersPermissionConfigurationEvent, put=__set_getPlayersPermissionConfigurationEvent))  getPlayersPermissionConfigurationEvent;

constexpr void __set_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getPlayersPermissionConfigurationEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable> __declspec(property(get=__get_setPlayersPermissionConfigurationEvent, put=__set_setPlayersPermissionConfigurationEvent))  setPlayersPermissionConfigurationEvent;

constexpr void __set_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable> __get_setPlayersPermissionConfigurationEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> __declspec(property(get=__get_setPlayersMissingEntitlementsToLevelEvent, put=__set_setPlayersMissingEntitlementsToLevelEvent))  setPlayersMissingEntitlementsToLevelEvent;

constexpr void __set_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> __get_setPlayersMissingEntitlementsToLevelEvent() const;

 ::System::Action_2<::StringW,::StringW> __declspec(property(get=__get_getIsEntitledToLevelEvent, put=__set_getIsEntitledToLevelEvent))  getIsEntitledToLevelEvent;

constexpr void __set_getIsEntitledToLevelEvent(::System::Action_2<::StringW,::StringW> value) ;

constexpr ::System::Action_2<::StringW,::StringW> __get_getIsEntitledToLevelEvent() const;

 ::System::Action_3<::StringW,::StringW,::GlobalNamespace::EntitlementsStatus> __declspec(property(get=__get_setIsEntitledToLevelEvent, put=__set_setIsEntitledToLevelEvent))  setIsEntitledToLevelEvent;

constexpr void __set_setIsEntitledToLevelEvent(::System::Action_3<::StringW,::StringW,::GlobalNamespace::EntitlementsStatus> value) ;

constexpr ::System::Action_3<::StringW,::StringW,::GlobalNamespace::EntitlementsStatus> __get_setIsEntitledToLevelEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_levelEntitlementStatusesInvalidatedEvent, put=__set_levelEntitlementStatusesInvalidatedEvent))  levelEntitlementStatusesInvalidatedEvent;

constexpr void __set_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_levelEntitlementStatusesInvalidatedEvent() const;

 ::System::Action_2<::StringW,::StringW> __declspec(property(get=__get_selectedLevelPackEvent, put=__set_selectedLevelPackEvent))  selectedLevelPackEvent;

constexpr void __set_selectedLevelPackEvent(::System::Action_2<::StringW,::StringW> value) ;

constexpr ::System::Action_2<::StringW,::StringW> __get_selectedLevelPackEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> __declspec(property(get=__get_setSelectedBeatmapEvent, put=__set_setSelectedBeatmapEvent))  setSelectedBeatmapEvent;

constexpr void __set_setSelectedBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> __get_setSelectedBeatmapEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_clearSelectedBeatmapEvent, put=__set_clearSelectedBeatmapEvent))  clearSelectedBeatmapEvent;

constexpr void __set_clearSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_clearSelectedBeatmapEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getSelectedBeatmapEvent, put=__set_getSelectedBeatmapEvent))  getSelectedBeatmapEvent;

constexpr void __set_getSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getSelectedBeatmapEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> __declspec(property(get=__get_recommendBeatmapEvent, put=__set_recommendBeatmapEvent))  recommendBeatmapEvent;

constexpr void __set_recommendBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> __get_recommendBeatmapEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_clearRecommendedBeatmapEvent, put=__set_clearRecommendedBeatmapEvent))  clearRecommendedBeatmapEvent;

constexpr void __set_clearRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_clearRecommendedBeatmapEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getRecommendedBeatmapEvent, put=__set_getRecommendedBeatmapEvent))  getRecommendedBeatmapEvent;

constexpr void __set_getRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getRecommendedBeatmapEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> __declspec(property(get=__get_setSelectedGameplayModifiersEvent, put=__set_setSelectedGameplayModifiersEvent))  setSelectedGameplayModifiersEvent;

constexpr void __set_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> __get_setSelectedGameplayModifiersEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_clearSelectedGameplayModifiersEvent, put=__set_clearSelectedGameplayModifiersEvent))  clearSelectedGameplayModifiersEvent;

constexpr void __set_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_clearSelectedGameplayModifiersEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getSelectedGameplayModifiersEvent, put=__set_getSelectedGameplayModifiersEvent))  getSelectedGameplayModifiersEvent;

constexpr void __set_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getSelectedGameplayModifiersEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> __declspec(property(get=__get_recommendGameplayModifiersEvent, put=__set_recommendGameplayModifiersEvent))  recommendGameplayModifiersEvent;

constexpr void __set_recommendGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> __get_recommendGameplayModifiersEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_clearRecommendedGameplayModifiersEvent, put=__set_clearRecommendedGameplayModifiersEvent))  clearRecommendedGameplayModifiersEvent;

constexpr void __set_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_clearRecommendedGameplayModifiersEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getRecommendedGameplayModifiersEvent, put=__set_getRecommendedGameplayModifiersEvent))  getRecommendedGameplayModifiersEvent;

constexpr void __set_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getRecommendedGameplayModifiersEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getIsStartButtonEnabledEvent, put=__set_getIsStartButtonEnabledEvent))  getIsStartButtonEnabledEvent;

constexpr void __set_getIsStartButtonEnabledEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getIsStartButtonEnabledEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::CannotStartGameReason> __declspec(property(get=__get_setIsStartButtonEnabledEvent, put=__set_setIsStartButtonEnabledEvent))  setIsStartButtonEnabledEvent;

constexpr void __set_setIsStartButtonEnabledEvent(::System::Action_2<::StringW,::GlobalNamespace::CannotStartGameReason> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::CannotStartGameReason> __get_setIsStartButtonEnabledEvent() const;

 ::System::Action_2<::StringW,::StringW> __declspec(property(get=__get_levelLoadErrorEvent, put=__set_levelLoadErrorEvent))  levelLoadErrorEvent;

constexpr void __set_levelLoadErrorEvent(::System::Action_2<::StringW,::StringW> value) ;

constexpr ::System::Action_2<::StringW,::StringW> __get_levelLoadErrorEvent() const;

 ::System::Action_2<::StringW,::StringW> __declspec(property(get=__get_levelLoadSuccessEvent, put=__set_levelLoadSuccessEvent))  levelLoadSuccessEvent;

constexpr void __set_levelLoadSuccessEvent(::System::Action_2<::StringW,::StringW> value) ;

constexpr ::System::Action_2<::StringW,::StringW> __get_levelLoadSuccessEvent() const;

 ::System::Action_4<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t> __declspec(property(get=__get_startedLevelEvent, put=__set_startedLevelEvent))  startedLevelEvent;

constexpr void __set_startedLevelEvent(::System::Action_4<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t> value) ;

constexpr ::System::Action_4<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t> __get_startedLevelEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getStartedLevelEvent, put=__set_getStartedLevelEvent))  getStartedLevelEvent;

constexpr void __set_getStartedLevelEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getStartedLevelEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getMultiplayerGameStateEvent, put=__set_getMultiplayerGameStateEvent))  getMultiplayerGameStateEvent;

constexpr void __set_getMultiplayerGameStateEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getMultiplayerGameStateEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::MultiplayerGameState> __declspec(property(get=__get_setMultiplayerGameStateEvent, put=__set_setMultiplayerGameStateEvent))  setMultiplayerGameStateEvent;

constexpr void __set_setMultiplayerGameStateEvent(::System::Action_2<::StringW,::GlobalNamespace::MultiplayerGameState> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::MultiplayerGameState> __get_setMultiplayerGameStateEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_cancelCountdownEvent, put=__set_cancelCountdownEvent))  cancelCountdownEvent;

constexpr void __set_cancelCountdownEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_cancelCountdownEvent() const;

 ::System::Action_2<::StringW,float_t> __declspec(property(get=__get_setCountdownEndTimeEvent, put=__set_setCountdownEndTimeEvent))  setCountdownEndTimeEvent;

constexpr void __set_setCountdownEndTimeEvent(::System::Action_2<::StringW,float_t> value) ;

constexpr ::System::Action_2<::StringW,float_t> __get_setCountdownEndTimeEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getCountdownEndTimeEvent, put=__set_getCountdownEndTimeEvent))  getCountdownEndTimeEvent;

constexpr void __set_getCountdownEndTimeEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getCountdownEndTimeEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_cancelledLevelStartEvent, put=__set_cancelledLevelStartEvent))  cancelledLevelStartEvent;

constexpr void __set_cancelledLevelStartEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_cancelledLevelStartEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getIsReadyEvent, put=__set_getIsReadyEvent))  getIsReadyEvent;

constexpr void __set_getIsReadyEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getIsReadyEvent() const;

 ::System::Action_2<::StringW,bool> __declspec(property(get=__get_setIsReadyEvent, put=__set_setIsReadyEvent))  setIsReadyEvent;

constexpr void __set_setIsReadyEvent(::System::Action_2<::StringW,bool> value) ;

constexpr ::System::Action_2<::StringW,bool> __get_setIsReadyEvent() const;

 ::System::Action_2<::StringW,float_t> __declspec(property(get=__get_setStartGameTimeEvent, put=__set_setStartGameTimeEvent))  setStartGameTimeEvent;

constexpr void __set_setStartGameTimeEvent(::System::Action_2<::StringW,float_t> value) ;

constexpr ::System::Action_2<::StringW,float_t> __get_setStartGameTimeEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_cancelStartGameTimeEvent, put=__set_cancelStartGameTimeEvent))  cancelStartGameTimeEvent;

constexpr void __set_cancelStartGameTimeEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_cancelStartGameTimeEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getIsInLobbyEvent, put=__set_getIsInLobbyEvent))  getIsInLobbyEvent;

constexpr void __set_getIsInLobbyEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getIsInLobbyEvent() const;

 ::System::Action_2<::StringW,bool> __declspec(property(get=__get_setIsInLobbyEvent, put=__set_setIsInLobbyEvent))  setIsInLobbyEvent;

constexpr void __set_setIsInLobbyEvent(::System::Action_2<::StringW,bool> value) ;

constexpr ::System::Action_2<::StringW,bool> __get_setIsInLobbyEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getOwnedSongPacksEvent, put=__set_getOwnedSongPacksEvent))  getOwnedSongPacksEvent;

constexpr void __set_getOwnedSongPacksEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getOwnedSongPacksEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::SongPackMask> __declspec(property(get=__get_setOwnedSongPacksEvent, put=__set_setOwnedSongPacksEvent))  setOwnedSongPacksEvent;

constexpr void __set_setOwnedSongPacksEvent(::System::Action_2<::StringW,::GlobalNamespace::SongPackMask> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::SongPackMask> __get_setOwnedSongPacksEvent() const;

 ::System::Action_2<::StringW,::StringW> __declspec(property(get=__get_requestedKickPlayerEvent, put=__set_requestedKickPlayerEvent))  requestedKickPlayerEvent;

constexpr void __set_requestedKickPlayerEvent(::System::Action_2<::StringW,::StringW> value) ;

constexpr ::System::Action_2<::StringW,::StringW> __get_requestedKickPlayerEvent() const;


// Properties

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=get_multiplayerSessionManager))  multiplayerSessionManager;

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;

 bool __declspec(property(get=get_enabledForAllPlayers))  enabledForAllPlayers;

 float_t __declspec(property(get=get_syncTime))  syncTime;


// Methods

/// @brief Method get_multiplayerSessionManager addr 0xdb61d8 size 0x8 virtual false final false
 ::GlobalNamespace::IMultiplayerSessionManager get_multiplayerSessionManager() ;

/// @brief Method get_enabled addr 0xdb61e0 size 0xc0 virtual false final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0xdb62a0 size 0xc8 virtual false final false
 void set_enabled(bool value) ;

/// @brief Method get_enabledForAllPlayers addr 0xdb6368 size 0x1dc virtual false final false
 bool get_enabledForAllPlayers() ;

/// @brief Method get_syncTime addr 0xdb6544 size 0xa4 virtual true final true
 float_t get_syncTime() ;

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "::GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
explicit MenuRpcManager(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method .ctor addr 0xdb65e8 size 0x1150 virtual false final false
 void _ctor(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method Dispose addr 0xdb7738 size 0x5c virtual true final true
 void Dispose() ;

/// @brief Method EnabledForPlayer addr 0xdb7794 size 0xbc virtual false final false
 bool EnabledForPlayer(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method add_getPlayersPermissionConfigurationEvent addr 0xdb7850 size 0xb0 virtual true final true
 void add_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getPlayersPermissionConfigurationEvent addr 0xdb7900 size 0xb0 virtual true final true
 void remove_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetPlayersPermissionConfiguration addr 0xdb79b0 size 0x50 virtual true final true
 void GetPlayersPermissionConfiguration() ;

/// @brief Method InvokeGetPlayersPermissionConfiguration addr 0xdb7a00 size 0x1c virtual false final false
 void InvokeGetPlayersPermissionConfiguration(::StringW userId) ;

/// @brief Method add_setPlayersPermissionConfigurationEvent addr 0xdb7a1c size 0xb0 virtual true final true
 void add_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable> value) ;

/// @brief Method remove_setPlayersPermissionConfigurationEvent addr 0xdb7acc size 0xb0 virtual true final true
 void remove_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable> value) ;

/// @brief Method SetPlayersPermissionConfiguration addr 0xdb7b7c size 0x58 virtual true final true
 void SetPlayersPermissionConfiguration(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable playersPermissionConfiguration) ;

/// @brief Method InvokeSetPlayersPermissionConfiguration addr 0xdb7bd4 size 0x1c virtual false final false
 void InvokeSetPlayersPermissionConfiguration(::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable playersPermissionConfiguration) ;

/// @brief Method add_setPlayersMissingEntitlementsToLevelEvent addr 0xdb7bf0 size 0xb0 virtual true final true
 void add_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

/// @brief Method remove_setPlayersMissingEntitlementsToLevelEvent addr 0xdb7ca0 size 0xb0 virtual true final true
 void remove_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

/// @brief Method SetPlayersMissingEntitlementsToLevel addr 0xdb7d50 size 0x58 virtual true final true
 void SetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable playersMissingEntitlements) ;

/// @brief Method InvokeSetPlayersMissingEntitlementsToLevelRpc addr 0xdb7da8 size 0x1c virtual false final false
 void InvokeSetPlayersMissingEntitlementsToLevelRpc(::StringW userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable playersMissingEntitlements) ;

/// @brief Method add_getIsEntitledToLevelEvent addr 0xdb7dc4 size 0xb0 virtual true final true
 void add_getIsEntitledToLevelEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method remove_getIsEntitledToLevelEvent addr 0xdb7e74 size 0xb0 virtual true final true
 void remove_getIsEntitledToLevelEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method GetIsEntitledToLevel addr 0xdb7f24 size 0x58 virtual true final true
 void GetIsEntitledToLevel(::StringW levelId) ;

/// @brief Method InvokeGetIsEntitledToLevel addr 0xdb7f7c size 0x1c virtual false final false
 void InvokeGetIsEntitledToLevel(::StringW userId, ::StringW levelId) ;

/// @brief Method add_setIsEntitledToLevelEvent addr 0xdb7f98 size 0xb0 virtual true final true
 void add_setIsEntitledToLevelEvent(::System::Action_3<::StringW,::StringW,::GlobalNamespace::EntitlementsStatus> value) ;

/// @brief Method remove_setIsEntitledToLevelEvent addr 0xdb8048 size 0xb0 virtual true final true
 void remove_setIsEntitledToLevelEvent(::System::Action_3<::StringW,::StringW,::GlobalNamespace::EntitlementsStatus> value) ;

/// @brief Method SetIsEntitledToLevel addr 0xdb80f8 size 0x68 virtual true final true
 void SetIsEntitledToLevel(::StringW levelId, ::GlobalNamespace::EntitlementsStatus entitlementStatus) ;

/// @brief Method InvokeSetIsEntitledToLevel addr 0xdb8160 size 0x1c virtual false final false
 void InvokeSetIsEntitledToLevel(::StringW userId, ::StringW levelId, int32_t entitlementStatus) ;

/// @brief Method add_levelEntitlementStatusesInvalidatedEvent addr 0xdb817c size 0xb0 virtual true final true
 void add_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_levelEntitlementStatusesInvalidatedEvent addr 0xdb822c size 0xb0 virtual true final true
 void remove_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW> value) ;

/// @brief Method InvalidateLevelEntitlementStatuses addr 0xdb82dc size 0x50 virtual true final true
 void InvalidateLevelEntitlementStatuses() ;

/// @brief Method InvokeLevelEntitlementStatusesInvalidated addr 0xdb832c size 0x1c virtual false final false
 void InvokeLevelEntitlementStatusesInvalidated(::StringW userId) ;

/// @brief Method add_selectedLevelPackEvent addr 0xdb8348 size 0xb0 virtual false final false
 void add_selectedLevelPackEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method remove_selectedLevelPackEvent addr 0xdb83f8 size 0xb0 virtual false final false
 void remove_selectedLevelPackEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method SelectLevelPack addr 0xdb84a8 size 0x58 virtual false final false
 void SelectLevelPack(::StringW levelPackId) ;

/// @brief Method InvokeOnSelectedLevelPackEvent addr 0xdb8500 size 0x1c virtual false final false
 void InvokeOnSelectedLevelPackEvent(::StringW userId, ::StringW levelPackId) ;

/// @brief Method add_setSelectedBeatmapEvent addr 0xdb851c size 0xb0 virtual true final true
 void add_setSelectedBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

/// @brief Method remove_setSelectedBeatmapEvent addr 0xdb85cc size 0xb0 virtual true final true
 void remove_setSelectedBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

/// @brief Method SetSelectedBeatmap addr 0xdb867c size 0x58 virtual true final true
 void SetSelectedBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable identifier) ;

/// @brief Method InvokeSetSelectedBeatmap addr 0xdb86d4 size 0x1c virtual false final false
 void InvokeSetSelectedBeatmap(::StringW userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable identifier) ;

/// @brief Method add_clearSelectedBeatmapEvent addr 0xdb86f0 size 0xb0 virtual true final true
 void add_clearSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_clearSelectedBeatmapEvent addr 0xdb87a0 size 0xb0 virtual true final true
 void remove_clearSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method ClearSelectedBeatmap addr 0xdb8850 size 0x50 virtual false final false
 void ClearSelectedBeatmap() ;

/// @brief Method InvokeClearSelectedBeatmap addr 0xdb88a0 size 0x1c virtual false final false
 void InvokeClearSelectedBeatmap(::StringW userId) ;

/// @brief Method add_getSelectedBeatmapEvent addr 0xdb88bc size 0xb0 virtual true final true
 void add_getSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getSelectedBeatmapEvent addr 0xdb896c size 0xb0 virtual true final true
 void remove_getSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetSelectedBeatmap addr 0xdb8a1c size 0x50 virtual true final true
 void GetSelectedBeatmap() ;

/// @brief Method InvokeGetSelectedBeatmapRpc addr 0xdb8a6c size 0x1c virtual false final false
 void InvokeGetSelectedBeatmapRpc(::StringW userId) ;

/// @brief Method add_recommendBeatmapEvent addr 0xdb8a88 size 0xb0 virtual true final true
 void add_recommendBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

/// @brief Method remove_recommendBeatmapEvent addr 0xdb8b38 size 0xb0 virtual true final true
 void remove_recommendBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

/// @brief Method RecommendBeatmap addr 0xdb8be8 size 0x58 virtual true final true
 void RecommendBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable identifier) ;

/// @brief Method InvokeRecommendBeatmap addr 0xdb8c40 size 0x1c virtual false final false
 void InvokeRecommendBeatmap(::StringW userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable identifier) ;

/// @brief Method add_clearRecommendedBeatmapEvent addr 0xdb8c5c size 0xb0 virtual true final true
 void add_clearRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_clearRecommendedBeatmapEvent addr 0xdb8d0c size 0xb0 virtual true final true
 void remove_clearRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method ClearRecommendedBeatmap addr 0xdb8dbc size 0x50 virtual true final true
 void ClearRecommendedBeatmap() ;

/// @brief Method InvokeClearRecommendedBeatmap addr 0xdb8e0c size 0x1c virtual false final false
 void InvokeClearRecommendedBeatmap(::StringW userId) ;

/// @brief Method add_getRecommendedBeatmapEvent addr 0xdb8e28 size 0xb0 virtual true final true
 void add_getRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getRecommendedBeatmapEvent addr 0xdb8ed8 size 0xb0 virtual true final true
 void remove_getRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetRecommendedBeatmap addr 0xdb8f88 size 0x50 virtual true final true
 void GetRecommendedBeatmap() ;

/// @brief Method InvokeGetRecommendedBeatmap addr 0xdb8fd8 size 0x1c virtual false final false
 void InvokeGetRecommendedBeatmap(::StringW userId) ;

/// @brief Method add_setSelectedGameplayModifiersEvent addr 0xdb8ff4 size 0xb0 virtual true final true
 void add_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method remove_setSelectedGameplayModifiersEvent addr 0xdb90a4 size 0xb0 virtual true final true
 void remove_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method SetSelectedGameplayModifiers addr 0xdb9154 size 0x58 virtual true final true
 void SetSelectedGameplayModifiers(::GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method InvokeSetSelectedGameplayModifiers addr 0xdb91ac size 0x1c virtual false final false
 void InvokeSetSelectedGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method add_clearSelectedGameplayModifiersEvent addr 0xdb91c8 size 0xb0 virtual true final true
 void add_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_clearSelectedGameplayModifiersEvent addr 0xdb9278 size 0xb0 virtual true final true
 void remove_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method ClearSelectedGameplayModifiers addr 0xdb9328 size 0x50 virtual false final false
 void ClearSelectedGameplayModifiers() ;

/// @brief Method InvokeClearSelectedGameplayModifiers addr 0xdb9378 size 0x1c virtual false final false
 void InvokeClearSelectedGameplayModifiers(::StringW userId) ;

/// @brief Method add_getSelectedGameplayModifiersEvent addr 0xdb9394 size 0xb0 virtual true final true
 void add_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getSelectedGameplayModifiersEvent addr 0xdb9444 size 0xb0 virtual true final true
 void remove_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetSelectedGameplayModifiers addr 0xdb94f4 size 0x50 virtual true final true
 void GetSelectedGameplayModifiers() ;

/// @brief Method InvokeGetSelectedGameplayModifiers addr 0xdb9544 size 0x1c virtual false final false
 void InvokeGetSelectedGameplayModifiers(::StringW userId) ;

/// @brief Method add_recommendGameplayModifiersEvent addr 0xdb9560 size 0xb0 virtual true final true
 void add_recommendGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method remove_recommendGameplayModifiersEvent addr 0xdb9610 size 0xb0 virtual true final true
 void remove_recommendGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method RecommendGameplayModifiers addr 0xdb96c0 size 0x58 virtual true final true
 void RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method InvokeRecommendGameplayModifiers addr 0xdb9718 size 0x1c virtual false final false
 void InvokeRecommendGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method add_clearRecommendedGameplayModifiersEvent addr 0xdb9734 size 0xb0 virtual true final true
 void add_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_clearRecommendedGameplayModifiersEvent addr 0xdb97e4 size 0xb0 virtual true final true
 void remove_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method ClearRecommendedGameplayModifiers addr 0xdb9894 size 0x50 virtual true final true
 void ClearRecommendedGameplayModifiers() ;

/// @brief Method InvokeClearRecommendedGameplayModifiers addr 0xdb98e4 size 0x1c virtual false final false
 void InvokeClearRecommendedGameplayModifiers(::StringW userId) ;

/// @brief Method add_getRecommendedGameplayModifiersEvent addr 0xdb9900 size 0xb0 virtual true final true
 void add_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getRecommendedGameplayModifiersEvent addr 0xdb99b0 size 0xb0 virtual true final true
 void remove_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetRecommendedGameplayModifiers addr 0xdb9a60 size 0x50 virtual true final true
 void GetRecommendedGameplayModifiers() ;

/// @brief Method InvokeGetRecommendedGameplayModifiers addr 0xdb9ab0 size 0x1c virtual false final false
 void InvokeGetRecommendedGameplayModifiers(::StringW userId) ;

/// @brief Method add_getIsStartButtonEnabledEvent addr 0xdb9acc size 0xb0 virtual true final true
 void add_getIsStartButtonEnabledEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getIsStartButtonEnabledEvent addr 0xdb9b7c size 0xb0 virtual true final true
 void remove_getIsStartButtonEnabledEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetIsStartButtonEnabled addr 0xdb9c2c size 0x50 virtual true final true
 void GetIsStartButtonEnabled() ;

/// @brief Method InvokeGetIsStartButtonEnabled addr 0xdb9c7c size 0x1c virtual false final false
 void InvokeGetIsStartButtonEnabled(::StringW userId) ;

/// @brief Method add_setIsStartButtonEnabledEvent addr 0xdb9c98 size 0xb0 virtual true final true
 void add_setIsStartButtonEnabledEvent(::System::Action_2<::StringW,::GlobalNamespace::CannotStartGameReason> value) ;

/// @brief Method remove_setIsStartButtonEnabledEvent addr 0xdb9d48 size 0xb0 virtual true final true
 void remove_setIsStartButtonEnabledEvent(::System::Action_2<::StringW,::GlobalNamespace::CannotStartGameReason> value) ;

/// @brief Method SetIsStartButtonEnabled addr 0xdb9df8 size 0x58 virtual true final true
 void SetIsStartButtonEnabled(::GlobalNamespace::CannotStartGameReason reason) ;

/// @brief Method InvokeSetIsStartButtonEnabled addr 0xdb9e50 size 0x1c virtual false final false
 void InvokeSetIsStartButtonEnabled(::StringW userId, ::GlobalNamespace::CannotStartGameReason reason) ;

/// @brief Method add_levelLoadErrorEvent addr 0xdb9e6c size 0xb0 virtual false final false
 void add_levelLoadErrorEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method remove_levelLoadErrorEvent addr 0xdb9f1c size 0xb0 virtual false final false
 void remove_levelLoadErrorEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method LevelLoadError addr 0xdb9fcc size 0x58 virtual false final false
 void LevelLoadError(::StringW levelId) ;

/// @brief Method InvokeLevelLoadError addr 0xdba024 size 0x1c virtual false final false
 void InvokeLevelLoadError(::StringW userId, ::StringW levelId) ;

/// @brief Method add_levelLoadSuccessEvent addr 0xdba040 size 0xb0 virtual false final false
 void add_levelLoadSuccessEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method remove_levelLoadSuccessEvent addr 0xdba0f0 size 0xb0 virtual false final false
 void remove_levelLoadSuccessEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method LevelLoadSuccess addr 0xdba1a0 size 0x58 virtual false final false
 void LevelLoadSuccess(::StringW levelId) ;

/// @brief Method InvokeLevelLoadSuccess addr 0xdba1f8 size 0x1c virtual false final false
 void InvokeLevelLoadSuccess(::StringW userId, ::StringW levelId) ;

/// @brief Method add_startedLevelEvent addr 0xdba214 size 0xb0 virtual true final true
 void add_startedLevelEvent(::System::Action_4<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t> value) ;

/// @brief Method remove_startedLevelEvent addr 0xdba2c4 size 0xb0 virtual true final true
 void remove_startedLevelEvent(::System::Action_4<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t> value) ;

/// @brief Method StartLevel addr 0xdba374 size 0x78 virtual true final true
 void StartLevel(::GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, ::GlobalNamespace::GameplayModifiers gameplayModifiers, float_t startTime) ;

/// @brief Method InvokeStartLevel addr 0xdba3ec size 0x1c virtual false final false
 void InvokeStartLevel(::StringW userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, ::GlobalNamespace::GameplayModifiers gameplayModifiers, float_t startTime) ;

/// @brief Method add_getStartedLevelEvent addr 0xdba408 size 0xb0 virtual true final true
 void add_getStartedLevelEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getStartedLevelEvent addr 0xdba4b8 size 0xb0 virtual true final true
 void remove_getStartedLevelEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetStartedLevel addr 0xdba568 size 0x50 virtual true final true
 void GetStartedLevel() ;

/// @brief Method InvokeGetStartedLevel addr 0xdba5b8 size 0x1c virtual false final false
 void InvokeGetStartedLevel(::StringW userId) ;

/// @brief Method add_getMultiplayerGameStateEvent addr 0xdba5d4 size 0xb0 virtual true final true
 void add_getMultiplayerGameStateEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getMultiplayerGameStateEvent addr 0xdba684 size 0xb0 virtual true final true
 void remove_getMultiplayerGameStateEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetMultiplayerGameState addr 0xdba734 size 0x50 virtual true final true
 void GetMultiplayerGameState() ;

/// @brief Method InvokeGetMultiplayerGameState addr 0xdba784 size 0x1c virtual false final false
 void InvokeGetMultiplayerGameState(::StringW userId) ;

/// @brief Method add_setMultiplayerGameStateEvent addr 0xdba7a0 size 0xb0 virtual true final true
 void add_setMultiplayerGameStateEvent(::System::Action_2<::StringW,::GlobalNamespace::MultiplayerGameState> value) ;

/// @brief Method remove_setMultiplayerGameStateEvent addr 0xdba850 size 0xb0 virtual true final true
 void remove_setMultiplayerGameStateEvent(::System::Action_2<::StringW,::GlobalNamespace::MultiplayerGameState> value) ;

/// @brief Method SetMultiplayerGameState addr 0xdba900 size 0x58 virtual true final true
 void SetMultiplayerGameState(::GlobalNamespace::MultiplayerGameState lobbyState) ;

/// @brief Method InvokeSetMultiplayerGameState addr 0xdba958 size 0x1c virtual false final false
 void InvokeSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState lobbyState) ;

/// @brief Method add_cancelCountdownEvent addr 0xdba974 size 0xb0 virtual true final true
 void add_cancelCountdownEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_cancelCountdownEvent addr 0xdbaa24 size 0xb0 virtual true final true
 void remove_cancelCountdownEvent(::System::Action_1<::StringW> value) ;

/// @brief Method CancelCountdown addr 0xdbaad4 size 0x50 virtual false final false
 void CancelCountdown() ;

/// @brief Method InvokeCancelCountdown addr 0xdbab24 size 0x1c virtual false final false
 void InvokeCancelCountdown(::StringW userId) ;

/// @brief Method add_setCountdownEndTimeEvent addr 0xdbab40 size 0xb4 virtual true final true
 void add_setCountdownEndTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method remove_setCountdownEndTimeEvent addr 0xdbabf4 size 0xb4 virtual true final true
 void remove_setCountdownEndTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method SetCountdownEndTime addr 0xdbaca8 size 0x60 virtual false final false
 void SetCountdownEndTime(float_t newTime) ;

/// @brief Method InvokeSetCountdownEndTime addr 0xdbad08 size 0x1c virtual false final false
 void InvokeSetCountdownEndTime(::StringW userId, float_t newTime) ;

/// @brief Method add_getCountdownEndTimeEvent addr 0xdbad24 size 0xb4 virtual false final false
 void add_getCountdownEndTimeEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getCountdownEndTimeEvent addr 0xdbadd8 size 0xb4 virtual false final false
 void remove_getCountdownEndTimeEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetCountdownEndTime addr 0xdbae8c size 0x50 virtual true final true
 void GetCountdownEndTime() ;

/// @brief Method InvokeGetCountdownEndTime addr 0xdbaedc size 0x1c virtual false final false
 void InvokeGetCountdownEndTime(::StringW userId) ;

/// @brief Method add_cancelledLevelStartEvent addr 0xdbaef8 size 0xb4 virtual true final true
 void add_cancelledLevelStartEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_cancelledLevelStartEvent addr 0xdbafac size 0xb4 virtual true final true
 void remove_cancelledLevelStartEvent(::System::Action_1<::StringW> value) ;

/// @brief Method CancelLevelStart addr 0xdbb060 size 0x50 virtual true final true
 void CancelLevelStart() ;

/// @brief Method InvokeCancelLevelStart addr 0xdbb0b0 size 0x1c virtual false final false
 void InvokeCancelLevelStart(::StringW userId) ;

/// @brief Method add_getIsReadyEvent addr 0xdbb0cc size 0xb4 virtual true final true
 void add_getIsReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getIsReadyEvent addr 0xdbb180 size 0xb4 virtual true final true
 void remove_getIsReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetIsReady addr 0xdbb234 size 0x50 virtual true final true
 void GetIsReady() ;

/// @brief Method InvokeGetIsReady addr 0xdbb284 size 0x1c virtual false final false
 void InvokeGetIsReady(::StringW userId) ;

/// @brief Method add_setIsReadyEvent addr 0xdbb2a0 size 0xb4 virtual true final true
 void add_setIsReadyEvent(::System::Action_2<::StringW,bool> value) ;

/// @brief Method remove_setIsReadyEvent addr 0xdbb354 size 0xb4 virtual true final true
 void remove_setIsReadyEvent(::System::Action_2<::StringW,bool> value) ;

/// @brief Method SetIsReady addr 0xdbb408 size 0x58 virtual true final true
 void SetIsReady(bool isReady) ;

/// @brief Method InvokeSetIsReady addr 0xdbb460 size 0x20 virtual false final false
 void InvokeSetIsReady(::StringW userId, bool isReady) ;

/// @brief Method add_setStartGameTimeEvent addr 0xdbb480 size 0xb4 virtual true final true
 void add_setStartGameTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method remove_setStartGameTimeEvent addr 0xdbb534 size 0xb4 virtual true final true
 void remove_setStartGameTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method SetStartGameTime addr 0xdbb5e8 size 0x60 virtual true final true
 void SetStartGameTime(float_t newTime) ;

/// @brief Method InvokeSetStartGameCountdown addr 0xdbb648 size 0x1c virtual false final false
 void InvokeSetStartGameCountdown(::StringW userId, float_t newTime) ;

/// @brief Method add_cancelStartGameTimeEvent addr 0xdbb664 size 0xb4 virtual false final false
 void add_cancelStartGameTimeEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_cancelStartGameTimeEvent addr 0xdbb718 size 0xb4 virtual false final false
 void remove_cancelStartGameTimeEvent(::System::Action_1<::StringW> value) ;

/// @brief Method CancelStartGameTime addr 0xdbb7cc size 0x50 virtual false final false
 void CancelStartGameTime() ;

/// @brief Method InvokeCancelStartGameCountdown addr 0xdbb81c size 0x1c virtual false final false
 void InvokeCancelStartGameCountdown(::StringW userId) ;

/// @brief Method add_getIsInLobbyEvent addr 0xdbb838 size 0xb4 virtual true final true
 void add_getIsInLobbyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getIsInLobbyEvent addr 0xdbb8ec size 0xb4 virtual true final true
 void remove_getIsInLobbyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetIsInLobby addr 0xdbb9a0 size 0x50 virtual true final true
 void GetIsInLobby() ;

/// @brief Method InvokeGetIsInLobby addr 0xdbb9f0 size 0x1c virtual false final false
 void InvokeGetIsInLobby(::StringW userId) ;

/// @brief Method add_setIsInLobbyEvent addr 0xdbba0c size 0xb4 virtual true final true
 void add_setIsInLobbyEvent(::System::Action_2<::StringW,bool> value) ;

/// @brief Method remove_setIsInLobbyEvent addr 0xdbbac0 size 0xb4 virtual true final true
 void remove_setIsInLobbyEvent(::System::Action_2<::StringW,bool> value) ;

/// @brief Method SetIsInLobby addr 0xdbbb74 size 0x58 virtual true final true
 void SetIsInLobby(bool isBack) ;

/// @brief Method InvokeSetIsInLobby addr 0xdbbbcc size 0x20 virtual false final false
 void InvokeSetIsInLobby(::StringW userId, bool isBack) ;

/// @brief Method add_getOwnedSongPacksEvent addr 0xdbbbec size 0xb4 virtual true final true
 void add_getOwnedSongPacksEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getOwnedSongPacksEvent addr 0xdbbca0 size 0xb4 virtual true final true
 void remove_getOwnedSongPacksEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetOwnedSongPacks addr 0xdbbd54 size 0x50 virtual true final true
 void GetOwnedSongPacks() ;

/// @brief Method InvokeGetOwnedSongPacks addr 0xdbbda4 size 0x1c virtual false final false
 void InvokeGetOwnedSongPacks(::StringW userId) ;

/// @brief Method add_setOwnedSongPacksEvent addr 0xdbbdc0 size 0xb4 virtual true final true
 void add_setOwnedSongPacksEvent(::System::Action_2<::StringW,::GlobalNamespace::SongPackMask> value) ;

/// @brief Method remove_setOwnedSongPacksEvent addr 0xdbbe74 size 0xb4 virtual true final true
 void remove_setOwnedSongPacksEvent(::System::Action_2<::StringW,::GlobalNamespace::SongPackMask> value) ;

/// @brief Method SetOwnedSongPacks addr 0xdbbf28 size 0x68 virtual true final true
 void SetOwnedSongPacks(::GlobalNamespace::SongPackMask songPackMask) ;

/// @brief Method InvokeSetOwnedSongPacks addr 0xdbbf90 size 0x1c virtual false final false
 void InvokeSetOwnedSongPacks(::StringW userId, ::GlobalNamespace::SongPackMask songPackMask) ;

/// @brief Method add_requestedKickPlayerEvent addr 0xdbbfac size 0xb4 virtual true final true
 void add_requestedKickPlayerEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method remove_requestedKickPlayerEvent addr 0xdbc060 size 0xb4 virtual true final true
 void remove_requestedKickPlayerEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method RequestKickPlayer addr 0xdbc114 size 0x58 virtual true final true
 void RequestKickPlayer(::StringW kickedPlayerId) ;

/// @brief Method InvokeKickPlayer addr 0xdbc16c size 0x1c virtual false final false
 void InvokeKickPlayer(::StringW userId, ::StringW kickedPlayerId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RpcType, "", "MenuRpcManager/RpcType");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager, "", "MenuRpcManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelCountdownRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelCountdownRpc, "", "MenuRpcManager/CancelCountdownRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelLevelStartRpc, "", "MenuRpcManager/CancelLevelStartRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__CancelStartGameTimeRpc, "", "MenuRpcManager/CancelStartGameTimeRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearRecommendedBeatmapRpc, "", "MenuRpcManager/ClearRecommendedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearRecommendedGameplayModifiersRpc, "", "MenuRpcManager/ClearRecommendedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearSelectedBeatmapRpc, "", "MenuRpcManager/ClearSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__ClearSelectedGameplayModifiersRpc, "", "MenuRpcManager/ClearSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetCountdownEndTimeRpc, "", "MenuRpcManager/GetCountdownEndTimeRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsEntitledToLevelRpc, "", "MenuRpcManager/GetIsEntitledToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsInLobbyRpc, "", "MenuRpcManager/GetIsInLobbyRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsReadyRpc, "", "MenuRpcManager/GetIsReadyRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetIsStartButtonEnabledRpc, "", "MenuRpcManager/GetIsStartButtonEnabledRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetMultiplayerGameStateRpc, "", "MenuRpcManager/GetMultiplayerGameStateRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetOwnedSongPacksRpc, "", "MenuRpcManager/GetOwnedSongPacksRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetPlayersPermissionConfigurationRpc, "", "MenuRpcManager/GetPlayersPermissionConfigurationRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetRecommendedBeatmapRpc, "", "MenuRpcManager/GetRecommendedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetRecommendedGameplayModifiersRpc, "", "MenuRpcManager/GetRecommendedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetSelectedBeatmapRpc, "", "MenuRpcManager/GetSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetSelectedGameplayModifiersRpc, "", "MenuRpcManager/GetSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__GetStartedLevelRpc, "", "MenuRpcManager/GetStartedLevelRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc, "", "MenuRpcManager/InvalidateLevelEntitlementStatusesRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__LevelLoadErrorRpc, "", "MenuRpcManager/LevelLoadErrorRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__LevelLoadSuccessRpc, "", "MenuRpcManager/LevelLoadSuccessRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RecommendBeatmapRpc, "", "MenuRpcManager/RecommendBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RecommendGameplayModifiersRpc, "", "MenuRpcManager/RecommendGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__RequestKickPlayerRpc, "", "MenuRpcManager/RequestKickPlayerRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SelectLevelPackRpc, "", "MenuRpcManager/SelectLevelPackRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetCountdownEndTimeRpc, "", "MenuRpcManager/SetCountdownEndTimeRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsEntitledToLevelRpc, "", "MenuRpcManager/SetIsEntitledToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsInLobbyRpc, "", "MenuRpcManager/SetIsInLobbyRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsReadyRpc, "", "MenuRpcManager/SetIsReadyRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetIsStartButtonEnabledRpc, "", "MenuRpcManager/SetIsStartButtonEnabledRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetMultiplayerGameStateRpc, "", "MenuRpcManager/SetMultiplayerGameStateRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetOwnedSongPacksRpc, "", "MenuRpcManager/SetOwnedSongPacksRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc, "", "MenuRpcManager/SetPlayersMissingEntitlementsToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetPlayersPermissionConfigurationRpc, "", "MenuRpcManager/SetPlayersPermissionConfigurationRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetSelectedBeatmapRpc, "", "MenuRpcManager/SetSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetSelectedGameplayModifiersRpc, "", "MenuRpcManager/SetSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__SetStartGameTimeRpc, "", "MenuRpcManager/SetStartGameTimeRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__StartLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuRpcManager__StartLevelRpc, "", "MenuRpcManager/StartLevelRpc");
