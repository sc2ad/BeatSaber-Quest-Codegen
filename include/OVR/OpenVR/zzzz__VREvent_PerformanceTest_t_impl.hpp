#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_PerformanceTest_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nFidelityLevel", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_PerformanceTest_t::VREvent_PerformanceTest_t(uint32_t m_nFidelityLevel) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_nFidelityLevel = m_nFidelityLevel;
}
constexpr void OVR::OpenVR::VREvent_PerformanceTest_t::__set_m_nFidelityLevel(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VREvent_PerformanceTest_t::__get_m_nFidelityLevel() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
