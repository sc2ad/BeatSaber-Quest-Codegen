#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
class ICanvasElement;
}
// Type: UnityEngine.UI::ICanvasElement
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12960))
// CS Name: UnityEngine.UI.ICanvasElement
class CORDL_TYPE ICanvasElement : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICanvasElement() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICanvasElement(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::Transform __declspec(property(get=get_transform))  transform;


// Methods

/// @brief Method Rebuild addr 0x0 size 0xffffffffffffffff virtual true final false
 void Rebuild(::UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method get_transform addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Transform get_transform() ;

/// @brief Method LayoutComplete addr 0x0 size 0xffffffffffffffff virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x0 size 0xffffffffffffffff virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method IsDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsDestroyed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::ICanvasElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ICanvasElement, "UnityEngine.UI", "ICanvasElement");
