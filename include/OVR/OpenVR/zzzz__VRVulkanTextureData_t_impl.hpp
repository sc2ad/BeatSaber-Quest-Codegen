#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VRVulkanTextureData_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nImage", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pDevice", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pPhysicalDevice", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pQueue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nQueueFamilyIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nWidth", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nHeight", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFormat", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nSampleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VRVulkanTextureData_t::VRVulkanTextureData_t(uint64_t m_nImage, ::cordl_internals::intptr_t m_pDevice, ::cordl_internals::intptr_t m_pPhysicalDevice, ::cordl_internals::intptr_t m_pInstance, ::cordl_internals::intptr_t m_pQueue, uint32_t m_nQueueFamilyIndex, uint32_t m_nWidth, uint32_t m_nHeight, uint32_t m_nFormat, uint32_t m_nSampleCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_nImage = m_nImage;
this->m_pDevice = m_pDevice;
this->m_pPhysicalDevice = m_pPhysicalDevice;
this->m_pInstance = m_pInstance;
this->m_pQueue = m_pQueue;
this->m_nQueueFamilyIndex = m_nQueueFamilyIndex;
this->m_nWidth = m_nWidth;
this->m_nHeight = m_nHeight;
this->m_nFormat = m_nFormat;
this->m_nSampleCount = m_nSampleCount;
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_nImage(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_nImage() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_pDevice(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_pDevice() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_pPhysicalDevice(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_pPhysicalDevice() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_pInstance(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_pInstance() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_pQueue(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_pQueue() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_nQueueFamilyIndex(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x28>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_nQueueFamilyIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x28>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_nWidth(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x2c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_nWidth() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x2c>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_nHeight(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_nHeight() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_nFormat(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_nFormat() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->__instance);
}
constexpr void OVR::OpenVR::VRVulkanTextureData_t::__set_m_nSampleCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x38>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VRVulkanTextureData_t::__get_m_nSampleCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x38>(this->__instance);
}
