#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionLevelRestartController.RestartLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelRestartController::*)()>(&GlobalNamespace::MissionLevelRestartController::RestartLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20d4434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionLevelRestartController>::get(),
                            "RestartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionLevelRestartController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelRestartController::*)()>(&GlobalNamespace::MissionLevelRestartController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d44e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionLevelRestartController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ILevelRestartController
constexpr  GlobalNamespace::MissionLevelRestartController::operator GlobalNamespace::ILevelRestartController() const noexcept {
return GlobalNamespace::ILevelRestartController(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelRestartController::__set__missionLevelSceneSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO GlobalNamespace::MissionLevelRestartController::__get__missionLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelRestartController::__set__prepareLevelCompletionResults(GlobalNamespace::PrepareLevelCompletionResults value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PrepareLevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PrepareLevelCompletionResults>(value));
}
constexpr GlobalNamespace::PrepareLevelCompletionResults GlobalNamespace::MissionLevelRestartController::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PrepareLevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelRestartController::__set__missionObjectiveCheckersManager(GlobalNamespace::MissionObjectiveCheckersManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionObjectiveCheckersManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionObjectiveCheckersManager>(value));
}
constexpr GlobalNamespace::MissionObjectiveCheckersManager GlobalNamespace::MissionLevelRestartController::__get__missionObjectiveCheckersManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionObjectiveCheckersManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MissionLevelRestartController::RestartLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionLevelRestartController>::get(),
                            "RestartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MissionLevelRestartController GlobalNamespace::MissionLevelRestartController::New_ctor()  {
GlobalNamespace::MissionLevelRestartController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MissionLevelRestartController>())};
return o;
}
 void GlobalNamespace::MissionLevelRestartController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionLevelRestartController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
