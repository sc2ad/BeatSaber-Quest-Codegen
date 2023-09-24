#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct ETrackingResult;
}
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Type: OVR.OpenVR::TrackedDevicePose_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9441))
// CS Name: OVR.OpenVR.TrackedDevicePose_t
struct CORDL_TYPE TrackedDevicePose_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "vVelocity", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vAngularVelocity", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "eTrackingResult", ty: "OVR::OpenVR::ETrackingResult", modifiers: "", def_value: None }, CppParam { name: "bPoseIsValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bDeviceIsConnected", ty: "bool", modifiers: "", def_value: None }]
constexpr TrackedDevicePose_t(OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking, OVR::OpenVR::HmdVector3_t vVelocity, OVR::OpenVR::HmdVector3_t vAngularVelocity, OVR::OpenVR::ETrackingResult eTrackingResult, bool bPoseIsValid, bool bDeviceIsConnected) noexcept;


                    constexpr TrackedDevicePose_t(TrackedDevicePose_t const&) = default;
                    constexpr TrackedDevicePose_t(TrackedDevicePose_t&&) = default;
                    constexpr TrackedDevicePose_t& operator=(TrackedDevicePose_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TrackedDevicePose_t& operator=(TrackedDevicePose_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TrackedDevicePose_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::HmdMatrix34_t __declspec(property(get=__get_mDeviceToAbsoluteTracking, put=__set_mDeviceToAbsoluteTracking))  mDeviceToAbsoluteTracking;

constexpr void __set_mDeviceToAbsoluteTracking(OVR::OpenVR::HmdMatrix34_t value) ;

constexpr OVR::OpenVR::HmdMatrix34_t __get_mDeviceToAbsoluteTracking() const;

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vVelocity, put=__set_vVelocity))  vVelocity;

constexpr void __set_vVelocity(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vVelocity() const;

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vAngularVelocity, put=__set_vAngularVelocity))  vAngularVelocity;

constexpr void __set_vAngularVelocity(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vAngularVelocity() const;

 OVR::OpenVR::ETrackingResult __declspec(property(get=__get_eTrackingResult, put=__set_eTrackingResult))  eTrackingResult;

constexpr void __set_eTrackingResult(OVR::OpenVR::ETrackingResult value) ;

constexpr OVR::OpenVR::ETrackingResult __get_eTrackingResult() const;

 bool __declspec(property(get=__get_bPoseIsValid, put=__set_bPoseIsValid))  bPoseIsValid;

constexpr void __set_bPoseIsValid(bool value) ;

constexpr bool __get_bPoseIsValid() const;

 bool __declspec(property(get=__get_bDeviceIsConnected, put=__set_bDeviceIsConnected))  bDeviceIsConnected;

constexpr void __set_bDeviceIsConnected(bool value) ;

constexpr bool __get_bDeviceIsConnected() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::TrackedDevicePose_t, "OVR.OpenVR", "TrackedDevicePose_t");
