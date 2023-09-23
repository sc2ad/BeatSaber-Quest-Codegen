#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct HmdVector4_t;
}
namespace OVR::OpenVR {
struct HmdQuaternionf_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
// Type: OVR.OpenVR::VRBoneTransform_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9482))
// CS Name: OVR.OpenVR.VRBoneTransform_t
struct CORDL_TYPE VRBoneTransform_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "OVR::OpenVR::HmdVector4_t", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "OVR::OpenVR::HmdQuaternionf_t", modifiers: "", def_value: None }]
constexpr VRBoneTransform_t(OVR::OpenVR::HmdVector4_t position, OVR::OpenVR::HmdQuaternionf_t orientation) noexcept;


                    constexpr VRBoneTransform_t(VRBoneTransform_t const&) = default;
                    constexpr VRBoneTransform_t(VRBoneTransform_t&&) = default;
                    constexpr VRBoneTransform_t& operator=(VRBoneTransform_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRBoneTransform_t& operator=(VRBoneTransform_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRBoneTransform_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::HmdVector4_t __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(OVR::OpenVR::HmdVector4_t value) ;

constexpr OVR::OpenVR::HmdVector4_t __get_position() const;

 OVR::OpenVR::HmdQuaternionf_t __declspec(property(get=__get_orientation, put=__set_orientation))  orientation;

constexpr void __set_orientation(OVR::OpenVR::HmdQuaternionf_t value) ;

constexpr OVR::OpenVR::HmdQuaternionf_t __get_orientation() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRBoneTransform_t, "OVR.OpenVR", "VRBoneTransform_t");
