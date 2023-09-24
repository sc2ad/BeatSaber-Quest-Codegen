#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class IEquatable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
namespace UnityEngine::UIElements {
struct StyleSelectorRelationship;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryState_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryBuilder_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
struct UQueryBuilder_1<T>;
}
// Type: UnityEngine.UIElements::UQueryBuilder`1
// Type: UnityEngine.UIElements::UQueryBuilder`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7018)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7018), inst: 2 })
// CS Name: UnityEngine.UIElements.UQueryBuilder`1
struct CORDL_TYPE UQueryBuilder_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::UQueryBuilder_1<T>>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::UQueryBuilder_1<T>>() const;

// Ctor Parameters [CppParam { name: "m_StyleSelectors", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector>", modifiers: "", def_value: None }, CppParam { name: "m_Parts", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart>", modifiers: "", def_value: None }, CppParam { name: "m_Element", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "m_Matchers", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher>", modifiers: "", def_value: None }, CppParam { name: "m_Relationship", ty: "UnityEngine::UIElements::StyleSelectorRelationship", modifiers: "", def_value: None }, CppParam { name: "pseudoStatesMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "negatedPseudoStatesMask", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UQueryBuilder_1(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> m_StyleSelectors, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> m_Parts, UnityEngine::UIElements::VisualElement m_Element, System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> m_Matchers, UnityEngine::UIElements::StyleSelectorRelationship m_Relationship, int32_t pseudoStatesMask, int32_t negatedPseudoStatesMask) noexcept;


                    constexpr UQueryBuilder_1(UQueryBuilder_1 const&) = default;
                    constexpr UQueryBuilder_1(UQueryBuilder_1&&) = default;
                    constexpr UQueryBuilder_1& operator=(UQueryBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UQueryBuilder_1& operator=(UQueryBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UQueryBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> __declspec(property(get=__get_m_StyleSelectors, put=__set_m_StyleSelectors))  m_StyleSelectors;

constexpr void __set_m_StyleSelectors(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> __get_m_StyleSelectors() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> __declspec(property(get=__get_m_Parts, put=__set_m_Parts))  m_Parts;

constexpr void __set_m_Parts(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> __get_m_Parts() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Element, put=__set_m_Element))  m_Element;

constexpr void __set_m_Element(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Element() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> __declspec(property(get=__get_m_Matchers, put=__set_m_Matchers))  m_Matchers;

constexpr void __set_m_Matchers(System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> __get_m_Matchers() const;

 UnityEngine::UIElements::StyleSelectorRelationship __declspec(property(get=__get_m_Relationship, put=__set_m_Relationship))  m_Relationship;

constexpr void __set_m_Relationship(UnityEngine::UIElements::StyleSelectorRelationship value) ;

constexpr UnityEngine::UIElements::StyleSelectorRelationship __get_m_Relationship() const;

 int32_t __declspec(property(get=__get_pseudoStatesMask, put=__set_pseudoStatesMask))  pseudoStatesMask;

constexpr void __set_pseudoStatesMask(int32_t value) ;

constexpr int32_t __get_pseudoStatesMask() const;

 int32_t __declspec(property(get=__get_negatedPseudoStatesMask, put=__set_negatedPseudoStatesMask))  negatedPseudoStatesMask;

constexpr void __set_negatedPseudoStatesMask(int32_t value) ;

constexpr int32_t __get_negatedPseudoStatesMask() const;


// Properties

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> __declspec(property(get=get_styleSelectors))  styleSelectors;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> __declspec(property(get=get_parts))  parts;


// Methods

/// @brief Method get_styleSelectors addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> get_styleSelectors() ;

/// @brief Method get_parts addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> get_parts() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::VisualElement visualElement) ;

/// @brief Method Class addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UQueryBuilder_1<T> Class(::StringW classname) ;

/// @brief Method Name addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UQueryBuilder_1<T> Name(::StringW id) ;

/// @brief Method OfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T2>
 UnityEngine::UIElements::UQueryBuilder_1<T2> OfType(::StringW name, ::StringW className) ;

/// @brief Method SingleBaseType addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UQueryBuilder_1<T> SingleBaseType() ;

/// @brief Method AddClass addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddClass(::StringW c) ;

/// @brief Method AddName addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddName(::StringW id) ;

/// @brief Method AddType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T2>
 void AddType() ;

/// @brief Method AddRelationship addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T2>
 UnityEngine::UIElements::UQueryBuilder_1<T2> AddRelationship(UnityEngine::UIElements::StyleSelectorRelationship relationship) ;

/// @brief Method AddPseudoStatesRuleIfNecessasy addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddPseudoStatesRuleIfNecessasy() ;

/// @brief Method FinishSelector addr 0x0 size 0xffffffffffffffff virtual false final false
 void FinishSelector() ;

/// @brief Method CurrentSelectorEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool CurrentSelectorEmpty() ;

/// @brief Method FinishCurrentSelector addr 0x0 size 0xffffffffffffffff virtual false final false
 void FinishCurrentSelector() ;

/// @brief Method Build addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UQueryState_1<T> Build() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static T op_Implicit_T(UnityEngine::UIElements::UQueryBuilder_1<T> s) ;

/// @brief Method First addr 0x0 size 0xffffffffffffffff virtual false final false
 T First() ;

/// @brief Method ToList addr 0x0 size 0xffffffffffffffff virtual false final false
 void ToList(System::Collections::Generic::List_1<T> results) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::UIElements::UQueryBuilder_1<T> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::UIElements::UQueryBuilder_1, "UnityEngine.UIElements", "UQueryBuilder`1");
