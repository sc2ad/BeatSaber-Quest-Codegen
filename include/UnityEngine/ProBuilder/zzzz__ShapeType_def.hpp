#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ShapeType;
}
// Type: UnityEngine.ProBuilder::ShapeType
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12139))
// CS Name: UnityEngine.ProBuilder.ShapeType
struct CORDL_TYPE ShapeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShapeType(int32_t value__) noexcept;


                    constexpr ShapeType(ShapeType const&) = default;
                    constexpr ShapeType(ShapeType&&) = default;
                    constexpr ShapeType& operator=(ShapeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ShapeType& operator=(ShapeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ShapeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ShapeType_Unwrapped : int32_t {
__Cube = 0,
__Stair = 1,
__CurvedStair = 2,
__Prism = 3,
__Cylinder = 4,
__Plane = 5,
__Door = 6,
__Pipe = 7,
__Cone = 8,
__Sprite = 9,
__Arch = 10,
__Sphere = 11,
__Torus = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShapeType_Unwrapped () const noexcept {
return std::bit_cast<__ShapeType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Cube offset 0
static ::UnityEngine::ProBuilder::ShapeType const Cube;

/// @brief Field Stair offset 0
static ::UnityEngine::ProBuilder::ShapeType const Stair;

/// @brief Field CurvedStair offset 0
static ::UnityEngine::ProBuilder::ShapeType const CurvedStair;

/// @brief Field Prism offset 0
static ::UnityEngine::ProBuilder::ShapeType const Prism;

/// @brief Field Cylinder offset 0
static ::UnityEngine::ProBuilder::ShapeType const Cylinder;

/// @brief Field Plane offset 0
static ::UnityEngine::ProBuilder::ShapeType const Plane;

/// @brief Field Door offset 0
static ::UnityEngine::ProBuilder::ShapeType const Door;

/// @brief Field Pipe offset 0
static ::UnityEngine::ProBuilder::ShapeType const Pipe;

/// @brief Field Cone offset 0
static ::UnityEngine::ProBuilder::ShapeType const Cone;

/// @brief Field Sprite offset 0
static ::UnityEngine::ProBuilder::ShapeType const Sprite;

/// @brief Field Arch offset 0
static ::UnityEngine::ProBuilder::ShapeType const Arch;

/// @brief Field Sphere offset 0
static ::UnityEngine::ProBuilder::ShapeType const Sphere;

/// @brief Field Torus offset 0
static ::UnityEngine::ProBuilder::ShapeType const Torus;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ShapeType, "UnityEngine.ProBuilder", "ShapeType");
