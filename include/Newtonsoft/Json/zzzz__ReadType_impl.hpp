#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::ReadType::ReadType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::ReadType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::ReadType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::Read{0};
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsInt32{1};
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsBytes{2};
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsString{3};
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDecimal{4};
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDateTime{5};
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDateTimeOffset{6};
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDouble{7};
constexpr Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsBoolean{8};
