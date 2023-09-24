#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Action;
}
namespace GlobalNamespace {
class GlobalNamespace__LevelSelectionFlowCoordinator__State;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelSelectionFlowCoordinator;
}
// Type: ::MultiplayerLevelSelectionFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5595))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5606))
// CS Name: MultiplayerLevelSelectionFlowCoordinator
class CORDL_TYPE MultiplayerLevelSelectionFlowCoordinator : public GlobalNamespace::LevelSelectionFlowCoordinator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~MultiplayerLevelSelectionFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelSelectionFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr MultiplayerLevelSelectionFlowCoordinator(MultiplayerLevelSelectionFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr MultiplayerLevelSelectionFlowCoordinator(MultiplayerLevelSelectionFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLevelSelectionFlowCoordinator(void* ptr) noexcept : GlobalNamespace::LevelSelectionFlowCoordinator(ptr) {
}


  constexpr MultiplayerLevelSelectionFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLevelSelectionFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLevelSelectionFlowCoordinator& operator=(MultiplayerLevelSelectionFlowCoordinator&& o) noexcept = default;
  constexpr MultiplayerLevelSelectionFlowCoordinator& operator=(MultiplayerLevelSelectionFlowCoordinator const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get__notAllowedCharacteristics, put=__set__notAllowedCharacteristics))  _notAllowedCharacteristics;

constexpr void __set__notAllowedCharacteristics(::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __get__notAllowedCharacteristics() const;

 GlobalNamespace::ILobbyGameStateController __declspec(property(get=__get__lobbyGameStateController, put=__set__lobbyGameStateController))  _lobbyGameStateController;

constexpr void __set__lobbyGameStateController(GlobalNamespace::ILobbyGameStateController value) ;

constexpr GlobalNamespace::ILobbyGameStateController __get__lobbyGameStateController() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State> __declspec(property(get=__get_didSelectLevelEvent, put=__set_didSelectLevelEvent))  didSelectLevelEvent;

constexpr void __set_didSelectLevelEvent(System::Action_1<GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State> __get_didSelectLevelEvent() const;

 System::Action __declspec(property(get=__get_didFinishedEvent, put=__set_didFinishedEvent))  didFinishedEvent;

constexpr void __set_didFinishedEvent(System::Action value) ;

constexpr System::Action __get_didFinishedEvent() const;

 ::StringW __declspec(property(get=__get__actionButtonText, put=__set__actionButtonText))  _actionButtonText;

constexpr void __set__actionButtonText(::StringW value) ;

constexpr ::StringW __get__actionButtonText() const;

 ::StringW __declspec(property(get=__get__titleText, put=__set__titleText))  _titleText;

constexpr void __set__titleText(::StringW value) ;

constexpr ::StringW __get__titleText() const;

 GlobalNamespace::SongPackMask __declspec(property(get=__get__songPackMask, put=__set__songPackMask))  _songPackMask;

constexpr void __set__songPackMask(GlobalNamespace::SongPackMask value) ;

constexpr GlobalNamespace::SongPackMask __get__songPackMask() const;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get__allowedBeatmapDifficultyMask, put=__set__allowedBeatmapDifficultyMask))  _allowedBeatmapDifficultyMask;

constexpr void __set__allowedBeatmapDifficultyMask(GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr GlobalNamespace::BeatmapDifficultyMask __get__allowedBeatmapDifficultyMask() const;

 GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State value) ;

constexpr GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State __get__state() const;

 bool __declspec(property(get=__get__isBeingFinished, put=__set__isBeingFinished))  _isBeingFinished;

constexpr void __set__isBeingFinished(bool value) ;

constexpr bool __get__isBeingFinished() const;


// Properties

 bool __declspec(property(get=get_hidePracticeButton))  hidePracticeButton;

 bool __declspec(property(get=get_hidePacksIfOneOrNone))  hidePacksIfOneOrNone;

 ::StringW __declspec(property(get=get_actionButtonText))  actionButtonText;

 bool __declspec(property(get=get_showBackButtonForMainViewController))  showBackButtonForMainViewController;

 GlobalNamespace::SongPackMask __declspec(property(get=get_songPackMask))  songPackMask;

 bool __declspec(property(get=get_enableCustomLevels))  enableCustomLevels;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=get_allowedBeatmapDifficultyMask))  allowedBeatmapDifficultyMask;

 ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=get_notAllowedCharacteristics))  notAllowedCharacteristics;

 ::StringW __declspec(property(get=get_mainTitle))  mainTitle;


// Methods

/// @brief Method add_didSelectLevelEvent addr 0x2138ac4 size 0xb0 virtual false final false
 void add_didSelectLevelEvent(System::Action_1<GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State> value) ;

/// @brief Method remove_didSelectLevelEvent addr 0x213a124 size 0xb0 virtual false final false
 void remove_didSelectLevelEvent(System::Action_1<GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State> value) ;

/// @brief Method add_didFinishedEvent addr 0x2138b74 size 0x9c virtual false final false
 void add_didFinishedEvent(System::Action value) ;

/// @brief Method remove_didFinishedEvent addr 0x213a1d4 size 0x9c virtual false final false
 void remove_didFinishedEvent(System::Action value) ;

/// @brief Method get_hidePracticeButton addr 0x2142568 size 0x8 virtual true final false
 bool get_hidePracticeButton() ;

/// @brief Method get_hidePacksIfOneOrNone addr 0x2142570 size 0x8 virtual true final false
 bool get_hidePacksIfOneOrNone() ;

/// @brief Method get_actionButtonText addr 0x2142578 size 0x8 virtual true final false
 ::StringW get_actionButtonText() ;

/// @brief Method get_showBackButtonForMainViewController addr 0x2142580 size 0x8 virtual true final false
 bool get_showBackButtonForMainViewController() ;

/// @brief Method get_songPackMask addr 0x2142588 size 0xc virtual true final false
 GlobalNamespace::SongPackMask get_songPackMask() ;

/// @brief Method get_enableCustomLevels addr 0x2142594 size 0x8 virtual true final false
 bool get_enableCustomLevels() ;

/// @brief Method get_allowedBeatmapDifficultyMask addr 0x214259c size 0x8 virtual true final false
 GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask() ;

/// @brief Method get_notAllowedCharacteristics addr 0x21425a4 size 0x8 virtual true final false
 ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> get_notAllowedCharacteristics() ;

/// @brief Method get_mainTitle addr 0x21425ac size 0x8 virtual true final false
 ::StringW get_mainTitle() ;

/// @brief Method ActionButtonWasPressed addr 0x21425b4 size 0xdc virtual true final false
 void ActionButtonWasPressed() ;

/// @brief Method BackButtonWasPressed addr 0x2142690 size 0x5c virtual true final false
 void BackButtonWasPressed(HMUI::ViewController topViewController) ;

/// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange addr 0x21426ec size 0xec virtual true final false
 void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method TransitionDidStart addr 0x21427d8 size 0x11c virtual true final false
 void TransitionDidStart() ;

/// @brief Method TransitionDidFinish addr 0x21428f4 size 0x21c virtual true final false
 void TransitionDidFinish() ;

/// @brief Method Setup addr 0x213bb18 size 0x1c virtual false final false
 void Setup(GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State state, GlobalNamespace::SongPackMask songPackMask, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::StringW actionText, ::StringW titleText) ;

/// @brief Method HandleLobbyGameStateControllerGameStarted addr 0x2142b80 size 0x4 virtual false final false
 void HandleLobbyGameStateControllerGameStarted(GlobalNamespace::ILevelGameplaySetupData levelGameplaySetupData) ;

/// @brief Method DismissViewControllersAndFinish addr 0x2142b10 size 0x70 virtual false final false
 void DismissViewControllersAndFinish() ;

static GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator New_ctor() ;

/// @brief Method .ctor addr 0x2142b84 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, "", "MultiplayerLevelSelectionFlowCoordinator");
