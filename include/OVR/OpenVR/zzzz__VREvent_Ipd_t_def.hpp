#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Ipd_t;
}
// Type: OVR.OpenVR::VREvent_Ipd_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9458))
// CS Name: OVR.OpenVR.VREvent_Ipd_t
struct CORDL_TYPE VREvent_Ipd_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ipdMeters", ty: "float_t", modifiers: "", def_value: None }]
constexpr VREvent_Ipd_t(float_t ipdMeters) noexcept;


                    constexpr VREvent_Ipd_t(VREvent_Ipd_t const&) = default;
                    constexpr VREvent_Ipd_t(VREvent_Ipd_t&&) = default;
                    constexpr VREvent_Ipd_t& operator=(VREvent_Ipd_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Ipd_t& operator=(VREvent_Ipd_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Ipd_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_ipdMeters, put=__set_ipdMeters))  ipdMeters;

constexpr void __set_ipdMeters(float_t value) ;

constexpr float_t __get_ipdMeters() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Ipd_t, "OVR.OpenVR", "VREvent_Ipd_t");
