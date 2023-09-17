#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TutorialRestartController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialRestartController.RestartLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialRestartController::*)()>(&::GlobalNamespace::TutorialRestartController::RestartLevel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20d59f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialRestartController>::get(),
                            "RestartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialRestartController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialRestartController::*)()>(&::GlobalNamespace::TutorialRestartController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d5a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialRestartController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::ILevelRestartController
constexpr  ::GlobalNamespace::TutorialRestartController::operator ::GlobalNamespace::ILevelRestartController() const noexcept {
return ::GlobalNamespace::ILevelRestartController(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TutorialRestartController::__set__tutorialSceneSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO ::GlobalNamespace::TutorialRestartController::__get__tutorialSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::TutorialRestartController::RestartLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialRestartController>::get(),
                            "RestartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::TutorialRestartController::TutorialRestartController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<TutorialRestartController>())) {}
 void ::GlobalNamespace::TutorialRestartController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialRestartController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
