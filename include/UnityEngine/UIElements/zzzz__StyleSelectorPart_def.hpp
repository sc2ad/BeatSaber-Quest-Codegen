#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::UIElements {
struct StyleSelectorType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
// Type: UnityEngine.UIElements::StyleSelectorPart
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7363))
// CS Name: UnityEngine.UIElements.StyleSelectorPart
struct CORDL_TYPE StyleSelectorPart : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::StyleSelectorType", modifiers: "", def_value: None }, CppParam { name: "tempData", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr StyleSelectorPart(::StringW m_Value, ::UnityEngine::UIElements::StyleSelectorType m_Type, ::bs_hook::Il2CppWrapperType tempData) noexcept;


                    constexpr StyleSelectorPart(StyleSelectorPart const&) = default;
                    constexpr StyleSelectorPart(StyleSelectorPart&&) = default;
                    constexpr StyleSelectorPart& operator=(StyleSelectorPart const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleSelectorPart& operator=(StyleSelectorPart&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleSelectorPart(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(::StringW value) ;

constexpr ::StringW __get_m_Value() const;

 ::UnityEngine::UIElements::StyleSelectorType __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(::UnityEngine::UIElements::StyleSelectorType value) ;

constexpr ::UnityEngine::UIElements::StyleSelectorType __get_m_Type() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_tempData, put=__set_tempData))  tempData;

constexpr void __set_tempData(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_tempData() const;


// Properties

 ::StringW __declspec(property(get=get_value))  value;

 ::UnityEngine::UIElements::StyleSelectorType __declspec(property(get=get_type, put=set_type))  type;


// Methods

/// @brief Method get_value addr 0x2cf22a8 size 0x8 virtual false final false
 ::StringW get_value() ;

/// @brief Method get_type addr 0x2cf22a0 size 0x8 virtual false final false
 ::UnityEngine::UIElements::StyleSelectorType get_type() ;

/// @brief Method set_type addr 0x2cf24cc size 0x8 virtual false final false
 void set_type(::UnityEngine::UIElements::StyleSelectorType value) ;

/// @brief Method ToString addr 0x2cf24d4 size 0x110 virtual true final false
 ::StringW ToString() ;

/// @brief Method CreateClass addr 0x2cf25e4 size 0x18 virtual false final false
static ::UnityEngine::UIElements::StyleSelectorPart CreateClass(::StringW className) ;

/// @brief Method CreateId addr 0x2cf25fc size 0x18 virtual false final false
static ::UnityEngine::UIElements::StyleSelectorPart CreateId(::StringW Id) ;

/// @brief Method CreatePredicate addr 0x2cf2614 size 0x18 virtual false final false
static ::UnityEngine::UIElements::StyleSelectorPart CreatePredicate(::bs_hook::Il2CppWrapperType predicate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelectorPart, "UnityEngine.UIElements", "StyleSelectorPart");
