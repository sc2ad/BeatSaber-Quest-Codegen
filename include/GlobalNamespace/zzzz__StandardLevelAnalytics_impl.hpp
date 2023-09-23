#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelAnalytics_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::StandardLevelAnalytics.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelAnalytics::*)()>(&GlobalNamespace::StandardLevelAnalytics::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20b3250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelAnalytics>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelAnalytics.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelAnalytics::*)()>(&GlobalNamespace::StandardLevelAnalytics::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20b32dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelAnalytics>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelAnalytics.HandleStandardLevelDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelAnalytics::*)(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, GlobalNamespace::LevelCompletionResults)>(&GlobalNamespace::StandardLevelAnalytics::HandleStandardLevelDidFinishEvent)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x20b3368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelAnalytics>::get(),
                            "HandleStandardLevelDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelAnalytics._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelAnalytics::*)()>(&GlobalNamespace::StandardLevelAnalytics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20b39ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelAnalytics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelAnalytics::__set__standardLevelScenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO GlobalNamespace::StandardLevelAnalytics::__get__standardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelAnalytics::__set__analyticsModel(GlobalNamespace::IAnalyticsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAnalyticsModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAnalyticsModel>(value));
}
constexpr GlobalNamespace::IAnalyticsModel GlobalNamespace::StandardLevelAnalytics::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAnalyticsModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::StandardLevelAnalytics::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelAnalytics>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelAnalytics::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelAnalytics>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelAnalytics::HandleStandardLevelDidFinishEvent(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelAnalytics>::get(),
                            "HandleStandardLevelDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
// Ctor Parameters []
 GlobalNamespace::StandardLevelAnalytics::StandardLevelAnalytics()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<StandardLevelAnalytics>())) {}
 void GlobalNamespace::StandardLevelAnalytics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelAnalytics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
