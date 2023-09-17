#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__MaskingTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::MaskingTypes::MaskingTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::MaskingTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::MaskingTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::MaskingTypes  ::TMPro::MaskingTypes::MaskOff{0};
constexpr ::TMPro::MaskingTypes  ::TMPro::MaskingTypes::MaskHard{1};
constexpr ::TMPro::MaskingTypes  ::TMPro::MaskingTypes::MaskSoft{2};
} // end anonymous namespace
