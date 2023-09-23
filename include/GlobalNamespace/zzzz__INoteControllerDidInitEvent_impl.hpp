#pragma once
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
//  Writing Method size for method: GlobalNamespace::INoteControllerDidInitEvent.HandleNoteControllerDidInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerDidInitEvent::*)(GlobalNamespace::NoteControllerBase)>(&GlobalNamespace::INoteControllerDidInitEvent::HandleNoteControllerDidInit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INoteControllerDidInitEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INoteControllerDidInitEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::INoteControllerDidInitEvent::HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INoteControllerDidInitEvent>::get(),
                            "HandleNoteControllerDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteControllerBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
