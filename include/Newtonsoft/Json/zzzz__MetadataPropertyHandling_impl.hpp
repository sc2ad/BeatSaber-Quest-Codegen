#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::MetadataPropertyHandling::MetadataPropertyHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::MetadataPropertyHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::MetadataPropertyHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::MetadataPropertyHandling  Newtonsoft::Json::MetadataPropertyHandling::Default{0};
constexpr Newtonsoft::Json::MetadataPropertyHandling  Newtonsoft::Json::MetadataPropertyHandling::ReadAhead{1};
constexpr Newtonsoft::Json::MetadataPropertyHandling  Newtonsoft::Json::MetadataPropertyHandling::Ignore{2};
