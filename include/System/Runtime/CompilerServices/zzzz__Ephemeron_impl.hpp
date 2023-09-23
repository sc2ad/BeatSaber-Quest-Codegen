#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__Ephemeron_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::Ephemeron::Ephemeron(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Runtime::CompilerServices::Ephemeron::__set_key(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::CompilerServices::Ephemeron::__get_key() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance);
}
constexpr void System::Runtime::CompilerServices::Ephemeron::__set_value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::CompilerServices::Ephemeron::__get_value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance);
}
