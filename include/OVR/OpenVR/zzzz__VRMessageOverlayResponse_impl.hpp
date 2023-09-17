#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VRMessageOverlayResponse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRMessageOverlayResponse::VRMessageOverlayResponse(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::VRMessageOverlayResponse::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::VRMessageOverlayResponse::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::VRMessageOverlayResponse  ::OVR::OpenVR::VRMessageOverlayResponse::ButtonPress_0{0};
constexpr ::OVR::OpenVR::VRMessageOverlayResponse  ::OVR::OpenVR::VRMessageOverlayResponse::ButtonPress_1{1};
constexpr ::OVR::OpenVR::VRMessageOverlayResponse  ::OVR::OpenVR::VRMessageOverlayResponse::ButtonPress_2{2};
constexpr ::OVR::OpenVR::VRMessageOverlayResponse  ::OVR::OpenVR::VRMessageOverlayResponse::ButtonPress_3{3};
constexpr ::OVR::OpenVR::VRMessageOverlayResponse  ::OVR::OpenVR::VRMessageOverlayResponse::CouldntFindSystemOverlay{4};
constexpr ::OVR::OpenVR::VRMessageOverlayResponse  ::OVR::OpenVR::VRMessageOverlayResponse::CouldntFindOrCreateClientOverlay{5};
constexpr ::OVR::OpenVR::VRMessageOverlayResponse  ::OVR::OpenVR::VRMessageOverlayResponse::ApplicationQuit{6};
} // end anonymous namespace
