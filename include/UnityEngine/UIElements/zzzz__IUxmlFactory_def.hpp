#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
// Type: UnityEngine.UIElements::IUxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7088))
// CS Name: UnityEngine.UIElements.IUxmlFactory
class CORDL_TYPE IUxmlFactory : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IUxmlFactory() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUxmlFactory(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_uxmlQualifiedName))  uxmlQualifiedName;


// Methods

/// @brief Method get_uxmlQualifiedName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_uxmlQualifiedName() ;

/// @brief Method AcceptsAttributeBag addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::VisualElement Create(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IUxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IUxmlFactory, "UnityEngine.UIElements", "IUxmlFactory");
