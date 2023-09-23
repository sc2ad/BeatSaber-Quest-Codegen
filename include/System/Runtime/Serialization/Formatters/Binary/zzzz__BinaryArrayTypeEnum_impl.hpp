#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryArrayTypeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::BinaryArrayTypeEnum(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::Single{0};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::Jagged{1};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::Rectangular{2};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::SingleOffset{3};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::JaggedOffset{4};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::RectangularOffset{5};
