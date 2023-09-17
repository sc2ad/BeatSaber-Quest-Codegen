#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::InternalPrimitiveTypeE(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Invalid{0};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Boolean{1};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Byte{2};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Char{3};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Currency{4};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Decimal{5};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Double{6};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Int16{7};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Int32{8};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Int64{9};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::SByte{10};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Single{11};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::TimeSpan{12};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::DateTime{13};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::UInt16{14};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::UInt32{15};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::UInt64{16};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::Null{17};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE::String{18};
} // end anonymous namespace
