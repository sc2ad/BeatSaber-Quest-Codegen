#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxToken;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxTokenizer;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxTokenizer
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7590))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer
class CORDL_TYPE StyleSyntaxTokenizer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~StyleSyntaxTokenizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSyntaxTokenizer", modifiers: " const&", def_value: None }]
constexpr StyleSyntaxTokenizer(StyleSyntaxTokenizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSyntaxTokenizer", modifiers: "&&", def_value: None }]
constexpr StyleSyntaxTokenizer(StyleSyntaxTokenizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleSyntaxTokenizer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleSyntaxTokenizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleSyntaxTokenizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleSyntaxTokenizer& operator=(StyleSyntaxTokenizer&& o) noexcept = default;
  constexpr StyleSyntaxTokenizer& operator=(StyleSyntaxTokenizer const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken> __declspec(property(get=__get_m_Tokens, put=__set_m_Tokens))  m_Tokens;

constexpr void __set_m_Tokens(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken> __get_m_Tokens() const;

 int32_t __declspec(property(get=__get_m_CurrentTokenIndex, put=__set_m_CurrentTokenIndex))  m_CurrentTokenIndex;

constexpr void __set_m_CurrentTokenIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentTokenIndex() const;


// Properties

 UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken __declspec(property(get=get_current))  current;


// Methods

/// @brief Method get_current addr 0x2c7c28c size 0xac virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken get_current() ;

/// @brief Method MoveNext addr 0x2c7c338 size 0x114 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken MoveNext() ;

/// @brief Method PeekNext addr 0x2c7c44c size 0xb0 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken PeekNext() ;

/// @brief Method Tokenize addr 0x2c7c4fc size 0xcf8 virtual false final false
 void Tokenize(::StringW syntax) ;

/// @brief Method IsNextCharacter addr 0x2c7d230 size 0x44 virtual false final false
static bool IsNextCharacter(::StringW s, int32_t index, char16_t c) ;

/// @brief Method IsNextLetterOrDash addr 0x2c7d30c size 0xc0 virtual false final false
static bool IsNextLetterOrDash(::StringW s, int32_t index) ;

/// @brief Method IsNextNumber addr 0x2c7d274 size 0x98 virtual false final false
static bool IsNextNumber(::StringW s, int32_t index) ;

/// @brief Method GlobCharacter addr 0x2c7d1f4 size 0x3c virtual false final false
static int32_t GlobCharacter(::StringW s, int32_t index, char16_t c) ;

// Ctor Parameters []
explicit StyleSyntaxTokenizer() ;

/// @brief Method .ctor addr 0x2c7d3cc size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxTokenizer");
