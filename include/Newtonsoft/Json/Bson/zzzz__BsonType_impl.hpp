#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::Bson::BsonType::BsonType(int8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::Bson::BsonType::__set_value__(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t Newtonsoft::Json::Bson::BsonType::__get_value__() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Number{1};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::String{2};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Object{3};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Array{4};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Binary{5};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Undefined{6};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Oid{7};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Boolean{8};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Date{9};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Null{10};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Regex{11};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Reference{12};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Code{13};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Symbol{14};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::CodeWScope{15};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Integer{16};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::TimeStamp{17};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Long{18};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::MinKey{-1};
constexpr Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::MaxKey{127};
