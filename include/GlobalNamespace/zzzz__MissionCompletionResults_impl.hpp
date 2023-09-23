#pragma once
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveResult_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionCompletionResults.get_IsMissionComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionCompletionResults::*)()>(&GlobalNamespace::MissionCompletionResults::get_IsMissionComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f08fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionCompletionResults>::get(),
                            "get_IsMissionComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionCompletionResults::*)(GlobalNamespace::LevelCompletionResults, ::ArrayW<GlobalNamespace::MissionObjectiveResult>)>(&GlobalNamespace::MissionCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21f0964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::MissionObjectiveResult>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionCompletionResults::__set_levelCompletionResults(GlobalNamespace::LevelCompletionResults value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelCompletionResults, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelCompletionResults>(value));
}
constexpr GlobalNamespace::LevelCompletionResults GlobalNamespace::MissionCompletionResults::__get_levelCompletionResults() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelCompletionResults, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionCompletionResults::__set_missionObjectiveResults(::ArrayW<GlobalNamespace::MissionObjectiveResult> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::MissionObjectiveResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::MissionObjectiveResult>>(value));
}
constexpr ::ArrayW<GlobalNamespace::MissionObjectiveResult> GlobalNamespace::MissionCompletionResults::__get_missionObjectiveResults() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::MissionObjectiveResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::MissionCompletionResults::get_IsMissionComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionCompletionResults>::get(),
                            "get_IsMissionComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "levelCompletionResults", ty: "GlobalNamespace::LevelCompletionResults", modifiers: "", def_value: None }, CppParam { name: "missionObjectiveResults", ty: "::ArrayW<GlobalNamespace::MissionObjectiveResult>", modifiers: "", def_value: None }]
 GlobalNamespace::MissionCompletionResults::MissionCompletionResults(GlobalNamespace::LevelCompletionResults levelCompletionResults, ::ArrayW<GlobalNamespace::MissionObjectiveResult> missionObjectiveResults)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MissionCompletionResults>(levelCompletionResults, missionObjectiveResults))) {}
 void GlobalNamespace::MissionCompletionResults::_ctor(GlobalNamespace::LevelCompletionResults levelCompletionResults, ::ArrayW<GlobalNamespace::MissionObjectiveResult> missionObjectiveResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::MissionObjectiveResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, missionObjectiveResults);
}
