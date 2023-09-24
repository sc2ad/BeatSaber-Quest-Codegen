#pragma once
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::DetachFromPanelEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DetachFromPanelEvent::*)()>(&UnityEngine::UIElements::DetachFromPanelEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cdb96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DetachFromPanelEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::DetachFromPanelEvent UnityEngine::UIElements::DetachFromPanelEvent::New_ctor()  {
UnityEngine::UIElements::DetachFromPanelEvent o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::DetachFromPanelEvent>())};
return o;
}
 void UnityEngine::UIElements::DetachFromPanelEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DetachFromPanelEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
