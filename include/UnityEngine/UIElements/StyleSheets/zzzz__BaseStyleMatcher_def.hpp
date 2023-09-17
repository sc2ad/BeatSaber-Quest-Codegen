#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Text::RegularExpressions {
class Regex;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class BaseStyleMatcher;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext;
}
// Type: ::MatchContext
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7582))
// CS Name: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchContext
struct CORDL_TYPE ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "matchedVariableCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext(int32_t valueIndex, int32_t matchedVariableCount) noexcept;


                    constexpr ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext(____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext const&) = default;
                    constexpr ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext(____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext&&) = default;
                    constexpr ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext& operator=(____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext& operator=(____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_valueIndex, put=__set_valueIndex))  valueIndex;

constexpr void __set_valueIndex(int32_t value) ;

constexpr int32_t __get_valueIndex() const;

 int32_t __declspec(property(get=__get_matchedVariableCount, put=__set_matchedVariableCount))  matchedVariableCount;

constexpr void __set_matchedVariableCount(int32_t value) ;

constexpr int32_t __get_matchedVariableCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::BaseStyleMatcher
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7583))
// CS Name: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
class CORDL_TYPE BaseStyleMatcher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MatchContext = ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseStyleMatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: " const&", def_value: None }]
constexpr BaseStyleMatcher(BaseStyleMatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "&&", def_value: None }]
constexpr BaseStyleMatcher(BaseStyleMatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseStyleMatcher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseStyleMatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseStyleMatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseStyleMatcher& operator=(BaseStyleMatcher&& o) noexcept = default;
  constexpr BaseStyleMatcher& operator=(BaseStyleMatcher const& o) noexcept = default;
                


// Fields

static ::System::Text::RegularExpressions::Regex __declspec(property(get=__get_s_CustomIdentRegex, put=__set_s_CustomIdentRegex))  s_CustomIdentRegex;

static void __set_s_CustomIdentRegex(::System::Text::RegularExpressions::Regex value) ;

static ::System::Text::RegularExpressions::Regex __get_s_CustomIdentRegex() ;

 ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> __declspec(property(get=__get_m_ContextStack, put=__set_m_ContextStack))  m_ContextStack;

constexpr void __set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> __get_m_ContextStack() const;

 ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext __declspec(property(get=__get_m_CurrentContext, put=__set_m_CurrentContext))  m_CurrentContext;

constexpr void __set_m_CurrentContext(::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext __get_m_CurrentContext() const;


// Properties

 int32_t __declspec(property(get=get_valueCount))  valueCount;

 bool __declspec(property(get=get_isCurrentVariable))  isCurrentVariable;

 bool __declspec(property(get=get_isCurrentComma))  isCurrentComma;

 bool __declspec(property(get=get_hasCurrent))  hasCurrent;

 int32_t __declspec(property(get=get_currentIndex, put=set_currentIndex))  currentIndex;

 int32_t __declspec(property(get=get_matchedVariableCount, put=set_matchedVariableCount))  matchedVariableCount;


// Methods

/// @brief Method MatchKeyword addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchKeyword(::StringW keyword) ;

/// @brief Method MatchNumber addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchNumber() ;

/// @brief Method MatchInteger addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchInteger() ;

/// @brief Method MatchLength addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchLength() ;

/// @brief Method MatchPercentage addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchPercentage() ;

/// @brief Method MatchColor addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchColor() ;

/// @brief Method MatchResource addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchResource() ;

/// @brief Method MatchUrl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchUrl() ;

/// @brief Method MatchTime addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchTime() ;

/// @brief Method MatchAngle addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchAngle() ;

/// @brief Method MatchCustomIdent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MatchCustomIdent() ;

/// @brief Method get_valueCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueCount() ;

/// @brief Method get_isCurrentVariable addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isCurrentVariable() ;

/// @brief Method get_isCurrentComma addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isCurrentComma() ;

/// @brief Method get_hasCurrent addr 0x2c778b8 size 0x28 virtual false final false
 bool get_hasCurrent() ;

/// @brief Method get_currentIndex addr 0x2c778e0 size 0x8 virtual false final false
 int32_t get_currentIndex() ;

/// @brief Method set_currentIndex addr 0x2c778e8 size 0x8 virtual false final false
 void set_currentIndex(int32_t value) ;

/// @brief Method get_matchedVariableCount addr 0x2c778f0 size 0x8 virtual false final false
 int32_t get_matchedVariableCount() ;

/// @brief Method set_matchedVariableCount addr 0x2c778f8 size 0x8 virtual false final false
 void set_matchedVariableCount(int32_t value) ;

/// @brief Method Initialize addr 0x2c77900 size 0x54 virtual false final false
 void Initialize() ;

/// @brief Method MoveNext addr 0x2c77954 size 0x44 virtual false final false
 void MoveNext() ;

/// @brief Method SaveContext addr 0x2c77998 size 0x54 virtual false final false
 void SaveContext() ;

/// @brief Method RestoreContext addr 0x2c779ec size 0x58 virtual false final false
 void RestoreContext() ;

/// @brief Method DropContext addr 0x2c77a44 size 0x50 virtual false final false
 void DropContext() ;

/// @brief Method Match addr 0x2c77a94 size 0xb4 virtual false final false
 bool Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchExpression addr 0x2c77b50 size 0x114 virtual false final false
 bool MatchExpression(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchExpressionWithMultiplier addr 0x2c77c64 size 0x14c virtual false final false
 bool MatchExpressionWithMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchGroup addr 0x2c77f78 size 0xb4 virtual false final false
 bool MatchGroup(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchCombinator addr 0x2c77db0 size 0xcc virtual false final false
 bool MatchCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchOr addr 0x2c7802c size 0xd0 virtual false final false
 bool MatchOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchOrOr addr 0x2c780fc size 0x18 virtual false final false
 bool MatchOrOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchAndAnd addr 0x2c78114 size 0x30 virtual false final false
 bool MatchAndAnd(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchMany addr 0x2c781b0 size 0x180 virtual false final false
 int32_t MatchMany(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchManyByOrder addr 0x2c78330 size 0x190 virtual false final false
 int32_t MatchManyByOrder(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp, void* matchOrder) ;

/// @brief Method MatchJuxtaposition addr 0x2c78144 size 0x6c virtual false final false
 bool MatchJuxtaposition(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

/// @brief Method MatchDataType addr 0x2c77e7c size 0xfc virtual false final false
 bool MatchDataType(::UnityEngine::UIElements::StyleSheets::Syntax::Expression exp) ;

// Ctor Parameters []
explicit BaseStyleMatcher() ;

/// @brief Method .ctor addr 0x2c784c0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher/MatchContext");
