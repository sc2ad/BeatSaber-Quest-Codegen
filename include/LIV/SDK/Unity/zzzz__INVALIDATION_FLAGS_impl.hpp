#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LIV/SDK/Unity/zzzz__INVALIDATION_FLAGS_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::INVALIDATION_FLAGS::INVALIDATION_FLAGS(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LIV::SDK::Unity::INVALIDATION_FLAGS::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t LIV::SDK::Unity::INVALIDATION_FLAGS::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::NONE{0u};
constexpr LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::HMD_CAMERA{1u};
constexpr LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::STAGE{2u};
constexpr LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::MR_CAMERA_PREFAB{4u};
constexpr LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::EXCLUDE_BEHAVIOURS{8u};
