#pragma once
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController.get_gameNoteController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController (GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e215c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x20e2164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__set__gameNoteController(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>(value));
}
constexpr GlobalNamespace::MultiplayerConnectedPlayerGameNoteController GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__get__gameNoteController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MultiplayerConnectedPlayerGameNoteController GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController>::get(),
                            "get_gameNoteController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::MultiplayerConnectedPlayerDisappearingArrowController()  : GlobalNamespace::DisappearingArrowControllerBase_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>(THROW_UNLESS(::il2cpp_utils::New<MultiplayerConnectedPlayerDisappearingArrowController>())) {}
 void GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
