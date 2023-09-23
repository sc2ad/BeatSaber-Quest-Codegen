#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::MatchTargetFields::MatchTargetFields(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::MatchTargetFields::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::MatchTargetFields::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::PositionX{1};
constexpr UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::PositionY{2};
constexpr UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::PositionZ{4};
constexpr UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::RotationX{8};
constexpr UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::RotationY{16};
constexpr UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::RotationZ{32};
