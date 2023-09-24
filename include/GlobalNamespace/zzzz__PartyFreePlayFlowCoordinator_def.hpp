#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class EnterPlayerGuestNameViewController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class ResultsViewController;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class LeaderboardViewController;
}
namespace GlobalNamespace {
class LocalLeaderboardViewController;
}
namespace GlobalNamespace {
class GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0;
}
namespace GlobalNamespace {
class PartyFreePlayFlowCoordinator;
}
// Type: ::<>c__DisplayClass18_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5607))
// CS Name: PartyFreePlayFlowCoordinator::<>c__DisplayClass18_0
class CORDL_TYPE GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0(GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0(GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0& operator=(GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0&& o) noexcept = default;
  constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0& operator=(GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PartyFreePlayFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::PartyFreePlayFlowCoordinator value) ;

constexpr GlobalNamespace::PartyFreePlayFlowCoordinator __get___4__this() const;

 GlobalNamespace::LevelCompletionResults __declspec(property(get=__get_levelCompletionResults, put=__set_levelCompletionResults))  levelCompletionResults;

constexpr void __set_levelCompletionResults(GlobalNamespace::LevelCompletionResults value) ;

constexpr GlobalNamespace::LevelCompletionResults __get_levelCompletionResults() const;

 ::StringW __declspec(property(get=__get_leaderboardId, put=__set_leaderboardId))  leaderboardId;

constexpr void __set_leaderboardId(::StringW value) ;

constexpr ::StringW __get_leaderboardId() const;

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get_transformedBeatmapData, put=__set_transformedBeatmapData))  transformedBeatmapData;

constexpr void __set_transformedBeatmapData(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get_transformedBeatmapData() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap))  difficultyBeatmap;

constexpr void __set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get_difficultyBeatmap() const;

 bool __declspec(property(get=__get_practice, put=__set_practice))  practice;

constexpr void __set_practice(bool value) ;

constexpr bool __get_practice() const;


// Methods

static GlobalNamespace::GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0 New_ctor() ;

/// @brief Method .ctor addr 0x2144188 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0 addr 0x214469c size 0xc8 virtual false final false
 void _ProcessLevelCompletionResultsAfterLevelDidFinish_b__0(GlobalNamespace::EnterPlayerGuestNameViewController viewController, ::StringW playerName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass23_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5608))
// CS Name: PartyFreePlayFlowCoordinator::<>c__DisplayClass23_0
class CORDL_TYPE GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0(GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0(GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0& operator=(GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0&& o) noexcept = default;
  constexpr GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0& operator=(GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PartyFreePlayFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::PartyFreePlayFlowCoordinator value) ;

constexpr GlobalNamespace::PartyFreePlayFlowCoordinator __get___4__this() const;

 GlobalNamespace::ResultsViewController __declspec(property(get=__get_resultsViewController, put=__set_resultsViewController))  resultsViewController;

constexpr void __set_resultsViewController(GlobalNamespace::ResultsViewController value) ;

constexpr GlobalNamespace::ResultsViewController __get_resultsViewController() const;


// Methods

static GlobalNamespace::GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0 New_ctor() ;

/// @brief Method .ctor addr 0x21443e0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleResultsViewControllerRestartButtonPressed>b__0 addr 0x2144764 size 0x50 virtual false final false
 void _HandleResultsViewControllerRestartButtonPressed_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PartyFreePlayFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5609))
// CS Name: PartyFreePlayFlowCoordinator
class CORDL_TYPE PartyFreePlayFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
public:
// Declarations
using __c__DisplayClass23_0 = GlobalNamespace::GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0;

using __c__DisplayClass18_0 = GlobalNamespace::GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x150};

virtual ~PartyFreePlayFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PartyFreePlayFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr PartyFreePlayFlowCoordinator(PartyFreePlayFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PartyFreePlayFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr PartyFreePlayFlowCoordinator(PartyFreePlayFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PartyFreePlayFlowCoordinator(void* ptr) noexcept : GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator(ptr) {
}


  constexpr PartyFreePlayFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PartyFreePlayFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PartyFreePlayFlowCoordinator& operator=(PartyFreePlayFlowCoordinator&& o) noexcept = default;
  constexpr PartyFreePlayFlowCoordinator& operator=(PartyFreePlayFlowCoordinator const& o) noexcept = default;
                


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

 GlobalNamespace::LocalLeaderboardViewController __declspec(property(get=__get__localLeaderboardViewController, put=__set__localLeaderboardViewController))  _localLeaderboardViewController;

constexpr void __set__localLeaderboardViewController(GlobalNamespace::LocalLeaderboardViewController value) ;

constexpr GlobalNamespace::LocalLeaderboardViewController __get__localLeaderboardViewController() const;

 GlobalNamespace::EnterPlayerGuestNameViewController __declspec(property(get=__get__enterNameViewController, put=__set__enterNameViewController))  _enterNameViewController;

constexpr void __set__enterNameViewController(GlobalNamespace::EnterPlayerGuestNameViewController value) ;

constexpr GlobalNamespace::EnterPlayerGuestNameViewController __get__enterNameViewController() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;


// Properties

 ::StringW __declspec(property(get=get_gameMode))  gameMode;

 GlobalNamespace::LeaderboardViewController __declspec(property(get=get_leaderboardViewController))  leaderboardViewController;

 bool __declspec(property(get=get_showBackButtonForMainViewController))  showBackButtonForMainViewController;

 ::StringW __declspec(property(get=get_mainTitle))  mainTitle;


// Methods

/// @brief Method get_gameMode addr 0x2143b8c size 0x40 virtual true final false
 ::StringW get_gameMode() ;

/// @brief Method get_leaderboardViewController addr 0x2143bcc size 0x8 virtual true final false
 GlobalNamespace::LeaderboardViewController get_leaderboardViewController() ;

/// @brief Method get_showBackButtonForMainViewController addr 0x2143bd4 size 0x8 virtual true final false
 bool get_showBackButtonForMainViewController() ;

/// @brief Method get_mainTitle addr 0x2143bdc size 0x44 virtual true final false
 ::StringW get_mainTitle() ;

/// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate addr 0x2143c20 size 0x1c8 virtual true final false
 void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) ;

/// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate addr 0x2143e18 size 0x14c virtual true final false
 void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) ;

/// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish addr 0x2143f64 size 0x224 virtual true final false
 void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IReadonlyBeatmapData transformedBeatmapData, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::GameplayModifiers gameplayModifiers, bool practice) ;

/// @brief Method WillScoreGoToLeaderboard addr 0x21441b4 size 0x50 virtual false final false
 bool WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults levelCompletionResults, ::StringW leaderboardId, bool practice) ;

/// @brief Method IsNewHighScore addr 0x2144204 size 0x44 virtual false final false
 bool IsNewHighScore(GlobalNamespace::LevelCompletionResults levelCompletionResults, ::StringW leaderboardId) ;

/// @brief Method ProcessScore addr 0x2144248 size 0x94 virtual false final false
 void ProcessScore(GlobalNamespace::LevelCompletionResults levelCompletionResults, ::StringW leaderboardId, ::StringW playerName) ;

/// @brief Method HandleResultsViewControllerContinueButtonPressed addr 0x21442dc size 0x3c virtual false final false
 void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController resultsViewController) ;

/// @brief Method HandleResultsViewControllerRestartButtonPressed addr 0x2144318 size 0xc8 virtual false final false
 void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController resultsViewController) ;

static GlobalNamespace::PartyFreePlayFlowCoordinator New_ctor() ;

/// @brief Method .ctor addr 0x214468c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass18_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass23_0");
NEED_NO_BOX(GlobalNamespace::PartyFreePlayFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyFreePlayFlowCoordinator, "", "PartyFreePlayFlowCoordinator");
