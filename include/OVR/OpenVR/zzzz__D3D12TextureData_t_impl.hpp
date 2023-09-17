#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__D3D12TextureData_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_pResource", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pCommandQueue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNodeMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::D3D12TextureData_t::D3D12TextureData_t(::cordl_internals::intptr_t m_pResource, ::cordl_internals::intptr_t m_pCommandQueue, uint32_t m_nNodeMask) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_pResource = m_pResource;
this->m_pCommandQueue = m_pCommandQueue;
this->m_nNodeMask = m_nNodeMask;
}
constexpr void ::OVR::OpenVR::D3D12TextureData_t::__set_m_pResource(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::D3D12TextureData_t::__get_m_pResource() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::D3D12TextureData_t::__set_m_pCommandQueue(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::D3D12TextureData_t::__get_m_pCommandQueue() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::D3D12TextureData_t::__set_m_nNodeMask(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::D3D12TextureData_t::__get_m_nNodeMask() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
} // end anonymous namespace
