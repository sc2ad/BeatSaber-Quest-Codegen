#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "BeatmapEditor3D/zzzz__BeatmapEditorStandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__CreditsScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCache_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::*)()>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d2de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0._HandleMainGameSceneDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::_HandleMainGameSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21d3854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0>::get(),
                            "<HandleMainGameSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::__set___4__this(GlobalNamespace::MenuTransitionsHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuTransitionsHelper>(value));
}
constexpr GlobalNamespace::MenuTransitionsHelper GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::__set_standardLevelScenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::__get_standardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::__set_levelCompletionResults(GlobalNamespace::LevelCompletionResults value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelCompletionResults>(value));
}
constexpr GlobalNamespace::LevelCompletionResults GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::__get_levelCompletionResults() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0::_HandleMainGameSceneDidFinish_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0>::get(),
                            "<HandleMainGameSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::*)()>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d2fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0._HandleMultiplayerLevelDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::_HandleMultiplayerLevelDidFinish_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21d388c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0>::get(),
                            "<HandleMultiplayerLevelDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::__set___4__this(GlobalNamespace::MenuTransitionsHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuTransitionsHelper>(value));
}
constexpr GlobalNamespace::MenuTransitionsHelper GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::__set_multiplayerLevelScenesTransitionSetupData(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::__get_multiplayerLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::__set_multiplayerResultsData(GlobalNamespace::MultiplayerResultsData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerResultsData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerResultsData>(value));
}
constexpr GlobalNamespace::MultiplayerResultsData GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::__get_multiplayerResultsData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerResultsData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0::_HandleMultiplayerLevelDidFinish_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0>::get(),
                            "<HandleMultiplayerLevelDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::*)()>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d3148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0._HandleMultiplayerLevelDidDisconnect_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::_HandleMultiplayerLevelDidDisconnect_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21d38c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0>::get(),
                            "<HandleMultiplayerLevelDidDisconnect>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::__set___4__this(GlobalNamespace::MenuTransitionsHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuTransitionsHelper>(value));
}
constexpr GlobalNamespace::MenuTransitionsHelper GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::__set_disconnectedReason(GlobalNamespace::DisconnectedReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DisconnectedReason, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DisconnectedReason>(value));
}
constexpr GlobalNamespace::DisconnectedReason GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::__get_disconnectedReason() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DisconnectedReason, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0::_HandleMultiplayerLevelDidDisconnect_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0>::get(),
                            "<HandleMultiplayerLevelDidDisconnect>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::*)()>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d3310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0._HandleMissionLevelSceneDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::_HandleMissionLevelSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21d38fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0>::get(),
                            "<HandleMissionLevelSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::__set___4__this(GlobalNamespace::MenuTransitionsHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuTransitionsHelper>(value));
}
constexpr GlobalNamespace::MenuTransitionsHelper GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::__set_missionLevelScenesTransitionSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::__get_missionLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::__set_missionCompletionResults(GlobalNamespace::MissionCompletionResults value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionCompletionResults>(value));
}
constexpr GlobalNamespace::MissionCompletionResults GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::__get_missionCompletionResults() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0::_HandleMissionLevelSceneDidFinish_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0>::get(),
                            "<HandleMissionLevelSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::*)()>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d345c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0._HandleTutorialSceneDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::_HandleTutorialSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21d3934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0>::get(),
                            "<HandleTutorialSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::__set_endState(GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::__get_endState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::__set___4__this(GlobalNamespace::MenuTransitionsHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuTransitionsHelper>(value));
}
constexpr GlobalNamespace::MenuTransitionsHelper GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::__set_tutorialSceneTransitionSetupData(GlobalNamespace::TutorialScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TutorialScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::TutorialScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::__get_tutorialSceneTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0::_HandleTutorialSceneDidFinish_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0>::get(),
                            "<HandleTutorialSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::*)()>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d3778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0._HandleBeatmapEditorGameSceneDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::_HandleBeatmapEditorGameSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21d3970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0>::get(),
                            "<HandleBeatmapEditorGameSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::__set___4__this(GlobalNamespace::MenuTransitionsHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuTransitionsHelper>(value));
}
constexpr GlobalNamespace::MenuTransitionsHelper GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::__set_beatmapEditorStandardLevelScenesTransitionSetupData(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>(value));
}
constexpr BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::__get_beatmapEditorStandardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::__set_levelCompletionResults(GlobalNamespace::LevelCompletionResults value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelCompletionResults>(value));
}
constexpr GlobalNamespace::LevelCompletionResults GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::__get_levelCompletionResults() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0 GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0::_HandleBeatmapEditorGameSceneDidFinish_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0>::get(),
                            "<HandleBeatmapEditorGameSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)()>(&GlobalNamespace::MenuTransitionsHelper::OnDestroy)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x21d0e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.StartStandardLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(::StringW, GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings, GlobalNamespace::ColorScheme, GlobalNamespace::ColorScheme, GlobalNamespace::GameplayModifiers, GlobalNamespace::PlayerSpecificSettings, GlobalNamespace::PracticeSettings, ::StringW, bool, bool, System::Action, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>, System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>)>(&GlobalNamespace::MenuTransitionsHelper::StartStandardLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21d11cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OverrideEnvironmentSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.StartStandardLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(::StringW, GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings, GlobalNamespace::ColorScheme, GlobalNamespace::ColorScheme, GlobalNamespace::GameplayModifiers, GlobalNamespace::PlayerSpecificSettings, GlobalNamespace::PracticeSettings, ::StringW, bool, bool, System::Action, System::Action_1<Zenject::DiContainer>, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>, System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>)>(&GlobalNamespace::MenuTransitionsHelper::StartStandardLevel)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x21d121c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OverrideEnvironmentSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.StartMissionLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(::StringW, GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::ColorScheme, GlobalNamespace::GameplayModifiers, ::ArrayW<GlobalNamespace::MissionObjective>, GlobalNamespace::PlayerSpecificSettings, System::Action, System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>, System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>)>(&GlobalNamespace::MenuTransitionsHelper::StartMissionLevel)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x21d1998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartMissionLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::MissionObjective>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.StartMultiplayerLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(::StringW, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO, GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::ColorScheme, GlobalNamespace::GameplayModifiers, GlobalNamespace::PlayerSpecificSettings, GlobalNamespace::PracticeSettings, ::StringW, bool, System::Action, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>, System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21d2034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.StartMultiplayerLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(::StringW, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO, GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::ColorScheme, GlobalNamespace::GameplayModifiers, GlobalNamespace::PlayerSpecificSettings, GlobalNamespace::PracticeSettings, ::StringW, bool, System::Action, System::Action_1<Zenject::DiContainer>, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>, System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x21d2070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.StartTutorial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::PlayerSpecificSettings, System::Action)>(&GlobalNamespace::MenuTransitionsHelper::StartTutorial)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x21d2694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartTutorial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.ShowCredits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)()>(&GlobalNamespace::MenuTransitionsHelper::ShowCredits)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21d2acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "ShowCredits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.StartBeatmapEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(System::Action)>(&GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21d2bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartBeatmapEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.StartBeatmapEditorStandardLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::GameplayModifiers, GlobalNamespace::PlayerSpecificSettings, GlobalNamespace::PracticeSettings, GlobalNamespace::ColorScheme, bool, System::Action, System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>)>(&GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditorStandardLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21d2bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartBeatmapEditorStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.RestartGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(System::Action_1<Zenject::DiContainer>)>(&GlobalNamespace::MenuTransitionsHelper::RestartGame)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x21d2bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "RestartGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.HandleMainGameSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, GlobalNamespace::LevelCompletionResults)>(&GlobalNamespace::MenuTransitionsHelper::HandleMainGameSceneDidFinish)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x21d2c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleMainGameSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.HandleMultiplayerLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, GlobalNamespace::MultiplayerResultsData)>(&GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x21d2de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleMultiplayerLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerResultsData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.HandleMultiplayerLevelDidDisconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x21d2fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleMultiplayerLevelDidDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.HandleMissionLevelSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, GlobalNamespace::MissionCompletionResults)>(&GlobalNamespace::MenuTransitionsHelper::HandleMissionLevelSceneDidFinish)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x21d3150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleMissionLevelSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.HandleTutorialSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::TutorialScenesTransitionSetupDataSO, GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType)>(&GlobalNamespace::MenuTransitionsHelper::HandleTutorialSceneDidFinish)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21d3318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleTutorialSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.HandleCreditsSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::CreditsScenesTransitionSetupDataSO)>(&GlobalNamespace::MenuTransitionsHelper::HandleCreditsSceneDidFinish)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21d3464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleCreditsSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CreditsScenesTransitionSetupDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.HandleBeatmapEditorSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO)>(&GlobalNamespace::MenuTransitionsHelper::HandleBeatmapEditorSceneDidFinish)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21d3514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleBeatmapEditorSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper.HandleBeatmapEditorGameSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, GlobalNamespace::LevelCompletionResults)>(&GlobalNamespace::MenuTransitionsHelper::HandleBeatmapEditorGameSceneDidFinish)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21d3644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleBeatmapEditorGameSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)()>(&GlobalNamespace::MenuTransitionsHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d3830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MenuTransitionsHelper._HandleBeatmapEditorSceneDidFinish_b__34_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::*)(Zenject::DiContainer)>(&GlobalNamespace::MenuTransitionsHelper::_HandleBeatmapEditorSceneDidFinish_b__34_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21d3838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "<HandleBeatmapEditorSceneDidFinish>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__appInitScenesTransitionSetupDataContainer(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>(value));
}
constexpr GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO GlobalNamespace::MenuTransitionsHelper::__get__appInitScenesTransitionSetupDataContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__standardLevelScenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO GlobalNamespace::MenuTransitionsHelper::__get__standardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__multiplayerLevelScenesTransitionSetupData(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO GlobalNamespace::MenuTransitionsHelper::__get__multiplayerLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__missionLevelScenesTransitionSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO GlobalNamespace::MenuTransitionsHelper::__get__missionLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__tutorialScenesTransitionSetupData(GlobalNamespace::TutorialScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TutorialScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::TutorialScenesTransitionSetupDataSO GlobalNamespace::MenuTransitionsHelper::__get__tutorialScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__creditsScenesTransitionSetupData(GlobalNamespace::CreditsScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CreditsScenesTransitionSetupDataSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::CreditsScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::CreditsScenesTransitionSetupDataSO GlobalNamespace::MenuTransitionsHelper::__get__creditsScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CreditsScenesTransitionSetupDataSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSettingsModelSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr GlobalNamespace::MainSettingsModelSO GlobalNamespace::MenuTransitionsHelper::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSettingsModelSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__gameScenesManager(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::MenuTransitionsHelper::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__beatmapDataCache(GlobalNamespace::BeatmapDataCache value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCache, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCache>(value));
}
constexpr GlobalNamespace::BeatmapDataCache GlobalNamespace::MenuTransitionsHelper::__get__beatmapDataCache() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCache, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__standardLevelFinishedCallback(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>(value));
}
constexpr System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> GlobalNamespace::MenuTransitionsHelper::__get__standardLevelFinishedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__standardLevelRestartedCallback(System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>(value));
}
constexpr System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> GlobalNamespace::MenuTransitionsHelper::__get__standardLevelRestartedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__multiplayerLevelFinishedCallback(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>(value));
}
constexpr System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> GlobalNamespace::MenuTransitionsHelper::__get__multiplayerLevelFinishedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__multiplayerDidDisconnectCallback(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::DisconnectedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::DisconnectedReason> GlobalNamespace::MenuTransitionsHelper::__get__multiplayerDidDisconnectCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__missionLevelFinishedCallback(System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>>(value));
}
constexpr System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults> GlobalNamespace::MenuTransitionsHelper::__get__missionLevelFinishedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__missionLevelRestartedCallback(System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>>(value));
}
constexpr System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults> GlobalNamespace::MenuTransitionsHelper::__get__missionLevelRestartedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__beatmapEditorFinishedCallback(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::MenuTransitionsHelper::__get__beatmapEditorFinishedCallback() const {
return ::cordl_internals::getInstanceField<System::Action, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__beatmapEditorGameplayLevelFinishedCallback(System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value)  {
::cordl_internals::setInstanceField<System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>(value));
}
constexpr System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> GlobalNamespace::MenuTransitionsHelper::__get__beatmapEditorGameplayLevelFinishedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MenuTransitionsHelper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MenuTransitionsHelper::StartStandardLevel(::StringW gameMode, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings, GlobalNamespace::ColorScheme overrideColorScheme, GlobalNamespace::ColorScheme beatmapOverrideColorScheme, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused, System::Action beforeSceneSwitchCallback, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> levelFinishedCallback, System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> levelRestartedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OverrideEnvironmentSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameMode, difficultyBeatmap, previewBeatmapLevel, overrideEnvironmentSettings, overrideColorScheme, beatmapOverrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, startPaused, beforeSceneSwitchCallback, levelFinishedCallback, levelRestartedCallback);
}
 void GlobalNamespace::MenuTransitionsHelper::StartStandardLevel(::StringW gameMode, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings, GlobalNamespace::ColorScheme overrideColorScheme, GlobalNamespace::ColorScheme beatmapOverrideColorScheme, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused, System::Action beforeSceneSwitchCallback, System::Action_1<Zenject::DiContainer> afterSceneSwitchCallback, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> levelFinishedCallback, System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> levelRestartedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OverrideEnvironmentSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::LevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameMode, difficultyBeatmap, previewBeatmapLevel, overrideEnvironmentSettings, overrideColorScheme, beatmapOverrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, startPaused, beforeSceneSwitchCallback, afterSceneSwitchCallback, levelFinishedCallback, levelRestartedCallback);
}
/// @param levelRestartedCallback: System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults> (default: csnull)
 void GlobalNamespace::MenuTransitionsHelper::StartMissionLevel(::StringW missionId, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::ColorScheme overrideColorScheme, GlobalNamespace::GameplayModifiers gameplayModifiers, ::ArrayW<GlobalNamespace::MissionObjective> missionObjectives, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, System::Action beforeSceneSwitchCallback, System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults> levelFinishedCallback, System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults> levelRestartedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartMissionLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::MissionObjective>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,GlobalNamespace::MissionCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionId, difficultyBeatmap, previewBeatmapLevel, overrideColorScheme, gameplayModifiers, missionObjectives, playerSpecificSettings, beforeSceneSwitchCallback, levelFinishedCallback, levelRestartedCallback);
}
 void GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel(::StringW gameMode, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::ColorScheme overrideColorScheme, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, System::Action beforeSceneSwitchCallback, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> levelFinishedCallback, System::Action_1<GlobalNamespace::DisconnectedReason> didDisconnectCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, beforeSceneSwitchCallback, levelFinishedCallback, didDisconnectCallback);
}
 void GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel(::StringW gameMode, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::ColorScheme overrideColorScheme, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, System::Action beforeSceneSwitchCallback, System::Action_1<Zenject::DiContainer> afterSceneSwitchCallback, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> levelFinishedCallback, System::Action_1<GlobalNamespace::DisconnectedReason> didDisconnectCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, beforeSceneSwitchCallback, afterSceneSwitchCallback, levelFinishedCallback, didDisconnectCallback);
}
/// @param beforeSceneSwitchCallback: System::Action (default: csnull)
 void GlobalNamespace::MenuTransitionsHelper::StartTutorial(GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, System::Action beforeSceneSwitchCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartTutorial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerSpecificSettings, beforeSceneSwitchCallback);
}
 void GlobalNamespace::MenuTransitionsHelper::ShowCredits()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "ShowCredits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditor(System::Action beatmapEditorFinishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartBeatmapEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEditorFinishedCallback);
}
 void GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditorStandardLevel(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, GlobalNamespace::ColorScheme colorScheme, bool useFirstPersonFlyingController, System::Action beforeSceneSwitchCallback, System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> levelFinishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "StartBeatmapEditorStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmap, previewBeatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, colorScheme, useFirstPersonFlyingController, beforeSceneSwitchCallback, levelFinishedCallback);
}
/// @param finishCallback: System::Action_1<Zenject::DiContainer> (default: csnull)
 void GlobalNamespace::MenuTransitionsHelper::RestartGame(System::Action_1<Zenject::DiContainer> finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "RestartGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, finishCallback);
}
 void GlobalNamespace::MenuTransitionsHelper::HandleMainGameSceneDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleMainGameSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
 void GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidFinish(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, GlobalNamespace::MultiplayerResultsData multiplayerResultsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleMultiplayerLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerResultsData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
 void GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidDisconnect(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleMultiplayerLevelDidDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerLevelScenesTransitionSetupData, disconnectedReason);
}
 void GlobalNamespace::MenuTransitionsHelper::HandleMissionLevelSceneDidFinish(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults missionCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleMissionLevelSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionLevelScenesTransitionSetupData, missionCompletionResults);
}
 void GlobalNamespace::MenuTransitionsHelper::HandleTutorialSceneDidFinish(GlobalNamespace::TutorialScenesTransitionSetupDataSO tutorialSceneTransitionSetupData, GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleTutorialSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tutorialSceneTransitionSetupData, endState);
}
 void GlobalNamespace::MenuTransitionsHelper::HandleCreditsSceneDidFinish(GlobalNamespace::CreditsScenesTransitionSetupDataSO creditsSceneTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleCreditsSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CreditsScenesTransitionSetupDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, creditsSceneTransitionSetupData);
}
 void GlobalNamespace::MenuTransitionsHelper::HandleBeatmapEditorSceneDidFinish(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO beatmapEditorScenesTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleBeatmapEditorSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEditorScenesTransitionSetupData);
}
 void GlobalNamespace::MenuTransitionsHelper::HandleBeatmapEditorGameSceneDidFinish(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO beatmapEditorStandardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "HandleBeatmapEditorGameSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEditorStandardLevelScenesTransitionSetupData, levelCompletionResults);
}
 GlobalNamespace::MenuTransitionsHelper GlobalNamespace::MenuTransitionsHelper::New_ctor()  {
GlobalNamespace::MenuTransitionsHelper o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MenuTransitionsHelper>())};
return o;
}
 void GlobalNamespace::MenuTransitionsHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MenuTransitionsHelper::_HandleBeatmapEditorSceneDidFinish_b__34_0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MenuTransitionsHelper>::get(),
                            "<HandleBeatmapEditorSceneDidFinish>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
