// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
// Including type: HowToPlayViewController
#include "GlobalNamespace/HowToPlayViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x160
  #pragma pack(push, 1)
  // Autogenerated type: ShowcaseFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class ShowcaseFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // private TabBarViewController _tabBarViewController
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TabBarViewController*) == 0x8);
    // [SpaceAttribute] Offset: 0xF0E46C
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsLightsPreset
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::MenuLightsPresetSO* resultsLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xF0E4B4
    // private readonly HowToPlayViewController _howToPlayViewController
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HowToPlayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0E4C4
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF0E4D4
    // private readonly ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0E4E4
    // private readonly LocalLeaderboardViewController _localLeaderboardViewController
    // Size: 0x8
    // Offset: 0x148
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0E4F4
    // private readonly EnterPlayerGuestNameViewController _enterNameViewController
    // Size: 0x8
    // Offset: 0x150
    GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0E504
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x158
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    public:
    // Get instance field reference: private LocalLeaderboardsModel _localLeaderboardsModel
    GlobalNamespace::LocalLeaderboardsModel*& dyn__localLeaderboardsModel();
    // Get instance field reference: private TabBarViewController _tabBarViewController
    GlobalNamespace::TabBarViewController*& dyn__tabBarViewController();
    // Get instance field reference: private MenuLightsPresetSO _defaultLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__defaultLightsPreset();
    // Get instance field reference: private MenuLightsPresetSO _resultsLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__resultsLightsPreset();
    // Get instance field reference: private readonly HowToPlayViewController _howToPlayViewController
    GlobalNamespace::HowToPlayViewController*& dyn__howToPlayViewController();
    // Get instance field reference: private readonly MenuLightsManager _menuLightsManager
    GlobalNamespace::MenuLightsManager*& dyn__menuLightsManager();
    // Get instance field reference: private readonly ResultsViewController _resultsViewController
    GlobalNamespace::ResultsViewController*& dyn__resultsViewController();
    // Get instance field reference: private readonly LocalLeaderboardViewController _localLeaderboardViewController
    GlobalNamespace::LocalLeaderboardViewController*& dyn__localLeaderboardViewController();
    // Get instance field reference: private readonly EnterPlayerGuestNameViewController _enterNameViewController
    GlobalNamespace::EnterPlayerGuestNameViewController*& dyn__enterNameViewController();
    // Get instance field reference: private readonly MenuTransitionsHelper _menuTransitionsHelper
    GlobalNamespace::MenuTransitionsHelper*& dyn__menuTransitionsHelper();
    // private System.Boolean WillScoreGoToLeaderboard(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice)
    // Offset: 0x1104C3C
    bool WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice);
    // private System.Boolean ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.String playerName)
    // Offset: 0x1104CA8
    bool ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, ::Il2CppString* playerName);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x1104D78
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x1104DC0
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0x1105048
    void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0x1105070
    void HandleHowToPlayTabSelected();
    // private System.Void <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__24_0()
    // Offset: 0x110527C
    void $SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__24_0();
    // private System.Void <HandleHowToPlayTabSelected>b__32_0()
    // Offset: 0x110528C
    void $HandleHowToPlayTabSelected$b__32_0();
    // protected override System.String get_gameMode()
    // Offset: 0x11044C0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x1104508
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0x1104510
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0x1104518
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_hidePacksIfOneOrNone()
    // Offset: 0x1104520
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone()
    bool get_hidePacksIfOneOrNone();
    // protected override System.Boolean get_hideGameplaySetup()
    // Offset: 0x1104528
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Boolean SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup()
    bool get_hideGameplaySetup();
    // protected override System.Boolean get_hidePracticeButton()
    // Offset: 0x1104530
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePracticeButton()
    bool get_hidePracticeButton();
    // public System.Void .ctor()
    // Offset: 0x110526C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowcaseFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowcaseFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowcaseFlowCoordinator*, creationType>()));
    }
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x1104538
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x1104860
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x1104A58
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
  }; // ShowcaseFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(ShowcaseFlowCoordinator), 344 + sizeof(GlobalNamespace::MenuTransitionsHelper*)> __GlobalNamespace_ShowcaseFlowCoordinatorSizeCheck;
  static_assert(sizeof(ShowcaseFlowCoordinator) == 0x160);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowcaseFlowCoordinator*, "", "ShowcaseFlowCoordinator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::WillScoreGoToLeaderboard
// Il2CppName: WillScoreGoToLeaderboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ShowcaseFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, bool)>(&GlobalNamespace::ShowcaseFlowCoordinator::WillScoreGoToLeaderboard)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "WillScoreGoToLeaderboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap, practice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::ProcessScore
// Il2CppName: ProcessScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ShowcaseFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, bool, ::Il2CppString*)>(&GlobalNamespace::ShowcaseFlowCoordinator::ProcessScore)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "ProcessScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap, practice, playerName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::HandleResultsViewControllerContinueButtonPressed
// Il2CppName: HandleResultsViewControllerContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::ShowcaseFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  static const MethodInfo* get() {
    static auto* resultsViewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "HandleResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::HandleResultsViewControllerRestartButtonPressed
// Il2CppName: HandleResultsViewControllerRestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::ShowcaseFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  static const MethodInfo* get() {
    static auto* resultsViewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::HandleHowToPlayViewControllerDidFinish
// Il2CppName: HandleHowToPlayViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)(GlobalNamespace::HowToPlayViewController::HowToPlayOptions)>(&GlobalNamespace::ShowcaseFlowCoordinator::HandleHowToPlayViewControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* howToPlayOptions = &::il2cpp_utils::GetClassFromName("", "HowToPlayViewController/HowToPlayOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "HandleHowToPlayViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{howToPlayOptions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::HandleHowToPlayTabSelected
// Il2CppName: HandleHowToPlayTabSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::HandleHowToPlayTabSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "HandleHowToPlayTabSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::$SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__24_0
// Il2CppName: <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::$SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__24_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "<SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::$HandleHowToPlayTabSelected$b__32_0
// Il2CppName: <HandleHowToPlayTabSelected>b__32_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::$HandleHowToPlayTabSelected$b__32_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "<HandleHowToPlayTabSelected>b__32_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::get_gameMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::get_leaderboardViewController
// Il2CppName: get_leaderboardViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LeaderboardViewController* (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::get_leaderboardViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "get_leaderboardViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::get_initialTopScreenViewController
// Il2CppName: get_initialTopScreenViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController* (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::get_initialTopScreenViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "get_initialTopScreenViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::get_showPlayerStatsInDetailView
// Il2CppName: get_showPlayerStatsInDetailView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::get_showPlayerStatsInDetailView)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "get_showPlayerStatsInDetailView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::get_hidePacksIfOneOrNone
// Il2CppName: get_hidePacksIfOneOrNone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::get_hidePacksIfOneOrNone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "get_hidePacksIfOneOrNone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::get_hideGameplaySetup
// Il2CppName: get_hideGameplaySetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::get_hideGameplaySetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "get_hideGameplaySetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::get_hidePracticeButton
// Il2CppName: get_hidePracticeButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ShowcaseFlowCoordinator::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::get_hidePracticeButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "get_hidePracticeButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::ShowcaseFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)(bool)>(&GlobalNamespace::ShowcaseFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish
// Il2CppName: ProcessLevelCompletionResultsAfterLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::ShowcaseFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator*), "ProcessLevelCompletionResultsAfterLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice});
  }
};
