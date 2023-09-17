#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__StandardLevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelRestartController.RestartLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelRestartController::*)()>(&::GlobalNamespace::StandardLevelRestartController::RestartLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20d5960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelRestartController>::get(),
                            "RestartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelRestartController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelRestartController::*)()>(&::GlobalNamespace::StandardLevelRestartController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d59a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelRestartController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::ILevelRestartController
constexpr  ::GlobalNamespace::StandardLevelRestartController::operator ::GlobalNamespace::ILevelRestartController() const noexcept {
return ::GlobalNamespace::ILevelRestartController(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelRestartController::__set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO ::GlobalNamespace::StandardLevelRestartController::__get__standardLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::StandardLevelRestartController::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrepareLevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PrepareLevelCompletionResults>(value));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults ::GlobalNamespace::StandardLevelRestartController::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::StandardLevelRestartController::RestartLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelRestartController>::get(),
                            "RestartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::StandardLevelRestartController::StandardLevelRestartController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<StandardLevelRestartController>())) {}
 void ::GlobalNamespace::StandardLevelRestartController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelRestartController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
