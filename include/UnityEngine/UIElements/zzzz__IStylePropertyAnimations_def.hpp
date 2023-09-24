#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStylePropertyAnimations;
}
// Type: UnityEngine.UIElements::IStylePropertyAnimations
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6866))
// CS Name: UnityEngine.UIElements.IStylePropertyAnimations
class CORDL_TYPE IStylePropertyAnimations : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStylePropertyAnimations() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStylePropertyAnimations(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_runningAnimationCount, put=set_runningAnimationCount))  runningAnimationCount;

 int32_t __declspec(property(get=get_completedAnimationCount, put=set_completedAnimationCount))  completedAnimationCount;


// Methods

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t from, float_t to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Length from, UnityEngine::UIElements::Length to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::Color from, UnityEngine::Color to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartEnum addr 0x0 size 0xffffffffffffffff virtual true final false
 bool StartEnum(UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Background from, UnityEngine::UIElements::Background to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::FontDefinition from, UnityEngine::UIElements::FontDefinition to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::Font from, UnityEngine::Font to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::TextShadow from, UnityEngine::UIElements::TextShadow to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Scale from, UnityEngine::UIElements::Scale to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Translate from, UnityEngine::UIElements::Translate to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Rotate from, UnityEngine::UIElements::Rotate to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Start(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::TransformOrigin from, UnityEngine::UIElements::TransformOrigin to, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateAnimation(UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllAnimations(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelAnimation(UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelAllAnimations() ;

/// @brief Method get_runningAnimationCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_runningAnimationCount() ;

/// @brief Method set_runningAnimationCount addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_runningAnimationCount(int32_t value) ;

/// @brief Method get_completedAnimationCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_completedAnimationCount() ;

/// @brief Method set_completedAnimationCount addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_completedAnimationCount(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IStylePropertyAnimations);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IStylePropertyAnimations, "UnityEngine.UIElements", "IStylePropertyAnimations");
