#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "BGNet/Core/zzzz__AnalyticsMetricUnit_def.hpp"
namespace {
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::AnalyticsMetricUnit::AnalyticsMetricUnit(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BGNet::Core::AnalyticsMetricUnit::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::AnalyticsMetricUnit::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BGNet::Core::AnalyticsMetricUnit  BGNet::Core::AnalyticsMetricUnit::None{0};
constexpr BGNet::Core::AnalyticsMetricUnit  BGNet::Core::AnalyticsMetricUnit::Count{1};
constexpr BGNet::Core::AnalyticsMetricUnit  BGNet::Core::AnalyticsMetricUnit::Percent{2};
constexpr BGNet::Core::AnalyticsMetricUnit  BGNet::Core::AnalyticsMetricUnit::Seconds{3};
constexpr BGNet::Core::AnalyticsMetricUnit  BGNet::Core::AnalyticsMetricUnit::Milliseconds{4};
constexpr BGNet::Core::AnalyticsMetricUnit  BGNet::Core::AnalyticsMetricUnit::Microseconds{5};
constexpr BGNet::Core::AnalyticsMetricUnit  BGNet::Core::AnalyticsMetricUnit::Bytes{6};
} // end anonymous namespace
