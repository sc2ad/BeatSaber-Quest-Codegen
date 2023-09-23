#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct HmdVector3_t;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
// Type: OVR.OpenVR::VROverlayIntersectionParams_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9489))
// CS Name: OVR.OpenVR.VROverlayIntersectionParams_t
struct CORDL_TYPE VROverlayIntersectionParams_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vSource", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vDirection", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "eOrigin", ty: "OVR::OpenVR::ETrackingUniverseOrigin", modifiers: "", def_value: None }]
constexpr VROverlayIntersectionParams_t(OVR::OpenVR::HmdVector3_t vSource, OVR::OpenVR::HmdVector3_t vDirection, OVR::OpenVR::ETrackingUniverseOrigin eOrigin) noexcept;


                    constexpr VROverlayIntersectionParams_t(VROverlayIntersectionParams_t const&) = default;
                    constexpr VROverlayIntersectionParams_t(VROverlayIntersectionParams_t&&) = default;
                    constexpr VROverlayIntersectionParams_t& operator=(VROverlayIntersectionParams_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VROverlayIntersectionParams_t& operator=(VROverlayIntersectionParams_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VROverlayIntersectionParams_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vSource, put=__set_vSource))  vSource;

constexpr void __set_vSource(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vSource() const;

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vDirection, put=__set_vDirection))  vDirection;

constexpr void __set_vDirection(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vDirection() const;

 OVR::OpenVR::ETrackingUniverseOrigin __declspec(property(get=__get_eOrigin, put=__set_eOrigin))  eOrigin;

constexpr void __set_eOrigin(OVR::OpenVR::ETrackingUniverseOrigin value) ;

constexpr OVR::OpenVR::ETrackingUniverseOrigin __get_eOrigin() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayIntersectionParams_t, "OVR.OpenVR", "VROverlayIntersectionParams_t");
