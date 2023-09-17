#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::FloatFormatHandling::FloatFormatHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::FloatFormatHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::FloatFormatHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::FloatFormatHandling  ::Newtonsoft::Json::FloatFormatHandling::String{0};
constexpr ::Newtonsoft::Json::FloatFormatHandling  ::Newtonsoft::Json::FloatFormatHandling::Symbol{1};
constexpr ::Newtonsoft::Json::FloatFormatHandling  ::Newtonsoft::Json::FloatFormatHandling::DefaultValue{2};
} // end anonymous namespace
