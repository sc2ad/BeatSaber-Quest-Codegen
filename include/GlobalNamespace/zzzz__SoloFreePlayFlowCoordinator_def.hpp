#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class ResultsViewController;
}
namespace GlobalNamespace {
class LeaderboardViewController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class RunLevelMenuDestination;
}
namespace GlobalNamespace {
class PlatformLeaderboardViewController;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator;
}
// Type: ::<>c__DisplayClass21_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5616))
// CS Name: SoloFreePlayFlowCoordinator::<>c__DisplayClass21_0
class CORDL_TYPE GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0(GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0(GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0& operator=(GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0&& o) noexcept = default;
  constexpr GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0& operator=(GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SoloFreePlayFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SoloFreePlayFlowCoordinator value) ;

constexpr GlobalNamespace::SoloFreePlayFlowCoordinator __get___4__this() const;

 GlobalNamespace::ResultsViewController __declspec(property(get=__get_resultsViewController, put=__set_resultsViewController))  resultsViewController;

constexpr void __set_resultsViewController(GlobalNamespace::ResultsViewController value) ;

constexpr GlobalNamespace::ResultsViewController __get_resultsViewController() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0() ;

/// @brief Method .ctor addr 0x21466c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleResultsViewControllerRestartButtonPressed>b__0 addr 0x21469ec size 0x50 virtual false final false
 void _HandleResultsViewControllerRestartButtonPressed_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SoloFreePlayFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5617))
// CS Name: SoloFreePlayFlowCoordinator
class CORDL_TYPE SoloFreePlayFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
public:
// Declarations
using __c__DisplayClass21_0 = GlobalNamespace::GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x148};

virtual ~SoloFreePlayFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr SoloFreePlayFlowCoordinator(SoloFreePlayFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr SoloFreePlayFlowCoordinator(SoloFreePlayFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SoloFreePlayFlowCoordinator(void* ptr) noexcept : GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator(ptr) {
}


  constexpr SoloFreePlayFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SoloFreePlayFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SoloFreePlayFlowCoordinator& operator=(SoloFreePlayFlowCoordinator&& o) noexcept = default;
  constexpr SoloFreePlayFlowCoordinator& operator=(SoloFreePlayFlowCoordinator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__defaultLightsPreset, put=__set__defaultLightsPreset))  _defaultLightsPreset;

constexpr void __set__defaultLightsPreset(GlobalNamespace::MenuLightsPresetSO value) ;

constexpr GlobalNamespace::MenuLightsPresetSO __get__defaultLightsPreset() const;

 GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__resultsClearedLightsPreset, put=__set__resultsClearedLightsPreset))  _resultsClearedLightsPreset;

constexpr void __set__resultsClearedLightsPreset(GlobalNamespace::MenuLightsPresetSO value) ;

constexpr GlobalNamespace::MenuLightsPresetSO __get__resultsClearedLightsPreset() const;

 GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__resultsFailedLightsPreset, put=__set__resultsFailedLightsPreset))  _resultsFailedLightsPreset;

constexpr void __set__resultsFailedLightsPreset(GlobalNamespace::MenuLightsPresetSO value) ;

constexpr GlobalNamespace::MenuLightsPresetSO __get__resultsFailedLightsPreset() const;

 GlobalNamespace::MenuLightsManager __declspec(property(get=__get__menuLightsManager, put=__set__menuLightsManager))  _menuLightsManager;

constexpr void __set__menuLightsManager(GlobalNamespace::MenuLightsManager value) ;

constexpr GlobalNamespace::MenuLightsManager __get__menuLightsManager() const;

 GlobalNamespace::ResultsViewController __declspec(property(get=__get__resultsViewController, put=__set__resultsViewController))  _resultsViewController;

constexpr void __set__resultsViewController(GlobalNamespace::ResultsViewController value) ;

constexpr GlobalNamespace::ResultsViewController __get__resultsViewController() const;

 GlobalNamespace::PlatformLeaderboardViewController __declspec(property(get=__get__platformLeaderboardViewController, put=__set__platformLeaderboardViewController))  _platformLeaderboardViewController;

constexpr void __set__platformLeaderboardViewController(GlobalNamespace::PlatformLeaderboardViewController value) ;

constexpr GlobalNamespace::PlatformLeaderboardViewController __get__platformLeaderboardViewController() const;

 GlobalNamespace::PlatformLeaderboardsModel __declspec(property(get=__get__platformLeaderboardsModel, put=__set__platformLeaderboardsModel))  _platformLeaderboardsModel;

constexpr void __set__platformLeaderboardsModel(GlobalNamespace::PlatformLeaderboardsModel value) ;

constexpr GlobalNamespace::PlatformLeaderboardsModel __get__platformLeaderboardsModel() const;


// Properties

 ::StringW __declspec(property(get=get_gameMode))  gameMode;

 GlobalNamespace::LeaderboardViewController __declspec(property(get=get_leaderboardViewController))  leaderboardViewController;

 bool __declspec(property(get=get_showBackButtonForMainViewController))  showBackButtonForMainViewController;

 ::StringW __declspec(property(get=get_mainTitle))  mainTitle;


// Methods

/// @brief Method get_gameMode addr 0x21460a4 size 0x40 virtual true final false
 ::StringW get_gameMode() ;

/// @brief Method get_leaderboardViewController addr 0x21460e4 size 0x8 virtual true final false
 GlobalNamespace::LeaderboardViewController get_leaderboardViewController() ;

/// @brief Method get_showBackButtonForMainViewController addr 0x21460ec size 0x8 virtual true final false
 bool get_showBackButtonForMainViewController() ;

/// @brief Method get_mainTitle addr 0x21460f4 size 0x44 virtual true final false
 ::StringW get_mainTitle() ;

/// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate addr 0x2146138 size 0x17c virtual true final false
 void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) ;

/// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate addr 0x21462b4 size 0x134 virtual true final false
 void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) ;

/// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish addr 0x21463e8 size 0x170 virtual true final false
 void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IReadonlyBeatmapData transformedBeatmapData, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::GameplayModifiers gameplayModifiers, bool practice) ;

/// @brief Method IsNewHighScore addr 0x2146558 size 0x28 virtual false final false
 bool IsNewHighScore(GlobalNamespace::PlayerLevelStatsData playerLevelStats, GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

/// @brief Method Refresh addr 0x2146580 size 0x40 virtual true final false
 void Refresh() ;

/// @brief Method HandleResultsViewControllerContinueButtonPressed addr 0x21465c0 size 0x3c virtual false final false
 void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController viewController) ;

/// @brief Method HandleResultsViewControllerRestartButtonPressed addr 0x21465fc size 0xc8 virtual false final false
 void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController resultsViewController) ;

/// @brief Method __SetupFromDestination addr 0x21466cc size 0x318 virtual false final false
 void __SetupFromDestination(GlobalNamespace::RunLevelMenuDestination runLevelMenuDestination) ;

// Ctor Parameters []
explicit SoloFreePlayFlowCoordinator() ;

/// @brief Method .ctor addr 0x21469e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SoloFreePlayFlowCoordinator____c__DisplayClass21_0, "", "SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0");
NEED_NO_BOX(GlobalNamespace::SoloFreePlayFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SoloFreePlayFlowCoordinator, "", "SoloFreePlayFlowCoordinator");
