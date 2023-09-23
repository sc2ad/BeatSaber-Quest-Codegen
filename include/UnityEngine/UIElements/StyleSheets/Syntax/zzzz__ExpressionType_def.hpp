#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionType;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::ExpressionType
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7593))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType
struct CORDL_TYPE ExpressionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionType(int32_t value__) noexcept;


                    constexpr ExpressionType(ExpressionType const&) = default;
                    constexpr ExpressionType(ExpressionType&&) = default;
                    constexpr ExpressionType& operator=(ExpressionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExpressionType& operator=(ExpressionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExpressionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ExpressionType_Unwrapped : int32_t {
__Unknown = 0,
__Data = 1,
__Keyword = 2,
__Combinator = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExpressionType_Unwrapped () const noexcept {
return std::bit_cast<__ExpressionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const Unknown;

/// @brief Field Data offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const Data;

/// @brief Field Keyword offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const Keyword;

/// @brief Field Combinator offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const Combinator;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionType");
