#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITextHandle;
}
// Type: UnityEngine.UIElements::ITextHandle
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7243))
// CS Name: UnityEngine.UIElements.ITextHandle
class CORDL_TYPE ITextHandle : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITextHandle() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITextHandle(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::Vector2 __declspec(property(put=set_MeasuredSizes))  MeasuredSizes;

 UnityEngine::Vector2 __declspec(property(put=set_RoundedSizes))  RoundedSizes;


// Methods

/// @brief Method GetCursorPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 GetCursorPosition(UnityEngine::UIElements::CursorPositionStylePainterParameters parms, float_t scaling) ;

/// @brief Method ComputeTextWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ComputeTextWidth(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t scaling) ;

/// @brief Method ComputeTextHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ComputeTextHeight(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t scaling) ;

/// @brief Method GetLineHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetLineHeight(int32_t characterIndex, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, float_t textScaling, float_t pixelPerPoint) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::TextCore::Text::TextInfo Update(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t pixelsPerPoint) ;

/// @brief Method IsLegacy addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsLegacy() ;

/// @brief Method IsElided addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsElided() ;

/// @brief Method set_MeasuredSizes addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_MeasuredSizes(UnityEngine::Vector2 value) ;

/// @brief Method set_RoundedSizes addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_RoundedSizes(UnityEngine::Vector2 value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ITextHandle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ITextHandle, "UnityEngine.UIElements", "ITextHandle");
