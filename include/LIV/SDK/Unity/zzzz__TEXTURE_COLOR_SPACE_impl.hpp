#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::TEXTURE_COLOR_SPACE::TEXTURE_COLOR_SPACE(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LIV::SDK::Unity::TEXTURE_COLOR_SPACE::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t LIV::SDK::Unity::TEXTURE_COLOR_SPACE::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::UNDEFINED{0u};
constexpr LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::LINEAR{1u};
constexpr LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::SRGB{2u};
