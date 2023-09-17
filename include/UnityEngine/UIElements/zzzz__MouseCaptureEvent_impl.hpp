#pragma once
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__MouseCaptureEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MouseCaptureEvent::*)()>(&::UnityEngine::UIElements::MouseCaptureEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cd0b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::UIElements::MouseCaptureEvent::MouseCaptureEvent()  : ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent>(THROW_UNLESS(::il2cpp_utils::New<MouseCaptureEvent>())) {}
 void ::UnityEngine::UIElements::MouseCaptureEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
