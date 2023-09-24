#pragma once
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
//  Writing Method size for method: GlobalNamespace::MirroredDisappearingArrowController.get_gameNoteController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MirroredGameNoteController (GlobalNamespace::MirroredDisappearingArrowController::*)()>(&GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223d544;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MirroredDisappearingArrowController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredDisappearingArrowController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirroredDisappearingArrowController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredDisappearingArrowController::*)()>(&GlobalNamespace::MirroredDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x223d54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredDisappearingArrowController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MirroredDisappearingArrowController::__set__mirroredGameNoteController(GlobalNamespace::MirroredGameNoteController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MirroredGameNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MirroredGameNoteController>(value));
}
constexpr GlobalNamespace::MirroredGameNoteController GlobalNamespace::MirroredDisappearingArrowController::__get__mirroredGameNoteController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MirroredGameNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MirroredGameNoteController GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredDisappearingArrowController>::get(),
                            "get_gameNoteController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MirroredGameNoteController, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MirroredDisappearingArrowController GlobalNamespace::MirroredDisappearingArrowController::New_ctor()  {
GlobalNamespace::MirroredDisappearingArrowController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MirroredDisappearingArrowController>())};
return o;
}
 void GlobalNamespace::MirroredDisappearingArrowController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredDisappearingArrowController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
