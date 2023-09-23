#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalArrayTypeE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::InternalArrayTypeE(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Empty{0};
constexpr System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Single{1};
constexpr System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Jagged{2};
constexpr System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Rectangular{3};
constexpr System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Base64{4};
