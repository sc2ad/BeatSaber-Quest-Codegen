#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyValue
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7562))
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct CORDL_TYPE StylePropertyValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "::UnityEngine::UIElements::StyleValueHandle", modifiers: "", def_value: None }]
constexpr StylePropertyValue(::UnityEngine::UIElements::StyleSheet sheet, ::UnityEngine::UIElements::StyleValueHandle handle) noexcept;


                    constexpr StylePropertyValue(StylePropertyValue const&) = default;
                    constexpr StylePropertyValue(StylePropertyValue&&) = default;
                    constexpr StylePropertyValue& operator=(StylePropertyValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StylePropertyValue& operator=(StylePropertyValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StylePropertyValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_sheet, put=__set_sheet))  sheet;

constexpr void __set_sheet(::UnityEngine::UIElements::StyleSheet value) ;

constexpr ::UnityEngine::UIElements::StyleSheet __get_sheet() const;

 ::UnityEngine::UIElements::StyleValueHandle __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::UnityEngine::UIElements::StyleValueHandle value) ;

constexpr ::UnityEngine::UIElements::StyleValueHandle __get_handle() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyValue, "UnityEngine.UIElements.StyleSheets", "StylePropertyValue");
