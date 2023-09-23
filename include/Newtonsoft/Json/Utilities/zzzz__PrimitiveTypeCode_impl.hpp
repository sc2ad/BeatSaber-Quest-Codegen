#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode::PrimitiveTypeCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::Utilities::PrimitiveTypeCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Utilities::PrimitiveTypeCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Empty{0};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Object{1};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Char{2};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::CharNullable{3};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Boolean{4};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::BooleanNullable{5};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::SByte{6};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::SByteNullable{7};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int16{8};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int16Nullable{9};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt16{10};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt16Nullable{11};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int32{12};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int32Nullable{13};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Byte{14};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::ByteNullable{15};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt32{16};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt32Nullable{17};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int64{18};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int64Nullable{19};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt64{20};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt64Nullable{21};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Single{22};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::SingleNullable{23};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Double{24};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DoubleNullable{25};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DateTime{26};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DateTimeNullable{27};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DateTimeOffset{28};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DateTimeOffsetNullable{29};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Decimal{30};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DecimalNullable{31};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Guid{32};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::GuidNullable{33};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::TimeSpan{34};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::TimeSpanNullable{35};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::BigInteger{36};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::BigIntegerNullable{37};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Uri{38};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::String{39};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Bytes{40};
constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DBNull{41};
