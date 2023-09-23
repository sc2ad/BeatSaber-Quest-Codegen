#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRTrackedCameraError::EVRTrackedCameraError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRTrackedCameraError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRTrackedCameraError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::None{0};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::OperationFailed{100};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidHandle{101};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidFrameHeaderVersion{102};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::OutOfHandles{103};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::IPCFailure{104};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::NotSupportedForThisDevice{105};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::SharedMemoryFailure{106};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::FrameBufferingFailure{107};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::StreamSetupFailure{108};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidGLTextureId{109};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidSharedTextureHandle{110};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::FailedToGetGLTextureId{111};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::SharedTextureFailure{112};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::NoFrameAvailable{113};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidArgument{114};
constexpr OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidFrameBufferSize{115};
