#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__TypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::TypeCode::TypeCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::TypeCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::TypeCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::TypeCode  System::TypeCode::Empty{0};
constexpr System::TypeCode  System::TypeCode::Object{1};
constexpr System::TypeCode  System::TypeCode::DBNull{2};
constexpr System::TypeCode  System::TypeCode::Boolean{3};
constexpr System::TypeCode  System::TypeCode::Char{4};
constexpr System::TypeCode  System::TypeCode::SByte{5};
constexpr System::TypeCode  System::TypeCode::Byte{6};
constexpr System::TypeCode  System::TypeCode::Int16{7};
constexpr System::TypeCode  System::TypeCode::UInt16{8};
constexpr System::TypeCode  System::TypeCode::Int32{9};
constexpr System::TypeCode  System::TypeCode::UInt32{10};
constexpr System::TypeCode  System::TypeCode::Int64{11};
constexpr System::TypeCode  System::TypeCode::UInt64{12};
constexpr System::TypeCode  System::TypeCode::Single{13};
constexpr System::TypeCode  System::TypeCode::Double{14};
constexpr System::TypeCode  System::TypeCode::Decimal{15};
constexpr System::TypeCode  System::TypeCode::DateTime{16};
constexpr System::TypeCode  System::TypeCode::String{18};
