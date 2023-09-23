#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__BezierTangentMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::BezierTangentMode::BezierTangentMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::BezierTangentMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::BezierTangentMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::BezierTangentMode  UnityEngine::ProBuilder::BezierTangentMode::Free{0};
constexpr UnityEngine::ProBuilder::BezierTangentMode  UnityEngine::ProBuilder::BezierTangentMode::Aligned{1};
constexpr UnityEngine::ProBuilder::BezierTangentMode  UnityEngine::ProBuilder::BezierTangentMode::Mirrored{2};
