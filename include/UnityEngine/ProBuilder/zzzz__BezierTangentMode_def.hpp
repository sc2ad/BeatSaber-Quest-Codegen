#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct BezierTangentMode;
}
// Type: UnityEngine.ProBuilder::BezierTangentMode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12043))
// CS Name: UnityEngine.ProBuilder.BezierTangentMode
struct CORDL_TYPE BezierTangentMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BezierTangentMode(int32_t value__) noexcept;


                    constexpr BezierTangentMode(BezierTangentMode const&) = default;
                    constexpr BezierTangentMode(BezierTangentMode&&) = default;
                    constexpr BezierTangentMode& operator=(BezierTangentMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BezierTangentMode& operator=(BezierTangentMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BezierTangentMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BezierTangentMode_Unwrapped : int32_t {
__Free = 0,
__Aligned = 1,
__Mirrored = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BezierTangentMode_Unwrapped () const noexcept {
return std::bit_cast<__BezierTangentMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Free offset 0
static UnityEngine::ProBuilder::BezierTangentMode const Free;

/// @brief Field Aligned offset 0
static UnityEngine::ProBuilder::BezierTangentMode const Aligned;

/// @brief Field Mirrored offset 0
static UnityEngine::ProBuilder::BezierTangentMode const Mirrored;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierTangentMode, "UnityEngine.ProBuilder", "BezierTangentMode");
