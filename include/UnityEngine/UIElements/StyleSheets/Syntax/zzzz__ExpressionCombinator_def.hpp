#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionCombinator;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::ExpressionCombinator
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7595))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator
struct CORDL_TYPE ExpressionCombinator : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionCombinator(int32_t value__) noexcept;


                    constexpr ExpressionCombinator(ExpressionCombinator const&) = default;
                    constexpr ExpressionCombinator(ExpressionCombinator&&) = default;
                    constexpr ExpressionCombinator& operator=(ExpressionCombinator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExpressionCombinator& operator=(ExpressionCombinator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExpressionCombinator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ExpressionCombinator_Unwrapped : int32_t {
__None = 0,
__Or = 1,
__OrOr = 2,
__AndAnd = 3,
__Juxtaposition = 4,
__Group = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExpressionCombinator_Unwrapped () const noexcept {
return std::bit_cast<__ExpressionCombinator_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const None;

/// @brief Field Or offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Or;

/// @brief Field OrOr offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const OrOr;

/// @brief Field AndAnd offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const AndAnd;

/// @brief Field Juxtaposition offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Juxtaposition;

/// @brief Field Group offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Group;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionCombinator");
