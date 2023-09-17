#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationAlgorithm
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15361))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationAlgorithm
struct CORDL_TYPE TriangulationAlgorithm : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TriangulationAlgorithm(int32_t value__) noexcept;


                    constexpr TriangulationAlgorithm(TriangulationAlgorithm const&) = default;
                    constexpr TriangulationAlgorithm(TriangulationAlgorithm&&) = default;
                    constexpr TriangulationAlgorithm& operator=(TriangulationAlgorithm const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TriangulationAlgorithm& operator=(TriangulationAlgorithm&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TriangulationAlgorithm(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TriangulationAlgorithm_Unwrapped : int32_t {
__DTSweep = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TriangulationAlgorithm_Unwrapped () const noexcept {
return std::bit_cast<__TriangulationAlgorithm_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DTSweep offset 0
static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm const DTSweep;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationAlgorithm");
