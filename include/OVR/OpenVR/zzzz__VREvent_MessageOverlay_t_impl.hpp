#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_MessageOverlay_t_def.hpp"
// Ctor Parameters [CppParam { name: "unVRMessageOverlayResponse", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_MessageOverlay_t::VREvent_MessageOverlay_t(uint32_t unVRMessageOverlayResponse) noexcept : ::bs_hook::ValueTypeWrapper() {this->unVRMessageOverlayResponse = unVRMessageOverlayResponse;
}
constexpr void ::OVR::OpenVR::VREvent_MessageOverlay_t::__set_unVRMessageOverlayResponse(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_MessageOverlay_t::__get_unVRMessageOverlayResponse() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
} // end anonymous namespace
