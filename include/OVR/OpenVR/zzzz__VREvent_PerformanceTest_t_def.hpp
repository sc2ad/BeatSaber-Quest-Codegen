#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_PerformanceTest_t;
}
// Type: OVR.OpenVR::VREvent_PerformanceTest_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9461))
// CS Name: OVR.OpenVR.VREvent_PerformanceTest_t
struct CORDL_TYPE VREvent_PerformanceTest_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_nFidelityLevel", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_PerformanceTest_t(uint32_t m_nFidelityLevel) noexcept;


                    constexpr VREvent_PerformanceTest_t(VREvent_PerformanceTest_t const&) = default;
                    constexpr VREvent_PerformanceTest_t(VREvent_PerformanceTest_t&&) = default;
                    constexpr VREvent_PerformanceTest_t& operator=(VREvent_PerformanceTest_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_PerformanceTest_t& operator=(VREvent_PerformanceTest_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_PerformanceTest_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_nFidelityLevel, put=__set_m_nFidelityLevel))  m_nFidelityLevel;

constexpr void __set_m_nFidelityLevel(uint32_t value) ;

constexpr uint32_t __get_m_nFidelityLevel() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_PerformanceTest_t, "OVR.OpenVR", "VREvent_PerformanceTest_t");
