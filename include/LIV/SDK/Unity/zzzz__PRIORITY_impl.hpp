#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LIV/SDK/Unity/zzzz__PRIORITY_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::PRIORITY::PRIORITY(int8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LIV::SDK::Unity::PRIORITY::__set_value__(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t LIV::SDK::Unity::PRIORITY::__get_value__() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->__instance);
}
constexpr LIV::SDK::Unity::PRIORITY  LIV::SDK::Unity::PRIORITY::NONE{0};
constexpr LIV::SDK::Unity::PRIORITY  LIV::SDK::Unity::PRIORITY::GAME{63};
