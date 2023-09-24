#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace VRUIControls {
class MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__PointerEventData__InputButton;
}
// Forward declare root types
namespace VRUIControls {
class ButtonState;
}
// Type: VRUIControls::ButtonState
namespace VRUIControls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15634))
// CS Name: VRUIControls.ButtonState
class CORDL_TYPE ButtonState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ButtonState() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonState", modifiers: " const&", def_value: None }]
constexpr ButtonState(ButtonState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonState", modifiers: "&&", def_value: None }]
constexpr ButtonState(ButtonState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ButtonState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonState& operator=(ButtonState&& o) noexcept = default;
  constexpr ButtonState& operator=(ButtonState const& o) noexcept = default;
                


// Fields

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton value) ;

constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton __get__button() const;

 VRUIControls::MouseButtonEventData __declspec(property(get=__get__eventData, put=__set__eventData))  _eventData;

constexpr void __set__eventData(VRUIControls::MouseButtonEventData value) ;

constexpr VRUIControls::MouseButtonEventData __get__eventData() const;

 float_t __declspec(property(get=__get__pressedValue, put=__set__pressedValue))  _pressedValue;

constexpr void __set__pressedValue(float_t value) ;

constexpr float_t __get__pressedValue() const;


// Properties

 VRUIControls::MouseButtonEventData __declspec(property(get=get_eventData, put=set_eventData))  eventData;

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton __declspec(property(get=get_button, put=set_button))  button;

 float_t __declspec(property(get=get_pressedValue, put=set_pressedValue))  pressedValue;


// Methods

/// @brief Method get_eventData addr 0x2d3ac7c size 0x8 virtual false final false
 VRUIControls::MouseButtonEventData get_eventData() ;

/// @brief Method set_eventData addr 0x2d3ac84 size 0x8 virtual false final false
 void set_eventData(VRUIControls::MouseButtonEventData value) ;

/// @brief Method get_button addr 0x2d3ac8c size 0x8 virtual false final false
 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton get_button() ;

/// @brief Method set_button addr 0x2d3ac94 size 0x8 virtual false final false
 void set_button(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton value) ;

/// @brief Method get_pressedValue addr 0x2d3ac9c size 0x8 virtual false final false
 float_t get_pressedValue() ;

/// @brief Method set_pressedValue addr 0x2d3aca4 size 0x8 virtual false final false
 void set_pressedValue(float_t value) ;

static VRUIControls::ButtonState New_ctor() ;

/// @brief Method .ctor addr 0x2d3acac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
NEED_NO_BOX(VRUIControls::ButtonState);
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::ButtonState, "VRUIControls", "ButtonState");
