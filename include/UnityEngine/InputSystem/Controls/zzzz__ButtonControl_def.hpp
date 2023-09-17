#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Type: UnityEngine.InputSystem.Controls::ButtonControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6711))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6712))
// CS Name: UnityEngine.InputSystem.Controls.ButtonControl
class CORDL_TYPE ButtonControl : public ::UnityEngine::InputSystem::Controls::AxisControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~ButtonControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonControl", modifiers: " const&", def_value: None }]
constexpr ButtonControl(ButtonControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonControl", modifiers: "&&", def_value: None }]
constexpr ButtonControl(ButtonControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonControl(void* ptr) noexcept : ::UnityEngine::InputSystem::Controls::AxisControl(ptr) {
}


  constexpr ButtonControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonControl& operator=(ButtonControl&& o) noexcept = default;
  constexpr ButtonControl& operator=(ButtonControl const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_pressPoint, put=__set_pressPoint))  pressPoint;

constexpr void __set_pressPoint(float_t value) ;

constexpr float_t __get_pressPoint() const;

static float_t __declspec(property(get=__get_s_GlobalDefaultButtonPressPoint, put=__set_s_GlobalDefaultButtonPressPoint))  s_GlobalDefaultButtonPressPoint;

static void __set_s_GlobalDefaultButtonPressPoint(float_t value) ;

static float_t __get_s_GlobalDefaultButtonPressPoint() ;

static float_t __declspec(property(get=__get_s_GlobalDefaultButtonReleaseThreshold, put=__set_s_GlobalDefaultButtonReleaseThreshold))  s_GlobalDefaultButtonReleaseThreshold;

static void __set_s_GlobalDefaultButtonReleaseThreshold(float_t value) ;

static float_t __get_s_GlobalDefaultButtonReleaseThreshold() ;

/// @brief Field kMinButtonPressPoint offset 0
static constexpr float_t  kMinButtonPressPoint{0.0001};


// Properties

 float_t __declspec(property(get=get_pressPointOrDefault))  pressPointOrDefault;

 bool __declspec(property(get=get_isPressed))  isPressed;

 bool __declspec(property(get=get_wasPressedThisFrame))  wasPressedThisFrame;

 bool __declspec(property(get=get_wasReleasedThisFrame))  wasReleasedThisFrame;


// Methods

/// @brief Method get_pressPointOrDefault addr 0x29775f0 size 0x58 virtual false final false
 float_t get_pressPointOrDefault() ;

// Ctor Parameters []
explicit ButtonControl() ;

/// @brief Method .ctor addr 0x2977088 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method IsValueConsideredPressed addr 0x297765c size 0x6c virtual false final false
 bool IsValueConsideredPressed(float_t value) ;

/// @brief Method get_isPressed addr 0x29776c8 size 0xa0 virtual false final false
 bool get_isPressed() ;

/// @brief Method get_wasPressedThisFrame addr 0x2977768 size 0x120 virtual false final false
 bool get_wasPressedThisFrame() ;

/// @brief Method get_wasReleasedThisFrame addr 0x2977888 size 0x120 virtual false final false
 bool get_wasReleasedThisFrame() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::ButtonControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::ButtonControl, "UnityEngine.InputSystem.Controls", "ButtonControl");
