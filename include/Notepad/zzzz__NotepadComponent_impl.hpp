#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Notepad/zzzz__NotepadComponent_def.hpp"
//  Writing Method size for method: Notepad::NotepadComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Notepad::NotepadComponent::*)()>(&Notepad::NotepadComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2551ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Notepad::NotepadComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Notepad::NotepadComponent::NotepadComponent()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<NotepadComponent>())) {}
 void Notepad::NotepadComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Notepad::NotepadComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
