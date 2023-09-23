#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::PreserveReferencesHandling::PreserveReferencesHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::PreserveReferencesHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::PreserveReferencesHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::PreserveReferencesHandling::None{0};
constexpr Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::PreserveReferencesHandling::Objects{1};
constexpr Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::PreserveReferencesHandling::Arrays{2};
constexpr Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::PreserveReferencesHandling::All{3};
