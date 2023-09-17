#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
// Type: UnityEngine.UIElements::RuleMatcher
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7006))
// CS Name: UnityEngine.UIElements.RuleMatcher
struct CORDL_TYPE RuleMatcher : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: None }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector", modifiers: "", def_value: None }]
constexpr RuleMatcher(::UnityEngine::UIElements::StyleSheet sheet, ::UnityEngine::UIElements::StyleComplexSelector complexSelector) noexcept;


                    constexpr RuleMatcher(RuleMatcher const&) = default;
                    constexpr RuleMatcher(RuleMatcher&&) = default;
                    constexpr RuleMatcher& operator=(RuleMatcher const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuleMatcher& operator=(RuleMatcher&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuleMatcher(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_sheet, put=__set_sheet))  sheet;

constexpr void __set_sheet(::UnityEngine::UIElements::StyleSheet value) ;

constexpr ::UnityEngine::UIElements::StyleSheet __get_sheet() const;

 ::UnityEngine::UIElements::StyleComplexSelector __declspec(property(get=__get_complexSelector, put=__set_complexSelector))  complexSelector;

constexpr void __set_complexSelector(::UnityEngine::UIElements::StyleComplexSelector value) ;

constexpr ::UnityEngine::UIElements::StyleComplexSelector __get_complexSelector() const;


// Methods

/// @brief Method ToString addr 0x2c8bce4 size 0x20 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuleMatcher, "UnityEngine.UIElements", "RuleMatcher");
