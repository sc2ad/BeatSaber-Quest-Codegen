#pragma once
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderNoteDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
//  Writing Method size for method: GlobalNamespace::BurstSliderNoteDisappearingArrowController.get_gameNoteController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BurstSliderGameNoteController (GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(&GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223afa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BurstSliderNoteDisappearingArrowController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BurstSliderNoteDisappearingArrowController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BurstSliderNoteDisappearingArrowController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(&GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x223afb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BurstSliderNoteDisappearingArrowController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BurstSliderNoteDisappearingArrowController::__set__burstSliderNoteController(GlobalNamespace::BurstSliderGameNoteController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BurstSliderGameNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BurstSliderGameNoteController>(value));
}
constexpr GlobalNamespace::BurstSliderGameNoteController GlobalNamespace::BurstSliderNoteDisappearingArrowController::__get__burstSliderNoteController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BurstSliderGameNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::BurstSliderGameNoteController GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BurstSliderNoteDisappearingArrowController>::get(),
                            "get_gameNoteController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BurstSliderGameNoteController, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BurstSliderNoteDisappearingArrowController GlobalNamespace::BurstSliderNoteDisappearingArrowController::New_ctor()  {
GlobalNamespace::BurstSliderNoteDisappearingArrowController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BurstSliderNoteDisappearingArrowController>())};
return o;
}
 void GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BurstSliderNoteDisappearingArrowController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
