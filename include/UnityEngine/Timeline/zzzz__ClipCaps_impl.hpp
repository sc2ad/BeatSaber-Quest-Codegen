#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::ClipCaps::ClipCaps(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::ClipCaps::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::ClipCaps::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::None{0};
constexpr UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Looping{1};
constexpr UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Extrapolation{2};
constexpr UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::ClipIn{4};
constexpr UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::SpeedMultiplier{8};
constexpr UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Blending{16};
constexpr UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::AutoScale{40};
constexpr UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::All{-1};
