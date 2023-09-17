#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine::UI::CoroutineTween {
class ITweenValue;
}
// Type: UnityEngine.UI.CoroutineTween::ITweenValue
namespace UnityEngine::UI::CoroutineTween {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13089))
// CS Name: UnityEngine.UI.CoroutineTween.ITweenValue
class CORDL_TYPE ITweenValue : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITweenValue() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITweenValue(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_ignoreTimeScale))  ignoreTimeScale;

 float_t __declspec(property(get=get_duration))  duration;


// Methods

/// @brief Method TweenValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void TweenValue(float_t floatPercentage) ;

/// @brief Method get_ignoreTimeScale addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ignoreTimeScale() ;

/// @brief Method get_duration addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_duration() ;

/// @brief Method ValidTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ValidTarget() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::CoroutineTween::ITweenValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::ITweenValue, "UnityEngine.UI.CoroutineTween", "ITweenValue");
