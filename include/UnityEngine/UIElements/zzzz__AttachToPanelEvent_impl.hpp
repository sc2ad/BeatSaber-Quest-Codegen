#pragma once
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::AttachToPanelEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AttachToPanelEvent::*)()>(&UnityEngine::UIElements::AttachToPanelEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cdb924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::AttachToPanelEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UIElements::AttachToPanelEvent::AttachToPanelEvent()  : UnityEngine::UIElements::PanelChangedEventBase_1<UnityEngine::UIElements::AttachToPanelEvent>(THROW_UNLESS(::il2cpp_utils::New<AttachToPanelEvent>())) {}
 void UnityEngine::UIElements::AttachToPanelEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::AttachToPanelEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
