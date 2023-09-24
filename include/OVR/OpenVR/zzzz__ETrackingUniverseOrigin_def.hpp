#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
// Type: OVR.OpenVR::ETrackingUniverseOrigin
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9369))
// CS Name: OVR.OpenVR.ETrackingUniverseOrigin
struct CORDL_TYPE ETrackingUniverseOrigin : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETrackingUniverseOrigin(int32_t value__) noexcept;


                    constexpr ETrackingUniverseOrigin(ETrackingUniverseOrigin const&) = default;
                    constexpr ETrackingUniverseOrigin(ETrackingUniverseOrigin&&) = default;
                    constexpr ETrackingUniverseOrigin& operator=(ETrackingUniverseOrigin const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ETrackingUniverseOrigin& operator=(ETrackingUniverseOrigin&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ETrackingUniverseOrigin(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ETrackingUniverseOrigin_Unwrapped : int32_t {
__TrackingUniverseSeated = 0,
__TrackingUniverseStanding = 1,
__TrackingUniverseRawAndUncalibrated = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ETrackingUniverseOrigin_Unwrapped () const noexcept {
return std::bit_cast<__ETrackingUniverseOrigin_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TrackingUniverseSeated offset 0
static OVR::OpenVR::ETrackingUniverseOrigin const TrackingUniverseSeated;

/// @brief Field TrackingUniverseStanding offset 0
static OVR::OpenVR::ETrackingUniverseOrigin const TrackingUniverseStanding;

/// @brief Field TrackingUniverseRawAndUncalibrated offset 0
static OVR::OpenVR::ETrackingUniverseOrigin const TrackingUniverseRawAndUncalibrated;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ETrackingUniverseOrigin, "OVR.OpenVR", "ETrackingUniverseOrigin");
