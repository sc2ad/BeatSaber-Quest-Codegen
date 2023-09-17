#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__TagValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TagValueType::TagValueType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::TagValueType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TagValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::TagValueType  ::TMPro::TagValueType::None{0};
constexpr ::TMPro::TagValueType  ::TMPro::TagValueType::NumericalValue{1};
constexpr ::TMPro::TagValueType  ::TMPro::TagValueType::StringValue{2};
constexpr ::TMPro::TagValueType  ::TMPro::TagValueType::ColorValue{4};
} // end anonymous namespace
