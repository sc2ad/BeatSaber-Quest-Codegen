#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Unity/XR/Oculus/Input/zzzz__OculusHMD_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusHMDExtended;
}
// Type: Unity.XR.Oculus.Input::OculusHMDExtended
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15242))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15247))
// CS Name: Unity.XR.Oculus.Input.OculusHMDExtended
class CORDL_TYPE OculusHMDExtended : public ::Unity::XR::Oculus::Input::OculusHMD {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x270};

virtual ~OculusHMDExtended() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusHMDExtended", modifiers: " const&", def_value: None }]
constexpr OculusHMDExtended(OculusHMDExtended const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusHMDExtended", modifiers: "&&", def_value: None }]
constexpr OculusHMDExtended(OculusHMDExtended&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusHMDExtended(void* ptr) noexcept : ::Unity::XR::Oculus::Input::OculusHMD(ptr) {
}


  constexpr OculusHMDExtended& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusHMDExtended& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusHMDExtended& operator=(OculusHMDExtended&& o) noexcept = default;
  constexpr OculusHMDExtended& operator=(OculusHMDExtended const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__back_k__BackingField, put=__set__back_k__BackingField))  _back_k__BackingField;

constexpr void __set__back_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__back_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__touchpad_k__BackingField, put=__set__touchpad_k__BackingField))  _touchpad_k__BackingField;

constexpr void __set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control __get__touchpad_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_back, put=set_back))  back;

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_touchpad, put=set_touchpad))  touchpad;


// Methods

/// @brief Method get_back addr 0x2ae420c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_back() ;

/// @brief Method set_back addr 0x2ae4214 size 0x8 virtual false final false
 void set_back(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpad addr 0x2ae421c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector2Control get_touchpad() ;

/// @brief Method set_touchpad addr 0x2ae4224 size 0x8 virtual false final false
 void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method FinishSetup addr 0x2ae422c size 0xbc virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OculusHMDExtended() ;

/// @brief Method .ctor addr 0x2ae42e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus::Input
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusHMDExtended);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusHMDExtended, "Unity.XR.Oculus.Input", "OculusHMDExtended");
