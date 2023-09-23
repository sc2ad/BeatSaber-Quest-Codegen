#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct ECollisionBoundsStyle;
}
// Type: OVR.OpenVR::ECollisionBoundsStyle
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9384))
// CS Name: OVR.OpenVR.ECollisionBoundsStyle
struct CORDL_TYPE ECollisionBoundsStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ECollisionBoundsStyle(int32_t value__) noexcept;


                    constexpr ECollisionBoundsStyle(ECollisionBoundsStyle const&) = default;
                    constexpr ECollisionBoundsStyle(ECollisionBoundsStyle&&) = default;
                    constexpr ECollisionBoundsStyle& operator=(ECollisionBoundsStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ECollisionBoundsStyle& operator=(ECollisionBoundsStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ECollisionBoundsStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ECollisionBoundsStyle_Unwrapped : int32_t {
__COLLISION_BOUNDS_STYLE_BEGINNER = 0,
__COLLISION_BOUNDS_STYLE_INTERMEDIATE = 1,
__COLLISION_BOUNDS_STYLE_SQUARES = 2,
__COLLISION_BOUNDS_STYLE_ADVANCED = 3,
__COLLISION_BOUNDS_STYLE_NONE = 4,
__COLLISION_BOUNDS_STYLE_COUNT = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ECollisionBoundsStyle_Unwrapped () const noexcept {
return std::bit_cast<__ECollisionBoundsStyle_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field COLLISION_BOUNDS_STYLE_BEGINNER offset 0
static OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_BEGINNER;

/// @brief Field COLLISION_BOUNDS_STYLE_INTERMEDIATE offset 0
static OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_INTERMEDIATE;

/// @brief Field COLLISION_BOUNDS_STYLE_SQUARES offset 0
static OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_SQUARES;

/// @brief Field COLLISION_BOUNDS_STYLE_ADVANCED offset 0
static OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_ADVANCED;

/// @brief Field COLLISION_BOUNDS_STYLE_NONE offset 0
static OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_NONE;

/// @brief Field COLLISION_BOUNDS_STYLE_COUNT offset 0
static OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_COUNT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ECollisionBoundsStyle, "OVR.OpenVR", "ECollisionBoundsStyle");
