#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ExtrudeMethod;
}
// Type: UnityEngine.ProBuilder::ExtrudeMethod
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12111))
// CS Name: UnityEngine.ProBuilder.ExtrudeMethod
struct CORDL_TYPE ExtrudeMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExtrudeMethod(int32_t value__) noexcept;


                    constexpr ExtrudeMethod(ExtrudeMethod const&) = default;
                    constexpr ExtrudeMethod(ExtrudeMethod&&) = default;
                    constexpr ExtrudeMethod& operator=(ExtrudeMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExtrudeMethod& operator=(ExtrudeMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExtrudeMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ExtrudeMethod_Unwrapped : int32_t {
__IndividualFaces = 0,
__VertexNormal = 1,
__FaceNormal = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExtrudeMethod_Unwrapped () const noexcept {
return std::bit_cast<__ExtrudeMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IndividualFaces offset 0
static ::UnityEngine::ProBuilder::ExtrudeMethod const IndividualFaces;

/// @brief Field VertexNormal offset 0
static ::UnityEngine::ProBuilder::ExtrudeMethod const VertexNormal;

/// @brief Field FaceNormal offset 0
static ::UnityEngine::ProBuilder::ExtrudeMethod const FaceNormal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ExtrudeMethod, "UnityEngine.ProBuilder", "ExtrudeMethod");
