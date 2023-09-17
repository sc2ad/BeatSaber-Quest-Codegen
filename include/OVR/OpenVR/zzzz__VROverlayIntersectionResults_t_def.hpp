#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
// Type: OVR.OpenVR::VROverlayIntersectionResults_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9490))
// CS Name: OVR.OpenVR.VROverlayIntersectionResults_t
struct CORDL_TYPE VROverlayIntersectionResults_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vPoint", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vNormal", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vUVs", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }, CppParam { name: "fDistance", ty: "float_t", modifiers: "", def_value: None }]
constexpr VROverlayIntersectionResults_t(::OVR::OpenVR::HmdVector3_t vPoint, ::OVR::OpenVR::HmdVector3_t vNormal, ::OVR::OpenVR::HmdVector2_t vUVs, float_t fDistance) noexcept;


                    constexpr VROverlayIntersectionResults_t(VROverlayIntersectionResults_t const&) = default;
                    constexpr VROverlayIntersectionResults_t(VROverlayIntersectionResults_t&&) = default;
                    constexpr VROverlayIntersectionResults_t& operator=(VROverlayIntersectionResults_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VROverlayIntersectionResults_t& operator=(VROverlayIntersectionResults_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VROverlayIntersectionResults_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vPoint, put=__set_vPoint))  vPoint;

constexpr void __set_vPoint(::OVR::OpenVR::HmdVector3_t value) ;

constexpr ::OVR::OpenVR::HmdVector3_t __get_vPoint() const;

 ::OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vNormal, put=__set_vNormal))  vNormal;

constexpr void __set_vNormal(::OVR::OpenVR::HmdVector3_t value) ;

constexpr ::OVR::OpenVR::HmdVector3_t __get_vNormal() const;

 ::OVR::OpenVR::HmdVector2_t __declspec(property(get=__get_vUVs, put=__set_vUVs))  vUVs;

constexpr void __set_vUVs(::OVR::OpenVR::HmdVector2_t value) ;

constexpr ::OVR::OpenVR::HmdVector2_t __get_vUVs() const;

 float_t __declspec(property(get=__get_fDistance, put=__set_fDistance))  fDistance;

constexpr void __set_fDistance(float_t value) ;

constexpr float_t __get_fDistance() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionResults_t, "OVR.OpenVR", "VROverlayIntersectionResults_t");
