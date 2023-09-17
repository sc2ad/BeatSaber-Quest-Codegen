#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRApplicationError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationError::EVRApplicationError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRApplicationError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRApplicationError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::None{0};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::AppKeyAlreadyExists{100};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::NoManifest{101};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::NoApplication{102};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::InvalidIndex{103};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::UnknownApplication{104};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::IPCFailed{105};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::ApplicationAlreadyRunning{106};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::InvalidManifest{107};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::InvalidApplication{108};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::LaunchFailed{109};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::ApplicationAlreadyStarting{110};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::LaunchInProgress{111};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::OldApplicationQuitting{112};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::TransitionAborted{113};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::IsTemplate{114};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::SteamVRIsExiting{115};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::BufferTooSmall{200};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::PropertyNotSet{201};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::UnknownProperty{202};
constexpr ::OVR::OpenVR::EVRApplicationError  ::OVR::OpenVR::EVRApplicationError::InvalidParameter{203};
} // end anonymous namespace
