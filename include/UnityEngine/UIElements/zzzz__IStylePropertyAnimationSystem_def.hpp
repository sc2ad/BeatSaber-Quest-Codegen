#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
// Type: UnityEngine.UIElements::IStylePropertyAnimationSystem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6917))
// CS Name: UnityEngine.UIElements.IStylePropertyAnimationSystem
class CORDL_TYPE IStylePropertyAnimationSystem : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStylePropertyAnimationSystem() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStylePropertyAnimationSystem(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, float_t startValue, float_t endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, int32_t startValue, int32_t endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Length startValue, ::UnityEngine::UIElements::Length endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::Color startValue, ::UnityEngine::Color endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Background startValue, ::UnityEngine::UIElements::Background endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::FontDefinition startValue, ::UnityEngine::UIElements::FontDefinition endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::Font startValue, ::UnityEngine::Font endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::TextShadow startValue, ::UnityEngine::UIElements::TextShadow endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Scale startValue, ::UnityEngine::UIElements::Scale endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::TransformOrigin startValue, ::UnityEngine::UIElements::TransformOrigin endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Translate startValue, ::UnityEngine::UIElements::Translate endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartTransition(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Rotate startValue, ::UnityEngine::UIElements::Rotate endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelAllAnimations(::UnityEngine::UIElements::VisualElement owner) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelAnimation(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateAnimation(::UnityEngine::UIElements::VisualElement owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllAnimations(::UnityEngine::UIElements::VisualElement owner, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId> propertyIds) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IStylePropertyAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IStylePropertyAnimationSystem, "UnityEngine.UIElements", "IStylePropertyAnimationSystem");
