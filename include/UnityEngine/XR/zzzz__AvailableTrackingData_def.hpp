#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct AvailableTrackingData;
}
// Type: UnityEngine.XR::AvailableTrackingData
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15577))
// CS Name: UnityEngine.XR.AvailableTrackingData
struct CORDL_TYPE AvailableTrackingData : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AvailableTrackingData(int32_t value__) noexcept;


                    constexpr AvailableTrackingData(AvailableTrackingData const&) = default;
                    constexpr AvailableTrackingData(AvailableTrackingData&&) = default;
                    constexpr AvailableTrackingData& operator=(AvailableTrackingData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AvailableTrackingData& operator=(AvailableTrackingData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AvailableTrackingData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AvailableTrackingData_Unwrapped : int32_t {
__None = 0,
__PositionAvailable = 1,
__RotationAvailable = 2,
__VelocityAvailable = 4,
__AngularVelocityAvailable = 8,
__AccelerationAvailable = 16,
__AngularAccelerationAvailable = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AvailableTrackingData_Unwrapped () const noexcept {
return std::bit_cast<__AvailableTrackingData_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::XR::AvailableTrackingData const None;

/// @brief Field PositionAvailable offset 0
static UnityEngine::XR::AvailableTrackingData const PositionAvailable;

/// @brief Field RotationAvailable offset 0
static UnityEngine::XR::AvailableTrackingData const RotationAvailable;

/// @brief Field VelocityAvailable offset 0
static UnityEngine::XR::AvailableTrackingData const VelocityAvailable;

/// @brief Field AngularVelocityAvailable offset 0
static UnityEngine::XR::AvailableTrackingData const AngularVelocityAvailable;

/// @brief Field AccelerationAvailable offset 0
static UnityEngine::XR::AvailableTrackingData const AccelerationAvailable;

/// @brief Field AngularAccelerationAvailable offset 0
static UnityEngine::XR::AvailableTrackingData const AngularAccelerationAvailable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::AvailableTrackingData, "UnityEngine.XR", "AvailableTrackingData");
