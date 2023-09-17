#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::SystemVoipStatus::SystemVoipStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::SystemVoipStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::SystemVoipStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::SystemVoipStatus  ::Oculus::Platform::SystemVoipStatus::Unknown{0};
constexpr ::Oculus::Platform::SystemVoipStatus  ::Oculus::Platform::SystemVoipStatus::Unavailable{1};
constexpr ::Oculus::Platform::SystemVoipStatus  ::Oculus::Platform::SystemVoipStatus::Suppressed{2};
constexpr ::Oculus::Platform::SystemVoipStatus  ::Oculus::Platform::SystemVoipStatus::Active{3};
} // end anonymous namespace
