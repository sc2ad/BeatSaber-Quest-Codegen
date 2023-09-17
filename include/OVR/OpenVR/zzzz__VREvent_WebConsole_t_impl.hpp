#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_WebConsole_t_def.hpp"
// Ctor Parameters [CppParam { name: "webConsoleHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_WebConsole_t::VREvent_WebConsole_t(uint64_t webConsoleHandle) noexcept : ::bs_hook::ValueTypeWrapper() {this->webConsoleHandle = webConsoleHandle;
}
constexpr void ::OVR::OpenVR::VREvent_WebConsole_t::__set_webConsoleHandle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_WebConsole_t::__get_webConsoleHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
} // end anonymous namespace
