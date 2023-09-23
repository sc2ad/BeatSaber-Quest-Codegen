#pragma once
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::BlurEvent.PreDispatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BlurEvent::*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::BlurEvent::PreDispatch)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cdac98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BlurEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BlurEvent>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BlurEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BlurEvent::*)()>(&UnityEngine::UIElements::BlurEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cdad14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BlurEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::BlurEvent::PreDispatch(UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BlurEvent>::get(),
                            "PreDispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panel);
}
// Ctor Parameters []
 UnityEngine::UIElements::BlurEvent::BlurEvent()  : UnityEngine::UIElements::FocusEventBase_1<UnityEngine::UIElements::BlurEvent>(THROW_UNLESS(::il2cpp_utils::New<BlurEvent>())) {}
 void UnityEngine::UIElements::BlurEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BlurEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
