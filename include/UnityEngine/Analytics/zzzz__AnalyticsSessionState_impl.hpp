#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsSessionState_def.hpp"
namespace {
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Analytics::AnalyticsSessionState::AnalyticsSessionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Analytics::AnalyticsSessionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Analytics::AnalyticsSessionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Analytics::AnalyticsSessionState  UnityEngine::Analytics::AnalyticsSessionState::kSessionStopped{0};
constexpr UnityEngine::Analytics::AnalyticsSessionState  UnityEngine::Analytics::AnalyticsSessionState::kSessionStarted{1};
constexpr UnityEngine::Analytics::AnalyticsSessionState  UnityEngine::Analytics::AnalyticsSessionState::kSessionPaused{2};
constexpr UnityEngine::Analytics::AnalyticsSessionState  UnityEngine::Analytics::AnalyticsSessionState::kSessionResumed{3};
} // end anonymous namespace