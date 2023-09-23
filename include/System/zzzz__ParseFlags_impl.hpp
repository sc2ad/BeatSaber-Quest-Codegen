#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ParseFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::ParseFlags::ParseFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::ParseFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ParseFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::ParseFlags  System::ParseFlags::HaveYear{1};
constexpr System::ParseFlags  System::ParseFlags::HaveMonth{2};
constexpr System::ParseFlags  System::ParseFlags::HaveDay{4};
constexpr System::ParseFlags  System::ParseFlags::HaveHour{8};
constexpr System::ParseFlags  System::ParseFlags::HaveMinute{16};
constexpr System::ParseFlags  System::ParseFlags::HaveSecond{32};
constexpr System::ParseFlags  System::ParseFlags::HaveTime{64};
constexpr System::ParseFlags  System::ParseFlags::HaveDate{128};
constexpr System::ParseFlags  System::ParseFlags::TimeZoneUsed{256};
constexpr System::ParseFlags  System::ParseFlags::TimeZoneUtc{512};
constexpr System::ParseFlags  System::ParseFlags::ParsedMonthName{1024};
constexpr System::ParseFlags  System::ParseFlags::CaptureOffset{2048};
constexpr System::ParseFlags  System::ParseFlags::YearDefault{4096};
constexpr System::ParseFlags  System::ParseFlags::Rfc1123Pattern{8192};
constexpr System::ParseFlags  System::ParseFlags::UtcSortPattern{16384};
