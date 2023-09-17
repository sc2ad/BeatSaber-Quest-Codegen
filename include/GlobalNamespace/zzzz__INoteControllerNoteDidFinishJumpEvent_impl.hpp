#pragma once
namespace {
#include "GlobalNamespace/zzzz__INoteControllerNoteDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent.HandleNoteControllerNoteDidFinishJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent::*)(::GlobalNamespace::NoteController)>(&::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent::HandleNoteControllerNoteDidFinishJump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent::HandleNoteControllerNoteDidFinishJump(::GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent>::get(),
                            "HandleNoteControllerNoteDidFinishJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
} // end anonymous namespace
