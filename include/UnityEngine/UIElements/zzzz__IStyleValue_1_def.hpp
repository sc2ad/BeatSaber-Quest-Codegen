#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
// Type: UnityEngine.UIElements::IStyleValue`1
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7398))
// CS Name: UnityEngine.UIElements.IStyleValue`1
class CORDL_TYPE IStyleValue_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStyleValue_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStyleValue_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 T __declspec(property(get=get_value))  value;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_value() ;

/// @brief Method get_keyword addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleKeyword get_keyword() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::IStyleValue_1, "UnityEngine.UIElements", "IStyleValue`1");
