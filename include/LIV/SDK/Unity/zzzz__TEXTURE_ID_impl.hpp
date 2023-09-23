#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::TEXTURE_ID::TEXTURE_ID(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LIV::SDK::Unity::TEXTURE_ID::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t LIV::SDK::Unity::TEXTURE_ID::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::UNDEFINED{0u};
constexpr LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::BACKGROUND_COLOR_BUFFER_ID{10u};
constexpr LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::FOREGROUND_COLOR_BUFFER_ID{20u};
constexpr LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::OPTIMIZED_COLOR_BUFFER_ID{30u};
