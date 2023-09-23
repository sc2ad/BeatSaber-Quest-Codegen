#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__CaretPosition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::CaretPosition::CaretPosition(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::CaretPosition::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::CaretPosition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::CaretPosition  TMPro::CaretPosition::None{0};
constexpr TMPro::CaretPosition  TMPro::CaretPosition::Left{1};
constexpr TMPro::CaretPosition  TMPro::CaretPosition::Right{2};
