#pragma once
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__NavigationCancelEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationCancelEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationCancelEvent::*)()>(&::UnityEngine::UIElements::NavigationCancelEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cdbeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationCancelEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::UIElements::NavigationCancelEvent::NavigationCancelEvent()  : ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationCancelEvent>(THROW_UNLESS(::il2cpp_utils::New<NavigationCancelEvent>())) {}
 void ::UnityEngine::UIElements::NavigationCancelEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationCancelEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
