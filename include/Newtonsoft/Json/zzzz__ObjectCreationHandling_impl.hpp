#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::ObjectCreationHandling::ObjectCreationHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::ObjectCreationHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::ObjectCreationHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::ObjectCreationHandling  Newtonsoft::Json::ObjectCreationHandling::Auto{0};
constexpr Newtonsoft::Json::ObjectCreationHandling  Newtonsoft::Json::ObjectCreationHandling::Reuse{1};
constexpr Newtonsoft::Json::ObjectCreationHandling  Newtonsoft::Json::ObjectCreationHandling::Replace{2};
