#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplierType;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::ExpressionMultiplierType
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7596))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType
struct CORDL_TYPE ExpressionMultiplierType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionMultiplierType(int32_t value__) noexcept;


                    constexpr ExpressionMultiplierType(ExpressionMultiplierType const&) = default;
                    constexpr ExpressionMultiplierType(ExpressionMultiplierType&&) = default;
                    constexpr ExpressionMultiplierType& operator=(ExpressionMultiplierType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExpressionMultiplierType& operator=(ExpressionMultiplierType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExpressionMultiplierType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ExpressionMultiplierType_Unwrapped : int32_t {
__None = 0,
__ZeroOrMore = 1,
__OneOrMore = 2,
__ZeroOrOne = 3,
__Ranges = 4,
__OneOrMoreComma = 5,
__GroupAtLeastOne = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExpressionMultiplierType_Unwrapped () const noexcept {
return std::bit_cast<__ExpressionMultiplierType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const None;

/// @brief Field ZeroOrMore offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const ZeroOrMore;

/// @brief Field OneOrMore offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const OneOrMore;

/// @brief Field ZeroOrOne offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const ZeroOrOne;

/// @brief Field Ranges offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const Ranges;

/// @brief Field OneOrMoreComma offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const OneOrMoreComma;

/// @brief Field GroupAtLeastOne offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const GroupAtLeastOne;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionMultiplierType");
