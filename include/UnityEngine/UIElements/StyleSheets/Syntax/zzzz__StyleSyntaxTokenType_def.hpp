#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxTokenType;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxTokenType
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7588))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType
struct CORDL_TYPE StyleSyntaxTokenType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleSyntaxTokenType(int32_t value__) noexcept;


                    constexpr StyleSyntaxTokenType(StyleSyntaxTokenType const&) = default;
                    constexpr StyleSyntaxTokenType(StyleSyntaxTokenType&&) = default;
                    constexpr StyleSyntaxTokenType& operator=(StyleSyntaxTokenType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleSyntaxTokenType& operator=(StyleSyntaxTokenType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleSyntaxTokenType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StyleSyntaxTokenType_Unwrapped : int32_t {
__Unknown = 0,
__String = 1,
__Number = 2,
__Space = 3,
__SingleBar = 4,
__DoubleBar = 5,
__DoubleAmpersand = 6,
__Comma = 7,
__SingleQuote = 8,
__Asterisk = 9,
__Plus = 10,
__QuestionMark = 11,
__HashMark = 12,
__ExclamationPoint = 13,
__OpenBracket = 14,
__CloseBracket = 15,
__OpenBrace = 16,
__CloseBrace = 17,
__LessThan = 18,
__GreaterThan = 19,
__End = 20,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleSyntaxTokenType_Unwrapped () const noexcept {
return std::bit_cast<__StyleSyntaxTokenType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Unknown;

/// @brief Field String offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const String;

/// @brief Field Number offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Number;

/// @brief Field Space offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Space;

/// @brief Field SingleBar offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const SingleBar;

/// @brief Field DoubleBar offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const DoubleBar;

/// @brief Field DoubleAmpersand offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const DoubleAmpersand;

/// @brief Field Comma offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Comma;

/// @brief Field SingleQuote offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const SingleQuote;

/// @brief Field Asterisk offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Asterisk;

/// @brief Field Plus offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Plus;

/// @brief Field QuestionMark offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const QuestionMark;

/// @brief Field HashMark offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const HashMark;

/// @brief Field ExclamationPoint offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const ExclamationPoint;

/// @brief Field OpenBracket offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const OpenBracket;

/// @brief Field CloseBracket offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const CloseBracket;

/// @brief Field OpenBrace offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const OpenBrace;

/// @brief Field CloseBrace offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const CloseBrace;

/// @brief Field LessThan offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const LessThan;

/// @brief Field GreaterThan offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const GreaterThan;

/// @brief Field End offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const End;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxTokenType");
