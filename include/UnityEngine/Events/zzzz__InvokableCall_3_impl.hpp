#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
constexpr void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::__set_Delegate(UnityEngine::Events::UnityAction_3<T1,bool,T3> value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityAction_3<T1,bool,T3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityAction_3<T1,bool,T3>>(value));
}
constexpr UnityEngine::Events::UnityAction_3<T1,bool,T3> UnityEngine::Events::InvokableCall_3<T1,bool,T3>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityAction_3<T1,bool,T3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::add_Delegate(UnityEngine::Events::UnityAction_3<T1,bool,T3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,bool,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::remove_Delegate(UnityEngine::Events::UnityAction_3<T1,bool,T3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,bool,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Events::InvokableCall_3<T1,bool,T3> UnityEngine::Events::InvokableCall_3<T1,bool,T3>::New_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
UnityEngine::Events::InvokableCall_3<T1,bool,T3> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>(target, theFunction))};
return o;
}
 void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 UnityEngine::Events::InvokableCall_3<T1,bool,T3> UnityEngine::Events::InvokableCall_3<T1,bool,T3>::New_ctor(UnityEngine::Events::UnityAction_3<T1,bool,T3> action)  {
UnityEngine::Events::InvokableCall_3<T1,bool,T3> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>(action))};
return o;
}
 void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::_ctor(UnityEngine::Events::UnityAction_3<T1,bool,T3> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,bool,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::Invoke(T1 args0, bool args1, T3 args2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args0, args1, args2);
}
 bool UnityEngine::Events::InvokableCall_3<T1,bool,T3>::Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,bool,T3>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, targetObj, method);
}
constexpr void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::__set_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityAction_3<T1,T2,T3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityAction_3<T1,T2,T3>>(value));
}
constexpr UnityEngine::Events::UnityAction_3<T1,T2,T3> UnityEngine::Events::InvokableCall_3<T1,T2,T3>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityAction_3<T1,T2,T3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::add_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::remove_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Events::InvokableCall_3<T1,T2,T3> UnityEngine::Events::InvokableCall_3<T1,T2,T3>::New_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
UnityEngine::Events::InvokableCall_3<T1,T2,T3> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>(target, theFunction))};
return o;
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 UnityEngine::Events::InvokableCall_3<T1,T2,T3> UnityEngine::Events::InvokableCall_3<T1,T2,T3>::New_ctor(UnityEngine::Events::UnityAction_3<T1,T2,T3> action)  {
UnityEngine::Events::InvokableCall_3<T1,T2,T3> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>(action))};
return o;
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::_ctor(UnityEngine::Events::UnityAction_3<T1,T2,T3> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Invoke(T1 args0, T2 args1, T3 args2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args0, args1, args2);
}
 bool UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, targetObj, method);
}
constexpr void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::__set_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityAction_3<T1,T2,T3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityAction_3<T1,T2,T3>>(value));
}
constexpr UnityEngine::Events::UnityAction_3<T1,T2,T3> UnityEngine::Events::InvokableCall_3<T1,T2,T3>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityAction_3<T1,T2,T3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::add_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::remove_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Events::InvokableCall_3<T1,T2,T3> UnityEngine::Events::InvokableCall_3<T1,T2,T3>::New_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
UnityEngine::Events::InvokableCall_3<T1,T2,T3> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>(target, theFunction))};
return o;
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 UnityEngine::Events::InvokableCall_3<T1,T2,T3> UnityEngine::Events::InvokableCall_3<T1,T2,T3>::New_ctor(UnityEngine::Events::UnityAction_3<T1,T2,T3> action)  {
UnityEngine::Events::InvokableCall_3<T1,T2,T3> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>(action))};
return o;
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::_ctor(UnityEngine::Events::UnityAction_3<T1,T2,T3> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Invoke(T1 args0, T2 args1, T3 args2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args0, args1, args2);
}
 bool UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_3<T1,T2,T3>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, targetObj, method);
}
