#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__LaunchResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::LaunchResult::LaunchResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::LaunchResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::LaunchResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::Unknown{0};
constexpr Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::Success{1};
constexpr Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedRoomFull{2};
constexpr Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedGameAlreadyStarted{3};
constexpr Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedRoomNotFound{4};
constexpr Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedUserDeclined{5};
constexpr Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedOtherReason{6};
