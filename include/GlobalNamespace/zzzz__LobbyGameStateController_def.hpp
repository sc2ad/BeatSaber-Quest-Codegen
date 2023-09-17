#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class LevelGameplaySetupData;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerLevelLoader;
}
namespace GlobalNamespace {
class LobbyGameStateModel;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace GlobalNamespace {
class PlayerLobbyPermissionConfigurationNetSerializable;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyGameStateController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LobbyGameStateController____c;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0;
}
// Type: ::<>c__DisplayClass98_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4509))
// CS Name: LobbyGameStateController::<>c__DisplayClass98_0
class CORDL_TYPE ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0(____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0(____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0& operator=(____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0& operator=(____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LobbyGameStateController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::LobbyGameStateController value) ;

constexpr ::GlobalNamespace::LobbyGameStateController __get___4__this() const;

 ::System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_getGameStateAsyncTcs, put=__set_getGameStateAsyncTcs))  getGameStateAsyncTcs;

constexpr void __set_getGameStateAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> __get_getGameStateAsyncTcs() const;

 ::System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_getPlayerPermissionAsyncTcs, put=__set_getPlayerPermissionAsyncTcs))  getPlayerPermissionAsyncTcs;

constexpr void __set_getPlayerPermissionAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> __get_getPlayerPermissionAsyncTcs() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0() ;

/// @brief Method .ctor addr 0x21f69b0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0 addr 0x21f823c size 0x264 virtual false final false
 void _GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0(::StringW userId, ::GlobalNamespace::MultiplayerGameState newMultiplayerGameState) ;

/// @brief Method <GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1 addr 0x21f84a0 size 0x1ec virtual false final false
 void _GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1(::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable playersLobbyPermissionConfiguration) ;

/// @brief Method <GetGameStateAndConfigurationAsync>b__2 addr 0x21f86d0 size 0xc8 virtual false final false
 bool _GetGameStateAndConfigurationAsync_b__2(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4510))
// CS Name: LobbyGameStateController::<>c
class CORDL_TYPE ____GlobalNamespace__LobbyGameStateController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__LobbyGameStateController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LobbyGameStateController____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LobbyGameStateController____c(____GlobalNamespace__LobbyGameStateController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LobbyGameStateController____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LobbyGameStateController____c(____GlobalNamespace__LobbyGameStateController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LobbyGameStateController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LobbyGameStateController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LobbyGameStateController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LobbyGameStateController____c& operator=(____GlobalNamespace__LobbyGameStateController____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__LobbyGameStateController____c& operator=(____GlobalNamespace__LobbyGameStateController____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c value) ;

static ::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c __get___9() ;

static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData>,bool> __declspec(property(get=__get___9__99_0, put=__set___9__99_0))  __9__99_0;

static void __set___9__99_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData>,bool> value) ;

static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData>,bool> __get___9__99_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LobbyGameStateController____c() ;

/// @brief Method .ctor addr 0x21f87fc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PredictCountdownEndTime>b__99_0 addr 0x21f8804 size 0x118 virtual false final false
 bool _PredictCountdownEndTime_b__99_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData> pair) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LobbyGameStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4511))
// CS Name: LobbyGameStateController
class CORDL_TYPE LobbyGameStateController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c;

using __c__DisplayClass98_0 = ::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0;

/// @brief Convert operator to ::GlobalNamespace::ILobbyGameStateController
constexpr operator  ::GlobalNamespace::ILobbyGameStateController() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~LobbyGameStateController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateController", modifiers: " const&", def_value: None }]
constexpr LobbyGameStateController(LobbyGameStateController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateController", modifiers: "&&", def_value: None }]
constexpr LobbyGameStateController(LobbyGameStateController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyGameStateController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LobbyGameStateController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyGameStateController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyGameStateController& operator=(LobbyGameStateController&& o) noexcept = default;
  constexpr LobbyGameStateController& operator=(LobbyGameStateController const& o) noexcept = default;
                


// Fields

/// @brief Field kShortTimerSeconds offset 0
static constexpr float_t  kShortTimerSeconds{5};

/// @brief Field kLongTimerSeconds offset 0
static constexpr float_t  kLongTimerSeconds{60};

 ::GlobalNamespace::ILobbyPlayersDataModel __declspec(property(get=__get__lobbyPlayersDataModel, put=__set__lobbyPlayersDataModel))  _lobbyPlayersDataModel;

constexpr void __set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel value) ;

constexpr ::GlobalNamespace::ILobbyPlayersDataModel __get__lobbyPlayersDataModel() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::GlobalNamespace::IMenuRpcManager __declspec(property(get=__get__menuRpcManager, put=__set__menuRpcManager))  _menuRpcManager;

constexpr void __set__menuRpcManager(::GlobalNamespace::IMenuRpcManager value) ;

constexpr ::GlobalNamespace::IMenuRpcManager __get__menuRpcManager() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::MultiplayerLevelLoader __declspec(property(get=__get__multiplayerLevelLoader, put=__set__multiplayerLevelLoader))  _multiplayerLevelLoader;

constexpr void __set__multiplayerLevelLoader(::GlobalNamespace::MultiplayerLevelLoader value) ;

constexpr ::GlobalNamespace::MultiplayerLevelLoader __get__multiplayerLevelLoader() const;

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper))  _menuTransitionsHelper;

constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get__menuTransitionsHelper() const;

 ::GlobalNamespace::LobbyGameStateModel __declspec(property(get=__get__lobbyGameStateModel, put=__set__lobbyGameStateModel))  _lobbyGameStateModel;

constexpr void __set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel value) ;

constexpr ::GlobalNamespace::LobbyGameStateModel __get__lobbyGameStateModel() const;

 ::GlobalNamespace::LobbyPlayerPermissionsModel __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel))  _lobbyPlayerPermissionsModel;

constexpr void __set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel value) ;

constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel __get__lobbyPlayerPermissionsModel() const;

 ::GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel))  _beatmapLevelsModel;

constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModel() const;

 ::GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollection __get__beatmapCharacteristicCollection() const;

 ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> __declspec(property(get=__get_selectedLevelGameplaySetupDataChangedEvent, put=__set_selectedLevelGameplaySetupDataChangedEvent))  selectedLevelGameplaySetupDataChangedEvent;

constexpr void __set_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> __get_selectedLevelGameplaySetupDataChangedEvent() const;

 ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> __declspec(property(get=__get_gameStartedEvent, put=__set_gameStartedEvent))  gameStartedEvent;

constexpr void __set_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> __get_gameStartedEvent() const;

 ::System::Action __declspec(property(get=__get_gameStartCancelledEvent, put=__set_gameStartCancelledEvent))  gameStartCancelledEvent;

constexpr void __set_gameStartCancelledEvent(::System::Action value) ;

constexpr ::System::Action __get_gameStartCancelledEvent() const;

 ::System::Action __declspec(property(get=__get_countdownStartedEvent, put=__set_countdownStartedEvent))  countdownStartedEvent;

constexpr void __set_countdownStartedEvent(::System::Action value) ;

constexpr ::System::Action __get_countdownStartedEvent() const;

 ::System::Action __declspec(property(get=__get_countdownCancelledEvent, put=__set_countdownCancelledEvent))  countdownCancelledEvent;

constexpr void __set_countdownCancelledEvent(::System::Action value) ;

constexpr ::System::Action __get_countdownCancelledEvent() const;

 ::System::Action __declspec(property(get=__get_songStillDownloadingEvent, put=__set_songStillDownloadingEvent))  songStillDownloadingEvent;

constexpr void __set_songStillDownloadingEvent(::System::Action value) ;

constexpr ::System::Action __get_songStillDownloadingEvent() const;

 ::System::Action __declspec(property(get=__get_startTimeChangedEvent, put=__set_startTimeChangedEvent))  startTimeChangedEvent;

constexpr void __set_startTimeChangedEvent(::System::Action value) ;

constexpr ::System::Action __get_startTimeChangedEvent() const;

 ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> __declspec(property(get=__get_levelFinishedEvent, put=__set_levelFinishedEvent))  levelFinishedEvent;

constexpr void __set_levelFinishedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> value) ;

constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> __get_levelFinishedEvent() const;

 ::System::Action_1<::GlobalNamespace::DisconnectedReason> __declspec(property(get=__get_levelDidGetDisconnectedEvent, put=__set_levelDidGetDisconnectedEvent))  levelDidGetDisconnectedEvent;

constexpr void __set_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason> __get_levelDidGetDisconnectedEvent() const;

 ::System::Action __declspec(property(get=__get_lobbyDisconnectedEvent, put=__set_lobbyDisconnectedEvent))  lobbyDisconnectedEvent;

constexpr void __set_lobbyDisconnectedEvent(::System::Action value) ;

constexpr ::System::Action __get_lobbyDisconnectedEvent() const;

 ::System::Action __declspec(property(get=__get_beforeSceneSwitchCallbackEvent, put=__set_beforeSceneSwitchCallbackEvent))  beforeSceneSwitchCallbackEvent;

constexpr void __set_beforeSceneSwitchCallbackEvent(::System::Action value) ;

constexpr ::System::Action __get_beforeSceneSwitchCallbackEvent() const;

 ::System::Action_1<::GlobalNamespace::MultiplayerLobbyState> __declspec(property(get=__get_lobbyStateChangedEvent, put=__set_lobbyStateChangedEvent))  lobbyStateChangedEvent;

constexpr void __set_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLobbyState> __get_lobbyStateChangedEvent() const;

 ::System::Action_1<::GlobalNamespace::CannotStartGameReason> __declspec(property(get=__get_startButtonEnabledEvent, put=__set_startButtonEnabledEvent))  startButtonEnabledEvent;

constexpr void __set_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason> value) ;

constexpr ::System::Action_1<::GlobalNamespace::CannotStartGameReason> __get_startButtonEnabledEvent() const;

 ::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> __declspec(property(get=__get_playerMissingEntitlementsChangedEvent, put=__set_playerMissingEntitlementsChangedEvent))  playerMissingEntitlementsChangedEvent;

constexpr void __set_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

constexpr ::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> __get_playerMissingEntitlementsChangedEvent() const;

 bool __declspec(property(get=__get__levelStartInitiated_k__BackingField, put=__set__levelStartInitiated_k__BackingField))  _levelStartInitiated_k__BackingField;

constexpr void __set__levelStartInitiated_k__BackingField(bool value) ;

constexpr bool __get__levelStartInitiated_k__BackingField() const;

 bool __declspec(property(get=__get__countdownStarted_k__BackingField, put=__set__countdownStarted_k__BackingField))  _countdownStarted_k__BackingField;

constexpr void __set__countdownStarted_k__BackingField(bool value) ;

constexpr bool __get__countdownStarted_k__BackingField() const;

 float_t __declspec(property(get=__get__countdownEndTime_k__BackingField, put=__set__countdownEndTime_k__BackingField))  _countdownEndTime_k__BackingField;

constexpr void __set__countdownEndTime_k__BackingField(float_t value) ;

constexpr float_t __get__countdownEndTime_k__BackingField() const;

 bool __declspec(property(get=__get__isDisconnected_k__BackingField, put=__set__isDisconnected_k__BackingField))  _isDisconnected_k__BackingField;

constexpr void __set__isDisconnected_k__BackingField(bool value) ;

constexpr bool __get__isDisconnected_k__BackingField() const;

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=__get__disconnectedReason_k__BackingField, put=__set__disconnectedReason_k__BackingField))  _disconnectedReason_k__BackingField;

constexpr void __set__disconnectedReason_k__BackingField(::GlobalNamespace::DisconnectedReason value) ;

constexpr ::GlobalNamespace::DisconnectedReason __get__disconnectedReason_k__BackingField() const;

 float_t __declspec(property(get=__get__predictedStartTime, put=__set__predictedStartTime))  _predictedStartTime;

constexpr void __set__predictedStartTime(float_t value) ;

constexpr float_t __get__predictedStartTime() const;

 float_t __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(float_t value) ;

constexpr float_t __get__startTime() const;

 bool __declspec(property(get=__get__levelStartedOnTime, put=__set__levelStartedOnTime))  _levelStartedOnTime;

constexpr void __set__levelStartedOnTime(bool value) ;

constexpr bool __get__levelStartedOnTime() const;

 ::GlobalNamespace::MultiplayerLobbyState __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(::GlobalNamespace::MultiplayerLobbyState value) ;

constexpr ::GlobalNamespace::MultiplayerLobbyState __get__state() const;

 ::GlobalNamespace::CannotStartGameReason __declspec(property(get=__get__cannotStartGameReason, put=__set__cannotStartGameReason))  _cannotStartGameReason;

constexpr void __set__cannotStartGameReason(::GlobalNamespace::CannotStartGameReason value) ;

constexpr ::GlobalNamespace::CannotStartGameReason __get__cannotStartGameReason() const;

 ::GlobalNamespace::LevelGameplaySetupData __declspec(property(get=__get__selectedLevelGameplaySetupData, put=__set__selectedLevelGameplaySetupData))  _selectedLevelGameplaySetupData;

constexpr void __set__selectedLevelGameplaySetupData(::GlobalNamespace::LevelGameplaySetupData value) ;

constexpr ::GlobalNamespace::LevelGameplaySetupData __get__selectedLevelGameplaySetupData() const;


// Properties

 float_t __declspec(property(get=get_predictedCountdownEndTime))  predictedCountdownEndTime;

 float_t __declspec(property(get=get_startTime, put=set_startTime))  startTime;

 bool __declspec(property(get=get_levelStartInitiated, put=set_levelStartInitiated))  levelStartInitiated;

 ::GlobalNamespace::ILevelGameplaySetupData __declspec(property(get=get_selectedLevelGameplaySetupData))  selectedLevelGameplaySetupData;

 bool __declspec(property(get=get_countdownStarted, put=set_countdownStarted))  countdownStarted;

 float_t __declspec(property(get=get_countdownEndTime, put=set_countdownEndTime))  countdownEndTime;

 ::GlobalNamespace::MultiplayerLobbyState __declspec(property(get=get_state, put=set_state))  state;

 ::GlobalNamespace::CannotStartGameReason __declspec(property(get=get_cannotStartGameReason))  cannotStartGameReason;

 bool __declspec(property(get=get_isDisconnected, put=set_isDisconnected))  isDisconnected;

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=get_disconnectedReason, put=set_disconnectedReason))  disconnectedReason;


// Methods

/// @brief Method add_selectedLevelGameplaySetupDataChangedEvent addr 0x21f38f8 size 0xb0 virtual true final true
 void add_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

/// @brief Method remove_selectedLevelGameplaySetupDataChangedEvent addr 0x21f39a8 size 0xb0 virtual true final true
 void remove_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

/// @brief Method add_gameStartedEvent addr 0x21f3a58 size 0xb0 virtual true final true
 void add_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

/// @brief Method remove_gameStartedEvent addr 0x21f3b08 size 0xb0 virtual true final true
 void remove_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

/// @brief Method add_gameStartCancelledEvent addr 0x21f3bb8 size 0x9c virtual true final true
 void add_gameStartCancelledEvent(::System::Action value) ;

/// @brief Method remove_gameStartCancelledEvent addr 0x21f3c54 size 0x9c virtual true final true
 void remove_gameStartCancelledEvent(::System::Action value) ;

/// @brief Method add_countdownStartedEvent addr 0x21f3cf0 size 0x9c virtual true final true
 void add_countdownStartedEvent(::System::Action value) ;

/// @brief Method remove_countdownStartedEvent addr 0x21f3d8c size 0x9c virtual true final true
 void remove_countdownStartedEvent(::System::Action value) ;

/// @brief Method add_countdownCancelledEvent addr 0x21f3e28 size 0x9c virtual true final true
 void add_countdownCancelledEvent(::System::Action value) ;

/// @brief Method remove_countdownCancelledEvent addr 0x21f3ec4 size 0x9c virtual true final true
 void remove_countdownCancelledEvent(::System::Action value) ;

/// @brief Method add_songStillDownloadingEvent addr 0x21f3f60 size 0x9c virtual true final true
 void add_songStillDownloadingEvent(::System::Action value) ;

/// @brief Method remove_songStillDownloadingEvent addr 0x21f3ffc size 0x9c virtual true final true
 void remove_songStillDownloadingEvent(::System::Action value) ;

/// @brief Method add_startTimeChangedEvent addr 0x21f4098 size 0x9c virtual true final true
 void add_startTimeChangedEvent(::System::Action value) ;

/// @brief Method remove_startTimeChangedEvent addr 0x21f4134 size 0x9c virtual true final true
 void remove_startTimeChangedEvent(::System::Action value) ;

/// @brief Method add_levelFinishedEvent addr 0x21f41d0 size 0xb0 virtual true final true
 void add_levelFinishedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> value) ;

/// @brief Method remove_levelFinishedEvent addr 0x21f4280 size 0xb0 virtual true final true
 void remove_levelFinishedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> value) ;

/// @brief Method add_levelDidGetDisconnectedEvent addr 0x21f4330 size 0xb0 virtual true final true
 void add_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_levelDidGetDisconnectedEvent addr 0x21f43e0 size 0xb0 virtual true final true
 void remove_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_lobbyDisconnectedEvent addr 0x21f4490 size 0x9c virtual true final true
 void add_lobbyDisconnectedEvent(::System::Action value) ;

/// @brief Method remove_lobbyDisconnectedEvent addr 0x21f452c size 0x9c virtual true final true
 void remove_lobbyDisconnectedEvent(::System::Action value) ;

/// @brief Method add_beforeSceneSwitchCallbackEvent addr 0x21f45c8 size 0x9c virtual true final true
 void add_beforeSceneSwitchCallbackEvent(::System::Action value) ;

/// @brief Method remove_beforeSceneSwitchCallbackEvent addr 0x21f4664 size 0x9c virtual true final true
 void remove_beforeSceneSwitchCallbackEvent(::System::Action value) ;

/// @brief Method add_lobbyStateChangedEvent addr 0x21f4700 size 0xb0 virtual true final true
 void add_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState> value) ;

/// @brief Method remove_lobbyStateChangedEvent addr 0x21f47b0 size 0xb0 virtual true final true
 void remove_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState> value) ;

/// @brief Method add_startButtonEnabledEvent addr 0x21f4860 size 0xb0 virtual true final true
 void add_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason> value) ;

/// @brief Method remove_startButtonEnabledEvent addr 0x21f4910 size 0xb0 virtual true final true
 void remove_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason> value) ;

/// @brief Method add_playerMissingEntitlementsChangedEvent addr 0x21f49c0 size 0xb0 virtual true final true
 void add_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

/// @brief Method remove_playerMissingEntitlementsChangedEvent addr 0x21f4a70 size 0xb0 virtual true final true
 void remove_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

/// @brief Method get_predictedCountdownEndTime addr 0x21f4b20 size 0x8 virtual true final true
 float_t get_predictedCountdownEndTime() ;

/// @brief Method get_startTime addr 0x21f4b28 size 0x8 virtual true final true
 float_t get_startTime() ;

/// @brief Method set_startTime addr 0x21f4b30 size 0x20 virtual false final false
 void set_startTime(float_t value) ;

/// @brief Method get_levelStartInitiated addr 0x21f4b50 size 0x8 virtual true final true
 bool get_levelStartInitiated() ;

/// @brief Method set_levelStartInitiated addr 0x21f4b58 size 0xc virtual false final false
 void set_levelStartInitiated(bool value) ;

/// @brief Method get_selectedLevelGameplaySetupData addr 0x21f4b64 size 0x8 virtual true final true
 ::GlobalNamespace::ILevelGameplaySetupData get_selectedLevelGameplaySetupData() ;

/// @brief Method get_countdownStarted addr 0x21f4b6c size 0x8 virtual true final true
 bool get_countdownStarted() ;

/// @brief Method set_countdownStarted addr 0x21f4b74 size 0xc virtual false final false
 void set_countdownStarted(bool value) ;

/// @brief Method get_countdownEndTime addr 0x21f4b80 size 0x8 virtual true final true
 float_t get_countdownEndTime() ;

/// @brief Method set_countdownEndTime addr 0x21f4b88 size 0x8 virtual false final false
 void set_countdownEndTime(float_t value) ;

/// @brief Method get_state addr 0x21f4b90 size 0x8 virtual true final true
 ::GlobalNamespace::MultiplayerLobbyState get_state() ;

/// @brief Method set_state addr 0x21f4b98 size 0x2c virtual true final true
 void set_state(::GlobalNamespace::MultiplayerLobbyState value) ;

/// @brief Method get_cannotStartGameReason addr 0x21f4bc4 size 0x8 virtual true final true
 ::GlobalNamespace::CannotStartGameReason get_cannotStartGameReason() ;

/// @brief Method get_isDisconnected addr 0x21f4bcc size 0x8 virtual true final true
 bool get_isDisconnected() ;

/// @brief Method set_isDisconnected addr 0x21f4bd4 size 0xc virtual false final false
 void set_isDisconnected(bool value) ;

/// @brief Method get_disconnectedReason addr 0x21f4be0 size 0x8 virtual true final true
 ::GlobalNamespace::DisconnectedReason get_disconnectedReason() ;

/// @brief Method set_disconnectedReason addr 0x21f4be8 size 0x8 virtual false final false
 void set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) ;

/// @brief Method Activate addr 0x21f4bf0 size 0x898 virtual true final true
 void Activate() ;

/// @brief Method Deactivate addr 0x21f5488 size 0x94c virtual true final true
 void Deactivate() ;

/// @brief Method Dispose addr 0x21f5e10 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method StartListeningToGameStart addr 0x21f5e14 size 0x6cc virtual true final true
 void StartListeningToGameStart() ;

/// @brief Method GetCurrentLevelIfGameStarted addr 0x21f64e0 size 0xa4 virtual true final true
 void GetCurrentLevelIfGameStarted() ;

/// @brief Method ClearDisconnectedState addr 0x21f5e00 size 0x10 virtual true final true
 void ClearDisconnectedState() ;

/// @brief Method GetGameStateAndConfigurationAsync addr 0x21f6584 size 0x42c virtual true final true
 ::System::Threading::Tasks::Task GetGameStateAndConfigurationAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method PredictCountdownEndTime addr 0x21f69b8 size 0x19c virtual true final true
 void PredictCountdownEndTime() ;

/// @brief Method IsCloseToStartGame addr 0x21f6b54 size 0xc4 virtual true final true
 bool IsCloseToStartGame() ;

/// @brief Method HandleMultiplayerSessionManagerDisconnected addr 0x21f6c18 size 0x28 virtual false final false
 void HandleMultiplayerSessionManagerDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method HandleMultiplayerSessionManagerConnectionOwnerStateChanged addr 0x21f6c40 size 0xf8 virtual false final false
 void HandleMultiplayerSessionManagerConnectionOwnerStateChanged(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method StopListeningToGameStart addr 0x21f6d38 size 0x26c virtual false final false
 void StopListeningToGameStart() ;

/// @brief Method HandleMenuRpcManagerStartedLevel addr 0x21f6fa4 size 0x28c virtual false final false
 void HandleMenuRpcManagerStartedLevel(::StringW userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, ::GlobalNamespace::GameplayModifiers gameplayModifiers, float_t startTime) ;

/// @brief Method HandleMenuRpcManagerCancelledLevelStart addr 0x21f7230 size 0x88 virtual false final false
 void HandleMenuRpcManagerCancelledLevelStart(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerSetCountdownEndTime addr 0x21f73bc size 0x238 virtual false final false
 void HandleMenuRpcManagerSetCountdownEndTime(::StringW userId, float_t countdownTime) ;

/// @brief Method HandleMenuRpcManagerCancelCountdown addr 0x21f75f4 size 0x228 virtual false final false
 void HandleMenuRpcManagerCancelCountdown(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerSetStartGameTime addr 0x21f781c size 0x48 virtual false final false
 void HandleMenuRpcManagerSetStartGameTime(::StringW userId, float_t startTime) ;

/// @brief Method HandleSetIsStartButtonEnabled addr 0x21f7864 size 0x28 virtual false final false
 void HandleSetIsStartButtonEnabled(::StringW userId, ::GlobalNamespace::CannotStartGameReason cannotStartGameReason) ;

/// @brief Method HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel addr 0x21f788c size 0x24 virtual false final false
 void HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::StringW userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable playersMissingEntitlements) ;

/// @brief Method HandleStartTimeChanged addr 0x21f78b0 size 0x20 virtual false final false
 void HandleStartTimeChanged() ;

/// @brief Method HandleMultiplayerLevelLoaderStillDownloadingSong addr 0x21f78d0 size 0x1c virtual false final false
 void HandleMultiplayerLevelLoaderStillDownloadingSong() ;

/// @brief Method HandleMenuRpcManagerSetSelectedBeatmap addr 0x21f78ec size 0x60 virtual false final false
 void HandleMenuRpcManagerSetSelectedBeatmap(::StringW userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId) ;

/// @brief Method HandleMenuRpcManagerSetSelectedGameplayModifiers addr 0x21f794c size 0x44 virtual false final false
 void HandleMenuRpcManagerSetSelectedGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers modifiers) ;

/// @brief Method HandleMenuRpcManagerClearSelectedBeatmap addr 0x21f7990 size 0x38 virtual false final false
 void HandleMenuRpcManagerClearSelectedBeatmap(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerClearSelectedGameplayModifiers addr 0x21f79c8 size 0x44 virtual false final false
 void HandleMenuRpcManagerClearSelectedGameplayModifiers(::StringW userId) ;

/// @brief Method HandleMultiplayerLevelLoaderCountdownFinished addr 0x21f7a0c size 0x33c virtual false final false
 void HandleMultiplayerLevelLoaderCountdownFinished(::GlobalNamespace::ILevelGameplaySetupData gameplaySetupData, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method StartMultiplayerLevel addr 0x21f7d50 size 0x358 virtual false final false
 void StartMultiplayerLevel(::GlobalNamespace::ILevelGameplaySetupData gameplaySetupData, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::System::Action beforeSceneSwitchCallback) ;

/// @brief Method HandleMultiplayerLevelDidFinish addr 0x21f80a8 size 0x94 virtual false final false
 void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData multiplayerResultsData) ;

/// @brief Method HandleMultiplayerLevelDidDisconnect addr 0x21f813c size 0x8c virtual false final false
 void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method StopLoading addr 0x21f72b8 size 0x104 virtual false final false
 void StopLoading() ;

// Ctor Parameters []
explicit LobbyGameStateController() ;

/// @brief Method .ctor addr 0x21f81c8 size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LobbyGameStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyGameStateController, "", "LobbyGameStateController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c, "", "LobbyGameStateController/<>c");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0, "", "LobbyGameStateController/<>c__DisplayClass98_0");
