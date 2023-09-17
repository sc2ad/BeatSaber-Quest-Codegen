#pragma once
namespace {
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent.HandleNoteControllerNoteDidStartDissolving
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::*)(::GlobalNamespace::NoteControllerBase, float_t)>(&::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::HandleNoteControllerNoteDidStartDissolving)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase noteController, float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent>::get(),
                            "HandleNoteControllerNoteDidStartDissolving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, duration);
}
} // end anonymous namespace
