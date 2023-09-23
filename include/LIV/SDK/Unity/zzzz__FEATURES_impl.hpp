#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::FEATURES::FEATURES(uint64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LIV::SDK::Unity::FEATURES::__set_value__(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t LIV::SDK::Unity::FEATURES::__get_value__() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::NONE{0u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::BACKGROUND_RENDER{1u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::FOREGROUND_RENDER{2u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::COMPLEX_CLIP_PLANE{4u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::BACKGROUND_DEPTH_RENDER{8u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::OVERRIDE_POST_PROCESSING{16u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::FIX_FOREGROUND_ALPHA{32u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::GROUND_CLIP_PLANE{64u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::RELEASE_CONTROL{32768u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::OPTIMIZED_RENDER{268435456u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::INTERLACED_RENDER{536870912u};
constexpr LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::DEBUG_CLIP_PLANE{281474976710656u};
