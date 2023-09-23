#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct InputPoseActionData_t;
}
// Type: OVR.OpenVR::InputPoseActionData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9505))
// CS Name: OVR.OpenVR.InputPoseActionData_t
struct CORDL_TYPE InputPoseActionData_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pose", ty: "OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
constexpr InputPoseActionData_t(bool bActive, uint64_t activeOrigin, OVR::OpenVR::TrackedDevicePose_t pose) noexcept;


                    constexpr InputPoseActionData_t(InputPoseActionData_t const&) = default;
                    constexpr InputPoseActionData_t(InputPoseActionData_t&&) = default;
                    constexpr InputPoseActionData_t& operator=(InputPoseActionData_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputPoseActionData_t& operator=(InputPoseActionData_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputPoseActionData_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_bActive, put=__set_bActive))  bActive;

constexpr void __set_bActive(bool value) ;

constexpr bool __get_bActive() const;

 uint64_t __declspec(property(get=__get_activeOrigin, put=__set_activeOrigin))  activeOrigin;

constexpr void __set_activeOrigin(uint64_t value) ;

constexpr uint64_t __get_activeOrigin() const;

 OVR::OpenVR::TrackedDevicePose_t __declspec(property(get=__get_pose, put=__set_pose))  pose;

constexpr void __set_pose(OVR::OpenVR::TrackedDevicePose_t value) ;

constexpr OVR::OpenVR::TrackedDevicePose_t __get_pose() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputPoseActionData_t, "OVR.OpenVR", "InputPoseActionData_t");
