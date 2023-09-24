#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusRemote;
}
// Type: Unity.XR.Oculus.Input::OculusRemote
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15245))
// CS Name: Unity.XR.Oculus.Input.OculusRemote
class CORDL_TYPE OculusRemote : public UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x170};

virtual ~OculusRemote() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusRemote", modifiers: " const&", def_value: None }]
constexpr OculusRemote(OculusRemote const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusRemote", modifiers: "&&", def_value: None }]
constexpr OculusRemote(OculusRemote&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusRemote(void* ptr) noexcept : UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr OculusRemote& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusRemote& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusRemote& operator=(OculusRemote&& o) noexcept = default;
  constexpr OculusRemote& operator=(OculusRemote const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__back_k__BackingField, put=__set__back_k__BackingField))  _back_k__BackingField;

constexpr void __set__back_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__back_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__start_k__BackingField, put=__set__start_k__BackingField))  _start_k__BackingField;

constexpr void __set__start_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__start_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__touchpad_k__BackingField, put=__set__touchpad_k__BackingField))  _touchpad_k__BackingField;

constexpr void __set__touchpad_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__touchpad_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_back, put=set_back))  back;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_start, put=set_start))  start;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_touchpad, put=set_touchpad))  touchpad;


// Methods

/// @brief Method get_back addr 0x2ae40dc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_back() ;

/// @brief Method set_back addr 0x2ae40e4 size 0x8 virtual false final false
 void set_back(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_start addr 0x2ae40ec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_start() ;

/// @brief Method set_start addr 0x2ae40f4 size 0x8 virtual false final false
 void set_start(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpad addr 0x2ae40fc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_touchpad() ;

/// @brief Method set_touchpad addr 0x2ae4104 size 0x8 virtual false final false
 void set_touchpad(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method FinishSetup addr 0x2ae410c size 0xe8 virtual true final false
 void FinishSetup() ;

static Unity::XR::Oculus::Input::OculusRemote New_ctor() ;

/// @brief Method .ctor addr 0x2ae41f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus::Input
NEED_NO_BOX(Unity::XR::Oculus::Input::OculusRemote);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Input::OculusRemote, "Unity.XR.Oculus.Input", "OculusRemote");
