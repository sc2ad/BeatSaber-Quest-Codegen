#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_EditingCameraSurface_t_def.hpp"
// Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nVisualMode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_EditingCameraSurface_t::VREvent_EditingCameraSurface_t(uint64_t overlayHandle, uint32_t nVisualMode) noexcept : ::bs_hook::ValueTypeWrapper() {this->overlayHandle = overlayHandle;
this->nVisualMode = nVisualMode;
}
constexpr void ::OVR::OpenVR::VREvent_EditingCameraSurface_t::__set_overlayHandle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_EditingCameraSurface_t::__get_overlayHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_EditingCameraSurface_t::__set_nVisualMode(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_EditingCameraSurface_t::__get_nVisualMode() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
} // end anonymous namespace
