#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_4_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_4_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: UnityEngine::Events::InvokableCall_4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCall_4::*)(::bs_hook::Il2CppWrapperType, System::Reflection::MethodInfo)>(&UnityEngine::Events::InvokableCall_4::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Events::InvokableCall_4.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCall_4::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::Events::InvokableCall_4::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Events::InvokableCall_4),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_4>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Events::InvokableCall_4.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Events::InvokableCall_4::*)(::bs_hook::Il2CppWrapperType, System::Reflection::MethodInfo)>(&UnityEngine::Events::InvokableCall_4::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Events::InvokableCall_4),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_4>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Events::InvokableCall_4::__set_Delegate(UnityEngine::Events::UnityAction_4<T1,T2,T3,T4> value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>>(value));
}
constexpr UnityEngine::Events::UnityAction_4<T1,T2,T3,T4> UnityEngine::Events::InvokableCall_4::__get_Delegate() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }]
 UnityEngine::Events::InvokableCall_4::InvokableCall_4(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  : UnityEngine::Events::BaseInvokableCall(THROW_UNLESS(::il2cpp_utils::New<InvokableCall_4>(target, theFunction))) {}
 void UnityEngine::Events::InvokableCall_4::_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 void UnityEngine::Events::InvokableCall_4::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_4>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 bool UnityEngine::Events::InvokableCall_4::Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_4>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, targetObj, method);
}
