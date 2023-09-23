#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__SendPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::SendPolicy::SendPolicy(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::SendPolicy::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::SendPolicy::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::SendPolicy  Oculus::Platform::SendPolicy::Unreliable{0};
constexpr Oculus::Platform::SendPolicy  Oculus::Platform::SendPolicy::Reliable{1};
constexpr Oculus::Platform::SendPolicy  Oculus::Platform::SendPolicy::Unknown{2};
