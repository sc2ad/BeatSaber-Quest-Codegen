#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_ApplicationLaunch_t_def.hpp"
// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unArgsHandle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_ApplicationLaunch_t::VREvent_ApplicationLaunch_t(uint32_t pid, uint32_t unArgsHandle) noexcept : ::bs_hook::ValueTypeWrapper() {this->pid = pid;
this->unArgsHandle = unArgsHandle;
}
constexpr void ::OVR::OpenVR::VREvent_ApplicationLaunch_t::__set_pid(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_ApplicationLaunch_t::__get_pid() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_ApplicationLaunch_t::__set_unArgsHandle(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_ApplicationLaunch_t::__get_unArgsHandle() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
} // end anonymous namespace
