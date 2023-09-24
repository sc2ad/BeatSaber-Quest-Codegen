#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
// Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::AsyncLocalValueChangedArgs_1<T>::AsyncLocalValueChangedArgs_1(T _PreviousValue_k__BackingField, T _CurrentValue_k__BackingField, bool _ThreadContextChanged_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_PreviousValue_k__BackingField = _PreviousValue_k__BackingField;
this->_CurrentValue_k__BackingField = _CurrentValue_k__BackingField;
this->_ThreadContextChanged_k__BackingField = _ThreadContextChanged_k__BackingField;
}
constexpr void System::Threading::AsyncLocalValueChangedArgs_1<T>::__set__PreviousValue_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->__instance, std::forward<T>(value));
}
constexpr T System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__PreviousValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->__instance);
}
constexpr void System::Threading::AsyncLocalValueChangedArgs_1<T>::__set__CurrentValue_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x8>(this->__instance, std::forward<T>(value));
}
constexpr T System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__CurrentValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x8>(this->__instance);
}
constexpr void System::Threading::AsyncLocalValueChangedArgs_1<T>::__set__ThreadContextChanged_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__ThreadContextChanged_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
 T System::Threading::AsyncLocalValueChangedArgs_1<T>::get_CurrentValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocalValueChangedArgs_1<T>>::get(),
                            "get_CurrentValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Threading::AsyncLocalValueChangedArgs_1<T>::_ctor(T previousValue, T currentValue, bool contextChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocalValueChangedArgs_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, previousValue, currentValue, contextChanged);
}
