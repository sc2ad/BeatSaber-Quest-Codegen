#pragma once
namespace {
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteDidStartJumpEvent.HandleNoteControllerNoteDidStartJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteControllerNoteDidStartJumpEvent::*)(::GlobalNamespace::NoteController)>(&::GlobalNamespace::INoteControllerNoteDidStartJumpEvent::HandleNoteControllerNoteDidStartJump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::INoteControllerNoteDidStartJumpEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::INoteControllerNoteDidStartJumpEvent::HandleNoteControllerNoteDidStartJump(::GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent>::get(),
                            "HandleNoteControllerNoteDidStartJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
} // end anonymous namespace
