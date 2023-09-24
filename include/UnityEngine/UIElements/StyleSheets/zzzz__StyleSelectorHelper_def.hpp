#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct SelectorMatchRecord;
}
namespace UnityEngine::UIElements {
class StyleMatchingContext;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSelectorHelper;
}
// Type: UnityEngine.UIElements.StyleSheets::StyleSelectorHelper
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7570))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSelectorHelper
class CORDL_TYPE StyleSelectorHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StyleSelectorHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSelectorHelper", modifiers: " const&", def_value: None }]
constexpr StyleSelectorHelper(StyleSelectorHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSelectorHelper", modifiers: "&&", def_value: None }]
constexpr StyleSelectorHelper(StyleSelectorHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleSelectorHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleSelectorHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleSelectorHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleSelectorHelper& operator=(StyleSelectorHelper&& o) noexcept = default;
  constexpr StyleSelectorHelper& operator=(StyleSelectorHelper const& o) noexcept = default;
                


// Methods

/// @brief Method MatchesSelector addr 0x2c70e28 size 0x2bc virtual false final false
static UnityEngine::UIElements::StyleSheets::MatchResultInfo MatchesSelector(UnityEngine::UIElements::VisualElement element, UnityEngine::UIElements::StyleSelector selector) ;

/// @brief Method MatchRightToLeft addr 0x2c710e4 size 0x1c8 virtual false final false
static bool MatchRightToLeft(UnityEngine::UIElements::VisualElement element, UnityEngine::UIElements::StyleComplexSelector complexSelector, System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo> processResult) ;

/// @brief Method FastLookup addr 0x2c712ac size 0x1c4 virtual false final false
static void FastLookup(System::Collections::Generic::IDictionary_2<::StringW,UnityEngine::UIElements::StyleComplexSelector> table, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> matchedSelectors, UnityEngine::UIElements::StyleMatchingContext context, ::StringW input, ByRef<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> record) ;

/// @brief Method FindMatches addr 0x2c71470 size 0x358 virtual false final false
static void FindMatches(UnityEngine::UIElements::StyleMatchingContext context, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> matchedSelectors, int32_t parentSheetIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::StyleSelectorHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StyleSelectorHelper, "UnityEngine.UIElements.StyleSheets", "StyleSelectorHelper");
