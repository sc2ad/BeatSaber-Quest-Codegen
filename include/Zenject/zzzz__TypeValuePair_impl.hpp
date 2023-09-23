#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Zenject::TypeValuePair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TypeValuePair::*)(System::Type, ::bs_hook::Il2CppWrapperType)>(&Zenject::TypeValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TypeValuePair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Type", ty: "System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr Zenject::TypeValuePair::TypeValuePair(System::Type Type, ::bs_hook::Il2CppWrapperType Value) noexcept : ::bs_hook::ValueTypeWrapper() {this->Type = Type;
this->Value = Value;
}
constexpr void Zenject::TypeValuePair::__set_Type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x0>(this->__instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::TypeValuePair::__get_Type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x0>(this->__instance);
}
constexpr void Zenject::TypeValuePair::__set_Value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::TypeValuePair::__get_Value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance);
}
 void Zenject::TypeValuePair::_ctor(System::Type type, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TypeValuePair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type, value);
}
