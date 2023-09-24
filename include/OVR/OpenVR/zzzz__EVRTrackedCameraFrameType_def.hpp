#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameType;
}
// Type: OVR.OpenVR::EVRTrackedCameraFrameType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9395))
// CS Name: OVR.OpenVR.EVRTrackedCameraFrameType
struct CORDL_TYPE EVRTrackedCameraFrameType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRTrackedCameraFrameType(int32_t value__) noexcept;


                    constexpr EVRTrackedCameraFrameType(EVRTrackedCameraFrameType const&) = default;
                    constexpr EVRTrackedCameraFrameType(EVRTrackedCameraFrameType&&) = default;
                    constexpr EVRTrackedCameraFrameType& operator=(EVRTrackedCameraFrameType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRTrackedCameraFrameType& operator=(EVRTrackedCameraFrameType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRTrackedCameraFrameType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRTrackedCameraFrameType_Unwrapped : int32_t {
__Distorted = 0,
__Undistorted = 1,
__MaximumUndistorted = 2,
__MAX_CAMERA_FRAME_TYPES = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRTrackedCameraFrameType_Unwrapped () const noexcept {
return std::bit_cast<__EVRTrackedCameraFrameType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Distorted offset 0
static OVR::OpenVR::EVRTrackedCameraFrameType const Distorted;

/// @brief Field Undistorted offset 0
static OVR::OpenVR::EVRTrackedCameraFrameType const Undistorted;

/// @brief Field MaximumUndistorted offset 0
static OVR::OpenVR::EVRTrackedCameraFrameType const MaximumUndistorted;

/// @brief Field MAX_CAMERA_FRAME_TYPES offset 0
static OVR::OpenVR::EVRTrackedCameraFrameType const MAX_CAMERA_FRAME_TYPES;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRTrackedCameraFrameType, "OVR.OpenVR", "EVRTrackedCameraFrameType");
