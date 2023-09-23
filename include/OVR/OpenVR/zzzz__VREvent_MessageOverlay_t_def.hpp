#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_MessageOverlay_t;
}
// Type: OVR.OpenVR::VREvent_MessageOverlay_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9467))
// CS Name: OVR.OpenVR.VREvent_MessageOverlay_t
struct CORDL_TYPE VREvent_MessageOverlay_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "unVRMessageOverlayResponse", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_MessageOverlay_t(uint32_t unVRMessageOverlayResponse) noexcept;


                    constexpr VREvent_MessageOverlay_t(VREvent_MessageOverlay_t const&) = default;
                    constexpr VREvent_MessageOverlay_t(VREvent_MessageOverlay_t&&) = default;
                    constexpr VREvent_MessageOverlay_t& operator=(VREvent_MessageOverlay_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_MessageOverlay_t& operator=(VREvent_MessageOverlay_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_MessageOverlay_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_unVRMessageOverlayResponse, put=__set_unVRMessageOverlayResponse))  unVRMessageOverlayResponse;

constexpr void __set_unVRMessageOverlayResponse(uint32_t value) ;

constexpr uint32_t __get_unVRMessageOverlayResponse() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_MessageOverlay_t, "OVR.OpenVR", "VREvent_MessageOverlay_t");
