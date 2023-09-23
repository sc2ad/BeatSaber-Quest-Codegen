#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelFinishedController_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
//  Writing Method size for method: GlobalNamespace::StandardLevelFinishedController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x20d571c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelFinishedController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x20d580c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelFinishedController.HandleLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20d5914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelFinishedController.StartLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::StartLevelFinished)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20d5918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            "StartLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelFinishedController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d5958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelFinishedController::__set__standardLevelSceneSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO GlobalNamespace::StandardLevelFinishedController::__get__standardLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelFinishedController::__set__prepareLevelCompletionResults(GlobalNamespace::PrepareLevelCompletionResults value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PrepareLevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PrepareLevelCompletionResults>(value));
}
constexpr GlobalNamespace::PrepareLevelCompletionResults GlobalNamespace::StandardLevelFinishedController::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PrepareLevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelFinishedController::__set__gameplayManager(GlobalNamespace::ILevelEndActions value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ILevelEndActions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ILevelEndActions>(value));
}
constexpr GlobalNamespace::ILevelEndActions GlobalNamespace::StandardLevelFinishedController::__get__gameplayManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ILevelEndActions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::StandardLevelFinishedController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelFinishedController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelFinishedController::HandleLevelFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelFinishedController::StartLevelFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            "StartLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::StandardLevelFinishedController::StandardLevelFinishedController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<StandardLevelFinishedController>())) {}
 void GlobalNamespace::StandardLevelFinishedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelFinishedController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
