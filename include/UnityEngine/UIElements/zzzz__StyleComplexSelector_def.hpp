#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StyleComplexSelector____c;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__StyleComplexSelector__PseudoStateData;
}
// Type: ::PseudoStateData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7358))
// CS Name: UnityEngine.UIElements.StyleComplexSelector::PseudoStateData
struct CORDL_TYPE UnityEngine__UIElements__StyleComplexSelector__PseudoStateData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "state", ty: "UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }, CppParam { name: "negate", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StyleComplexSelector__PseudoStateData(UnityEngine::UIElements::PseudoStates state, bool negate) noexcept;


                    constexpr UnityEngine__UIElements__StyleComplexSelector__PseudoStateData(UnityEngine__UIElements__StyleComplexSelector__PseudoStateData const&) = default;
                    constexpr UnityEngine__UIElements__StyleComplexSelector__PseudoStateData(UnityEngine__UIElements__StyleComplexSelector__PseudoStateData&&) = default;
                    constexpr UnityEngine__UIElements__StyleComplexSelector__PseudoStateData& operator=(UnityEngine__UIElements__StyleComplexSelector__PseudoStateData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StyleComplexSelector__PseudoStateData& operator=(UnityEngine__UIElements__StyleComplexSelector__PseudoStateData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StyleComplexSelector__PseudoStateData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::PseudoStates __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(UnityEngine::UIElements::PseudoStates value) ;

constexpr UnityEngine::UIElements::PseudoStates __get_state() const;

 bool __declspec(property(get=__get_negate, put=__set_negate))  negate;

constexpr void __set_negate(bool value) ;

constexpr bool __get_negate() const;


// Methods

/// @brief Method .ctor addr 0x2cf2288 size 0x10 virtual false final false
 void _ctor(UnityEngine::UIElements::PseudoStates state, bool negate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7359))
// CS Name: UnityEngine.UIElements.StyleComplexSelector::<>c
class CORDL_TYPE UnityEngine__UIElements__StyleComplexSelector____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StyleComplexSelector____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StyleComplexSelector____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StyleComplexSelector____c(UnityEngine__UIElements__StyleComplexSelector____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StyleComplexSelector____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StyleComplexSelector____c(UnityEngine__UIElements__StyleComplexSelector____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StyleComplexSelector____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StyleComplexSelector____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StyleComplexSelector____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StyleComplexSelector____c& operator=(UnityEngine__UIElements__StyleComplexSelector____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StyleComplexSelector____c& operator=(UnityEngine__UIElements__StyleComplexSelector____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector____c __get___9() ;

static System::Func_2<UnityEngine::UIElements::StyleSelector,::StringW> __declspec(property(get=__get___9__20_0, put=__set___9__20_0))  __9__20_0;

static void __set___9__20_0(System::Func_2<UnityEngine::UIElements::StyleSelector,::StringW> value) ;

static System::Func_2<UnityEngine::UIElements::StyleSelector,::StringW> __get___9__20_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StyleComplexSelector____c() ;

/// @brief Method .ctor addr 0x2cf248c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__20_0 addr 0x2cf2494 size 0x20 virtual false final false
 ::StringW _ToString_b__20_0(UnityEngine::UIElements::StyleSelector x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleComplexSelector
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7360))
// CS Name: UnityEngine.UIElements.StyleComplexSelector
class CORDL_TYPE StyleComplexSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector____c;

using PseudoStateData = UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~StyleComplexSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: " const&", def_value: None }]
constexpr StyleComplexSelector(StyleComplexSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "&&", def_value: None }]
constexpr StyleComplexSelector(StyleComplexSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleComplexSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleComplexSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleComplexSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleComplexSelector& operator=(StyleComplexSelector&& o) noexcept = default;
  constexpr StyleComplexSelector& operator=(StyleComplexSelector const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Specificity, put=__set_m_Specificity))  m_Specificity;

constexpr void __set_m_Specificity(int32_t value) ;

constexpr int32_t __get_m_Specificity() const;

 UnityEngine::UIElements::StyleRule __declspec(property(get=__get__rule_k__BackingField, put=__set__rule_k__BackingField))  _rule_k__BackingField;

constexpr void __set__rule_k__BackingField(UnityEngine::UIElements::StyleRule value) ;

constexpr UnityEngine::UIElements::StyleRule __get__rule_k__BackingField() const;

 ::ArrayW<UnityEngine::UIElements::StyleSelector> __declspec(property(get=__get_m_Selectors, put=__set_m_Selectors))  m_Selectors;

constexpr void __set_m_Selectors(::ArrayW<UnityEngine::UIElements::StyleSelector> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSelector> __get_m_Selectors() const;

 int32_t __declspec(property(get=__get_ruleIndex, put=__set_ruleIndex))  ruleIndex;

constexpr void __set_ruleIndex(int32_t value) ;

constexpr int32_t __get_ruleIndex() const;

 UnityEngine::UIElements::StyleComplexSelector __declspec(property(get=__get_nextInTable, put=__set_nextInTable))  nextInTable;

constexpr void __set_nextInTable(UnityEngine::UIElements::StyleComplexSelector value) ;

constexpr UnityEngine::UIElements::StyleComplexSelector __get_nextInTable() const;

 int32_t __declspec(property(get=__get_orderInStyleSheet, put=__set_orderInStyleSheet))  orderInStyleSheet;

constexpr void __set_orderInStyleSheet(int32_t value) ;

constexpr int32_t __get_orderInStyleSheet() const;

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData> __declspec(property(get=__get_s_PseudoStates, put=__set_s_PseudoStates))  s_PseudoStates;

static void __set_s_PseudoStates(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData> __get_s_PseudoStates() ;


// Properties

 int32_t __declspec(property(get=get_specificity))  specificity;

 UnityEngine::UIElements::StyleRule __declspec(property(get=get_rule, put=set_rule))  rule;

 ::ArrayW<UnityEngine::UIElements::StyleSelector> __declspec(property(get=get_selectors, put=set_selectors))  selectors;


// Methods

/// @brief Method get_specificity addr 0x2cf1ddc size 0x8 virtual false final false
 int32_t get_specificity() ;

/// @brief Method get_rule addr 0x2cf1de4 size 0x8 virtual false final false
 UnityEngine::UIElements::StyleRule get_rule() ;

/// @brief Method set_rule addr 0x2cf1dec size 0x8 virtual false final false
 void set_rule(UnityEngine::UIElements::StyleRule value) ;

/// @brief Method get_selectors addr 0x2cf1df4 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::UIElements::StyleSelector> get_selectors() ;

/// @brief Method set_selectors addr 0x2cf1dfc size 0x8 virtual false final false
 void set_selectors(::ArrayW<UnityEngine::UIElements::StyleSelector> value) ;

/// @brief Method CachePseudoStateMasks addr 0x2cf1e04 size 0x484 virtual false final false
 void CachePseudoStateMasks() ;

/// @brief Method ToString addr 0x2cf22b0 size 0x170 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit StyleComplexSelector() ;

/// @brief Method .ctor addr 0x2cf2420 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::StyleComplexSelector);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleComplexSelector, "UnityEngine.UIElements", "StyleComplexSelector");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector____c, "UnityEngine.UIElements", "StyleComplexSelector/<>c");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData, "UnityEngine.UIElements", "StyleComplexSelector/PseudoStateData");
