#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__TextElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TextElementType::TextElementType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::TextElementType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TextElementType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr TMPro::TextElementType  TMPro::TextElementType::Character{1u};
constexpr TMPro::TextElementType  TMPro::TextElementType::Sprite{2u};
