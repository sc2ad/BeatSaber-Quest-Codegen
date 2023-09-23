#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightType;
}
// Type: UnityEngine.Experimental.GlobalIllumination::LightType
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10322))
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightType
struct CORDL_TYPE LightType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr LightType(uint8_t value__) noexcept;


                    constexpr LightType(LightType const&) = default;
                    constexpr LightType(LightType&&) = default;
                    constexpr LightType& operator=(LightType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LightType& operator=(LightType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LightType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LightType_Unwrapped : uint8_t {
__Directional = 0u,
__Point = 1u,
__Spot = 2u,
__Rectangle = 3u,
__Disc = 4u,
__SpotPyramidShape = 5u,
__SpotBoxShape = 6u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightType_Unwrapped () const noexcept {
return std::bit_cast<__LightType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Directional offset 0
static UnityEngine::Experimental::GlobalIllumination::LightType const Directional;

/// @brief Field Point offset 0
static UnityEngine::Experimental::GlobalIllumination::LightType const Point;

/// @brief Field Spot offset 0
static UnityEngine::Experimental::GlobalIllumination::LightType const Spot;

/// @brief Field Rectangle offset 0
static UnityEngine::Experimental::GlobalIllumination::LightType const Rectangle;

/// @brief Field Disc offset 0
static UnityEngine::Experimental::GlobalIllumination::LightType const Disc;

/// @brief Field SpotPyramidShape offset 0
static UnityEngine::Experimental::GlobalIllumination::LightType const SpotPyramidShape;

/// @brief Field SpotBoxShape offset 0
static UnityEngine::Experimental::GlobalIllumination::LightType const SpotBoxShape;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LightType, "UnityEngine.Experimental.GlobalIllumination", "LightType");
