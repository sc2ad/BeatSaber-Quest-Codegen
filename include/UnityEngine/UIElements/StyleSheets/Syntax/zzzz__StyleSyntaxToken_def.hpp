#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxTokenType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxToken;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxToken
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7589))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
struct CORDL_TYPE StyleSyntaxToken : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "number", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleSyntaxToken(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text, int32_t number) noexcept;


                    constexpr StyleSyntaxToken(StyleSyntaxToken const&) = default;
                    constexpr StyleSyntaxToken(StyleSyntaxToken&&) = default;
                    constexpr StyleSyntaxToken& operator=(StyleSyntaxToken const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleSyntaxToken& operator=(StyleSyntaxToken&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleSyntaxToken(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType value) ;

constexpr UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType __get_type() const;

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 int32_t __declspec(property(get=__get_number, put=__set_number))  number;

constexpr void __set_number(int32_t value) ;

constexpr int32_t __get_number() const;


// Methods

/// @brief Method .ctor addr 0x2c7c25c size 0x10 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType t) ;

/// @brief Method .ctor addr 0x2c7c26c size 0x10 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text) ;

/// @brief Method .ctor addr 0x2c7c27c size 0x10 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, int32_t number) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxToken");
