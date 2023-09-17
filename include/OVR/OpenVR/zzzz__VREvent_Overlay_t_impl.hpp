#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_Overlay_t_def.hpp"
// Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "devicePath", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Overlay_t::VREvent_Overlay_t(uint64_t overlayHandle, uint64_t devicePath) noexcept : ::bs_hook::ValueTypeWrapper() {this->overlayHandle = overlayHandle;
this->devicePath = devicePath;
}
constexpr void ::OVR::OpenVR::VREvent_Overlay_t::__set_overlayHandle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_Overlay_t::__get_overlayHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_Overlay_t::__set_devicePath(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_Overlay_t::__get_devicePath() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
} // end anonymous namespace
