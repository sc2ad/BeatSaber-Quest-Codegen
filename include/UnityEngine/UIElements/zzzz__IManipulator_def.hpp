#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IManipulator;
}
// Type: UnityEngine.UIElements::IManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6990))
// CS Name: UnityEngine.UIElements.IManipulator
class CORDL_TYPE IManipulator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IManipulator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IManipulator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(put=set_target))  target;


// Methods

/// @brief Method set_target addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_target(UnityEngine::UIElements::VisualElement value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IManipulator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IManipulator, "UnityEngine.UIElements", "IManipulator");
