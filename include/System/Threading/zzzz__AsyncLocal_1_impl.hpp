#pragma once
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
//  Writing Method size for method: System::Threading::AsyncLocal_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::AsyncLocal_1::*)(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>)>(&System::Threading::AsyncLocal_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::AsyncLocal_1.set_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::AsyncLocal_1::*)(T)>(&System::Threading::AsyncLocal_1::set_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::AsyncLocal_1.System_Threading_IAsyncLocal_OnValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::AsyncLocal_1::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, bool)>(&System::Threading::AsyncLocal_1::System_Threading_IAsyncLocal_OnValueChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1>::get(),
                            "System.Threading.IAsyncLocal.OnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::IAsyncLocal
constexpr  System::Threading::AsyncLocal_1::operator System::Threading::IAsyncLocal() const noexcept {
return System::Threading::IAsyncLocal(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::AsyncLocal_1::__set_m_valueChangedHandler(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>>(value));
}
constexpr System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> System::Threading::AsyncLocal_1::__get_m_valueChangedHandler() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "valueChangedHandler", ty: "System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>", modifiers: "", def_value: None }]
 System::Threading::AsyncLocal_1::AsyncLocal_1(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> valueChangedHandler)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncLocal_1>(valueChangedHandler))) {}
 void System::Threading::AsyncLocal_1::_ctor(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> valueChangedHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueChangedHandler);
}
 void System::Threading::AsyncLocal_1::set_Value(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Threading::AsyncLocal_1::System_Threading_IAsyncLocal_OnValueChanged(::bs_hook::Il2CppWrapperType previousValueObj, ::bs_hook::Il2CppWrapperType currentValueObj, bool contextChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AsyncLocal_1>::get(),
                            "System.Threading.IAsyncLocal.OnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previousValueObj, currentValueObj, contextChanged);
}
