#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayTransformType;
}
// Type: OVR.OpenVR::VROverlayTransformType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9408))
// CS Name: OVR.OpenVR.VROverlayTransformType
struct CORDL_TYPE VROverlayTransformType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VROverlayTransformType(int32_t value__) noexcept;


                    constexpr VROverlayTransformType(VROverlayTransformType const&) = default;
                    constexpr VROverlayTransformType(VROverlayTransformType&&) = default;
                    constexpr VROverlayTransformType& operator=(VROverlayTransformType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VROverlayTransformType& operator=(VROverlayTransformType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VROverlayTransformType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VROverlayTransformType_Unwrapped : int32_t {
__VROverlayTransform_Absolute = 0,
__VROverlayTransform_TrackedDeviceRelative = 1,
__VROverlayTransform_SystemOverlay = 2,
__VROverlayTransform_TrackedComponent = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VROverlayTransformType_Unwrapped () const noexcept {
return std::bit_cast<__VROverlayTransformType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VROverlayTransform_Absolute offset 0
static OVR::OpenVR::VROverlayTransformType const VROverlayTransform_Absolute;

/// @brief Field VROverlayTransform_TrackedDeviceRelative offset 0
static OVR::OpenVR::VROverlayTransformType const VROverlayTransform_TrackedDeviceRelative;

/// @brief Field VROverlayTransform_SystemOverlay offset 0
static OVR::OpenVR::VROverlayTransformType const VROverlayTransform_SystemOverlay;

/// @brief Field VROverlayTransform_TrackedComponent offset 0
static OVR::OpenVR::VROverlayTransformType const VROverlayTransform_TrackedComponent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayTransformType, "OVR.OpenVR", "VROverlayTransformType");
