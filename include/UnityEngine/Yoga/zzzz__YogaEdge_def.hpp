#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaEdge;
}
// Type: UnityEngine.Yoga::YogaEdge
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15387))
// CS Name: UnityEngine.Yoga.YogaEdge
struct CORDL_TYPE YogaEdge : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaEdge(int32_t value__) noexcept;


                    constexpr YogaEdge(YogaEdge const&) = default;
                    constexpr YogaEdge(YogaEdge&&) = default;
                    constexpr YogaEdge& operator=(YogaEdge const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaEdge& operator=(YogaEdge&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaEdge(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __YogaEdge_Unwrapped : int32_t {
__Left = 0,
__Top = 1,
__Right = 2,
__Bottom = 3,
__Start = 4,
__End = 5,
__Horizontal = 6,
__Vertical = 7,
__All = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaEdge_Unwrapped () const noexcept {
return std::bit_cast<__YogaEdge_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static ::UnityEngine::Yoga::YogaEdge const Left;

/// @brief Field Top offset 0
static ::UnityEngine::Yoga::YogaEdge const Top;

/// @brief Field Right offset 0
static ::UnityEngine::Yoga::YogaEdge const Right;

/// @brief Field Bottom offset 0
static ::UnityEngine::Yoga::YogaEdge const Bottom;

/// @brief Field Start offset 0
static ::UnityEngine::Yoga::YogaEdge const Start;

/// @brief Field End offset 0
static ::UnityEngine::Yoga::YogaEdge const End;

/// @brief Field Horizontal offset 0
static ::UnityEngine::Yoga::YogaEdge const Horizontal;

/// @brief Field Vertical offset 0
static ::UnityEngine::Yoga::YogaEdge const Vertical;

/// @brief Field All offset 0
static ::UnityEngine::Yoga::YogaEdge const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaEdge, "UnityEngine.Yoga", "YogaEdge");
