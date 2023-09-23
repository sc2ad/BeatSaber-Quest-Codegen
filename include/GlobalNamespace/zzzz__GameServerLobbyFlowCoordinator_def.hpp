#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace GlobalNamespace {
class MultiplayerResultsViewController;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
namespace GlobalNamespace {
class LobbySetupViewController;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class SelectModifiersViewController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace HMUI {
class ScreenModeSO;
}
namespace GlobalNamespace {
class MultiplayerLevelSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class LobbyGameStateModel;
}
namespace GlobalNamespace {
class ConnectionErrorDialogViewController;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class MultiplayerLobbyController;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class MultiplayerSettingsPanelController;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ServerPlayerListViewController;
}
namespace GlobalNamespace {
class GlobalNamespace__LevelSelectionFlowCoordinator__State;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class CenterStageScreenController;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace System::Text {
class StringBuilder;
}
namespace HMUI {
class ScreenModeController;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
namespace GlobalNamespace {
class GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0;
}
// Type: ::LobbyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5599))
// CS Name: GameServerLobbyFlowCoordinator::LobbyType
struct CORDL_TYPE GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType(GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType const&) = default;
                    constexpr GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType(GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType&&) = default;
                    constexpr GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType& operator=(GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType& operator=(GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType_Unwrapped : int32_t {
__HostSetup = 0,
__ClientSetup = 1,
__QuickPlayLobby = 2,
__Party = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HostSetup offset 0
static GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType const HostSetup;

/// @brief Field ClientSetup offset 0
static GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType const ClientSetup;

/// @brief Field QuickPlayLobby offset 0
static GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType const QuickPlayLobby;

/// @brief Field Party offset 0
static GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType const Party;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass70_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5600))
// CS Name: GameServerLobbyFlowCoordinator::<>c__DisplayClass70_0
class CORDL_TYPE GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0(GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0(GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0& operator=(GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0& operator=(GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameServerLobbyFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameServerLobbyFlowCoordinator value) ;

constexpr GlobalNamespace::GameServerLobbyFlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 UnityEngine::EventSystems::EventSystem __declspec(property(get=__get_eventSystem, put=__set_eventSystem))  eventSystem;

constexpr void __set_eventSystem(UnityEngine::EventSystems::EventSystem value) ;

constexpr UnityEngine::EventSystems::EventSystem __get_eventSystem() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0() ;

/// @brief Method .ctor addr 0x213b830 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Finish>b__0 addr 0x213e310 size 0x70 virtual false final false
 void _Finish_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass85_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5601))
// CS Name: GameServerLobbyFlowCoordinator::<>c__DisplayClass85_0
class CORDL_TYPE GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0(GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0(GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0& operator=(GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0& operator=(GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameServerLobbyFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameServerLobbyFlowCoordinator value) ;

constexpr GlobalNamespace::GameServerLobbyFlowCoordinator __get___4__this() const;

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0() ;

/// @brief Method .ctor addr 0x213cb30 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleServerPlayerListViewControllerKickPlayer>b__0 addr 0x213e380 size 0xd8 virtual false final false
 void _HandleServerPlayerListViewControllerKickPlayer_b__0(int32_t btnId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameServerLobbyFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5602))
// CS Name: GameServerLobbyFlowCoordinator
class CORDL_TYPE GameServerLobbyFlowCoordinator : public HMUI::FlowCoordinator {
public:
// Declarations
using __c__DisplayClass85_0 = GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0;

using __c__DisplayClass70_0 = GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0;

using LobbyType = GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1c0};

virtual ~GameServerLobbyFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerLobbyFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr GameServerLobbyFlowCoordinator(GameServerLobbyFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerLobbyFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr GameServerLobbyFlowCoordinator(GameServerLobbyFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerLobbyFlowCoordinator(void* ptr) noexcept : HMUI::FlowCoordinator(ptr) {
}


  constexpr GameServerLobbyFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerLobbyFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerLobbyFlowCoordinator& operator=(GameServerLobbyFlowCoordinator&& o) noexcept = default;
  constexpr GameServerLobbyFlowCoordinator& operator=(GameServerLobbyFlowCoordinator const& o) noexcept = default;
                


// Fields

/// @brief Field kPlayersMissingEntitlementKey offset 0
static constexpr ::ConstString  kPlayersMissingEntitlementKey{u"LABEL_PLAYERS_MISSING_ENTITLEMENT"};

/// @brief Field kMaxPredictedStartTimeDifference offset 0
static constexpr float_t  kMaxPredictedStartTimeDifference{1.5};

 HMUI::ScreenModeSO __declspec(property(get=__get__screenMode, put=__set__screenMode))  _screenMode;

constexpr void __set__screenMode(HMUI::ScreenModeSO value) ;

constexpr HMUI::ScreenModeSO __get__screenMode() const;

 UnityEngine::AudioClip __declspec(property(get=__get__ambienceAudioClip, put=__set__ambienceAudioClip))  _ambienceAudioClip;

constexpr void __set__ambienceAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__ambienceAudioClip() const;

 GlobalNamespace::ServerPlayerListViewController __declspec(property(get=__get__serverPlayerListViewController, put=__set__serverPlayerListViewController))  _serverPlayerListViewController;

constexpr void __set__serverPlayerListViewController(GlobalNamespace::ServerPlayerListViewController value) ;

constexpr GlobalNamespace::ServerPlayerListViewController __get__serverPlayerListViewController() const;

 GlobalNamespace::SelectModifiersViewController __declspec(property(get=__get__selectModifiersViewController, put=__set__selectModifiersViewController))  _selectModifiersViewController;

constexpr void __set__selectModifiersViewController(GlobalNamespace::SelectModifiersViewController value) ;

constexpr GlobalNamespace::SelectModifiersViewController __get__selectModifiersViewController() const;

 GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator __declspec(property(get=__get__multiplayerLevelSelectionFlowCoordinator, put=__set__multiplayerLevelSelectionFlowCoordinator))  _multiplayerLevelSelectionFlowCoordinator;

constexpr void __set__multiplayerLevelSelectionFlowCoordinator(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator value) ;

constexpr GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator __get__multiplayerLevelSelectionFlowCoordinator() const;

 GlobalNamespace::MultiplayerResultsViewController __declspec(property(get=__get__multiplayerResultsViewController, put=__set__multiplayerResultsViewController))  _multiplayerResultsViewController;

constexpr void __set__multiplayerResultsViewController(GlobalNamespace::MultiplayerResultsViewController value) ;

constexpr GlobalNamespace::MultiplayerResultsViewController __get__multiplayerResultsViewController() const;

 GlobalNamespace::SimpleDialogPromptViewController __declspec(property(get=__get__simpleDialogPromptViewController, put=__set__simpleDialogPromptViewController))  _simpleDialogPromptViewController;

constexpr void __set__simpleDialogPromptViewController(GlobalNamespace::SimpleDialogPromptViewController value) ;

constexpr GlobalNamespace::SimpleDialogPromptViewController __get__simpleDialogPromptViewController() const;

 GlobalNamespace::ConnectionErrorDialogViewController __declspec(property(get=__get__connectionErrorDialogViewController, put=__set__connectionErrorDialogViewController))  _connectionErrorDialogViewController;

constexpr void __set__connectionErrorDialogViewController(GlobalNamespace::ConnectionErrorDialogViewController value) ;

constexpr GlobalNamespace::ConnectionErrorDialogViewController __get__connectionErrorDialogViewController() const;

 GlobalNamespace::MultiplayerSettingsPanelController __declspec(property(get=__get__multiplayerSettingsPanelController, put=__set__multiplayerSettingsPanelController))  _multiplayerSettingsPanelController;

constexpr void __set__multiplayerSettingsPanelController(GlobalNamespace::MultiplayerSettingsPanelController value) ;

constexpr GlobalNamespace::MultiplayerSettingsPanelController __get__multiplayerSettingsPanelController() const;

 GlobalNamespace::GameplaySetupViewController __declspec(property(get=__get__gameplaySetupViewController, put=__set__gameplaySetupViewController))  _gameplaySetupViewController;

constexpr void __set__gameplaySetupViewController(GlobalNamespace::GameplaySetupViewController value) ;

constexpr GlobalNamespace::GameplaySetupViewController __get__gameplaySetupViewController() const;

 GlobalNamespace::MultiplayerLobbyController __declspec(property(get=__get__multiplayerLobbyController, put=__set__multiplayerLobbyController))  _multiplayerLobbyController;

constexpr void __set__multiplayerLobbyController(GlobalNamespace::MultiplayerLobbyController value) ;

constexpr GlobalNamespace::MultiplayerLobbyController __get__multiplayerLobbyController() const;

 GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOutController, put=__set__fadeInOutController))  _fadeInOutController;

constexpr void __set__fadeInOutController(GlobalNamespace::FadeInOutController value) ;

constexpr GlobalNamespace::FadeInOutController __get__fadeInOutController() const;

 GlobalNamespace::CenterStageScreenController __declspec(property(get=__get__centerStageScreenController, put=__set__centerStageScreenController))  _centerStageScreenController;

constexpr void __set__centerStageScreenController(GlobalNamespace::CenterStageScreenController value) ;

constexpr GlobalNamespace::CenterStageScreenController __get__centerStageScreenController() const;

 GlobalNamespace::ILobbyStateDataModel __declspec(property(get=__get__lobbyStateDataModel, put=__set__lobbyStateDataModel))  _lobbyStateDataModel;

constexpr void __set__lobbyStateDataModel(GlobalNamespace::ILobbyStateDataModel value) ;

constexpr GlobalNamespace::ILobbyStateDataModel __get__lobbyStateDataModel() const;

 GlobalNamespace::LobbyGameStateModel __declspec(property(get=__get__lobbyGameStateModel, put=__set__lobbyGameStateModel))  _lobbyGameStateModel;

constexpr void __set__lobbyGameStateModel(GlobalNamespace::LobbyGameStateModel value) ;

constexpr GlobalNamespace::LobbyGameStateModel __get__lobbyGameStateModel() const;

 GlobalNamespace::ILobbyPlayersDataModel __declspec(property(get=__get__lobbyPlayersDataModel, put=__set__lobbyPlayersDataModel))  _lobbyPlayersDataModel;

constexpr void __set__lobbyPlayersDataModel(GlobalNamespace::ILobbyPlayersDataModel value) ;

constexpr GlobalNamespace::ILobbyPlayersDataModel __get__lobbyPlayersDataModel() const;

 GlobalNamespace::ILobbyGameStateController __declspec(property(get=__get__lobbyGameStateController, put=__set__lobbyGameStateController))  _lobbyGameStateController;

constexpr void __set__lobbyGameStateController(GlobalNamespace::ILobbyGameStateController value) ;

constexpr GlobalNamespace::ILobbyGameStateController __get__lobbyGameStateController() const;

 GlobalNamespace::LobbyPlayerPermissionsModel __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel))  _lobbyPlayerPermissionsModel;

constexpr void __set__lobbyPlayerPermissionsModel(GlobalNamespace::LobbyPlayerPermissionsModel value) ;

constexpr GlobalNamespace::LobbyPlayerPermissionsModel __get__lobbyPlayerPermissionsModel() const;

 GlobalNamespace::LobbySetupViewController __declspec(property(get=__get__lobbySetupViewController, put=__set__lobbySetupViewController))  _lobbySetupViewController;

constexpr void __set__lobbySetupViewController(GlobalNamespace::LobbySetupViewController value) ;

constexpr GlobalNamespace::LobbySetupViewController __get__lobbySetupViewController() const;

 GlobalNamespace::IUnifiedNetworkPlayerModel __declspec(property(get=__get__unifiedNetworkPlayerModel, put=__set__unifiedNetworkPlayerModel))  _unifiedNetworkPlayerModel;

constexpr void __set__unifiedNetworkPlayerModel(GlobalNamespace::IUnifiedNetworkPlayerModel value) ;

constexpr GlobalNamespace::IUnifiedNetworkPlayerModel __get__unifiedNetworkPlayerModel() const;

 HMUI::ScreenModeController __declspec(property(get=__get__screenModeController, put=__set__screenModeController))  _screenModeController;

constexpr void __set__screenModeController(HMUI::ScreenModeController value) ;

constexpr HMUI::ScreenModeController __get__screenModeController() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::PlatformLeaderboardsModel __declspec(property(get=__get__platformLeaderboardsModel, put=__set__platformLeaderboardsModel))  _platformLeaderboardsModel;

constexpr void __set__platformLeaderboardsModel(GlobalNamespace::PlatformLeaderboardsModel value) ;

constexpr GlobalNamespace::PlatformLeaderboardsModel __get__platformLeaderboardsModel() const;

 GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value) ;

constexpr GlobalNamespace::SongPreviewPlayer __get__songPreviewPlayer() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State __declspec(property(get=__get__lastSimpleLevelSelectionFlowCoordinatorState, put=__set__lastSimpleLevelSelectionFlowCoordinatorState))  _lastSimpleLevelSelectionFlowCoordinatorState;

constexpr void __set__lastSimpleLevelSelectionFlowCoordinatorState(GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State value) ;

constexpr GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State __get__lastSimpleLevelSelectionFlowCoordinatorState() const;

 bool __declspec(property(get=__get__isAlreadyFinishing, put=__set__isAlreadyFinishing))  _isAlreadyFinishing;

constexpr void __set__isAlreadyFinishing(bool value) ;

constexpr bool __get__isAlreadyFinishing() const;

 System::Text::StringBuilder __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder))  _stringBuilder;

constexpr void __set__stringBuilder(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__stringBuilder() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__canStartGameCts, put=__set__canStartGameCts))  _canStartGameCts;

constexpr void __set__canStartGameCts(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__canStartGameCts() const;

 System::Action __declspec(property(get=__get_willFinishEvent, put=__set_willFinishEvent))  willFinishEvent;

constexpr void __set_willFinishEvent(System::Action value) ;

constexpr System::Action __get_willFinishEvent() const;

 System::Action __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action value) ;

constexpr System::Action __get_didFinishEvent() const;

 System::Action __declspec(property(get=__get_startGameOrReadyEvent, put=__set_startGameOrReadyEvent))  startGameOrReadyEvent;

constexpr void __set_startGameOrReadyEvent(System::Action value) ;

constexpr System::Action __get_startGameOrReadyEvent() const;

 System::Action __declspec(property(get=__get_didSetupEvent, put=__set_didSetupEvent))  didSetupEvent;

constexpr void __set_didSetupEvent(System::Action value) ;

constexpr System::Action __get_didSetupEvent() const;

 System::Action __declspec(property(get=__get_didOpenInvitePanelEvent, put=__set_didOpenInvitePanelEvent))  didOpenInvitePanelEvent;

constexpr void __set_didOpenInvitePanelEvent(System::Action value) ;

constexpr System::Action __get_didOpenInvitePanelEvent() const;

 bool __declspec(property(get=__get__rejoinQuickPlay_k__BackingField, put=__set__rejoinQuickPlay_k__BackingField))  _rejoinQuickPlay_k__BackingField;

constexpr void __set__rejoinQuickPlay_k__BackingField(bool value) ;

constexpr bool __get__rejoinQuickPlay_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isPartyOwner))  isPartyOwner;

 bool __declspec(property(get=get_isPublicGame))  isPublicGame;

 bool __declspec(property(get=get_isManaged))  isManaged;

 bool __declspec(property(get=get_isQuickStartServer))  isQuickStartServer;

 bool __declspec(property(get=get_isQuickPlayServer))  isQuickPlayServer;

 bool __declspec(property(get=get_rejoinQuickPlay, put=set_rejoinQuickPlay))  rejoinQuickPlay;


// Methods

/// @brief Method get_isPartyOwner addr 0x2136f94 size 0x1c virtual false final false
 bool get_isPartyOwner() ;

/// @brief Method get_isPublicGame addr 0x2136fb0 size 0xc0 virtual false final false
 bool get_isPublicGame() ;

/// @brief Method get_isManaged addr 0x2137070 size 0xc0 virtual false final false
 bool get_isManaged() ;

/// @brief Method get_isQuickStartServer addr 0x2137130 size 0xc0 virtual false final false
 bool get_isQuickStartServer() ;

/// @brief Method get_isQuickPlayServer addr 0x21371f0 size 0xc0 virtual false final false
 bool get_isQuickPlayServer() ;

/// @brief Method add_willFinishEvent addr 0x21372b0 size 0xa0 virtual false final false
 void add_willFinishEvent(System::Action value) ;

/// @brief Method remove_willFinishEvent addr 0x2137350 size 0xa0 virtual false final false
 void remove_willFinishEvent(System::Action value) ;

/// @brief Method add_didFinishEvent addr 0x21373f0 size 0xa0 virtual false final false
 void add_didFinishEvent(System::Action value) ;

/// @brief Method remove_didFinishEvent addr 0x2137490 size 0xa0 virtual false final false
 void remove_didFinishEvent(System::Action value) ;

/// @brief Method add_startGameOrReadyEvent addr 0x2137530 size 0xa0 virtual false final false
 void add_startGameOrReadyEvent(System::Action value) ;

/// @brief Method remove_startGameOrReadyEvent addr 0x21375d0 size 0xa0 virtual false final false
 void remove_startGameOrReadyEvent(System::Action value) ;

/// @brief Method add_didSetupEvent addr 0x2137670 size 0xa0 virtual false final false
 void add_didSetupEvent(System::Action value) ;

/// @brief Method remove_didSetupEvent addr 0x2137710 size 0xa0 virtual false final false
 void remove_didSetupEvent(System::Action value) ;

/// @brief Method add_didOpenInvitePanelEvent addr 0x21377b0 size 0xa0 virtual false final false
 void add_didOpenInvitePanelEvent(System::Action value) ;

/// @brief Method remove_didOpenInvitePanelEvent addr 0x2137850 size 0xa0 virtual false final false
 void remove_didOpenInvitePanelEvent(System::Action value) ;

/// @brief Method get_rejoinQuickPlay addr 0x21378f0 size 0x8 virtual false final false
 bool get_rejoinQuickPlay() ;

/// @brief Method set_rejoinQuickPlay addr 0x21378f8 size 0xc virtual false final false
 void set_rejoinQuickPlay(bool value) ;

/// @brief Method GetLobbyType addr 0x2137904 size 0x50 virtual false final false
 GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType GetLobbyType() ;

/// @brief Method DidActivate addr 0x2137954 size 0x1170 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21392cc size 0xe58 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method InitialViewControllerWasPresented addr 0x213a270 size 0xdc virtual true final false
 void InitialViewControllerWasPresented() ;

/// @brief Method TransitionDidStart addr 0x213a494 size 0x1d8 virtual true final false
 void TransitionDidStart() ;

/// @brief Method TransitionDidFinish addr 0x213a66c size 0x584 virtual true final false
 void TransitionDidFinish() ;

/// @brief Method TopViewControllerWillChange addr 0x213b030 size 0xa8 virtual true final false
 void TopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method BackButtonWasPressed addr 0x213b274 size 0x168 virtual true final false
 void BackButtonWasPressed(HMUI::ViewController topViewController) ;

/// @brief Method PresentBackButtonConfirmationDialog addr 0x213b3dc size 0x260 virtual false final false
 void PresentBackButtonConfirmationDialog() ;

/// @brief Method Finish addr 0x213b63c size 0x1f4 virtual false final false
 void Finish(System::Action finishedCallback, bool withFadeOut) ;

/// @brief Method GetInitialGameState addr 0x213a34c size 0x148 virtual false final false
 void GetInitialGameState() ;

/// @brief Method HandleLobbyPlayersDataModelDidChange addr 0x213b930 size 0x4 virtual false final false
 void HandleLobbyPlayersDataModelDidChange(::StringW userId) ;

/// @brief Method HandleServerPlayerListViewControllerDidOpenInvitePanel addr 0x213b934 size 0x1c virtual false final false
 void HandleServerPlayerListViewControllerDidOpenInvitePanel() ;

/// @brief Method HandleLobbySetupViewControllerSelectBeatmap addr 0x213b950 size 0x1c8 virtual false final false
 void HandleLobbySetupViewControllerSelectBeatmap() ;

/// @brief Method HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged addr 0x213bb34 size 0x230 virtual false final false
 void HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged(bool isActive) ;

/// @brief Method HandleLobbyGameStateControllerLobbyDisconnected addr 0x213bf84 size 0xb0 virtual false final false
 void HandleLobbyGameStateControllerLobbyDisconnected() ;

/// @brief Method HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel addr 0x213c034 size 0x304 virtual false final false
 void HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel(GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State state) ;

/// @brief Method HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel addr 0x213c338 size 0x38 virtual false final false
 void HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel() ;

/// @brief Method HandleLobbySetupViewControllerSelectModifiers addr 0x213c370 size 0x1f8 virtual false final false
 void HandleLobbySetupViewControllerSelectModifiers() ;

/// @brief Method HandleLobbySetupViewControllerClearSelectedBeatmap addr 0x213c568 size 0xa4 virtual false final false
 void HandleLobbySetupViewControllerClearSelectedBeatmap() ;

/// @brief Method HandleLobbySetupViewControllerClearSelectedModifiers addr 0x213c60c size 0xa4 virtual false final false
 void HandleLobbySetupViewControllerClearSelectedModifiers() ;

/// @brief Method HandleLobbyGameStateControllerGameStateChanged addr 0x213c6b0 size 0x1c virtual false final false
 void HandleLobbyGameStateControllerGameStateChanged(GlobalNamespace::MultiplayerLobbyState state) ;

/// @brief Method HandleServerPlayerListViewControllerSelectSuggestedBeatmap addr 0x213c6cc size 0xac virtual false final false
 void HandleServerPlayerListViewControllerSelectSuggestedBeatmap(GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel) ;

/// @brief Method HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers addr 0x213c778 size 0xac virtual false final false
 void HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers(GlobalNamespace::GameplayModifiers modifiers) ;

/// @brief Method HandleServerPlayerListViewControllerKickPlayer addr 0x213c824 size 0x30c virtual false final false
 void HandleServerPlayerListViewControllerKickPlayer(::StringW userId) ;

/// @brief Method HandleLobbyGameStateControllerCountdownStarted addr 0x213cb38 size 0x1ec virtual false final false
 void HandleLobbyGameStateControllerCountdownStarted() ;

/// @brief Method HandleLobbyGameStateControllerCountdownCancelled addr 0x213cd24 size 0x38 virtual false final false
 void HandleLobbyGameStateControllerCountdownCancelled() ;

/// @brief Method HandleLobbyGameStateControllerGameStarted addr 0x213cd5c size 0x2a4 virtual false final false
 void HandleLobbyGameStateControllerGameStarted(GlobalNamespace::ILevelGameplaySetupData levelGameplaySetupData) ;

/// @brief Method HandleLobbyGameStateControllerStartTimeChanged addr 0x213d000 size 0x1bc virtual false final false
 void HandleLobbyGameStateControllerStartTimeChanged() ;

/// @brief Method HandleLobbyGameStateControllerSongStillDownloading addr 0x213d1bc size 0x4 virtual false final false
 void HandleLobbyGameStateControllerSongStillDownloading() ;

/// @brief Method HandleLobbySetupViewControllerStartGameOrReady addr 0x213d1c0 size 0x314 virtual false final false
 void HandleLobbySetupViewControllerStartGameOrReady() ;

/// @brief Method HandleLobbySetupViewControllerCancelGameOrUnready addr 0x213d4d4 size 0x174 virtual false final false
 void HandleLobbySetupViewControllerCancelGameOrUnready() ;

/// @brief Method HandleLobbyGameStateControllerCancelStartTime addr 0x213d648 size 0x38 virtual false final false
 void HandleLobbyGameStateControllerCancelStartTime() ;

/// @brief Method HandleLobbyGameStateControllerGameStartedPresentView addr 0x213d680 size 0xac virtual false final false
 void HandleLobbyGameStateControllerGameStartedPresentView(GlobalNamespace::ILevelGameplaySetupData levelGameplaySetupData) ;

/// @brief Method HandleLobbyGameStateControllerLevelFinished addr 0x213d72c size 0x348 virtual false final false
 void HandleLobbyGameStateControllerLevelFinished(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, GlobalNamespace::MultiplayerResultsData multiplayerResultsData) ;

/// @brief Method HandleLobbyGameStateControllerLevelDidGetDisconnected addr 0x213da74 size 0x4 virtual false final false
 void HandleLobbyGameStateControllerLevelDidGetDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method HandleMultiplayerResultsViewControllerBackToLobbyPressed addr 0x213da78 size 0x14c virtual false final false
 void HandleMultiplayerResultsViewControllerBackToLobbyPressed(GlobalNamespace::MultiplayerResultsViewController viewController) ;

/// @brief Method HandleMultiplayerResultsViewControllerBackToMenuPressed addr 0x213dbc4 size 0xc virtual false final false
 void HandleMultiplayerResultsViewControllerBackToMenuPressed(GlobalNamespace::MultiplayerResultsViewController viewController) ;

/// @brief Method SetupLobbyWithPermissions addr 0x2138e14 size 0x4b8 virtual false final false
 void SetupLobbyWithPermissions() ;

/// @brief Method SetLobbyPlayerDataToViews addr 0x2138c10 size 0x204 virtual false final false
 void SetLobbyPlayerDataToViews(::StringW userId) ;

/// @brief Method ShowSideViewControllers addr 0x213b0d8 size 0x64 virtual false final false
 void ShowSideViewControllers(bool showSideViewControllers, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method ShowBackButton addr 0x213b13c size 0xc virtual false final false
 void ShowBackButton(bool show) ;

/// @brief Method GetLocalizedTitle addr 0x213dbd0 size 0x8c virtual false final false
 ::StringW GetLocalizedTitle() ;

/// @brief Method SetTitle addr 0x213b148 size 0x12c virtual false final false
 void SetTitle(HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method ShowDisconnectDialogAndFinish addr 0x213abf0 size 0x440 virtual false final false
 void ShowDisconnectDialogAndFinish(GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method UpdateLocalPlayerIsActiveState addr 0x213bd64 size 0x220 virtual false final false
 void UpdateLocalPlayerIsActiveState(bool isActive) ;

/// @brief Method HandleLobbyGameBeforeSceneSwitchCallback addr 0x213dc5c size 0x1f4 virtual false final false
 void HandleLobbyGameBeforeSceneSwitchCallback() ;

/// @brief Method HandleLobbyGameStateStartButtonEnabled addr 0x213de50 size 0x34 virtual false final false
 void HandleLobbyGameStateStartButtonEnabled(GlobalNamespace::CannotStartGameReason cannotStartGameReason) ;

/// @brief Method HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel addr 0x213de84 size 0x2cc virtual false final false
 void HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(GlobalNamespace::PlayersMissingEntitlementsNetSerializable playersMissingEntitlements) ;

/// @brief Method HandleLobbyPlayerPermissionsModelPermissionsChanged addr 0x213e150 size 0x4 virtual false final false
 void HandleLobbyPlayerPermissionsModelPermissionsChanged() ;

/// @brief Method DismissViewControllersAndCoordinators addr 0x213b838 size 0xf8 virtual false final false
 void DismissViewControllersAndCoordinators() ;

// Ctor Parameters []
explicit GameServerLobbyFlowCoordinator() ;

/// @brief Method .ctor addr 0x213e154 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method <PresentBackButtonConfirmationDialog>b__69_0 addr 0x213e1bc size 0x148 virtual false final false
 void _PresentBackButtonConfirmationDialog_b__69_0(int32_t btnIndex) ;

/// @brief Method <ShowDisconnectDialogAndFinish>b__105_0 addr 0x213e304 size 0xc virtual false final false
 void _ShowDisconnectDialogAndFinish_b__105_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType, "", "GameServerLobbyFlowCoordinator/LobbyType");
NEED_NO_BOX(GlobalNamespace::GameServerLobbyFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerLobbyFlowCoordinator, "", "GameServerLobbyFlowCoordinator");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass70_0, "", "GameServerLobbyFlowCoordinator/<>c__DisplayClass70_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator____c__DisplayClass85_0, "", "GameServerLobbyFlowCoordinator/<>c__DisplayClass85_0");
