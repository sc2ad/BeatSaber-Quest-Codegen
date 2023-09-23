#pragma once
#include "GlobalNamespace/zzzz__INoteControllerNoteDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: GlobalNamespace::INoteControllerNoteDidDissolveEvent.HandleNoteControllerNoteDidDissolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerNoteDidDissolveEvent::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::INoteControllerNoteDidDissolveEvent::HandleNoteControllerNoteDidDissolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INoteControllerNoteDidDissolveEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INoteControllerNoteDidDissolveEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::INoteControllerNoteDidDissolveEvent::HandleNoteControllerNoteDidDissolve(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INoteControllerNoteDidDissolveEvent>::get(),
                            "HandleNoteControllerNoteDidDissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
