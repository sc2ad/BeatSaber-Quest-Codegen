#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationMode
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15365))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationMode
struct CORDL_TYPE TriangulationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TriangulationMode(int32_t value__) noexcept;


                    constexpr TriangulationMode(TriangulationMode const&) = default;
                    constexpr TriangulationMode(TriangulationMode&&) = default;
                    constexpr TriangulationMode& operator=(TriangulationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TriangulationMode& operator=(TriangulationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TriangulationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TriangulationMode_Unwrapped : int32_t {
__Unconstrained = 0,
__Constrained = 1,
__Polygon = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TriangulationMode_Unwrapped () const noexcept {
return std::bit_cast<__TriangulationMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unconstrained offset 0
static UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Unconstrained;

/// @brief Field Constrained offset 0
static UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Constrained;

/// @brief Field Polygon offset 0
static UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Polygon;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationMode");
