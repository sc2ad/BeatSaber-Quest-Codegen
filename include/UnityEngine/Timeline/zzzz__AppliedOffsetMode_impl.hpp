#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::AppliedOffsetMode::AppliedOffsetMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::AppliedOffsetMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::AppliedOffsetMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::NoRootTransform{0};
constexpr UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::TransformOffset{1};
constexpr UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffset{2};
constexpr UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::TransformOffsetLegacy{3};
constexpr UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetLegacy{4};
constexpr UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetEditor{5};
constexpr UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetLegacyEditor{6};
