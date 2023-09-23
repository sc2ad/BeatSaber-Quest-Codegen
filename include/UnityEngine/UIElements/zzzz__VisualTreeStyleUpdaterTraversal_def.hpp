#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct SelectorMatchRecord;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class StyleMatchingContext;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c;
}
namespace UnityEngine::UIElements {
class VisualTreeStyleUpdaterTraversal;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6904))
// CS Name: UnityEngine.UIElements.VisualTreeStyleUpdaterTraversal::<>c
class CORDL_TYPE UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c(UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c(UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c& operator=(UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c& operator=(UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c __get___9() ;

static System::Comparison_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> __declspec(property(get=__get___9__24_0, put=__set___9__24_0))  __9__24_0;

static void __set___9__24_0(System::Comparison_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> value) ;

static System::Comparison_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> __get___9__24_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c() ;

/// @brief Method .ctor addr 0x2c4a7e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ProcessMatchedRules>b__24_0 addr 0x2c4a7f0 size 0x44 virtual false final false
 int32_t _ProcessMatchedRules_b__24_0(UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a, UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualTreeStyleUpdaterTraversal
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6905))
// CS Name: UnityEngine.UIElements.VisualTreeStyleUpdaterTraversal
class CORDL_TYPE VisualTreeStyleUpdaterTraversal : public UnityEngine::UIElements::StyleSheets::HierarchyTraversal {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~VisualTreeStyleUpdaterTraversal() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdaterTraversal", modifiers: " const&", def_value: None }]
constexpr VisualTreeStyleUpdaterTraversal(VisualTreeStyleUpdaterTraversal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdaterTraversal", modifiers: "&&", def_value: None }]
constexpr VisualTreeStyleUpdaterTraversal(VisualTreeStyleUpdaterTraversal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualTreeStyleUpdaterTraversal(void* ptr) noexcept : UnityEngine::UIElements::StyleSheets::HierarchyTraversal(ptr) {
}


  constexpr VisualTreeStyleUpdaterTraversal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualTreeStyleUpdaterTraversal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualTreeStyleUpdaterTraversal& operator=(VisualTreeStyleUpdaterTraversal&& o) noexcept = default;
  constexpr VisualTreeStyleUpdaterTraversal& operator=(VisualTreeStyleUpdaterTraversal const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::StyleVariableContext __declspec(property(get=__get_m_ProcessVarContext, put=__set_m_ProcessVarContext))  m_ProcessVarContext;

constexpr void __set_m_ProcessVarContext(UnityEngine::UIElements::StyleVariableContext value) ;

constexpr UnityEngine::UIElements::StyleVariableContext __get_m_ProcessVarContext() const;

 System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_UpdateList, put=__set_m_UpdateList))  m_UpdateList;

constexpr void __set_m_UpdateList(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __get_m_UpdateList() const;

 System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_ParentList, put=__set_m_ParentList))  m_ParentList;

constexpr void __set_m_ParentList(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __get_m_ParentList() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> __declspec(property(get=__get_m_TempMatchResults, put=__set_m_TempMatchResults))  m_TempMatchResults;

constexpr void __set_m_TempMatchResults(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> __get_m_TempMatchResults() const;

 float_t __declspec(property(get=__get__currentPixelsPerPoint_k__BackingField, put=__set__currentPixelsPerPoint_k__BackingField))  _currentPixelsPerPoint_k__BackingField;

constexpr void __set__currentPixelsPerPoint_k__BackingField(float_t value) ;

constexpr float_t __get__currentPixelsPerPoint_k__BackingField() const;

 UnityEngine::UIElements::StyleMatchingContext __declspec(property(get=__get_m_StyleMatchingContext, put=__set_m_StyleMatchingContext))  m_StyleMatchingContext;

constexpr void __set_m_StyleMatchingContext(UnityEngine::UIElements::StyleMatchingContext value) ;

constexpr UnityEngine::UIElements::StyleMatchingContext __get_m_StyleMatchingContext() const;

 UnityEngine::UIElements::StyleSheets::StylePropertyReader __declspec(property(get=__get_m_StylePropertyReader, put=__set_m_StylePropertyReader))  m_StylePropertyReader;

constexpr void __set_m_StylePropertyReader(UnityEngine::UIElements::StyleSheets::StylePropertyReader value) ;

constexpr UnityEngine::UIElements::StyleSheets::StylePropertyReader __get_m_StylePropertyReader() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_m_AnimatedProperties, put=__set_m_AnimatedProperties))  m_AnimatedProperties;

constexpr void __set_m_AnimatedProperties(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_m_AnimatedProperties() const;


// Properties

 float_t __declspec(property(get=get_currentPixelsPerPoint, put=set_currentPixelsPerPoint))  currentPixelsPerPoint;


// Methods

/// @brief Method get_currentPixelsPerPoint addr 0x2c49314 size 0x8 virtual false final false
 float_t get_currentPixelsPerPoint() ;

/// @brief Method set_currentPixelsPerPoint addr 0x2c4931c size 0x8 virtual false final false
 void set_currentPixelsPerPoint(float_t value) ;

/// @brief Method PrepareTraversal addr 0x2c48cec size 0x8 virtual false final false
 void PrepareTraversal(float_t pixelsPerPoint) ;

/// @brief Method AddChangedElement addr 0x2c48504 size 0x80 virtual false final false
 void AddChangedElement(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method Clear addr 0x2c48970 size 0xa4 virtual false final false
 void Clear() ;

/// @brief Method PropagateToChildren addr 0x2c49324 size 0xd4 virtual false final false
 void PropagateToChildren(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method PropagateToParents addr 0x2c493f8 size 0xa8 virtual false final false
 void PropagateToParents(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method OnProcessMatchResult addr 0x2c494a0 size 0x30 virtual false final false
static void OnProcessMatchResult(UnityEngine::UIElements::VisualElement current, UnityEngine::UIElements::StyleSheets::MatchResultInfo info) ;

/// @brief Method TraverseRecursive addr 0x2c494d0 size 0x600 virtual true final false
 void TraverseRecursive(UnityEngine::UIElements::VisualElement element, int32_t depth) ;

/// @brief Method ProcessTransitions addr 0x2c4a310 size 0xe4 virtual false final false
 void ProcessTransitions(UnityEngine::UIElements::VisualElement element, ByRef<UnityEngine::UIElements::ComputedStyle> oldStyle, ByRef<UnityEngine::UIElements::ComputedStyle> newStyle) ;

/// @brief Method ForceUpdateTransitions addr 0x2c4a3f4 size 0x294 virtual false final false
 void ForceUpdateTransitions(UnityEngine::UIElements::VisualElement element) ;

/// @brief Method CancelAnimationsWithNoTransitionProperty addr 0x2c48a14 size 0x2c8 virtual false final false
 void CancelAnimationsWithNoTransitionProperty(UnityEngine::UIElements::VisualElement element, ByRef<UnityEngine::UIElements::ComputedStyle> newStyle) ;

/// @brief Method ShouldSkipElement addr 0x2c49ad0 size 0x84 virtual false final false
 bool ShouldSkipElement(UnityEngine::UIElements::VisualElement element) ;

/// @brief Method ProcessMatchedRules addr 0x2c49b54 size 0x7bc virtual false final false
 UnityEngine::UIElements::ComputedStyle ProcessMatchedRules(UnityEngine::UIElements::VisualElement element, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> matchingSelectors) ;

/// @brief Method ProcessMatchedVariables addr 0x2c4a688 size 0xfc virtual false final false
 void ProcessMatchedVariables(UnityEngine::UIElements::StyleSheet sheet, UnityEngine::UIElements::StyleRule rule) ;

// Ctor Parameters []
explicit VisualTreeStyleUpdaterTraversal() ;

/// @brief Method .ctor addr 0x2c48dc8 size 0x208 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeStyleUpdaterTraversal____c, "UnityEngine.UIElements", "VisualTreeStyleUpdaterTraversal/<>c");
NEED_NO_BOX(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, "UnityEngine.UIElements", "VisualTreeStyleUpdaterTraversal");
