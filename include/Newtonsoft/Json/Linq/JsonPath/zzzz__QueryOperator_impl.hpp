#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator::QueryOperator(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::Linq::JsonPath::QueryOperator::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Linq::JsonPath::QueryOperator::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::None{0};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::Equals{1};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::NotEquals{2};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::Exists{3};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::LessThan{4};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::LessThanOrEquals{5};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::GreaterThan{6};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::GreaterThanOrEquals{7};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::And{8};
constexpr Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::Or{9};
