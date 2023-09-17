#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::BinaryTypeEnum(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::Primitive{0};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::String{1};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::Object{2};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectUrt{3};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectUser{4};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectArray{5};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::StringArray{6};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::PrimitiveArray{7};
} // end anonymous namespace
