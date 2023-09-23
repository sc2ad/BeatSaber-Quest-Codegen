#pragma once
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseOverEvent_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::MouseOverEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MouseOverEvent::*)()>(&UnityEngine::UIElements::MouseOverEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cda900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseOverEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UIElements::MouseOverEvent::MouseOverEvent()  : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseOverEvent>(THROW_UNLESS(::il2cpp_utils::New<MouseOverEvent>())) {}
 void UnityEngine::UIElements::MouseOverEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseOverEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
