#pragma once
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
//  Writing Method size for method: GlobalNamespace::DisappearingArrowController.get_gameNoteController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameNoteController (GlobalNamespace::DisappearingArrowController::*)()>(&GlobalNamespace::DisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b86c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::DisappearingArrowController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisappearingArrowController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DisappearingArrowController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisappearingArrowController::*)()>(&GlobalNamespace::DisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x223b874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisappearingArrowController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisappearingArrowController::__set__gameNoteController(GlobalNamespace::GameNoteController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameNoteController>(value));
}
constexpr GlobalNamespace::GameNoteController GlobalNamespace::DisappearingArrowController::__get__gameNoteController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GameNoteController GlobalNamespace::DisappearingArrowController::get_gameNoteController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisappearingArrowController>::get(),
                            "get_gameNoteController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameNoteController, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::DisappearingArrowController::DisappearingArrowController()  : GlobalNamespace::DisappearingArrowControllerBase_1<GlobalNamespace::GameNoteController>(THROW_UNLESS(::il2cpp_utils::New<DisappearingArrowController>())) {}
 void GlobalNamespace::DisappearingArrowController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisappearingArrowController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
