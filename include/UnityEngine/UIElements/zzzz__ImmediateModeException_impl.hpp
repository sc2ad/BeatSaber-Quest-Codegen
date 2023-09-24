#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ImmediateModeException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::ImmediateModeException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ImmediateModeException::*)(System::Exception)>(&UnityEngine::UIElements::ImmediateModeException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c4f418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ImmediateModeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::ImmediateModeException UnityEngine::UIElements::ImmediateModeException::New_ctor(System::Exception inner)  {
UnityEngine::UIElements::ImmediateModeException o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::ImmediateModeException>(inner))};
return o;
}
 void UnityEngine::UIElements::ImmediateModeException::_ctor(System::Exception inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ImmediateModeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inner);
}
