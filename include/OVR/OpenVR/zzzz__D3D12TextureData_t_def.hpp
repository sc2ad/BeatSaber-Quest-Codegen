#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct D3D12TextureData_t;
}
// Type: OVR.OpenVR::D3D12TextureData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9448))
// CS Name: OVR.OpenVR.D3D12TextureData_t
struct CORDL_TYPE D3D12TextureData_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_pResource", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pCommandQueue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_nNodeMask", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr D3D12TextureData_t(::cordl_internals::intptr_t m_pResource, ::cordl_internals::intptr_t m_pCommandQueue, uint32_t m_nNodeMask) noexcept;


                    constexpr D3D12TextureData_t(D3D12TextureData_t const&) = default;
                    constexpr D3D12TextureData_t(D3D12TextureData_t&&) = default;
                    constexpr D3D12TextureData_t& operator=(D3D12TextureData_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr D3D12TextureData_t& operator=(D3D12TextureData_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit D3D12TextureData_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pResource, put=__set_m_pResource))  m_pResource;

constexpr void __set_m_pResource(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pResource() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pCommandQueue, put=__set_m_pCommandQueue))  m_pCommandQueue;

constexpr void __set_m_pCommandQueue(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pCommandQueue() const;

 uint32_t __declspec(property(get=__get_m_nNodeMask, put=__set_m_nNodeMask))  m_nNodeMask;

constexpr void __set_m_nNodeMask(uint32_t value) ;

constexpr uint32_t __get_m_nNodeMask() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::D3D12TextureData_t, "OVR.OpenVR", "D3D12TextureData_t");
