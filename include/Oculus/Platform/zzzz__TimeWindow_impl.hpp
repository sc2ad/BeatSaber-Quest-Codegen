#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__TimeWindow_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::TimeWindow::TimeWindow(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::TimeWindow::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::TimeWindow::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::Unknown{0};
constexpr Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneHour{1};
constexpr Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneDay{2};
constexpr Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneWeek{3};
constexpr Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::ThirtyDays{4};
constexpr Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::NinetyDays{5};
