#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsResult_def.hpp"
namespace {
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Analytics::AnalyticsResult::AnalyticsResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Analytics::AnalyticsResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Analytics::AnalyticsResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Analytics::AnalyticsResult  UnityEngine::Analytics::AnalyticsResult::Ok{0};
constexpr UnityEngine::Analytics::AnalyticsResult  UnityEngine::Analytics::AnalyticsResult::NotInitialized{1};
constexpr UnityEngine::Analytics::AnalyticsResult  UnityEngine::Analytics::AnalyticsResult::AnalyticsDisabled{2};
constexpr UnityEngine::Analytics::AnalyticsResult  UnityEngine::Analytics::AnalyticsResult::TooManyItems{3};
constexpr UnityEngine::Analytics::AnalyticsResult  UnityEngine::Analytics::AnalyticsResult::SizeLimitReached{4};
constexpr UnityEngine::Analytics::AnalyticsResult  UnityEngine::Analytics::AnalyticsResult::TooManyRequests{5};
constexpr UnityEngine::Analytics::AnalyticsResult  UnityEngine::Analytics::AnalyticsResult::InvalidData{6};
constexpr UnityEngine::Analytics::AnalyticsResult  UnityEngine::Analytics::AnalyticsResult::UnsupportedPlatform{7};
} // end anonymous namespace
