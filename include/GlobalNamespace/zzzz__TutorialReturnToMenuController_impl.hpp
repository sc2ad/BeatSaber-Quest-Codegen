#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
//  Writing Method size for method: GlobalNamespace::TutorialReturnToMenuController.ReturnToMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialReturnToMenuController::*)()>(&GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20d5a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialReturnToMenuController>::get(),
                            "ReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialReturnToMenuController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialReturnToMenuController::*)()>(&GlobalNamespace::TutorialReturnToMenuController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d5a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialReturnToMenuController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IReturnToMenuController
constexpr  GlobalNamespace::TutorialReturnToMenuController::operator GlobalNamespace::IReturnToMenuController() const noexcept {
return GlobalNamespace::IReturnToMenuController(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialReturnToMenuController::__set__tutorialSceneSetupData(GlobalNamespace::TutorialScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TutorialScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::TutorialScenesTransitionSetupDataSO GlobalNamespace::TutorialReturnToMenuController::__get__tutorialSceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialReturnToMenuController>::get(),
                            "ReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::TutorialReturnToMenuController::TutorialReturnToMenuController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<TutorialReturnToMenuController>())) {}
 void GlobalNamespace::TutorialReturnToMenuController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialReturnToMenuController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
