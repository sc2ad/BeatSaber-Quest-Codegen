#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureWithPose_t;
}
// Type: OVR.OpenVR::VRTextureWithPose_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9443))
// CS Name: OVR.OpenVR.VRTextureWithPose_t
struct CORDL_TYPE VRTextureWithPose_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }]
constexpr VRTextureWithPose_t(::OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking) noexcept;


                    constexpr VRTextureWithPose_t(VRTextureWithPose_t const&) = default;
                    constexpr VRTextureWithPose_t(VRTextureWithPose_t&&) = default;
                    constexpr VRTextureWithPose_t& operator=(VRTextureWithPose_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRTextureWithPose_t& operator=(VRTextureWithPose_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRTextureWithPose_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::OVR::OpenVR::HmdMatrix34_t __declspec(property(get=__get_mDeviceToAbsoluteTracking, put=__set_mDeviceToAbsoluteTracking))  mDeviceToAbsoluteTracking;

constexpr void __set_mDeviceToAbsoluteTracking(::OVR::OpenVR::HmdMatrix34_t value) ;

constexpr ::OVR::OpenVR::HmdMatrix34_t __get_mDeviceToAbsoluteTracking() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureWithPose_t, "OVR.OpenVR", "VRTextureWithPose_t");
