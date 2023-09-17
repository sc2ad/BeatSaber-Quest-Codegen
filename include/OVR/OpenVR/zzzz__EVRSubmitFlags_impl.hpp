#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSubmitFlags::EVRSubmitFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRSubmitFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRSubmitFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRSubmitFlags  ::OVR::OpenVR::EVRSubmitFlags::Submit_Default{0};
constexpr ::OVR::OpenVR::EVRSubmitFlags  ::OVR::OpenVR::EVRSubmitFlags::Submit_LensDistortionAlreadyApplied{1};
constexpr ::OVR::OpenVR::EVRSubmitFlags  ::OVR::OpenVR::EVRSubmitFlags::Submit_GlRenderBuffer{2};
constexpr ::OVR::OpenVR::EVRSubmitFlags  ::OVR::OpenVR::EVRSubmitFlags::Submit_Reserved{4};
constexpr ::OVR::OpenVR::EVRSubmitFlags  ::OVR::OpenVR::EVRSubmitFlags::Submit_TextureWithPose{8};
constexpr ::OVR::OpenVR::EVRSubmitFlags  ::OVR::OpenVR::EVRSubmitFlags::Submit_TextureWithDepth{16};
} // end anonymous namespace
