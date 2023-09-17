#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class ITextElement;
}
// Type: UnityEngine.UIElements::ITextElement
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6896))
// CS Name: UnityEngine.UIElements.ITextElement
class CORDL_TYPE ITextElement : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITextElement() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITextElement(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_text))  text;


// Methods

/// @brief Method get_text addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_text() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ITextElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITextElement, "UnityEngine.UIElements", "ITextElement");
