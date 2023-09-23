#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: UnityEngine::Events::UnityEvent_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEvent_2::*)()>(&UnityEngine::Events::UnityEvent_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Events::UnityEvent_2.FindMethod_Impl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (UnityEngine::Events::UnityEvent_2::*)(::StringW, System::Type)>(&UnityEngine::Events::UnityEvent_2::FindMethod_Impl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Events::UnityEvent_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Events::UnityEvent_2.GetDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::BaseInvokableCall (UnityEngine::Events::UnityEvent_2::*)(::bs_hook::Il2CppWrapperType, System::Reflection::MethodInfo)>(&UnityEngine::Events::UnityEvent_2::GetDelegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Events::UnityEvent_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Events::UnityEvent_2::__set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> UnityEngine::Events::UnityEvent_2::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::Events::UnityEvent_2::UnityEvent_2()  : UnityEngine::Events::UnityEventBase(THROW_UNLESS(::il2cpp_utils::New<UnityEvent_2>())) {}
 void UnityEngine::Events::UnityEvent_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodInfo UnityEngine::Events::UnityEvent_2::FindMethod_Impl(::StringW name, System::Type targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, targetObjType);
}
 UnityEngine::Events::BaseInvokableCall UnityEngine::Events::UnityEvent_2::GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Events::BaseInvokableCall, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
