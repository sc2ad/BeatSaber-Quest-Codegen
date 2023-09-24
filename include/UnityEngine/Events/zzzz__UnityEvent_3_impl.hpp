#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
constexpr void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::__set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> UnityEngine::Events::UnityEvent_3<T0,bool,T2>::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Events::UnityEvent_3<T0,bool,T2> UnityEngine::Events::UnityEvent_3<T0,bool,T2>::New_ctor()  {
UnityEngine::Events::UnityEvent_3<T0,bool,T2> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::UnityEvent_3<T0,bool,T2>>())};
return o;
}
 void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,bool,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::AddListener(UnityEngine::Events::UnityAction_3<T0,bool,T2> call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,bool,T2>>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,bool,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, call);
}
 void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::RemoveListener(UnityEngine::Events::UnityAction_3<T0,bool,T2> call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,bool,T2>>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,bool,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, call);
}
 System::Reflection::MethodInfo UnityEngine::Events::UnityEvent_3<T0,bool,T2>::FindMethod_Impl(::StringW name, System::Type targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,bool,T2>>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, targetObjType);
}
 UnityEngine::Events::BaseInvokableCall UnityEngine::Events::UnityEvent_3<T0,bool,T2>::GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,bool,T2>>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Events::BaseInvokableCall, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 UnityEngine::Events::BaseInvokableCall UnityEngine::Events::UnityEvent_3<T0,bool,T2>::GetDelegate(UnityEngine::Events::UnityAction_3<T0,bool,T2> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,bool,T2>>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,bool,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Events::BaseInvokableCall, false>(nullptr, ___internal_method, action);
}
 void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::Invoke(T0 arg0, bool arg1, T2 arg2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,bool,T2>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arg0, arg1, arg2);
}
constexpr void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::__set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> UnityEngine::Events::UnityEvent_3<T0,T1,T2>::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Events::UnityEvent_3<T0,T1,T2> UnityEngine::Events::UnityEvent_3<T0,T1,T2>::New_ctor()  {
UnityEngine::Events::UnityEvent_3<T0,T1,T2> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>())};
return o;
}
 void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::AddListener(UnityEngine::Events::UnityAction_3<T0,T1,T2> call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, call);
}
 void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::RemoveListener(UnityEngine::Events::UnityAction_3<T0,T1,T2> call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, call);
}
 System::Reflection::MethodInfo UnityEngine::Events::UnityEvent_3<T0,T1,T2>::FindMethod_Impl(::StringW name, System::Type targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, targetObjType);
}
 UnityEngine::Events::BaseInvokableCall UnityEngine::Events::UnityEvent_3<T0,T1,T2>::GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Events::BaseInvokableCall, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 UnityEngine::Events::BaseInvokableCall UnityEngine::Events::UnityEvent_3<T0,T1,T2>::GetDelegate(UnityEngine::Events::UnityAction_3<T0,T1,T2> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Events::BaseInvokableCall, false>(nullptr, ___internal_method, action);
}
 void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::Invoke(T0 arg0, T1 arg1, T2 arg2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arg0, arg1, arg2);
}
constexpr void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::__set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> UnityEngine::Events::UnityEvent_3<T0,T1,T2>::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Events::UnityEvent_3<T0,T1,T2> UnityEngine::Events::UnityEvent_3<T0,T1,T2>::New_ctor()  {
UnityEngine::Events::UnityEvent_3<T0,T1,T2> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>())};
return o;
}
 void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::AddListener(UnityEngine::Events::UnityAction_3<T0,T1,T2> call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, call);
}
 void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::RemoveListener(UnityEngine::Events::UnityAction_3<T0,T1,T2> call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, call);
}
 System::Reflection::MethodInfo UnityEngine::Events::UnityEvent_3<T0,T1,T2>::FindMethod_Impl(::StringW name, System::Type targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, targetObjType);
}
 UnityEngine::Events::BaseInvokableCall UnityEngine::Events::UnityEvent_3<T0,T1,T2>::GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Events::BaseInvokableCall, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 UnityEngine::Events::BaseInvokableCall UnityEngine::Events::UnityEvent_3<T0,T1,T2>::GetDelegate(UnityEngine::Events::UnityAction_3<T0,T1,T2> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T0,T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Events::BaseInvokableCall, false>(nullptr, ___internal_method, action);
}
 void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::Invoke(T0 arg0, T1 arg1, T2 arg2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEvent_3<T0,T1,T2>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arg0, arg1, arg2);
}
