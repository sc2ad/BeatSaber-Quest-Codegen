#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__ScheduleMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::ScheduleMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Run{0};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Batched{1};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Parallel{1};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Single{2};
} // end anonymous namespace
