#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__TagUnitType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TagUnitType::TagUnitType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::TagUnitType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TagUnitType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::TagUnitType  ::TMPro::TagUnitType::Pixels{0};
constexpr ::TMPro::TagUnitType  ::TMPro::TagUnitType::FontUnits{1};
constexpr ::TMPro::TagUnitType  ::TMPro::TagUnitType::Percentage{2};
} // end anonymous namespace
