#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct SelectorMatchRecord;
}
// Type: UnityEngine.UIElements.StyleSheets::SelectorMatchRecord
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7569))
// CS Name: UnityEngine.UIElements.StyleSheets.SelectorMatchRecord
struct CORDL_TYPE SelectorMatchRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sheet", ty: "UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: None }, CppParam { name: "styleSheetIndexInStack", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "complexSelector", ty: "UnityEngine::UIElements::StyleComplexSelector", modifiers: "", def_value: None }]
constexpr SelectorMatchRecord(UnityEngine::UIElements::StyleSheet sheet, int32_t styleSheetIndexInStack, UnityEngine::UIElements::StyleComplexSelector complexSelector) noexcept;


                    constexpr SelectorMatchRecord(SelectorMatchRecord const&) = default;
                    constexpr SelectorMatchRecord(SelectorMatchRecord&&) = default;
                    constexpr SelectorMatchRecord& operator=(SelectorMatchRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SelectorMatchRecord& operator=(SelectorMatchRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SelectorMatchRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_sheet, put=__set_sheet))  sheet;

constexpr void __set_sheet(UnityEngine::UIElements::StyleSheet value) ;

constexpr UnityEngine::UIElements::StyleSheet __get_sheet() const;

 int32_t __declspec(property(get=__get_styleSheetIndexInStack, put=__set_styleSheetIndexInStack))  styleSheetIndexInStack;

constexpr void __set_styleSheetIndexInStack(int32_t value) ;

constexpr int32_t __get_styleSheetIndexInStack() const;

 UnityEngine::UIElements::StyleComplexSelector __declspec(property(get=__get_complexSelector, put=__set_complexSelector))  complexSelector;

constexpr void __set_complexSelector(UnityEngine::UIElements::StyleComplexSelector value) ;

constexpr UnityEngine::UIElements::StyleComplexSelector __get_complexSelector() const;


// Methods

/// @brief Method .ctor addr 0x2c70d2c size 0x14 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleSheet sheet, int32_t styleSheetIndexInStack) ;

/// @brief Method Compare addr 0x2c70d40 size 0xe8 virtual false final false
static int32_t Compare(UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a, UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, "UnityEngine.UIElements.StyleSheets", "SelectorMatchRecord");
