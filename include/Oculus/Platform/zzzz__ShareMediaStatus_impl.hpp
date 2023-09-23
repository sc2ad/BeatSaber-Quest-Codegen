#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__ShareMediaStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::ShareMediaStatus::ShareMediaStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::ShareMediaStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::ShareMediaStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::ShareMediaStatus  Oculus::Platform::ShareMediaStatus::Unknown{0};
constexpr Oculus::Platform::ShareMediaStatus  Oculus::Platform::ShareMediaStatus::Shared{1};
constexpr Oculus::Platform::ShareMediaStatus  Oculus::Platform::ShareMediaStatus::Canceled{2};
