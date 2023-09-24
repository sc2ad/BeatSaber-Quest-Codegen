#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResult;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyValueMatcher;
}
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyValueMatcher
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7583))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7584))
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher
class CORDL_TYPE StylePropertyValueMatcher : public UnityEngine::UIElements::StyleSheets::BaseStyleMatcher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StylePropertyValueMatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyValueMatcher", modifiers: " const&", def_value: None }]
constexpr StylePropertyValueMatcher(StylePropertyValueMatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyValueMatcher", modifiers: "&&", def_value: None }]
constexpr StylePropertyValueMatcher(StylePropertyValueMatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StylePropertyValueMatcher(void* ptr) noexcept : UnityEngine::UIElements::StyleSheets::BaseStyleMatcher(ptr) {
}


  constexpr StylePropertyValueMatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StylePropertyValueMatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StylePropertyValueMatcher& operator=(StylePropertyValueMatcher&& o) noexcept = default;
  constexpr StylePropertyValueMatcher& operator=(StylePropertyValueMatcher const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> __declspec(property(get=__get_m_Values, put=__set_m_Values))  m_Values;

constexpr void __set_m_Values(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> __get_m_Values() const;


// Properties

 UnityEngine::UIElements::StyleSheets::StylePropertyValue __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_valueCount))  valueCount;

 bool __declspec(property(get=get_isCurrentVariable))  isCurrentVariable;

 bool __declspec(property(get=get_isCurrentComma))  isCurrentComma;


// Methods

/// @brief Method get_current addr 0x2c785d0 size 0x84 virtual false final false
 UnityEngine::UIElements::StyleSheets::StylePropertyValue get_current() ;

/// @brief Method get_valueCount addr 0x2c78654 size 0x48 virtual true final false
 int32_t get_valueCount() ;

/// @brief Method get_isCurrentVariable addr 0x2c7869c size 0x8 virtual true final false
 bool get_isCurrentVariable() ;

/// @brief Method get_isCurrentComma addr 0x2c786a4 size 0xa8 virtual true final false
 bool get_isCurrentComma() ;

/// @brief Method Match addr 0x2c7874c size 0x17c virtual false final false
 UnityEngine::UIElements::StyleSheets::MatchResult Match(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> values) ;

/// @brief Method MatchKeyword addr 0x2c788c8 size 0xb4 virtual true final false
 bool MatchKeyword(::StringW keyword) ;

/// @brief Method MatchNumber addr 0x2c7897c size 0x34 virtual true final false
 bool MatchNumber() ;

/// @brief Method MatchInteger addr 0x2c789b0 size 0x34 virtual true final false
 bool MatchInteger() ;

/// @brief Method MatchLength addr 0x2c789e4 size 0xf4 virtual true final false
 bool MatchLength() ;

/// @brief Method MatchPercentage addr 0x2c78ad8 size 0xf4 virtual true final false
 bool MatchPercentage() ;

/// @brief Method MatchColor addr 0x2c78bcc size 0xe0 virtual true final false
 bool MatchColor() ;

/// @brief Method MatchResource addr 0x2c78cac size 0x34 virtual true final false
 bool MatchResource() ;

/// @brief Method MatchUrl addr 0x2c78ce0 size 0x40 virtual true final false
 bool MatchUrl() ;

/// @brief Method MatchTime addr 0x2c78d20 size 0x60 virtual true final false
 bool MatchTime() ;

/// @brief Method MatchCustomIdent addr 0x2c78d80 size 0xe0 virtual true final false
 bool MatchCustomIdent() ;

/// @brief Method MatchAngle addr 0x2c78e60 size 0xfc virtual true final false
 bool MatchAngle() ;

static UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher New_ctor() ;

/// @brief Method .ctor addr 0x2c78f5c size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher, "UnityEngine.UIElements.StyleSheets", "StylePropertyValueMatcher");
