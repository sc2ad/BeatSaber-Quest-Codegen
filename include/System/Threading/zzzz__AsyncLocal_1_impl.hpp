#pragma once
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
/// @brief Convert operator to System::Threading::IAsyncLocal
constexpr  System::Threading::AsyncLocal_1<T>::operator System::Threading::IAsyncLocal() const noexcept {
return System::Threading::IAsyncLocal(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::AsyncLocal_1<T>::__set_m_valueChangedHandler(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>>(value));
}
constexpr System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> System::Threading::AsyncLocal_1<T>::__get_m_valueChangedHandler() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::AsyncLocal_1<T> System::Threading::AsyncLocal_1<T>::New_ctor(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> valueChangedHandler)  {
System::Threading::AsyncLocal_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::AsyncLocal_1<T>>(valueChangedHandler))};
return o;
}
 void System::Threading::AsyncLocal_1<T>::_ctor(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> valueChangedHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueChangedHandler);
}
 void System::Threading::AsyncLocal_1<T>::set_Value(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1<T>>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Threading::AsyncLocal_1<T>::System_Threading_IAsyncLocal_OnValueChanged(::bs_hook::Il2CppWrapperType previousValueObj, ::bs_hook::Il2CppWrapperType currentValueObj, bool contextChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1<T>>::get(),
                            "System.Threading.IAsyncLocal.OnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previousValueObj, currentValueObj, contextChanged);
}
