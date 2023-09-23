#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRCompositorTimingMode::EVRCompositorTimingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRCompositorTimingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRCompositorTimingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Implicit{0};
constexpr OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Explicit_RuntimePerformsPostPresentHandoff{1};
constexpr OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Explicit_ApplicationPerformsPostPresentHandoff{2};
