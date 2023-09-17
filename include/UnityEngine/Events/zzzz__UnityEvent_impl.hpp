#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
namespace {
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEvent::*)()>(&::UnityEngine::Events::UnityEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b81120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.AddListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEvent::*)(::UnityEngine::Events::UnityAction)>(&::UnityEngine::Events::UnityEvent::AddListener)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b81128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.RemoveListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEvent::*)(::UnityEngine::Events::UnityAction)>(&::UnityEngine::Events::UnityEvent::RemoveListener)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b811c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.FindMethod_Impl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo (::UnityEngine::Events::UnityEvent::*)(::StringW, ::System::Type)>(&::UnityEngine::Events::UnityEvent::FindMethod_Impl)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b81204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::UnityEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.GetDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::BaseInvokableCall (::UnityEngine::Events::UnityEvent::*)(::bs_hook::Il2CppWrapperType, ::System::Reflection::MethodInfo)>(&::UnityEngine::Events::UnityEvent::GetDelegate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2b81268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::UnityEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.GetDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::BaseInvokableCall (*)(::UnityEngine::Events::UnityAction)>(&::UnityEngine::Events::UnityEvent::GetDelegate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b81154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEvent::*)()>(&::UnityEngine::Events::UnityEvent::Invoke)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2b812d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Events::UnityEvent::__set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::UnityEngine::Events::UnityEvent::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::Events::UnityEvent::UnityEvent()  : ::UnityEngine::Events::UnityEventBase(THROW_UNLESS(::il2cpp_utils::New<UnityEvent>())) {}
 void ::UnityEngine::Events::UnityEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Events::UnityEvent::AddListener(::UnityEngine::Events::UnityAction call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, call);
}
 void ::UnityEngine::Events::UnityEvent::RemoveListener(::UnityEngine::Events::UnityAction call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, call);
}
 ::System::Reflection::MethodInfo ::UnityEngine::Events::UnityEvent::FindMethod_Impl(::StringW name, ::System::Type targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, targetObjType);
}
 ::UnityEngine::Events::BaseInvokableCall ::UnityEngine::Events::UnityEvent::GetDelegate(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 ::UnityEngine::Events::BaseInvokableCall ::UnityEngine::Events::UnityEvent::GetDelegate(::UnityEngine::Events::UnityAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall, false>(nullptr, ___internal_method, action);
}
 void ::UnityEngine::Events::UnityEvent::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
