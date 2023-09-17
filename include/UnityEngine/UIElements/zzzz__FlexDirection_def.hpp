#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct FlexDirection;
}
// Type: UnityEngine.UIElements::FlexDirection
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6975))
// CS Name: UnityEngine.UIElements.FlexDirection
struct CORDL_TYPE FlexDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FlexDirection(int32_t value__) noexcept;


                    constexpr FlexDirection(FlexDirection const&) = default;
                    constexpr FlexDirection(FlexDirection&&) = default;
                    constexpr FlexDirection& operator=(FlexDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FlexDirection& operator=(FlexDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FlexDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FlexDirection_Unwrapped : int32_t {
__Column = 0,
__ColumnReverse = 1,
__Row = 2,
__RowReverse = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FlexDirection_Unwrapped () const noexcept {
return std::bit_cast<__FlexDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Column offset 0
static ::UnityEngine::UIElements::FlexDirection const Column;

/// @brief Field ColumnReverse offset 0
static ::UnityEngine::UIElements::FlexDirection const ColumnReverse;

/// @brief Field Row offset 0
static ::UnityEngine::UIElements::FlexDirection const Row;

/// @brief Field RowReverse offset 0
static ::UnityEngine::UIElements::FlexDirection const RowReverse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FlexDirection, "UnityEngine.UIElements", "FlexDirection");
