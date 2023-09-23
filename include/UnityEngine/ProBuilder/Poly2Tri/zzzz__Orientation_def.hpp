#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
struct Orientation;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::Orientation
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15358))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.Orientation
struct CORDL_TYPE Orientation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Orientation(int32_t value__) noexcept;


                    constexpr Orientation(Orientation const&) = default;
                    constexpr Orientation(Orientation&&) = default;
                    constexpr Orientation& operator=(Orientation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Orientation& operator=(Orientation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Orientation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Orientation_Unwrapped : int32_t {
__CW = 0,
__CCW = 1,
__Collinear = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Orientation_Unwrapped () const noexcept {
return std::bit_cast<__Orientation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CW offset 0
static UnityEngine::ProBuilder::Poly2Tri::Orientation const CW;

/// @brief Field CCW offset 0
static UnityEngine::ProBuilder::Poly2Tri::Orientation const CCW;

/// @brief Field Collinear offset 0
static UnityEngine::ProBuilder::Poly2Tri::Orientation const Collinear;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::Orientation, "UnityEngine.ProBuilder.Poly2Tri", "Orientation");
