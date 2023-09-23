#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VRVulkanTextureData_t;
}
// Type: OVR.OpenVR::VRVulkanTextureData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9447))
// CS Name: OVR.OpenVR.VRVulkanTextureData_t
struct CORDL_TYPE VRVulkanTextureData_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_nImage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_pDevice", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pPhysicalDevice", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pQueue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_nQueueFamilyIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nWidth", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nHeight", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nFormat", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nSampleCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VRVulkanTextureData_t(uint64_t m_nImage, ::cordl_internals::intptr_t m_pDevice, ::cordl_internals::intptr_t m_pPhysicalDevice, ::cordl_internals::intptr_t m_pInstance, ::cordl_internals::intptr_t m_pQueue, uint32_t m_nQueueFamilyIndex, uint32_t m_nWidth, uint32_t m_nHeight, uint32_t m_nFormat, uint32_t m_nSampleCount) noexcept;


                    constexpr VRVulkanTextureData_t(VRVulkanTextureData_t const&) = default;
                    constexpr VRVulkanTextureData_t(VRVulkanTextureData_t&&) = default;
                    constexpr VRVulkanTextureData_t& operator=(VRVulkanTextureData_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRVulkanTextureData_t& operator=(VRVulkanTextureData_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRVulkanTextureData_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_m_nImage, put=__set_m_nImage))  m_nImage;

constexpr void __set_m_nImage(uint64_t value) ;

constexpr uint64_t __get_m_nImage() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pDevice, put=__set_m_pDevice))  m_pDevice;

constexpr void __set_m_pDevice(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pDevice() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pPhysicalDevice, put=__set_m_pPhysicalDevice))  m_pPhysicalDevice;

constexpr void __set_m_pPhysicalDevice(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pPhysicalDevice() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pInstance, put=__set_m_pInstance))  m_pInstance;

constexpr void __set_m_pInstance(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pInstance() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pQueue, put=__set_m_pQueue))  m_pQueue;

constexpr void __set_m_pQueue(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pQueue() const;

 uint32_t __declspec(property(get=__get_m_nQueueFamilyIndex, put=__set_m_nQueueFamilyIndex))  m_nQueueFamilyIndex;

constexpr void __set_m_nQueueFamilyIndex(uint32_t value) ;

constexpr uint32_t __get_m_nQueueFamilyIndex() const;

 uint32_t __declspec(property(get=__get_m_nWidth, put=__set_m_nWidth))  m_nWidth;

constexpr void __set_m_nWidth(uint32_t value) ;

constexpr uint32_t __get_m_nWidth() const;

 uint32_t __declspec(property(get=__get_m_nHeight, put=__set_m_nHeight))  m_nHeight;

constexpr void __set_m_nHeight(uint32_t value) ;

constexpr uint32_t __get_m_nHeight() const;

 uint32_t __declspec(property(get=__get_m_nFormat, put=__set_m_nFormat))  m_nFormat;

constexpr void __set_m_nFormat(uint32_t value) ;

constexpr uint32_t __get_m_nFormat() const;

 uint32_t __declspec(property(get=__get_m_nSampleCount, put=__set_m_nSampleCount))  m_nSampleCount;

constexpr void __set_m_nSampleCount(uint32_t value) ;

constexpr uint32_t __get_m_nSampleCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRVulkanTextureData_t, "OVR.OpenVR", "VRVulkanTextureData_t");
