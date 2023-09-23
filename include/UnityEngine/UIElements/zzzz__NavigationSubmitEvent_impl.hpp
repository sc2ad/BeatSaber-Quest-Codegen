#pragma once
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationSubmitEvent_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::NavigationSubmitEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::NavigationSubmitEvent::*)()>(&UnityEngine::UIElements::NavigationSubmitEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cdbef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationSubmitEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UIElements::NavigationSubmitEvent::NavigationSubmitEvent()  : UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationSubmitEvent>(THROW_UNLESS(::il2cpp_utils::New<NavigationSubmitEvent>())) {}
 void UnityEngine::UIElements::NavigationSubmitEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationSubmitEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
