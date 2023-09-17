#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace GlobalNamespace {
struct SongPackMask;
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
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class IMenuRpcManager;
}
// Type: ::IMenuRpcManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12740))
// CS Name: IMenuRpcManager
class CORDL_TYPE IMenuRpcManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IMenuRpcManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMenuRpcManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_syncTime))  syncTime;


// Methods

/// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_syncTime() ;

/// @brief Method add_getPlayersPermissionConfigurationEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getPlayersPermissionConfigurationEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_setPlayersPermissionConfigurationEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable> value) ;

/// @brief Method remove_setPlayersPermissionConfigurationEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable> value) ;

/// @brief Method add_recommendBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_recommendBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

/// @brief Method remove_recommendBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_recommendBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

/// @brief Method add_getRecommendedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getRecommendedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_clearRecommendedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_clearRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_clearRecommendedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_clearRecommendedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_setSelectedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setSelectedBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

/// @brief Method remove_setSelectedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setSelectedBeatmapEvent(::System::Action_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> value) ;

/// @brief Method add_clearSelectedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_clearSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_clearSelectedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_clearSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_getSelectedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getSelectedBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getSelectedBeatmapEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_recommendGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_recommendGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method remove_recommendGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_recommendGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method add_getRecommendedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getRecommendedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_clearRecommendedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_clearRecommendedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_setSelectedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method remove_setSelectedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW,::GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method add_clearSelectedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_clearSelectedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_getSelectedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getSelectedGameplayModifiersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_getIsStartButtonEnabledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getIsStartButtonEnabledEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getIsStartButtonEnabledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getIsStartButtonEnabledEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_setIsStartButtonEnabledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setIsStartButtonEnabledEvent(::System::Action_2<::StringW,::GlobalNamespace::CannotStartGameReason> value) ;

/// @brief Method remove_setIsStartButtonEnabledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setIsStartButtonEnabledEvent(::System::Action_2<::StringW,::GlobalNamespace::CannotStartGameReason> value) ;

/// @brief Method add_getIsReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getIsReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getIsReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getIsReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_setIsReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setIsReadyEvent(::System::Action_2<::StringW,bool> value) ;

/// @brief Method remove_setIsReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setIsReadyEvent(::System::Action_2<::StringW,bool> value) ;

/// @brief Method add_setStartGameTimeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setStartGameTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method remove_setStartGameTimeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setStartGameTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method add_cancelledLevelStartEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_cancelledLevelStartEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_cancelledLevelStartEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_cancelledLevelStartEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_startedLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_startedLevelEvent(::System::Action_4<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t> value) ;

/// @brief Method remove_startedLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_startedLevelEvent(::System::Action_4<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable,::GlobalNamespace::GameplayModifiers,float_t> value) ;

/// @brief Method add_getStartedLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getStartedLevelEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getStartedLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getStartedLevelEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_getMultiplayerGameStateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getMultiplayerGameStateEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getMultiplayerGameStateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getMultiplayerGameStateEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_setMultiplayerGameStateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setMultiplayerGameStateEvent(::System::Action_2<::StringW,::GlobalNamespace::MultiplayerGameState> value) ;

/// @brief Method remove_setMultiplayerGameStateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setMultiplayerGameStateEvent(::System::Action_2<::StringW,::GlobalNamespace::MultiplayerGameState> value) ;

/// @brief Method add_getIsEntitledToLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getIsEntitledToLevelEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method remove_getIsEntitledToLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getIsEntitledToLevelEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method add_setPlayersMissingEntitlementsToLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

/// @brief Method remove_setPlayersMissingEntitlementsToLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

/// @brief Method add_setIsEntitledToLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setIsEntitledToLevelEvent(::System::Action_3<::StringW,::StringW,::GlobalNamespace::EntitlementsStatus> value) ;

/// @brief Method remove_setIsEntitledToLevelEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setIsEntitledToLevelEvent(::System::Action_3<::StringW,::StringW,::GlobalNamespace::EntitlementsStatus> value) ;

/// @brief Method add_levelEntitlementStatusesInvalidatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_levelEntitlementStatusesInvalidatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_getIsInLobbyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getIsInLobbyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getIsInLobbyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getIsInLobbyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_setIsInLobbyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setIsInLobbyEvent(::System::Action_2<::StringW,bool> value) ;

/// @brief Method remove_setIsInLobbyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setIsInLobbyEvent(::System::Action_2<::StringW,bool> value) ;

/// @brief Method add_cancelCountdownEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_cancelCountdownEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_cancelCountdownEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_cancelCountdownEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_setCountdownEndTimeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setCountdownEndTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method remove_setCountdownEndTimeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setCountdownEndTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method add_setOwnedSongPacksEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setOwnedSongPacksEvent(::System::Action_2<::StringW,::GlobalNamespace::SongPackMask> value) ;

/// @brief Method remove_setOwnedSongPacksEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setOwnedSongPacksEvent(::System::Action_2<::StringW,::GlobalNamespace::SongPackMask> value) ;

/// @brief Method add_getOwnedSongPacksEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getOwnedSongPacksEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getOwnedSongPacksEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getOwnedSongPacksEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_requestedKickPlayerEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_requestedKickPlayerEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method remove_requestedKickPlayerEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_requestedKickPlayerEvent(::System::Action_2<::StringW,::StringW> value) ;

/// @brief Method GetPlayersPermissionConfiguration addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetPlayersPermissionConfiguration() ;

/// @brief Method SetPlayersPermissionConfiguration addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetPlayersPermissionConfiguration(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable permissions) ;

/// @brief Method RecommendBeatmap addr 0x0 size 0xffffffffffffffff virtual true final false
 void RecommendBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable identifier) ;

/// @brief Method GetRecommendedBeatmap addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetRecommendedBeatmap() ;

/// @brief Method ClearRecommendedBeatmap addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearRecommendedBeatmap() ;

/// @brief Method SetSelectedBeatmap addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetSelectedBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable identifier) ;

/// @brief Method GetSelectedBeatmap addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetSelectedBeatmap() ;

/// @brief Method RecommendGameplayModifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 void RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method GetRecommendedGameplayModifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetRecommendedGameplayModifiers() ;

/// @brief Method ClearRecommendedGameplayModifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearRecommendedGameplayModifiers() ;

/// @brief Method SetSelectedGameplayModifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetSelectedGameplayModifiers(::GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method GetSelectedGameplayModifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetSelectedGameplayModifiers() ;

/// @brief Method GetIsReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetIsReady() ;

/// @brief Method SetIsReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetIsReady(bool isReady) ;

/// @brief Method GetIsStartButtonEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetIsStartButtonEnabled() ;

/// @brief Method SetIsStartButtonEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetIsStartButtonEnabled(::GlobalNamespace::CannotStartGameReason reason) ;

/// @brief Method GetIsInLobby addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetIsInLobby() ;

/// @brief Method SetIsInLobby addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetIsInLobby(bool isBack) ;

/// @brief Method SetPlayersMissingEntitlementsToLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable playersMissingEntitlements) ;

/// @brief Method GetIsEntitledToLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetIsEntitledToLevel(::StringW levelId) ;

/// @brief Method SetIsEntitledToLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetIsEntitledToLevel(::StringW levelId, ::GlobalNamespace::EntitlementsStatus entitlementStatus) ;

/// @brief Method InvalidateLevelEntitlementStatuses addr 0x0 size 0xffffffffffffffff virtual true final false
 void InvalidateLevelEntitlementStatuses() ;

/// @brief Method GetMultiplayerGameState addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetMultiplayerGameState() ;

/// @brief Method SetMultiplayerGameState addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetMultiplayerGameState(::GlobalNamespace::MultiplayerGameState lobbyState) ;

/// @brief Method GetOwnedSongPacks addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetOwnedSongPacks() ;

/// @brief Method SetOwnedSongPacks addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetOwnedSongPacks(::GlobalNamespace::SongPackMask songPackMask) ;

/// @brief Method StartLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartLevel(::GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, ::GlobalNamespace::GameplayModifiers gameplayModifiers, float_t startTime) ;

/// @brief Method GetStartedLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetStartedLevel() ;

/// @brief Method CancelLevelStart addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelLevelStart() ;

/// @brief Method SetStartGameTime addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetStartGameTime(float_t newTime) ;

/// @brief Method GetCountdownEndTime addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetCountdownEndTime() ;

/// @brief Method RequestKickPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
 void RequestKickPlayer(::StringW kickedPlayerId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IMenuRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMenuRpcManager, "", "IMenuRpcManager");
