#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace System {
class Action;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ILobbyGameStateController;
}
// Type: ::ILobbyGameStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4499))
// CS Name: ILobbyGameStateController
class CORDL_TYPE ILobbyGameStateController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILobbyGameStateController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILobbyGameStateController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::GlobalNamespace::MultiplayerLobbyState __declspec(property(get=get_state, put=set_state))  state;

 ::GlobalNamespace::CannotStartGameReason __declspec(property(get=get_cannotStartGameReason))  cannotStartGameReason;

 ::GlobalNamespace::ILevelGameplaySetupData __declspec(property(get=get_selectedLevelGameplaySetupData))  selectedLevelGameplaySetupData;

 bool __declspec(property(get=get_countdownStarted))  countdownStarted;

 float_t __declspec(property(get=get_countdownEndTime))  countdownEndTime;

 bool __declspec(property(get=get_levelStartInitiated))  levelStartInitiated;

 float_t __declspec(property(get=get_startTime))  startTime;

 float_t __declspec(property(get=get_predictedCountdownEndTime))  predictedCountdownEndTime;

 bool __declspec(property(get=get_isDisconnected))  isDisconnected;

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=get_disconnectedReason))  disconnectedReason;


// Methods

/// @brief Method add_selectedLevelGameplaySetupDataChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

/// @brief Method remove_selectedLevelGameplaySetupDataChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

/// @brief Method add_gameStartedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

/// @brief Method remove_gameStartedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData> value) ;

/// @brief Method add_gameStartCancelledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_gameStartCancelledEvent(::System::Action value) ;

/// @brief Method remove_gameStartCancelledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_gameStartCancelledEvent(::System::Action value) ;

/// @brief Method add_countdownStartedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_countdownStartedEvent(::System::Action value) ;

/// @brief Method remove_countdownStartedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_countdownStartedEvent(::System::Action value) ;

/// @brief Method add_countdownCancelledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_countdownCancelledEvent(::System::Action value) ;

/// @brief Method remove_countdownCancelledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_countdownCancelledEvent(::System::Action value) ;

/// @brief Method add_songStillDownloadingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_songStillDownloadingEvent(::System::Action value) ;

/// @brief Method remove_songStillDownloadingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_songStillDownloadingEvent(::System::Action value) ;

/// @brief Method add_startTimeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_startTimeChangedEvent(::System::Action value) ;

/// @brief Method remove_startTimeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_startTimeChangedEvent(::System::Action value) ;

/// @brief Method add_levelFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelFinishedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> value) ;

/// @brief Method remove_levelFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelFinishedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> value) ;

/// @brief Method add_levelDidGetDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_levelDidGetDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_lobbyDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_lobbyDisconnectedEvent(::System::Action value) ;

/// @brief Method remove_lobbyDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_lobbyDisconnectedEvent(::System::Action value) ;

/// @brief Method add_beforeSceneSwitchCallbackEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_beforeSceneSwitchCallbackEvent(::System::Action value) ;

/// @brief Method remove_beforeSceneSwitchCallbackEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_beforeSceneSwitchCallbackEvent(::System::Action value) ;

/// @brief Method add_lobbyStateChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState> value) ;

/// @brief Method remove_lobbyStateChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState> value) ;

/// @brief Method add_startButtonEnabledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason> value) ;

/// @brief Method remove_startButtonEnabledEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason> value) ;

/// @brief Method add_playerMissingEntitlementsChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

/// @brief Method remove_playerMissingEntitlementsChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value) ;

/// @brief Method get_state addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::MultiplayerLobbyState get_state() ;

/// @brief Method set_state addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_state(::GlobalNamespace::MultiplayerLobbyState value) ;

/// @brief Method get_cannotStartGameReason addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::CannotStartGameReason get_cannotStartGameReason() ;

/// @brief Method get_selectedLevelGameplaySetupData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::ILevelGameplaySetupData get_selectedLevelGameplaySetupData() ;

/// @brief Method get_countdownStarted addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_countdownStarted() ;

/// @brief Method get_countdownEndTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_countdownEndTime() ;

/// @brief Method get_levelStartInitiated addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_levelStartInitiated() ;

/// @brief Method get_startTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_startTime() ;

/// @brief Method get_predictedCountdownEndTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_predictedCountdownEndTime() ;

/// @brief Method get_isDisconnected addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isDisconnected() ;

/// @brief Method get_disconnectedReason addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::DisconnectedReason get_disconnectedReason() ;

/// @brief Method Activate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Activate() ;

/// @brief Method Deactivate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Deactivate() ;

/// @brief Method StartListeningToGameStart addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartListeningToGameStart() ;

/// @brief Method GetCurrentLevelIfGameStarted addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetCurrentLevelIfGameStarted() ;

/// @brief Method ClearDisconnectedState addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearDisconnectedState() ;

/// @brief Method GetGameStateAndConfigurationAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task GetGameStateAndConfigurationAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method PredictCountdownEndTime addr 0x0 size 0xffffffffffffffff virtual true final false
 void PredictCountdownEndTime() ;

/// @brief Method IsCloseToStartGame addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsCloseToStartGame() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ILobbyGameStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyGameStateController, "", "ILobbyGameStateController");
