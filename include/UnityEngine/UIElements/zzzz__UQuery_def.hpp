#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
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
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__IVisualPredicateWrapper;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__UQueryMatcher;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__SingleQueryMatcher;
}
namespace UnityEngine::UIElements {
template<typename T>
class UnityEngine__UIElements__UQuery__IsOfType_1;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__FirstQueryMatcher;
}
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class UnityEngine__UIElements__UQuery__UQueryMatcher____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class UnityEngine__UIElements__UQuery__IsOfType_1;
}
namespace GlobalNamespace {
class UnityEngine__UIElements__UQuery__UQueryMatcher____c;
}
namespace UnityEngine::UIElements {
class UQuery;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__FirstQueryMatcher;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__IVisualPredicateWrapper;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class UnityEngine__UIElements__UQuery__IsOfType_1<T>;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__SingleQueryMatcher;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__UQueryMatcher;
}
// Type: ::IVisualPredicateWrapper
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7007))
// CS Name: UnityEngine.UIElements.UQuery::IVisualPredicateWrapper
class CORDL_TYPE UnityEngine__UIElements__UQuery__IVisualPredicateWrapper : public ::cordl_internals::InterfaceW {
public:
// Declarations
~UnityEngine__UIElements__UQuery__IVisualPredicateWrapper() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQuery__IVisualPredicateWrapper(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Predicate addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Predicate(::bs_hook::Il2CppWrapperType e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::IsOfType`1
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7009))
// CS Name: UnityEngine.UIElements.UQuery::UQueryMatcher::<>c
class CORDL_TYPE UnityEngine__UIElements__UQuery__UQueryMatcher____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UQuery__UQueryMatcher____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__UQueryMatcher____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__UQueryMatcher____c(UnityEngine__UIElements__UQuery__UQueryMatcher____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__UQueryMatcher____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__UQueryMatcher____c(UnityEngine__UIElements__UQuery__UQueryMatcher____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQuery__UQueryMatcher____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UQuery__UQueryMatcher____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__UQueryMatcher____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__UQueryMatcher____c& operator=(UnityEngine__UIElements__UQuery__UQueryMatcher____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UQuery__UQueryMatcher____c& operator=(UnityEngine__UIElements__UQuery__UQueryMatcher____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__UQuery__UQueryMatcher____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__UQuery__UQueryMatcher____c value) ;

static GlobalNamespace::UnityEngine__UIElements__UQuery__UQueryMatcher____c __get___9() ;

static System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo> value) ;

static System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo> __get___9__5_0() ;


// Methods

static GlobalNamespace::UnityEngine__UIElements__UQuery__UQueryMatcher____c New_ctor() ;

/// @brief Method .ctor addr 0x2c8bf90 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <TraverseRecursive>b__5_0 addr 0x2c8bf98 size 0x4 virtual false final false
 void _TraverseRecursive_b__5_0(UnityEngine::UIElements::VisualElement e, UnityEngine::UIElements::StyleSheets::MatchResultInfo i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UQueryMatcher
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7010))
// CS Name: UnityEngine.UIElements.UQuery::UQueryMatcher
class CORDL_TYPE UnityEngine__UIElements__UQuery__UQueryMatcher : public UnityEngine::UIElements::StyleSheets::HierarchyTraversal {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__UQuery__UQueryMatcher____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__UQuery__UQueryMatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__UQueryMatcher", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__UQueryMatcher(UnityEngine__UIElements__UQuery__UQueryMatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__UQueryMatcher", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__UQueryMatcher(UnityEngine__UIElements__UQuery__UQueryMatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQuery__UQueryMatcher(void* ptr) noexcept : UnityEngine::UIElements::StyleSheets::HierarchyTraversal(ptr) {
}


  constexpr UnityEngine__UIElements__UQuery__UQueryMatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__UQueryMatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__UQueryMatcher& operator=(UnityEngine__UIElements__UQuery__UQueryMatcher&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UQuery__UQueryMatcher& operator=(UnityEngine__UIElements__UQuery__UQueryMatcher const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> __declspec(property(get=__get_m_Matchers, put=__set_m_Matchers))  m_Matchers;

constexpr void __set_m_Matchers(System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> __get_m_Matchers() const;


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher New_ctor() ;

/// @brief Method .ctor addr 0x2c8bd04 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Traverse addr 0x2c8bd0c size 0x8 virtual true final false
 void Traverse(UnityEngine::UIElements::VisualElement element) ;

/// @brief Method OnRuleMatchedElement addr 0x2c8bd14 size 0x8 virtual true final false
 bool OnRuleMatchedElement(UnityEngine::UIElements::RuleMatcher matcher, UnityEngine::UIElements::VisualElement element) ;

/// @brief Method NoProcessResult addr 0x2c8bd1c size 0x4 virtual false final false
static void NoProcessResult(UnityEngine::UIElements::VisualElement e, UnityEngine::UIElements::StyleSheets::MatchResultInfo i) ;

/// @brief Method TraverseRecursive addr 0x2c8bd20 size 0x1fc virtual true final false
 void TraverseRecursive(UnityEngine::UIElements::VisualElement element, int32_t depth) ;

/// @brief Method Run addr 0x2c8bf1c size 0x10 virtual true final false
 void Run(UnityEngine::UIElements::VisualElement root, System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> matchers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::SingleQueryMatcher
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7010))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7011))
// CS Name: UnityEngine.UIElements.UQuery::SingleQueryMatcher
class CORDL_TYPE UnityEngine__UIElements__UQuery__SingleQueryMatcher : public UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__UIElements__UQuery__SingleQueryMatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__SingleQueryMatcher", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__SingleQueryMatcher(UnityEngine__UIElements__UQuery__SingleQueryMatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__SingleQueryMatcher", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__SingleQueryMatcher(UnityEngine__UIElements__UQuery__SingleQueryMatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQuery__SingleQueryMatcher(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher(ptr) {
}


  constexpr UnityEngine__UIElements__UQuery__SingleQueryMatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__SingleQueryMatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__SingleQueryMatcher& operator=(UnityEngine__UIElements__UQuery__SingleQueryMatcher&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UQuery__SingleQueryMatcher& operator=(UnityEngine__UIElements__UQuery__SingleQueryMatcher const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get__match_k__BackingField, put=__set__match_k__BackingField))  _match_k__BackingField;

constexpr void __set__match_k__BackingField(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get__match_k__BackingField() const;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_match, put=set_match))  match;


// Methods

/// @brief Method get_match addr 0x2c8bf9c size 0x8 virtual false final false
 UnityEngine::UIElements::VisualElement get_match() ;

/// @brief Method set_match addr 0x2c8bfa4 size 0x8 virtual false final false
 void set_match(UnityEngine::UIElements::VisualElement value) ;

/// @brief Method Run addr 0x2c8bfac size 0x24 virtual true final false
 void Run(UnityEngine::UIElements::VisualElement root, System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> matchers) ;

/// @brief Method IsInUse addr 0x2c8bfd0 size 0x10 virtual false final false
 bool IsInUse() ;

/// @brief Method CreateNew addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher CreateNew() ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher New_ctor() ;

/// @brief Method .ctor addr 0x2c8bfe0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::FirstQueryMatcher
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7011))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7012))
// CS Name: UnityEngine.UIElements.UQuery::FirstQueryMatcher
class CORDL_TYPE UnityEngine__UIElements__UQuery__FirstQueryMatcher : public UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__UIElements__UQuery__FirstQueryMatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__FirstQueryMatcher", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__FirstQueryMatcher(UnityEngine__UIElements__UQuery__FirstQueryMatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__FirstQueryMatcher", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__FirstQueryMatcher(UnityEngine__UIElements__UQuery__FirstQueryMatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQuery__FirstQueryMatcher(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher(ptr) {
}


  constexpr UnityEngine__UIElements__UQuery__FirstQueryMatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__FirstQueryMatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__FirstQueryMatcher& operator=(UnityEngine__UIElements__UQuery__FirstQueryMatcher&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UQuery__FirstQueryMatcher& operator=(UnityEngine__UIElements__UQuery__FirstQueryMatcher const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UQuery__FirstQueryMatcher __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__FirstQueryMatcher value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQuery__FirstQueryMatcher __get_Instance() ;


// Methods

/// @brief Method OnRuleMatchedElement addr 0x2c8bfe8 size 0x14 virtual true final false
 bool OnRuleMatchedElement(UnityEngine::UIElements::RuleMatcher matcher, UnityEngine::UIElements::VisualElement element) ;

/// @brief Method CreateNew addr 0x2c8bffc size 0x5c virtual true final false
 UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher CreateNew() ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQuery__FirstQueryMatcher New_ctor() ;

/// @brief Method .ctor addr 0x2c8c058 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UQuery
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7013))
// CS Name: UnityEngine.UIElements.UQuery
class CORDL_TYPE UQuery : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FirstQueryMatcher = UnityEngine::UIElements::UnityEngine__UIElements__UQuery__FirstQueryMatcher;

using SingleQueryMatcher = UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher;

using UQueryMatcher = UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher;

template<typename T>
using IsOfType_1 = UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IsOfType_1<T>;

using IVisualPredicateWrapper = UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IVisualPredicateWrapper;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UQuery() = default;

// Ctor Parameters [CppParam { name: "", ty: "UQuery", modifiers: " const&", def_value: None }]
constexpr UQuery(UQuery const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UQuery", modifiers: "&&", def_value: None }]
constexpr UQuery(UQuery&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UQuery(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UQuery& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UQuery& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UQuery& operator=(UQuery&& o) noexcept = default;
  constexpr UQuery& operator=(UQuery const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::IsOfType`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7008))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7008), inst: 2 })
// CS Name: UnityEngine.UIElements.UQuery::IsOfType`1
class CORDL_TYPE UnityEngine__UIElements__UQuery__IsOfType_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IVisualPredicateWrapper
constexpr operator  UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IVisualPredicateWrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UQuery__IsOfType_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__IsOfType_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__IsOfType_1(UnityEngine__UIElements__UQuery__IsOfType_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQuery__IsOfType_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UQuery__IsOfType_1(UnityEngine__UIElements__UQuery__IsOfType_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQuery__IsOfType_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UQuery__IsOfType_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__IsOfType_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQuery__IsOfType_1& operator=(UnityEngine__UIElements__UQuery__IsOfType_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UQuery__IsOfType_1& operator=(UnityEngine__UIElements__UQuery__IsOfType_1 const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IsOfType_1<T> __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IsOfType_1<T> value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IsOfType_1<T> __get_s_Instance() ;


// Methods

/// @brief Method Predicate addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Predicate(::bs_hook::Il2CppWrapperType e) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IsOfType_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IsOfType_1, "UnityEngine.UIElements", "UQuery/IsOfType`1");
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__UQuery__UQueryMatcher____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__UQuery__UQueryMatcher____c, "UnityEngine.UIElements", "UQuery/UQueryMatcher/<>c");
NEED_NO_BOX(UnityEngine::UIElements::UQuery);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UQuery, "UnityEngine.UIElements", "UQuery");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__FirstQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__FirstQueryMatcher, "UnityEngine.UIElements", "UQuery/FirstQueryMatcher");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IVisualPredicateWrapper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__IVisualPredicateWrapper, "UnityEngine.UIElements", "UQuery/IVisualPredicateWrapper");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher, "UnityEngine.UIElements", "UQuery/SingleQueryMatcher");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher, "UnityEngine.UIElements", "UQuery/UQueryMatcher");
