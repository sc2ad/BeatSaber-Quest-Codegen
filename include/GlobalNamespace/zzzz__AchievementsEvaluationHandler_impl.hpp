#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AchievementsEvaluationHandler_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)()>(&GlobalNamespace::AchievementsEvaluationHandler::Start)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x20c59b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)()>(&GlobalNamespace::AchievementsEvaluationHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x20c5ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler.HandleSoloFreePlayOverallStatsDataDidUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(GlobalNamespace::LevelCompletionResults, GlobalNamespace::IDifficultyBeatmap)>(&GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x20c5e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "HandleSoloFreePlayOverallStatsDataDidUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler.HandlePartyFreePlayOverallStatsDataDidUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(GlobalNamespace::LevelCompletionResults, GlobalNamespace::IDifficultyBeatmap)>(&GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20c6904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "HandlePartyFreePlayOverallStatsDataDidUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler.HandleCampaignOverallStatsDataDidUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(GlobalNamespace::MissionCompletionResults, GlobalNamespace::MissionNode)>(&GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x20c6914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "HandleCampaignOverallStatsDataDidUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler.ProcessMissionFinishData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(GlobalNamespace::MissionNode, GlobalNamespace::MissionCompletionResults)>(&GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x20c6988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "ProcessMissionFinishData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler.ProcessSoloFreePlayLevelFinishData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::LevelCompletionResults)>(&GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x20c64f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "ProcessSoloFreePlayLevelFinishData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler.ProcessLevelFinishData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::LevelCompletionResults)>(&GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x20c5e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "ProcessLevelFinishData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementsEvaluationHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)()>(&GlobalNamespace::AchievementsEvaluationHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c6d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__achievementsModel(GlobalNamespace::AchievementsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementsModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementsModelSO>(value));
}
constexpr GlobalNamespace::AchievementsModelSO GlobalNamespace::AchievementsEvaluationHandler::__get__achievementsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementsModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevel100Achievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevel100Achievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__totalScore100MillionAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__totalScore100MillionAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__24HoursPlayedAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__24HoursPlayedAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__kilometersTravelled100Achievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__kilometersTravelled100Achievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__15ExpertLevelsRankSAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__15ExpertLevelsRankSAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__15ExpertLevelsFullComboAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__15ExpertLevelsFullComboAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__15HardLevelsRankSAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__15HardLevelsRankSAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__15HardLevelsFullComboAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__15HardLevelsFullComboAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__expertLevelClearedWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__expertLevelClearedWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__fullComboExpertWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__fullComboExpertWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__goodCuts10000Achievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__goodCuts10000Achievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__resultMinRankANormalWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankANormalWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__resultMinRankSHardWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankSHardWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__resultMinRankSSExpertWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankSSExpertWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__combo50NormalWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__combo50NormalWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__combo100HardWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__combo100HardWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__combo500ExpertWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__combo500ExpertWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithoutModifiersAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithoutModifiersAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithSongSpeedFasterModifierAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithSongSpeedFasterModifierAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithInstaFailModifierAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithInstaFailModifierAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithDisappearingArrowsModifierAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithDisappearingArrowsModifierAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithBatteryEnergyModifierAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithBatteryEnergyModifierAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__cleared30MissionsAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__cleared30MissionsAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__finalMissionClearedAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__finalMissionClearedAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__allMissionClearedAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::AchievementsEvaluationHandler::__get__allMissionClearedAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::AchievementsEvaluationHandler::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__missionNodesManager(GlobalNamespace::MissionNodesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionNodesManager, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionNodesManager>(value));
}
constexpr GlobalNamespace::MissionNodesManager GlobalNamespace::AchievementsEvaluationHandler::__get__missionNodesManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionNodesManager, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::AchievementsEvaluationHandler::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AchievementsEvaluationHandler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "HandleSoloFreePlayOverallStatsDataDidUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, difficultyBeatmap);
}
 void GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "HandlePartyFreePlayOverallStatsDataDidUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, difficultyBeatmap);
}
 void GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate(GlobalNamespace::MissionCompletionResults missionCompletionResults, GlobalNamespace::MissionNode missionNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "HandleCampaignOverallStatsDataDidUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionCompletionResults, missionNode);
}
 void GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData(GlobalNamespace::MissionNode missionNode, GlobalNamespace::MissionCompletionResults missionCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "ProcessMissionFinishData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionNode, missionCompletionResults);
}
 void GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::LevelCompletionResults levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "ProcessSoloFreePlayLevelFinishData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmap, levelCompletionResults);
}
 void GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::LevelCompletionResults levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            "ProcessLevelFinishData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmap, levelCompletionResults);
}
// Ctor Parameters []
 GlobalNamespace::AchievementsEvaluationHandler::AchievementsEvaluationHandler()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<AchievementsEvaluationHandler>())) {}
 void GlobalNamespace::AchievementsEvaluationHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementsEvaluationHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
