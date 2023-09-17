#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LiteNetLib/Utils/zzzz__NtpLeapIndicator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::Utils::NtpLeapIndicator::NtpLeapIndicator(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LiteNetLib::Utils::NtpLeapIndicator::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::Utils::NtpLeapIndicator::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::LiteNetLib::Utils::NtpLeapIndicator  ::LiteNetLib::Utils::NtpLeapIndicator::NoWarning{0};
constexpr ::LiteNetLib::Utils::NtpLeapIndicator  ::LiteNetLib::Utils::NtpLeapIndicator::LastMinuteHas61Seconds{1};
constexpr ::LiteNetLib::Utils::NtpLeapIndicator  ::LiteNetLib::Utils::NtpLeapIndicator::LastMinuteHas59Seconds{2};
constexpr ::LiteNetLib::Utils::NtpLeapIndicator  ::LiteNetLib::Utils::NtpLeapIndicator::AlarmCondition{3};
} // end anonymous namespace
