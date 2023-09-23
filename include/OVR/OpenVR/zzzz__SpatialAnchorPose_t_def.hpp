#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
// Type: OVR.OpenVR::SpatialAnchorPose_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9509))
// CS Name: OVR.OpenVR.SpatialAnchorPose_t
struct CORDL_TYPE SpatialAnchorPose_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mAnchorToAbsoluteTracking", ty: "OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }]
constexpr SpatialAnchorPose_t(OVR::OpenVR::HmdMatrix34_t mAnchorToAbsoluteTracking) noexcept;


                    constexpr SpatialAnchorPose_t(SpatialAnchorPose_t const&) = default;
                    constexpr SpatialAnchorPose_t(SpatialAnchorPose_t&&) = default;
                    constexpr SpatialAnchorPose_t& operator=(SpatialAnchorPose_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpatialAnchorPose_t& operator=(SpatialAnchorPose_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpatialAnchorPose_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::HmdMatrix34_t __declspec(property(get=__get_mAnchorToAbsoluteTracking, put=__set_mAnchorToAbsoluteTracking))  mAnchorToAbsoluteTracking;

constexpr void __set_mAnchorToAbsoluteTracking(OVR::OpenVR::HmdMatrix34_t value) ;

constexpr OVR::OpenVR::HmdMatrix34_t __get_mAnchorToAbsoluteTracking() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::SpatialAnchorPose_t, "OVR.OpenVR", "SpatialAnchorPose_t");
