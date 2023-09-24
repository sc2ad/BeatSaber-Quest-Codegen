#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStylePainter;
}
// Type: UnityEngine.UIElements::IStylePainter
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6853))
// CS Name: UnityEngine.UIElements.IStylePainter
class CORDL_TYPE IStylePainter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStylePainter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStylePainter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method DrawText addr 0x0 size 0xffffffffffffffff virtual true final false
 void DrawText(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint) ;

/// @brief Method DrawRectangle addr 0x0 size 0xffffffffffffffff virtual true final false
 void DrawRectangle(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams) ;

/// @brief Method DrawImmediate addr 0x0 size 0xffffffffffffffff virtual true final false
 void DrawImmediate(System::Action callback, bool cullingEnabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IStylePainter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IStylePainter, "UnityEngine.UIElements", "IStylePainter");
