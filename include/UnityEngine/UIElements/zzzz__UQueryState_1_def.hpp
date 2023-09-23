#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UQuery_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UQuery__SingleQueryMatcher;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher;
}
namespace UnityEngine::UIElements {
template<typename T,typename TElement>
class UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher<T>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TElement>
class UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T,TElement>;
}
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryState_1;
}
namespace UnityEngine::UIElements {
template<typename T>
struct UnityEngine__UIElements__UQueryState_1__Enumerator;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
struct UQueryState_1<T>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
struct UnityEngine__UIElements__UQueryState_1__Enumerator<T>;
}
// Type: ::ListQueryMatcher`1
// Type: ::ActionQueryMatcher
// Type: ::Enumerator
// Type: UnityEngine.UIElements::UQueryState`1
// Type: ::ListQueryMatcher`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7014)), TypeDefinitionIndex(TypeDefinitionIndex(7010))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7014), inst: 80 })
// CS Name: UnityEngine.UIElements.UQueryState`1::ListQueryMatcher`1
class CORDL_TYPE UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T,TElement> : public UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1(UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1(UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher(ptr) {
}


  constexpr UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1& operator=(UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1& operator=(UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<TElement> __declspec(property(get=__get__matches_k__BackingField, put=__set__matches_k__BackingField))  _matches_k__BackingField;

constexpr void __set__matches_k__BackingField(System::Collections::Generic::List_1<TElement> value) ;

constexpr System::Collections::Generic::List_1<TElement> __get__matches_k__BackingField() const;


// Properties

 System::Collections::Generic::List_1<TElement> __declspec(property(get=get_matches, put=set_matches))  matches;


// Methods

/// @brief Method get_matches addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<TElement> get_matches() ;

/// @brief Method set_matches addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_matches(System::Collections::Generic::List_1<TElement> value) ;

/// @brief Method OnRuleMatchedElement addr 0x0 size 0xffffffffffffffff virtual true final false
 bool OnRuleMatchedElement(UnityEngine::UIElements::RuleMatcher matcher, UnityEngine::UIElements::VisualElement element) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ActionQueryMatcher
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7010)), TypeDefinitionIndex(TypeDefinitionIndex(7015))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7015), inst: 2 })
// CS Name: UnityEngine.UIElements.UQueryState`1::ActionQueryMatcher
class CORDL_TYPE UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher<T> : public UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher(UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher(UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__UQuery__UQueryMatcher(ptr) {
}


  constexpr UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher& operator=(UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher& operator=(UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher const& o) noexcept = default;
                


// Fields

 System::Action_1<T> __declspec(property(get=__get__callBack_k__BackingField, put=__set__callBack_k__BackingField))  _callBack_k__BackingField;

constexpr void __set__callBack_k__BackingField(System::Action_1<T> value) ;

constexpr System::Action_1<T> __get__callBack_k__BackingField() const;


// Properties

 System::Action_1<T> __declspec(property(get=get_callBack))  callBack;


// Methods

/// @brief Method get_callBack addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Action_1<T> get_callBack() ;

/// @brief Method OnRuleMatchedElement addr 0x0 size 0xffffffffffffffff virtual true final false
 bool OnRuleMatchedElement(UnityEngine::UIElements::RuleMatcher matcher, UnityEngine::UIElements::VisualElement element) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Enumerator
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7016)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7016), inst: 2 })
// CS Name: UnityEngine.UIElements.UQueryState`1::Enumerator
struct CORDL_TYPE UnityEngine__UIElements__UQueryState_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "iterationList", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "currentIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UQueryState_1__Enumerator(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> iterationList, int32_t currentIndex) noexcept;


                    constexpr UnityEngine__UIElements__UQueryState_1__Enumerator(UnityEngine__UIElements__UQueryState_1__Enumerator const&) = default;
                    constexpr UnityEngine__UIElements__UQueryState_1__Enumerator(UnityEngine__UIElements__UQueryState_1__Enumerator&&) = default;
                    constexpr UnityEngine__UIElements__UQueryState_1__Enumerator& operator=(UnityEngine__UIElements__UQueryState_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UQueryState_1__Enumerator& operator=(UnityEngine__UIElements__UQueryState_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UQueryState_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_iterationList, put=__set_iterationList))  iterationList;

constexpr void __set_iterationList(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __get_iterationList() const;

 int32_t __declspec(property(get=__get_currentIndex, put=__set_currentIndex))  currentIndex;

constexpr void __set_currentIndex(int32_t value) ;

constexpr int32_t __get_currentIndex() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::UQueryState_1<T> queryState) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UQueryState`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7017)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7017), inst: 2 })
// CS Name: UnityEngine.UIElements.UQueryState`1
struct CORDL_TYPE UQueryState_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__Enumerator<T>;

using ActionQueryMatcher = UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher<T>;

template<typename TElement>
using ListQueryMatcher_1 = UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T, T, TElement>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::UQueryState_1<T>>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::UQueryState_1<T>>() const;

// Ctor Parameters [CppParam { name: "m_Element", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "m_Matchers", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher>", modifiers: "", def_value: None }]
constexpr UQueryState_1(UnityEngine::UIElements::VisualElement m_Element, System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> m_Matchers) noexcept;


                    constexpr UQueryState_1(UQueryState_1 const&) = default;
                    constexpr UQueryState_1(UQueryState_1&&) = default;
                    constexpr UQueryState_1& operator=(UQueryState_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UQueryState_1& operator=(UQueryState_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UQueryState_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher<T> __declspec(property(get=__get_s_Action, put=__set_s_Action))  s_Action;

static void __set_s_Action(UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher<T> value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher<T> __get_s_Action() ;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Element, put=__set_m_Element))  m_Element;

constexpr void __set_m_Element(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Element() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> __declspec(property(get=__get_m_Matchers, put=__set_m_Matchers))  m_Matchers;

constexpr void __set_m_Matchers(System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> __get_m_Matchers() const;

static UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T,T> __declspec(property(get=__get_s_List, put=__set_s_List))  s_List;

static void __set_s_List(UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T,T> value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T,T> __get_s_List() ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T,UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_s_EnumerationList, put=__set_s_EnumerationList))  s_EnumerationList;

static void __set_s_EnumerationList(UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T,UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1<T,UnityEngine::UIElements::VisualElement> __get_s_EnumerationList() ;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::VisualElement element, System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> matchers) ;

/// @brief Method RebuildOn addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UQueryState_1<T> RebuildOn(UnityEngine::UIElements::VisualElement element) ;

/// @brief Method Single addr 0x0 size 0xffffffffffffffff virtual false final false
 T Single(UnityEngine::UIElements::UnityEngine__UIElements__UQuery__SingleQueryMatcher matcher) ;

/// @brief Method First addr 0x0 size 0xffffffffffffffff virtual false final false
 T First() ;

/// @brief Method ToList addr 0x0 size 0xffffffffffffffff virtual false final false
 void ToList(System::Collections::Generic::List_1<T> results) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::UIElements::UQueryState_1<T> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ActionQueryMatcher, "UnityEngine.UIElements", "UQueryState`1/ActionQueryMatcher");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__ListQueryMatcher_1, "UnityEngine.UIElements", "UQueryState`1/ListQueryMatcher`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::UIElements::UQueryState_1, "UnityEngine.UIElements", "UQueryState`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::UIElements::UnityEngine__UIElements__UQueryState_1__Enumerator, "UnityEngine.UIElements", "UQueryState`1/Enumerator");
