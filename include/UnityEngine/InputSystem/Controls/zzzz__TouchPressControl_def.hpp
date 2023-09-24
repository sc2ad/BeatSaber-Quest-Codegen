#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
// Type: UnityEngine.InputSystem.Controls::TouchPressControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6712))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6726))
// CS Name: UnityEngine.InputSystem.Controls.TouchPressControl
class CORDL_TYPE TouchPressControl : public UnityEngine::InputSystem::Controls::ButtonControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~TouchPressControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchPressControl", modifiers: " const&", def_value: None }]
constexpr TouchPressControl(TouchPressControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchPressControl", modifiers: "&&", def_value: None }]
constexpr TouchPressControl(TouchPressControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TouchPressControl(void* ptr) noexcept : UnityEngine::InputSystem::Controls::ButtonControl(ptr) {
}


  constexpr TouchPressControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TouchPressControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TouchPressControl& operator=(TouchPressControl&& o) noexcept = default;
  constexpr TouchPressControl& operator=(TouchPressControl const& o) noexcept = default;
                


// Methods

/// @brief Method FinishSetup addr 0x2979324 size 0xac virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x29793d0 size 0x48 virtual true final false
 float_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x29795ac size 0x40 virtual true final false
 void WriteValueIntoState(float_t value, void* statePtr) ;

static UnityEngine::InputSystem::Controls::TouchPressControl New_ctor() ;

/// @brief Method .ctor addr 0x29795ec size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(UnityEngine::InputSystem::Controls::TouchPressControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::TouchPressControl, "UnityEngine.InputSystem.Controls", "TouchPressControl");
