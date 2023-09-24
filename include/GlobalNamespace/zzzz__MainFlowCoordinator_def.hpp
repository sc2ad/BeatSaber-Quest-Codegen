#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class HelpFlowCoordinator;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class PartyFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class LevelSelectionFlowCoordinator;
}
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__OptionsViewController__OptionsButton;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41;
}
namespace GlobalNamespace {
class CampaignFlowCoordinator;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace GlobalNamespace {
struct GlobalNamespace__MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
struct GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class EditAvatarFlowCoordinator;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class PlayerOptionsViewController;
}
namespace GlobalNamespace {
class OptionsViewController;
}
namespace HMUI {
class FlowCoordinator;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
struct GlobalNamespace__HowToPlayViewController__HowToPlayOptions;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
struct GlobalNamespace__SettingsFlowCoordinator__FinishAction;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41;
}
namespace GlobalNamespace {
class MainFlowCoordinator;
}
// Type: ::<ProcessMenuDestinationRequestAfterFrameCoroutine>d__41
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5596))
// CS Name: MainFlowCoordinator::<ProcessMenuDestinationRequestAfterFrameCoroutine>d__41
class CORDL_TYPE GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41(GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41(GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41& operator=(GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41&& o) noexcept = default;
  constexpr GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41& operator=(GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MainFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MainFlowCoordinator value) ;

constexpr GlobalNamespace::MainFlowCoordinator __get___4__this() const;

 GlobalNamespace::MenuDestination __declspec(property(get=__get_destination, put=__set_destination))  destination;

constexpr void __set_destination(GlobalNamespace::MenuDestination value) ;

constexpr GlobalNamespace::MenuDestination __get_destination() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21368f0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2136ee0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2136ee4 size 0x54 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2136f38 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2136f40 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2136f80 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MainFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5597))
// CS Name: MainFlowCoordinator
class CORDL_TYPE MainFlowCoordinator : public HMUI::FlowCoordinator {
public:
// Declarations
using _ProcessMenuDestinationRequestAfterFrameCoroutine_d__41 = GlobalNamespace::GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x150};

virtual ~MainFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr MainFlowCoordinator(MainFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr MainFlowCoordinator(MainFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainFlowCoordinator(void* ptr) noexcept : HMUI::FlowCoordinator(ptr) {
}


  constexpr MainFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainFlowCoordinator& operator=(MainFlowCoordinator&& o) noexcept = default;
  constexpr MainFlowCoordinator& operator=(MainFlowCoordinator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__defaultLightsPreset, put=__set__defaultLightsPreset))  _defaultLightsPreset;

constexpr void __set__defaultLightsPreset(GlobalNamespace::MenuLightsPresetSO value) ;

constexpr GlobalNamespace::MenuLightsPresetSO __get__defaultLightsPreset() const;

 GlobalNamespace::SoloFreePlayFlowCoordinator __declspec(property(get=__get__soloFreePlayFlowCoordinator, put=__set__soloFreePlayFlowCoordinator))  _soloFreePlayFlowCoordinator;

constexpr void __set__soloFreePlayFlowCoordinator(GlobalNamespace::SoloFreePlayFlowCoordinator value) ;

constexpr GlobalNamespace::SoloFreePlayFlowCoordinator __get__soloFreePlayFlowCoordinator() const;

 GlobalNamespace::PartyFreePlayFlowCoordinator __declspec(property(get=__get__partyFreePlayFlowCoordinator, put=__set__partyFreePlayFlowCoordinator))  _partyFreePlayFlowCoordinator;

constexpr void __set__partyFreePlayFlowCoordinator(GlobalNamespace::PartyFreePlayFlowCoordinator value) ;

constexpr GlobalNamespace::PartyFreePlayFlowCoordinator __get__partyFreePlayFlowCoordinator() const;

 GlobalNamespace::CampaignFlowCoordinator __declspec(property(get=__get__campaignFlowCoordinator, put=__set__campaignFlowCoordinator))  _campaignFlowCoordinator;

constexpr void __set__campaignFlowCoordinator(GlobalNamespace::CampaignFlowCoordinator value) ;

constexpr GlobalNamespace::CampaignFlowCoordinator __get__campaignFlowCoordinator() const;

 GlobalNamespace::SettingsFlowCoordinator __declspec(property(get=__get__settingsFlowCoordinator, put=__set__settingsFlowCoordinator))  _settingsFlowCoordinator;

constexpr void __set__settingsFlowCoordinator(GlobalNamespace::SettingsFlowCoordinator value) ;

constexpr GlobalNamespace::SettingsFlowCoordinator __get__settingsFlowCoordinator() const;

 GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __declspec(property(get=__get__multiplayerModeSelectionFlowCoordinator, put=__set__multiplayerModeSelectionFlowCoordinator))  _multiplayerModeSelectionFlowCoordinator;

constexpr void __set__multiplayerModeSelectionFlowCoordinator(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator value) ;

constexpr GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __get__multiplayerModeSelectionFlowCoordinator() const;

 GlobalNamespace::EditAvatarFlowCoordinator __declspec(property(get=__get__editAvatarFlowCoordinator, put=__set__editAvatarFlowCoordinator))  _editAvatarFlowCoordinator;

constexpr void __set__editAvatarFlowCoordinator(GlobalNamespace::EditAvatarFlowCoordinator value) ;

constexpr GlobalNamespace::EditAvatarFlowCoordinator __get__editAvatarFlowCoordinator() const;

 GlobalNamespace::HelpFlowCoordinator __declspec(property(get=__get__helpFlowCoordinator, put=__set__helpFlowCoordinator))  _helpFlowCoordinator;

constexpr void __set__helpFlowCoordinator(GlobalNamespace::HelpFlowCoordinator value) ;

constexpr GlobalNamespace::HelpFlowCoordinator __get__helpFlowCoordinator() const;

 GlobalNamespace::SimpleDialogPromptViewController __declspec(property(get=__get__simpleDialogPromptViewController, put=__set__simpleDialogPromptViewController))  _simpleDialogPromptViewController;

constexpr void __set__simpleDialogPromptViewController(GlobalNamespace::SimpleDialogPromptViewController value) ;

constexpr GlobalNamespace::SimpleDialogPromptViewController __get__simpleDialogPromptViewController() const;

 GlobalNamespace::MainMenuViewController __declspec(property(get=__get__mainMenuViewController, put=__set__mainMenuViewController))  _mainMenuViewController;

constexpr void __set__mainMenuViewController(GlobalNamespace::MainMenuViewController value) ;

constexpr GlobalNamespace::MainMenuViewController __get__mainMenuViewController() const;

 GlobalNamespace::PlayerOptionsViewController __declspec(property(get=__get__playerOptionsViewController, put=__set__playerOptionsViewController))  _playerOptionsViewController;

constexpr void __set__playerOptionsViewController(GlobalNamespace::PlayerOptionsViewController value) ;

constexpr GlobalNamespace::PlayerOptionsViewController __get__playerOptionsViewController() const;

 GlobalNamespace::OptionsViewController __declspec(property(get=__get__optionsViewController, put=__set__optionsViewController))  _optionsViewController;

constexpr void __set__optionsViewController(GlobalNamespace::OptionsViewController value) ;

constexpr GlobalNamespace::OptionsViewController __get__optionsViewController() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::MenuLightsManager __declspec(property(get=__get__menuLightsManager, put=__set__menuLightsManager))  _menuLightsManager;

constexpr void __set__menuLightsManager(GlobalNamespace::MenuLightsManager value) ;

constexpr GlobalNamespace::MenuLightsManager __get__menuLightsManager() const;

 GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOut, put=__set__fadeInOut))  _fadeInOut;

constexpr void __set__fadeInOut(GlobalNamespace::FadeInOutController value) ;

constexpr GlobalNamespace::FadeInOutController __get__fadeInOut() const;

 GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel))  _beatmapLevelsModel;

constexpr void __set__beatmapLevelsModel(GlobalNamespace::BeatmapLevelsModel value) ;

constexpr GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModel() const;

 GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper))  _menuTransitionsHelper;

constexpr void __set__menuTransitionsHelper(GlobalNamespace::MenuTransitionsHelper value) ;

constexpr GlobalNamespace::MenuTransitionsHelper __get__menuTransitionsHelper() const;

 GlobalNamespace::AppStaticSettingsSO __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings))  _appStaticSettings;

constexpr void __set__appStaticSettings(GlobalNamespace::AppStaticSettingsSO value) ;

constexpr GlobalNamespace::AppStaticSettingsSO __get__appStaticSettings() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 GlobalNamespace::MenuDestination __declspec(property(get=__get__menuDestinationRequest, put=__set__menuDestinationRequest))  _menuDestinationRequest;

constexpr void __set__menuDestinationRequest(GlobalNamespace::MenuDestination value) ;

constexpr GlobalNamespace::MenuDestination __get__menuDestinationRequest() const;

 HMUI::FlowCoordinator __declspec(property(get=__get__afterDialogPromptFlowCoordinator, put=__set__afterDialogPromptFlowCoordinator))  _afterDialogPromptFlowCoordinator;

constexpr void __set__afterDialogPromptFlowCoordinator(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get__afterDialogPromptFlowCoordinator() const;

static bool __declspec(property(get=__get__startWithSettings, put=__set__startWithSettings))  _startWithSettings;

static void __set__startWithSettings(bool value) ;

static bool __get__startWithSettings() ;


// Methods

/// @brief Method DidActivate addr 0x2134a9c size 0x4a8 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method TopViewControllerWillChange addr 0x213506c size 0x194 virtual true final false
 void TopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method InitialViewControllerWasPresented addr 0x2135200 size 0x78 virtual true final false
 void InitialViewControllerWasPresented() ;

/// @brief Method DidDeactivate addr 0x2135278 size 0x448 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method PresentFlowCoordinatorOrAskForTutorial addr 0x2135774 size 0x1d0 virtual false final false
 void PresentFlowCoordinatorOrAskForTutorial(HMUI::FlowCoordinator flowCoordinator) ;

/// @brief Method HandleMainMenuViewControllerDidFinish addr 0x2135944 size 0x52c virtual false final false
 void HandleMainMenuViewControllerDidFinish(GlobalNamespace::MainMenuViewController viewController, GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton subMenuType) ;

/// @brief Method HandleOptionsViewControllerDidFinish addr 0x2135e70 size 0xd0 virtual false final false
 void HandleOptionsViewControllerDidFinish(GlobalNamespace::GlobalNamespace__OptionsViewController__OptionsButton optionsType) ;

/// @brief Method HandlePlayerOptionsViewControllerDidFinish addr 0x2135f40 size 0x14 virtual false final false
 void HandlePlayerOptionsViewControllerDidFinish(HMUI::ViewController viewController) ;

/// @brief Method HandleHowToPlayViewControllerDidFinish addr 0x2135f54 size 0x78 virtual false final false
 void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions howToPlayOptions) ;

/// @brief Method HandleCampaignFlowCoordinatorDidFinish addr 0x2135fcc size 0x14 virtual false final false
 void HandleCampaignFlowCoordinatorDidFinish(GlobalNamespace::CampaignFlowCoordinator flowCoordinator) ;

/// @brief Method HandleEditAvatarFlowCoordinatorDidFinish addr 0x2135fe0 size 0x228 virtual false final false
 void HandleEditAvatarFlowCoordinatorDidFinish(GlobalNamespace::EditAvatarFlowCoordinator flowCoordinator, GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType editAvatarType) ;

/// @brief Method HandleSoloFreePlayFlowCoordinatorDidFinish addr 0x2136208 size 0x14 virtual false final false
 void HandleSoloFreePlayFlowCoordinatorDidFinish(GlobalNamespace::LevelSelectionFlowCoordinator flowCoordinator) ;

/// @brief Method HandlePartyFreePlayFlowCoordinatorDidFinish addr 0x213621c size 0x14 virtual false final false
 void HandlePartyFreePlayFlowCoordinatorDidFinish(GlobalNamespace::LevelSelectionFlowCoordinator flowCoordinator) ;

/// @brief Method HandleSettingsFlowCoordinatorDidFinish addr 0x2136230 size 0x94 virtual false final false
 void HandleSettingsFlowCoordinatorDidFinish(GlobalNamespace::SettingsFlowCoordinator settingsFlowCoordinator, GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction finishAction) ;

/// @brief Method HandleHelpFlowCoordinatorDidFinish addr 0x21362c4 size 0x14 virtual false final false
 void HandleHelpFlowCoordinatorDidFinish(GlobalNamespace::HelpFlowCoordinator helpFlowCoordinator) ;

/// @brief Method HandleMultiplayerModeSelectionFlowCoordinatorDidFinish addr 0x21362d8 size 0x14 virtual false final false
 void HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator multiplayerModeSelectionFlowCoordinator) ;

/// @brief Method HandleMainMenuViewControllerMusicPackPromoButtonWasPressed addr 0x21362ec size 0xac virtual false final false
 void HandleMainMenuViewControllerMusicPackPromoButtonWasPressed(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method ProcessMenuDestinationRequest addr 0x2136398 size 0x388 virtual false final false
 void ProcessMenuDestinationRequest(GlobalNamespace::MenuDestination destination) ;

/// @brief Method PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator addr 0x2136720 size 0x1d0 virtual false final false
 void PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator() ;

/// @brief Method ProcessMenuDestinationRequestAfterFrameCoroutine addr 0x2134ff8 size 0x74 virtual false final false
 System::Collections::IEnumerator ProcessMenuDestinationRequestAfterFrameCoroutine(GlobalNamespace::MenuDestination destination) ;

/// @brief Method BackButtonWasPressed addr 0x2136918 size 0x9c virtual true final false
 void BackButtonWasPressed(HMUI::ViewController topViewController) ;

static GlobalNamespace::MainFlowCoordinator New_ctor() ;

/// @brief Method .ctor addr 0x21369b4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PresentFlowCoordinatorOrAskForTutorial>b__26_0 addr 0x21369bc size 0xe0 virtual false final false
 void _PresentFlowCoordinatorOrAskForTutorial_b__26_0(int32_t buttonNumber) ;

/// @brief Method <PresentFlowCoordinatorOrAskForTutorial>b__26_1 addr 0x2136a9c size 0x18 virtual false final false
 void _PresentFlowCoordinatorOrAskForTutorial_b__26_1() ;

/// @brief Method <HandleMainMenuViewControllerDidFinish>b__27_0 addr 0x2136ab4 size 0x1c virtual false final false
 void _HandleMainMenuViewControllerDidFinish_b__27_0() ;

/// @brief Method <HandleMainMenuViewControllerDidFinish>b__27_1 addr 0x2136ad0 size 0x364 virtual false final false
 void _HandleMainMenuViewControllerDidFinish_b__27_1(int32_t buttonNumber) ;

/// @brief Method <PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__40_0 addr 0x2136e34 size 0xac virtual false final false
 void _PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__40_0(int32_t buttonNumber) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41, "", "MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__41");
NEED_NO_BOX(GlobalNamespace::MainFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainFlowCoordinator, "", "MainFlowCoordinator");
