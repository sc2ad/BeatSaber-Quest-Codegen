#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::JsonToken::JsonToken(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::JsonToken::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::JsonToken::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::None{0};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartObject{1};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartArray{2};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartConstructor{3};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::PropertyName{4};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Comment{5};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Raw{6};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Integer{7};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Float{8};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::String{9};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Boolean{10};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Null{11};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Undefined{12};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndObject{13};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndArray{14};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndConstructor{15};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Date{16};
constexpr Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Bytes{17};
