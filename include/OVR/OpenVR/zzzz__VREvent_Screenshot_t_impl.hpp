#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_Screenshot_t_def.hpp"
// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Screenshot_t::VREvent_Screenshot_t(uint32_t handle, uint32_t type) noexcept : ::bs_hook::ValueTypeWrapper() {this->handle = handle;
this->type = type;
}
constexpr void ::OVR::OpenVR::VREvent_Screenshot_t::__set_handle(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_Screenshot_t::__get_handle() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_Screenshot_t::__set_type(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_Screenshot_t::__get_type() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
} // end anonymous namespace
