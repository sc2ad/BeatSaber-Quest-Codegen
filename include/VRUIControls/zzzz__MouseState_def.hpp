#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace VRUIControls {
class ButtonState;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__PointerEventData__InputButton;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__PointerEventData__FramePressState;
}
// Forward declare root types
namespace VRUIControls {
class MouseState;
}
// Type: VRUIControls::MouseState
namespace VRUIControls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15636))
// CS Name: VRUIControls.MouseState
class CORDL_TYPE MouseState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MouseState() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseState", modifiers: " const&", def_value: None }]
constexpr MouseState(MouseState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseState", modifiers: "&&", def_value: None }]
constexpr MouseState(MouseState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MouseState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseState& operator=(MouseState&& o) noexcept = default;
  constexpr MouseState& operator=(MouseState const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<VRUIControls::ButtonState> __declspec(property(get=__get__trackedButtons, put=__set__trackedButtons))  _trackedButtons;

constexpr void __set__trackedButtons(System::Collections::Generic::List_1<VRUIControls::ButtonState> value) ;

constexpr System::Collections::Generic::List_1<VRUIControls::ButtonState> __get__trackedButtons() const;


// Methods

/// @brief Method AnyPressesThisFrame addr 0x2d3ace0 size 0xa4 virtual false final false
 bool AnyPressesThisFrame() ;

/// @brief Method AnyReleasesThisFrame addr 0x2d3ad84 size 0xa8 virtual false final false
 bool AnyReleasesThisFrame() ;

/// @brief Method GetButtonState addr 0x2d3ae2c size 0x19c virtual false final false
 VRUIControls::ButtonState GetButtonState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton button) ;

/// @brief Method SetButtonState addr 0x2d3afc8 size 0x38 virtual false final false
 void SetButtonState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton button, UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState stateForMouseButton, UnityEngine::EventSystems::PointerEventData data) ;

static VRUIControls::MouseState New_ctor() ;

/// @brief Method .ctor addr 0x2d3b000 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
NEED_NO_BOX(VRUIControls::MouseState);
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::MouseState, "VRUIControls", "MouseState");
