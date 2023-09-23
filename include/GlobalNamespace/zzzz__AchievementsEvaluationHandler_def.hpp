#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MissionNodesManager;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class AchievementsEvaluationHandler;
}
// Type: ::AchievementsEvaluationHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4108))
// CS Name: AchievementsEvaluationHandler
class CORDL_TYPE AchievementsEvaluationHandler : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~AchievementsEvaluationHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementsEvaluationHandler", modifiers: " const&", def_value: None }]
constexpr AchievementsEvaluationHandler(AchievementsEvaluationHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementsEvaluationHandler", modifiers: "&&", def_value: None }]
constexpr AchievementsEvaluationHandler(AchievementsEvaluationHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementsEvaluationHandler(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AchievementsEvaluationHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementsEvaluationHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementsEvaluationHandler& operator=(AchievementsEvaluationHandler&& o) noexcept = default;
  constexpr AchievementsEvaluationHandler& operator=(AchievementsEvaluationHandler const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AchievementsModelSO __declspec(property(get=__get__achievementsModel, put=__set__achievementsModel))  _achievementsModel;

constexpr void __set__achievementsModel(GlobalNamespace::AchievementsModelSO value) ;

constexpr GlobalNamespace::AchievementsModelSO __get__achievementsModel() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__clearedLevel100Achievement, put=__set__clearedLevel100Achievement))  _clearedLevel100Achievement;

constexpr void __set__clearedLevel100Achievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__clearedLevel100Achievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__totalScore100MillionAchievement, put=__set__totalScore100MillionAchievement))  _totalScore100MillionAchievement;

constexpr void __set__totalScore100MillionAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__totalScore100MillionAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__24HoursPlayedAchievement, put=__set__24HoursPlayedAchievement))  _24HoursPlayedAchievement;

constexpr void __set__24HoursPlayedAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__24HoursPlayedAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__kilometersTravelled100Achievement, put=__set__kilometersTravelled100Achievement))  _kilometersTravelled100Achievement;

constexpr void __set__kilometersTravelled100Achievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__kilometersTravelled100Achievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__15ExpertLevelsRankSAchievement, put=__set__15ExpertLevelsRankSAchievement))  _15ExpertLevelsRankSAchievement;

constexpr void __set__15ExpertLevelsRankSAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__15ExpertLevelsRankSAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__15ExpertLevelsFullComboAchievement, put=__set__15ExpertLevelsFullComboAchievement))  _15ExpertLevelsFullComboAchievement;

constexpr void __set__15ExpertLevelsFullComboAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__15ExpertLevelsFullComboAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__15HardLevelsRankSAchievement, put=__set__15HardLevelsRankSAchievement))  _15HardLevelsRankSAchievement;

constexpr void __set__15HardLevelsRankSAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__15HardLevelsRankSAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__15HardLevelsFullComboAchievement, put=__set__15HardLevelsFullComboAchievement))  _15HardLevelsFullComboAchievement;

constexpr void __set__15HardLevelsFullComboAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__15HardLevelsFullComboAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__expertLevelClearedWithoutModifiersAchievement, put=__set__expertLevelClearedWithoutModifiersAchievement))  _expertLevelClearedWithoutModifiersAchievement;

constexpr void __set__expertLevelClearedWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__expertLevelClearedWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__fullComboExpertWithoutModifiersAchievement, put=__set__fullComboExpertWithoutModifiersAchievement))  _fullComboExpertWithoutModifiersAchievement;

constexpr void __set__fullComboExpertWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__fullComboExpertWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__goodCuts10000Achievement, put=__set__goodCuts10000Achievement))  _goodCuts10000Achievement;

constexpr void __set__goodCuts10000Achievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__goodCuts10000Achievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__resultMinRankANormalWithoutModifiersAchievement, put=__set__resultMinRankANormalWithoutModifiersAchievement))  _resultMinRankANormalWithoutModifiersAchievement;

constexpr void __set__resultMinRankANormalWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__resultMinRankANormalWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__resultMinRankSHardWithoutModifiersAchievement, put=__set__resultMinRankSHardWithoutModifiersAchievement))  _resultMinRankSHardWithoutModifiersAchievement;

constexpr void __set__resultMinRankSHardWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__resultMinRankSHardWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__resultMinRankSSExpertWithoutModifiersAchievement, put=__set__resultMinRankSSExpertWithoutModifiersAchievement))  _resultMinRankSSExpertWithoutModifiersAchievement;

constexpr void __set__resultMinRankSSExpertWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__resultMinRankSSExpertWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__combo50NormalWithoutModifiersAchievement, put=__set__combo50NormalWithoutModifiersAchievement))  _combo50NormalWithoutModifiersAchievement;

constexpr void __set__combo50NormalWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__combo50NormalWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__combo100HardWithoutModifiersAchievement, put=__set__combo100HardWithoutModifiersAchievement))  _combo100HardWithoutModifiersAchievement;

constexpr void __set__combo100HardWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__combo100HardWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__combo500ExpertWithoutModifiersAchievement, put=__set__combo500ExpertWithoutModifiersAchievement))  _combo500ExpertWithoutModifiersAchievement;

constexpr void __set__combo500ExpertWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__combo500ExpertWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__clearedLevelWithoutModifiersAchievement, put=__set__clearedLevelWithoutModifiersAchievement))  _clearedLevelWithoutModifiersAchievement;

constexpr void __set__clearedLevelWithoutModifiersAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__clearedLevelWithoutModifiersAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__clearedLevelWithSongSpeedFasterModifierAchievement, put=__set__clearedLevelWithSongSpeedFasterModifierAchievement))  _clearedLevelWithSongSpeedFasterModifierAchievement;

constexpr void __set__clearedLevelWithSongSpeedFasterModifierAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__clearedLevelWithSongSpeedFasterModifierAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__clearedLevelWithInstaFailModifierAchievement, put=__set__clearedLevelWithInstaFailModifierAchievement))  _clearedLevelWithInstaFailModifierAchievement;

constexpr void __set__clearedLevelWithInstaFailModifierAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__clearedLevelWithInstaFailModifierAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__clearedLevelWithDisappearingArrowsModifierAchievement, put=__set__clearedLevelWithDisappearingArrowsModifierAchievement))  _clearedLevelWithDisappearingArrowsModifierAchievement;

constexpr void __set__clearedLevelWithDisappearingArrowsModifierAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__clearedLevelWithDisappearingArrowsModifierAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__clearedLevelWithBatteryEnergyModifierAchievement, put=__set__clearedLevelWithBatteryEnergyModifierAchievement))  _clearedLevelWithBatteryEnergyModifierAchievement;

constexpr void __set__clearedLevelWithBatteryEnergyModifierAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__clearedLevelWithBatteryEnergyModifierAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__cleared30MissionsAchievement, put=__set__cleared30MissionsAchievement))  _cleared30MissionsAchievement;

constexpr void __set__cleared30MissionsAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__cleared30MissionsAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__finalMissionClearedAchievement, put=__set__finalMissionClearedAchievement))  _finalMissionClearedAchievement;

constexpr void __set__finalMissionClearedAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__finalMissionClearedAchievement() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__allMissionClearedAchievement, put=__set__allMissionClearedAchievement))  _allMissionClearedAchievement;

constexpr void __set__allMissionClearedAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__allMissionClearedAchievement() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::MissionNodesManager __declspec(property(get=__get__missionNodesManager, put=__set__missionNodesManager))  _missionNodesManager;

constexpr void __set__missionNodesManager(GlobalNamespace::MissionNodesManager value) ;

constexpr GlobalNamespace::MissionNodesManager __get__missionNodesManager() const;


// Methods

/// @brief Method Start addr 0x20c59b8 size 0x17c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20c5ca8 size 0x1bc virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSoloFreePlayOverallStatsDataDidUpdate addr 0x20c5e64 size 0x38 virtual false final false
 void HandleSoloFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method HandlePartyFreePlayOverallStatsDataDidUpdate addr 0x20c6904 size 0x10 virtual false final false
 void HandlePartyFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method HandleCampaignOverallStatsDataDidUpdate addr 0x20c6914 size 0x74 virtual false final false
 void HandleCampaignOverallStatsDataDidUpdate(GlobalNamespace::MissionCompletionResults missionCompletionResults, GlobalNamespace::MissionNode missionNode) ;

/// @brief Method ProcessMissionFinishData addr 0x20c6988 size 0x220 virtual false final false
 void ProcessMissionFinishData(GlobalNamespace::MissionNode missionNode, GlobalNamespace::MissionCompletionResults missionCompletionResults) ;

/// @brief Method ProcessSoloFreePlayLevelFinishData addr 0x20c64f0 size 0x414 virtual false final false
 void ProcessSoloFreePlayLevelFinishData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

/// @brief Method ProcessLevelFinishData addr 0x20c5e9c size 0x654 virtual false final false
 void ProcessLevelFinishData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit AchievementsEvaluationHandler() ;

/// @brief Method .ctor addr 0x20c6d2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AchievementsEvaluationHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementsEvaluationHandler, "", "AchievementsEvaluationHandler");
