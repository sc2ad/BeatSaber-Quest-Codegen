#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
class InputUserSettings;
}
// Type: UnityEngine.InputSystem.Users::InputUserSettings
namespace UnityEngine::InputSystem::Users {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6451))
// CS Name: UnityEngine.InputSystem.Users.InputUserSettings
class CORDL_TYPE InputUserSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~InputUserSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputUserSettings", modifiers: " const&", def_value: None }]
constexpr InputUserSettings(InputUserSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputUserSettings", modifiers: "&&", def_value: None }]
constexpr InputUserSettings(InputUserSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputUserSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputUserSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputUserSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputUserSettings& operator=(InputUserSettings&& o) noexcept = default;
  constexpr InputUserSettings& operator=(InputUserSettings const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__customBindings_k__BackingField, put=__set__customBindings_k__BackingField))  _customBindings_k__BackingField;

constexpr void __set__customBindings_k__BackingField(::StringW value) ;

constexpr ::StringW __get__customBindings_k__BackingField() const;

 bool __declspec(property(get=__get__invertMouseX_k__BackingField, put=__set__invertMouseX_k__BackingField))  _invertMouseX_k__BackingField;

constexpr void __set__invertMouseX_k__BackingField(bool value) ;

constexpr bool __get__invertMouseX_k__BackingField() const;

 bool __declspec(property(get=__get__invertMouseY_k__BackingField, put=__set__invertMouseY_k__BackingField))  _invertMouseY_k__BackingField;

constexpr void __set__invertMouseY_k__BackingField(bool value) ;

constexpr bool __get__invertMouseY_k__BackingField() const;

 System::Nullable_1<float_t> __declspec(property(get=__get__mouseSmoothing_k__BackingField, put=__set__mouseSmoothing_k__BackingField))  _mouseSmoothing_k__BackingField;

constexpr void __set__mouseSmoothing_k__BackingField(System::Nullable_1<float_t> value) ;

constexpr System::Nullable_1<float_t> __get__mouseSmoothing_k__BackingField() const;

 System::Nullable_1<float_t> __declspec(property(get=__get__mouseSensitivity_k__BackingField, put=__set__mouseSensitivity_k__BackingField))  _mouseSensitivity_k__BackingField;

constexpr void __set__mouseSensitivity_k__BackingField(System::Nullable_1<float_t> value) ;

constexpr System::Nullable_1<float_t> __get__mouseSensitivity_k__BackingField() const;

 bool __declspec(property(get=__get__invertStickX_k__BackingField, put=__set__invertStickX_k__BackingField))  _invertStickX_k__BackingField;

constexpr void __set__invertStickX_k__BackingField(bool value) ;

constexpr bool __get__invertStickX_k__BackingField() const;

 bool __declspec(property(get=__get__invertStickY_k__BackingField, put=__set__invertStickY_k__BackingField))  _invertStickY_k__BackingField;

constexpr void __set__invertStickY_k__BackingField(bool value) ;

constexpr bool __get__invertStickY_k__BackingField() const;

 bool __declspec(property(get=__get__swapSticks_k__BackingField, put=__set__swapSticks_k__BackingField))  _swapSticks_k__BackingField;

constexpr void __set__swapSticks_k__BackingField(bool value) ;

constexpr bool __get__swapSticks_k__BackingField() const;

 bool __declspec(property(get=__get__swapBumpers_k__BackingField, put=__set__swapBumpers_k__BackingField))  _swapBumpers_k__BackingField;

constexpr void __set__swapBumpers_k__BackingField(bool value) ;

constexpr bool __get__swapBumpers_k__BackingField() const;

 bool __declspec(property(get=__get__swapTriggers_k__BackingField, put=__set__swapTriggers_k__BackingField))  _swapTriggers_k__BackingField;

constexpr void __set__swapTriggers_k__BackingField(bool value) ;

constexpr bool __get__swapTriggers_k__BackingField() const;

 bool __declspec(property(get=__get__swapDpadAndLeftStick_k__BackingField, put=__set__swapDpadAndLeftStick_k__BackingField))  _swapDpadAndLeftStick_k__BackingField;

constexpr void __set__swapDpadAndLeftStick_k__BackingField(bool value) ;

constexpr bool __get__swapDpadAndLeftStick_k__BackingField() const;

 float_t __declspec(property(get=__get__vibrationStrength_k__BackingField, put=__set__vibrationStrength_k__BackingField))  _vibrationStrength_k__BackingField;

constexpr void __set__vibrationStrength_k__BackingField(float_t value) ;

constexpr float_t __get__vibrationStrength_k__BackingField() const;

 ::StringW __declspec(property(get=__get_m_CustomBindings, put=__set_m_CustomBindings))  m_CustomBindings;

constexpr void __set_m_CustomBindings(::StringW value) ;

constexpr ::StringW __get_m_CustomBindings() const;


// Properties

 ::StringW __declspec(property(get=get_customBindings, put=set_customBindings))  customBindings;

 bool __declspec(property(get=get_invertMouseX, put=set_invertMouseX))  invertMouseX;

 bool __declspec(property(get=get_invertMouseY, put=set_invertMouseY))  invertMouseY;

 System::Nullable_1<float_t> __declspec(property(get=get_mouseSmoothing, put=set_mouseSmoothing))  mouseSmoothing;

 System::Nullable_1<float_t> __declspec(property(get=get_mouseSensitivity, put=set_mouseSensitivity))  mouseSensitivity;

 bool __declspec(property(get=get_invertStickX, put=set_invertStickX))  invertStickX;

 bool __declspec(property(get=get_invertStickY, put=set_invertStickY))  invertStickY;

 bool __declspec(property(get=get_swapSticks, put=set_swapSticks))  swapSticks;

 bool __declspec(property(get=get_swapBumpers, put=set_swapBumpers))  swapBumpers;

 bool __declspec(property(get=get_swapTriggers, put=set_swapTriggers))  swapTriggers;

 bool __declspec(property(get=get_swapDpadAndLeftStick, put=set_swapDpadAndLeftStick))  swapDpadAndLeftStick;

 float_t __declspec(property(get=get_vibrationStrength, put=set_vibrationStrength))  vibrationStrength;


// Methods

/// @brief Method get_customBindings addr 0x293bccc size 0x8 virtual false final false
 ::StringW get_customBindings() ;

/// @brief Method set_customBindings addr 0x293bcd4 size 0x8 virtual false final false
 void set_customBindings(::StringW value) ;

/// @brief Method get_invertMouseX addr 0x293bcdc size 0x8 virtual false final false
 bool get_invertMouseX() ;

/// @brief Method set_invertMouseX addr 0x293bce4 size 0xc virtual false final false
 void set_invertMouseX(bool value) ;

/// @brief Method get_invertMouseY addr 0x293bcf0 size 0x8 virtual false final false
 bool get_invertMouseY() ;

/// @brief Method set_invertMouseY addr 0x293bcf8 size 0xc virtual false final false
 void set_invertMouseY(bool value) ;

/// @brief Method get_mouseSmoothing addr 0x293bd04 size 0x8 virtual false final false
 System::Nullable_1<float_t> get_mouseSmoothing() ;

/// @brief Method set_mouseSmoothing addr 0x293bd0c size 0x8 virtual false final false
 void set_mouseSmoothing(System::Nullable_1<float_t> value) ;

/// @brief Method get_mouseSensitivity addr 0x293bd14 size 0x8 virtual false final false
 System::Nullable_1<float_t> get_mouseSensitivity() ;

/// @brief Method set_mouseSensitivity addr 0x293bd1c size 0x8 virtual false final false
 void set_mouseSensitivity(System::Nullable_1<float_t> value) ;

/// @brief Method get_invertStickX addr 0x293bd24 size 0x8 virtual false final false
 bool get_invertStickX() ;

/// @brief Method set_invertStickX addr 0x293bd2c size 0xc virtual false final false
 void set_invertStickX(bool value) ;

/// @brief Method get_invertStickY addr 0x293bd38 size 0x8 virtual false final false
 bool get_invertStickY() ;

/// @brief Method set_invertStickY addr 0x293bd40 size 0xc virtual false final false
 void set_invertStickY(bool value) ;

/// @brief Method get_swapSticks addr 0x293bd4c size 0x8 virtual false final false
 bool get_swapSticks() ;

/// @brief Method set_swapSticks addr 0x293bd54 size 0xc virtual false final false
 void set_swapSticks(bool value) ;

/// @brief Method get_swapBumpers addr 0x293bd60 size 0x8 virtual false final false
 bool get_swapBumpers() ;

/// @brief Method set_swapBumpers addr 0x293bd68 size 0xc virtual false final false
 void set_swapBumpers(bool value) ;

/// @brief Method get_swapTriggers addr 0x293bd74 size 0x8 virtual false final false
 bool get_swapTriggers() ;

/// @brief Method set_swapTriggers addr 0x293bd7c size 0xc virtual false final false
 void set_swapTriggers(bool value) ;

/// @brief Method get_swapDpadAndLeftStick addr 0x293bd88 size 0x8 virtual false final false
 bool get_swapDpadAndLeftStick() ;

/// @brief Method set_swapDpadAndLeftStick addr 0x293bd90 size 0xc virtual false final false
 void set_swapDpadAndLeftStick(bool value) ;

/// @brief Method get_vibrationStrength addr 0x293bd9c size 0x8 virtual false final false
 float_t get_vibrationStrength() ;

/// @brief Method set_vibrationStrength addr 0x293bda4 size 0x8 virtual false final false
 void set_vibrationStrength(float_t value) ;

/// @brief Method Apply addr 0x293bdac size 0x4 virtual true final false
 void Apply(UnityEngine::InputSystem::IInputActionCollection actions) ;

static UnityEngine::InputSystem::Users::InputUserSettings New_ctor() ;

/// @brief Method .ctor addr 0x293bdb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
NEED_NO_BOX(UnityEngine::InputSystem::Users::InputUserSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Users::InputUserSettings, "UnityEngine.InputSystem.Users", "InputUserSettings");
