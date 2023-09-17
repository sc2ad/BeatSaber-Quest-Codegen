#pragma once
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctor_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackPhase_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctor_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackFunctor_1::*)(::UnityEngine::UIElements::EventCallback_1<TEventType>, ::UnityEngine::UIElements::CallbackPhase, ::UnityEngine::UIElements::InvokePolicy)>(&::UnityEngine::UIElements::EventCallbackFunctor_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_1<TEventType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CallbackPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctor_1.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackFunctor_1::*)(::UnityEngine::UIElements::EventBase, ::UnityEngine::UIElements::PropagationPhase)>(&::UnityEngine::UIElements::EventCallbackFunctor_1::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::EventCallbackFunctor_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctor_1.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventCallbackFunctor_1::*)(int64_t, ::System::Delegate, ::UnityEngine::UIElements::CallbackPhase)>(&::UnityEngine::UIElements::EventCallbackFunctor_1::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::EventCallbackFunctor_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::EventCallbackFunctor_1::__set_m_Callback(::UnityEngine::UIElements::EventCallback_1<TEventType> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::EventCallback_1<TEventType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::EventCallback_1<TEventType>>(value));
}
constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType> ::UnityEngine::UIElements::EventCallbackFunctor_1::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::EventCallback_1<TEventType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::EventCallbackFunctor_1::__set_m_EventTypeId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::UIElements::EventCallbackFunctor_1::__get_m_EventTypeId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "callback", ty: "::UnityEngine::UIElements::EventCallback_1<TEventType>", modifiers: "", def_value: None }, CppParam { name: "phase", ty: "::UnityEngine::UIElements::CallbackPhase", modifiers: "", def_value: None }, CppParam { name: "invokePolicy", ty: "::UnityEngine::UIElements::InvokePolicy", modifiers: "", def_value: Some("0") }]
 ::UnityEngine::UIElements::EventCallbackFunctor_1::EventCallbackFunctor_1(::UnityEngine::UIElements::EventCallback_1<TEventType> callback, ::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy)  : ::UnityEngine::UIElements::EventCallbackFunctorBase(THROW_UNLESS(::il2cpp_utils::New<EventCallbackFunctor_1>(callback, phase, invokePolicy))) {}
/// @param invokePolicy: ::UnityEngine::UIElements::InvokePolicy (default: 0)
 void ::UnityEngine::UIElements::EventCallbackFunctor_1::_ctor(::UnityEngine::UIElements::EventCallback_1<TEventType> callback, ::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_1<TEventType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CallbackPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, phase, invokePolicy);
}
 void ::UnityEngine::UIElements::EventCallbackFunctor_1::Invoke(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, propagationPhase);
}
 bool ::UnityEngine::UIElements::EventCallbackFunctor_1::IsEquivalentTo(int64_t eventTypeId, ::System::Delegate callback, ::UnityEngine::UIElements::CallbackPhase phase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CallbackPhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eventTypeId, callback, phase);
}
} // end anonymous namespace
