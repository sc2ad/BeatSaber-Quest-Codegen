#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::FloatParseHandling::FloatParseHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::FloatParseHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::FloatParseHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::FloatParseHandling  ::Newtonsoft::Json::FloatParseHandling::Double{0};
constexpr ::Newtonsoft::Json::FloatParseHandling  ::Newtonsoft::Json::FloatParseHandling::Decimal{1};
} // end anonymous namespace
