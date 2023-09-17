#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__LaunchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LaunchType::LaunchType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::LaunchType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::LaunchType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::LaunchType  ::Oculus::Platform::LaunchType::Unknown{0};
constexpr ::Oculus::Platform::LaunchType  ::Oculus::Platform::LaunchType::Normal{1};
constexpr ::Oculus::Platform::LaunchType  ::Oculus::Platform::LaunchType::Invite{2};
constexpr ::Oculus::Platform::LaunchType  ::Oculus::Platform::LaunchType::Coordinated{3};
constexpr ::Oculus::Platform::LaunchType  ::Oculus::Platform::LaunchType::Deeplink{4};
} // end anonymous namespace