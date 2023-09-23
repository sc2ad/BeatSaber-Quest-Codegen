#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::Linq::JTokenType::JTokenType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::Linq::JTokenType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Linq::JTokenType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::None{0};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Object{1};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Array{2};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Constructor{3};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Property{4};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Comment{5};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Integer{6};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Float{7};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::String{8};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Boolean{9};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Null{10};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Undefined{11};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Date{12};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Raw{13};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Bytes{14};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Guid{15};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Uri{16};
constexpr Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::TimeSpan{17};
