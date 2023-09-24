#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
constexpr void UnityEngine::Events::UnityEvent_2<T0,T1>::__set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> UnityEngine::Events::UnityEvent_2<T0,T1>::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Events::UnityEvent_2<T0,T1> UnityEngine::Events::UnityEvent_2<T0,T1>::New_ctor()  {
UnityEngine::Events::UnityEvent_2<T0,T1> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::UnityEvent_2<T0,T1>>())};
return o;
}
 void UnityEngine::Events::UnityEvent_2<T0,T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2<T0,T1>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodInfo UnityEngine::Events::UnityEvent_2<T0,T1>::FindMethod_Impl(::StringW name, System::Type targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2<T0,T1>>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, targetObjType);
}
 UnityEngine::Events::BaseInvokableCall UnityEngine::Events::UnityEvent_2<T0,T1>::GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_2<T0,T1>>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Events::BaseInvokableCall, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
