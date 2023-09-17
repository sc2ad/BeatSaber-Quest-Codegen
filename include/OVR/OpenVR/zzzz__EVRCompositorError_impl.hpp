#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRCompositorError::EVRCompositorError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRCompositorError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRCompositorError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::None{0};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::RequestFailed{1};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::IncompatibleVersion{100};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::DoNotHaveFocus{101};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::InvalidTexture{102};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::IsNotSceneApplication{103};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::TextureIsOnWrongDevice{104};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::TextureUsesUnsupportedFormat{105};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::SharedTexturesNotSupported{106};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::IndexOutOfRange{107};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::AlreadySubmitted{108};
constexpr ::OVR::OpenVR::EVRCompositorError  ::OVR::OpenVR::EVRCompositorError::InvalidBounds{109};
} // end anonymous namespace
