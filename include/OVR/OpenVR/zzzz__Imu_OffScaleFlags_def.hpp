#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct Imu_OffScaleFlags;
}
// Type: OVR.OpenVR::Imu_OffScaleFlags
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9398))
// CS Name: OVR.OpenVR.Imu_OffScaleFlags
struct CORDL_TYPE Imu_OffScaleFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Imu_OffScaleFlags(int32_t value__) noexcept;


                    constexpr Imu_OffScaleFlags(Imu_OffScaleFlags const&) = default;
                    constexpr Imu_OffScaleFlags(Imu_OffScaleFlags&&) = default;
                    constexpr Imu_OffScaleFlags& operator=(Imu_OffScaleFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Imu_OffScaleFlags& operator=(Imu_OffScaleFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Imu_OffScaleFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Imu_OffScaleFlags_Unwrapped : int32_t {
__OffScale_AccelX = 1,
__OffScale_AccelY = 2,
__OffScale_AccelZ = 4,
__OffScale_GyroX = 8,
__OffScale_GyroY = 16,
__OffScale_GyroZ = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Imu_OffScaleFlags_Unwrapped () const noexcept {
return std::bit_cast<__Imu_OffScaleFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OffScale_AccelX offset 0
static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_AccelX;

/// @brief Field OffScale_AccelY offset 0
static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_AccelY;

/// @brief Field OffScale_AccelZ offset 0
static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_AccelZ;

/// @brief Field OffScale_GyroX offset 0
static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_GyroX;

/// @brief Field OffScale_GyroY offset 0
static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_GyroY;

/// @brief Field OffScale_GyroZ offset 0
static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_GyroZ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Imu_OffScaleFlags, "OVR.OpenVR", "Imu_OffScaleFlags");
