#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct TrackingOriginModeFlags;
}
// Type: UnityEngine.XR::TrackingOriginModeFlags
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15580))
// CS Name: UnityEngine.XR.TrackingOriginModeFlags
struct CORDL_TYPE TrackingOriginModeFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TrackingOriginModeFlags(int32_t value__) noexcept;


                    constexpr TrackingOriginModeFlags(TrackingOriginModeFlags const&) = default;
                    constexpr TrackingOriginModeFlags(TrackingOriginModeFlags&&) = default;
                    constexpr TrackingOriginModeFlags& operator=(TrackingOriginModeFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TrackingOriginModeFlags& operator=(TrackingOriginModeFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TrackingOriginModeFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TrackingOriginModeFlags_Unwrapped : int32_t {
__Unknown = 0,
__Device = 1,
__Floor = 2,
__TrackingReference = 4,
__Unbounded = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackingOriginModeFlags_Unwrapped () const noexcept {
return std::bit_cast<__TrackingOriginModeFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::XR::TrackingOriginModeFlags const Unknown;

/// @brief Field Device offset 0
static UnityEngine::XR::TrackingOriginModeFlags const Device;

/// @brief Field Floor offset 0
static UnityEngine::XR::TrackingOriginModeFlags const Floor;

/// @brief Field TrackingReference offset 0
static UnityEngine::XR::TrackingOriginModeFlags const TrackingReference;

/// @brief Field Unbounded offset 0
static UnityEngine::XR::TrackingOriginModeFlags const Unbounded;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::TrackingOriginModeFlags, "UnityEngine.XR", "TrackingOriginModeFlags");
