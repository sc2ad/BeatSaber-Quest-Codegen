#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_Chaperone_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPreviousUniverse", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nCurrentUniverse", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Chaperone_t::VREvent_Chaperone_t(uint64_t m_nPreviousUniverse, uint64_t m_nCurrentUniverse) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_nPreviousUniverse = m_nPreviousUniverse;
this->m_nCurrentUniverse = m_nCurrentUniverse;
}
constexpr void ::OVR::OpenVR::VREvent_Chaperone_t::__set_m_nPreviousUniverse(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_Chaperone_t::__get_m_nPreviousUniverse() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_Chaperone_t::__set_m_nCurrentUniverse(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_Chaperone_t::__get_m_nCurrentUniverse() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
} // end anonymous namespace
