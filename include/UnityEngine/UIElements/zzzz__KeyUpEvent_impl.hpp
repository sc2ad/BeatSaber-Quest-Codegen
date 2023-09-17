#pragma once
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__KeyUpEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyUpEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyUpEvent::*)()>(&::UnityEngine::UIElements::KeyUpEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cdb8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyUpEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::UIElements::KeyUpEvent::KeyUpEvent()  : ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyUpEvent>(THROW_UNLESS(::il2cpp_utils::New<KeyUpEvent>())) {}
 void ::UnityEngine::UIElements::KeyUpEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyUpEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
