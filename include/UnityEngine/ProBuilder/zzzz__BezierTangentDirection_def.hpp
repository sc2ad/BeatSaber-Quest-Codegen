#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct BezierTangentDirection;
}
// Type: UnityEngine.ProBuilder::BezierTangentDirection
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12044))
// CS Name: UnityEngine.ProBuilder.BezierTangentDirection
struct CORDL_TYPE BezierTangentDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BezierTangentDirection(int32_t value__) noexcept;


                    constexpr BezierTangentDirection(BezierTangentDirection const&) = default;
                    constexpr BezierTangentDirection(BezierTangentDirection&&) = default;
                    constexpr BezierTangentDirection& operator=(BezierTangentDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BezierTangentDirection& operator=(BezierTangentDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BezierTangentDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BezierTangentDirection_Unwrapped : int32_t {
__In = 0,
__Out = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BezierTangentDirection_Unwrapped () const noexcept {
return std::bit_cast<__BezierTangentDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field In offset 0
static UnityEngine::ProBuilder::BezierTangentDirection const In;

/// @brief Field Out offset 0
static UnityEngine::ProBuilder::BezierTangentDirection const Out;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierTangentDirection, "UnityEngine.ProBuilder", "BezierTangentDirection");
