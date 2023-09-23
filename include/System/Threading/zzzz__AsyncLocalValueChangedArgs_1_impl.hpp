#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
//  Writing Method size for method: System::Threading::AsyncLocalValueChangedArgs_1.get_CurrentValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (System::Threading::AsyncLocalValueChangedArgs_1::*)()>(&System::Threading::AsyncLocalValueChangedArgs_1::get_CurrentValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocalValueChangedArgs_1>::get(),
                            "get_CurrentValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::AsyncLocalValueChangedArgs_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::AsyncLocalValueChangedArgs_1::*)(T, T, bool)>(&System::Threading::AsyncLocalValueChangedArgs_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocalValueChangedArgs_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::AsyncLocalValueChangedArgs_1::AsyncLocalValueChangedArgs_1(T _PreviousValue_k__BackingField, T _CurrentValue_k__BackingField, bool _ThreadContextChanged_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_PreviousValue_k__BackingField = _PreviousValue_k__BackingField;
this->_CurrentValue_k__BackingField = _CurrentValue_k__BackingField;
this->_ThreadContextChanged_k__BackingField = _ThreadContextChanged_k__BackingField;
}
constexpr void System::Threading::AsyncLocalValueChangedArgs_1::__set__PreviousValue_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->__instance, std::forward<T>(value));
}
constexpr T System::Threading::AsyncLocalValueChangedArgs_1::__get__PreviousValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->__instance);
}
constexpr void System::Threading::AsyncLocalValueChangedArgs_1::__set__CurrentValue_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x8>(this->__instance, std::forward<T>(value));
}
constexpr T System::Threading::AsyncLocalValueChangedArgs_1::__get__CurrentValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x8>(this->__instance);
}
constexpr void System::Threading::AsyncLocalValueChangedArgs_1::__set__ThreadContextChanged_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Threading::AsyncLocalValueChangedArgs_1::__get__ThreadContextChanged_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
 T System::Threading::AsyncLocalValueChangedArgs_1::get_CurrentValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocalValueChangedArgs_1>::get(),
                            "get_CurrentValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Threading::AsyncLocalValueChangedArgs_1::_ctor(T previousValue, T currentValue, bool contextChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocalValueChangedArgs_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, previousValue, currentValue, contextChanged);
}
