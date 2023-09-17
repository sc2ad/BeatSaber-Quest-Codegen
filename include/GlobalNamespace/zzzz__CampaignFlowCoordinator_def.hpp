#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class MissionHelpViewController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class MissionResultsViewController;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class MissionSelectionNavigationController;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace HMUI {
struct ____HMUI__ViewController__AnimationType;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class CampaignFlowCoordinator;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0;
}
// Type: ::<>c__DisplayClass20_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5586))
// CS Name: CampaignFlowCoordinator::<>c__DisplayClass20_0
class CORDL_TYPE ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0(____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0(____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0& operator=(____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0& operator=(____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::CampaignFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::CampaignFlowCoordinator value) ;

constexpr ::GlobalNamespace::CampaignFlowCoordinator __get___4__this() const;

 ::GlobalNamespace::MissionHelpViewController __declspec(property(get=__get_viewController, put=__set_viewController))  viewController;

constexpr void __set_viewController(::GlobalNamespace::MissionHelpViewController value) ;

constexpr ::GlobalNamespace::MissionHelpViewController __get_viewController() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0() ;

/// @brief Method .ctor addr 0x2131710 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleMissionHelpViewControllerDidFinish>b__0 addr 0x2131bd8 size 0x50 virtual false final false
 void _HandleMissionHelpViewControllerDidFinish_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass22_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5587))
// CS Name: CampaignFlowCoordinator::<>c__DisplayClass22_0
class CORDL_TYPE ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0(____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0(____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0& operator=(____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0& operator=(____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::CampaignFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::CampaignFlowCoordinator value) ;

constexpr ::GlobalNamespace::CampaignFlowCoordinator __get___4__this() const;

 ::GlobalNamespace::MissionResultsViewController __declspec(property(get=__get_viewController, put=__set_viewController))  viewController;

constexpr void __set_viewController(::GlobalNamespace::MissionResultsViewController value) ;

constexpr ::GlobalNamespace::MissionResultsViewController __get_viewController() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0() ;

/// @brief Method .ctor addr 0x2131880 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleMissionResultsViewControllerRetryButtonPressed>b__0 addr 0x2131c28 size 0x50 virtual false final false
 void _HandleMissionResultsViewControllerRetryButtonPressed_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CampaignFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5588))
// CS Name: CampaignFlowCoordinator
class CORDL_TYPE CampaignFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
using __c__DisplayClass22_0 = ::GlobalNamespace::____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0;

using __c__DisplayClass20_0 = ::GlobalNamespace::____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~CampaignFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CampaignFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr CampaignFlowCoordinator(CampaignFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CampaignFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr CampaignFlowCoordinator(CampaignFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CampaignFlowCoordinator(void* ptr) noexcept : ::HMUI::FlowCoordinator(ptr) {
}


  constexpr CampaignFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CampaignFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CampaignFlowCoordinator& operator=(CampaignFlowCoordinator&& o) noexcept = default;
  constexpr CampaignFlowCoordinator& operator=(CampaignFlowCoordinator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__defaultLightsPreset, put=__set__defaultLightsPreset))  _defaultLightsPreset;

constexpr void __set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO __get__defaultLightsPreset() const;

 ::GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__resultsClearedLightsPreset, put=__set__resultsClearedLightsPreset))  _resultsClearedLightsPreset;

constexpr void __set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO __get__resultsClearedLightsPreset() const;

 ::GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__resultsFailedLightsPreset, put=__set__resultsFailedLightsPreset))  _resultsFailedLightsPreset;

constexpr void __set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO __get__resultsFailedLightsPreset() const;

 ::GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__newObjectiveLightsPreset, put=__set__newObjectiveLightsPreset))  _newObjectiveLightsPreset;

constexpr void __set__newObjectiveLightsPreset(::GlobalNamespace::MenuLightsPresetSO value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO __get__newObjectiveLightsPreset() const;

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper))  _menuTransitionsHelper;

constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get__menuTransitionsHelper() const;

 ::GlobalNamespace::MenuLightsManager __declspec(property(get=__get__menuLightsManager, put=__set__menuLightsManager))  _menuLightsManager;

constexpr void __set__menuLightsManager(::GlobalNamespace::MenuLightsManager value) ;

constexpr ::GlobalNamespace::MenuLightsManager __get__menuLightsManager() const;

 ::GlobalNamespace::MissionSelectionNavigationController __declspec(property(get=__get__missionSelectionNavigationController, put=__set__missionSelectionNavigationController))  _missionSelectionNavigationController;

constexpr void __set__missionSelectionNavigationController(::GlobalNamespace::MissionSelectionNavigationController value) ;

constexpr ::GlobalNamespace::MissionSelectionNavigationController __get__missionSelectionNavigationController() const;

 ::GlobalNamespace::MissionResultsViewController __declspec(property(get=__get__missionResultsViewController, put=__set__missionResultsViewController))  _missionResultsViewController;

constexpr void __set__missionResultsViewController(::GlobalNamespace::MissionResultsViewController value) ;

constexpr ::GlobalNamespace::MissionResultsViewController __get__missionResultsViewController() const;

 ::GlobalNamespace::GameplaySetupViewController __declspec(property(get=__get__gameplaySetupViewController, put=__set__gameplaySetupViewController))  _gameplaySetupViewController;

constexpr void __set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController value) ;

constexpr ::GlobalNamespace::GameplaySetupViewController __get__gameplaySetupViewController() const;

 ::GlobalNamespace::MissionHelpViewController __declspec(property(get=__get__missionHelpViewController, put=__set__missionHelpViewController))  _missionHelpViewController;

constexpr void __set__missionHelpViewController(::GlobalNamespace::MissionHelpViewController value) ;

constexpr ::GlobalNamespace::MissionHelpViewController __get__missionHelpViewController() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::GlobalNamespace::CampaignProgressModel __declspec(property(get=__get__campaignProgressModel, put=__set__campaignProgressModel))  _campaignProgressModel;

constexpr void __set__campaignProgressModel(::GlobalNamespace::CampaignProgressModel value) ;

constexpr ::GlobalNamespace::CampaignProgressModel __get__campaignProgressModel() const;

 ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator> value) ;

constexpr ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator> __get_didFinishEvent() const;

 bool __declspec(property(get=__get__showCredits, put=__set__showCredits))  _showCredits;

constexpr void __set__showCredits(bool value) ;

constexpr bool __get__showCredits() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x2130d10 size 0xb4 virtual false final false
 void add_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator> value) ;

/// @brief Method remove_didFinishEvent addr 0x2130dc4 size 0xb4 virtual false final false
 void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator> value) ;

/// @brief Method DidActivate addr 0x2130e78 size 0x254 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21310cc size 0x1b8 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method TopViewControllerWillChange addr 0x2131284 size 0xf8 virtual true final false
 void TopViewControllerWillChange(::HMUI::ViewController oldViewController, ::HMUI::ViewController newViewController, ::HMUI::____HMUI__ViewController__AnimationType animationType) ;

/// @brief Method HandleMissionSelectionNavigationControllerDidPressPlayButton addr 0x213137c size 0x120 virtual false final false
 void HandleMissionSelectionNavigationControllerDidPressPlayButton(::GlobalNamespace::MissionSelectionNavigationController viewController) ;

/// @brief Method HandleMissionHelpViewControllerDidFinish addr 0x2131654 size 0xbc virtual false final false
 void HandleMissionHelpViewControllerDidFinish(::GlobalNamespace::MissionHelpViewController viewController) ;

/// @brief Method HandleMissionResultsViewControllerContinueButtonPressed addr 0x2131718 size 0xac virtual false final false
 void HandleMissionResultsViewControllerContinueButtonPressed(::GlobalNamespace::MissionResultsViewController viewController) ;

/// @brief Method HandleMissionResultsViewControllerRetryButtonPressed addr 0x21317c4 size 0xbc virtual false final false
 void HandleMissionResultsViewControllerRetryButtonPressed(::GlobalNamespace::MissionResultsViewController viewController) ;

/// @brief Method StartLevel addr 0x213149c size 0x1b8 virtual false final false
 void StartLevel(::System::Action beforeSceneSwitchCallback) ;

/// @brief Method HandleMissionLevelSceneDidFinish addr 0x2131888 size 0xe0 virtual false final false
 void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, ::GlobalNamespace::MissionCompletionResults missionCompletionResults) ;

/// @brief Method HandleMissionLevelSceneRestarted addr 0x2131a30 size 0x3c virtual false final false
 void HandleMissionLevelSceneRestarted(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, ::GlobalNamespace::MissionCompletionResults missionCompletionResults) ;

/// @brief Method UpdatePlayerStatistics addr 0x2131968 size 0xc8 virtual false final false
 void UpdatePlayerStatistics(::GlobalNamespace::MissionCompletionResults missionCompletionResults, ::GlobalNamespace::MissionNode missionNode) ;

/// @brief Method BackButtonWasPressed addr 0x2131a6c size 0xa0 virtual true final false
 void BackButtonWasPressed(::HMUI::ViewController topViewController) ;

// Ctor Parameters []
explicit CampaignFlowCoordinator() ;

/// @brief Method .ctor addr 0x2131b0c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleMissionResultsViewControllerContinueButtonPressed>b__21_0 addr 0x2131b14 size 0x8c virtual false final false
 void _HandleMissionResultsViewControllerContinueButtonPressed_b__21_0() ;

/// @brief Method <HandleMissionResultsViewControllerContinueButtonPressed>b__21_1 addr 0x2131ba0 size 0x38 virtual false final false
 void _HandleMissionResultsViewControllerContinueButtonPressed_b__21_1(bool presented) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CampaignFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CampaignFlowCoordinator, "", "CampaignFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass20_0, "", "CampaignFlowCoordinator/<>c__DisplayClass20_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CampaignFlowCoordinator____c__DisplayClass22_0, "", "CampaignFlowCoordinator/<>c__DisplayClass22_0");
