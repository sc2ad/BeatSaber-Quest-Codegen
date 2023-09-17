#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MissionLevelFinishedController_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFinishedController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFinishedController::*)()>(&::GlobalNamespace::MissionLevelFinishedController::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x20d4180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFinishedController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFinishedController::*)()>(&::GlobalNamespace::MissionLevelFinishedController::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x20d4270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFinishedController.HandleLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFinishedController::*)()>(&::GlobalNamespace::MissionLevelFinishedController::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20d4378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFinishedController.StartLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFinishedController::*)()>(&::GlobalNamespace::MissionLevelFinishedController::StartLevelFinished)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20d437c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            "StartLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFinishedController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFinishedController::*)()>(&::GlobalNamespace::MissionLevelFinishedController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d442c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MissionLevelFinishedController::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrepareLevelCompletionResults, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PrepareLevelCompletionResults>(value));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults ::GlobalNamespace::MissionLevelFinishedController::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelFinishedController::__set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO ::GlobalNamespace::MissionLevelFinishedController::__get__missionLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelFinishedController::__set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionObjectiveCheckersManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MissionObjectiveCheckersManager>(value));
}
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager ::GlobalNamespace::MissionLevelFinishedController::__get__missionObjectiveCheckersManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveCheckersManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelFinishedController::__set__gameplayManager(::GlobalNamespace::ILevelEndActions value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILevelEndActions, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ILevelEndActions>(value));
}
constexpr ::GlobalNamespace::ILevelEndActions ::GlobalNamespace::MissionLevelFinishedController::__get__gameplayManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelEndActions, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MissionLevelFinishedController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionLevelFinishedController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionLevelFinishedController::HandleLevelFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionLevelFinishedController::StartLevelFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            "StartLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MissionLevelFinishedController::MissionLevelFinishedController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MissionLevelFinishedController>())) {}
 void ::GlobalNamespace::MissionLevelFinishedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFinishedController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
