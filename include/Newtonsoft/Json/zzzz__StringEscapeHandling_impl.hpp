#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::StringEscapeHandling::StringEscapeHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::StringEscapeHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::StringEscapeHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::StringEscapeHandling  ::Newtonsoft::Json::StringEscapeHandling::Default{0};
constexpr ::Newtonsoft::Json::StringEscapeHandling  ::Newtonsoft::Json::StringEscapeHandling::EscapeNonAscii{1};
constexpr ::Newtonsoft::Json::StringEscapeHandling  ::Newtonsoft::Json::StringEscapeHandling::EscapeHtml{2};
} // end anonymous namespace
