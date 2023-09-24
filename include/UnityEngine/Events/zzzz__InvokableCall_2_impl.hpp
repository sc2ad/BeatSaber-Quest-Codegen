#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_2_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
constexpr void UnityEngine::Events::InvokableCall_2<T1,T2>::__set_Delegate(UnityEngine::Events::UnityAction_2<T1,T2> value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityAction_2<T1,T2>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityAction_2<T1,T2>>(value));
}
constexpr UnityEngine::Events::UnityAction_2<T1,T2> UnityEngine::Events::InvokableCall_2<T1,T2>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityAction_2<T1,T2>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Events::InvokableCall_2<T1,T2> UnityEngine::Events::InvokableCall_2<T1,T2>::New_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
UnityEngine::Events::InvokableCall_2<T1,T2> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Events::InvokableCall_2<T1,T2>>(target, theFunction))};
return o;
}
 void UnityEngine::Events::InvokableCall_2<T1,T2>::_ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction);
}
 void UnityEngine::Events::InvokableCall_2<T1,T2>::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_2<T1,T2>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 bool UnityEngine::Events::InvokableCall_2<T1,T2>::Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::InvokableCall_2<T1,T2>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, targetObj, method);
}
