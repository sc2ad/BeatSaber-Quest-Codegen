#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputAction__CallbackContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class DefaultInputActions;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__DefaultInputActions__IPlayerActions;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__DefaultInputActions__IUIActions;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__DefaultInputActions__PlayerActions;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__DefaultInputActions__UIActions;
}
// Type: ::PlayerActions
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6388))
// CS Name: UnityEngine.InputSystem.DefaultInputActions::PlayerActions
struct CORDL_TYPE UnityEngine__InputSystem__DefaultInputActions__PlayerActions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Wrapper", ty: "UnityEngine::InputSystem::DefaultInputActions", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__DefaultInputActions__PlayerActions(UnityEngine::InputSystem::DefaultInputActions m_Wrapper) noexcept;


                    constexpr UnityEngine__InputSystem__DefaultInputActions__PlayerActions(UnityEngine__InputSystem__DefaultInputActions__PlayerActions const&) = default;
                    constexpr UnityEngine__InputSystem__DefaultInputActions__PlayerActions(UnityEngine__InputSystem__DefaultInputActions__PlayerActions&&) = default;
                    constexpr UnityEngine__InputSystem__DefaultInputActions__PlayerActions& operator=(UnityEngine__InputSystem__DefaultInputActions__PlayerActions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__DefaultInputActions__PlayerActions& operator=(UnityEngine__InputSystem__DefaultInputActions__PlayerActions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__DefaultInputActions__PlayerActions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::DefaultInputActions __declspec(property(get=__get_m_Wrapper, put=__set_m_Wrapper))  m_Wrapper;

constexpr void __set_m_Wrapper(UnityEngine::InputSystem::DefaultInputActions value) ;

constexpr UnityEngine::InputSystem::DefaultInputActions __get_m_Wrapper() const;


// Properties

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_Move))  Move;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_Look))  Look;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_Fire))  Fire;

 bool __declspec(property(get=get_enabled))  enabled;


// Methods

/// @brief Method .ctor addr 0x29264ec size 0x8 virtual false final false
 void _ctor(UnityEngine::InputSystem::DefaultInputActions wrapper) ;

/// @brief Method get_Move addr 0x29264f4 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_Move() ;

/// @brief Method get_Look addr 0x2926510 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_Look() ;

/// @brief Method get_Fire addr 0x292652c size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_Fire() ;

/// @brief Method Get addr 0x2926548 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputActionMap Get() ;

/// @brief Method Enable addr 0x2926564 size 0x24 virtual false final false
 void Enable() ;

/// @brief Method Disable addr 0x2926588 size 0x24 virtual false final false
 void Disable() ;

/// @brief Method get_enabled addr 0x29265ac size 0x24 virtual false final false
 bool get_enabled() ;

/// @brief Method op_Implicit addr 0x29265d0 size 0x18 virtual false final false
static UnityEngine::InputSystem::InputActionMap op_Implicit_UnityEngine__InputSystem__InputActionMap(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__PlayerActions set) ;

/// @brief Method SetCallbacks addr 0x29265e8 size 0xb14 virtual false final false
 void SetCallbacks(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IPlayerActions instance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::UIActions
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6389))
// CS Name: UnityEngine.InputSystem.DefaultInputActions::UIActions
struct CORDL_TYPE UnityEngine__InputSystem__DefaultInputActions__UIActions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Wrapper", ty: "UnityEngine::InputSystem::DefaultInputActions", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__DefaultInputActions__UIActions(UnityEngine::InputSystem::DefaultInputActions m_Wrapper) noexcept;


                    constexpr UnityEngine__InputSystem__DefaultInputActions__UIActions(UnityEngine__InputSystem__DefaultInputActions__UIActions const&) = default;
                    constexpr UnityEngine__InputSystem__DefaultInputActions__UIActions(UnityEngine__InputSystem__DefaultInputActions__UIActions&&) = default;
                    constexpr UnityEngine__InputSystem__DefaultInputActions__UIActions& operator=(UnityEngine__InputSystem__DefaultInputActions__UIActions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__DefaultInputActions__UIActions& operator=(UnityEngine__InputSystem__DefaultInputActions__UIActions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__DefaultInputActions__UIActions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::DefaultInputActions __declspec(property(get=__get_m_Wrapper, put=__set_m_Wrapper))  m_Wrapper;

constexpr void __set_m_Wrapper(UnityEngine::InputSystem::DefaultInputActions value) ;

constexpr UnityEngine::InputSystem::DefaultInputActions __get_m_Wrapper() const;


// Properties

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_Navigate))  Navigate;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_Submit))  Submit;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_Cancel))  Cancel;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_Point))  Point;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_Click))  Click;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_ScrollWheel))  ScrollWheel;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_MiddleClick))  MiddleClick;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_RightClick))  RightClick;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_TrackedDevicePosition))  TrackedDevicePosition;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_TrackedDeviceOrientation))  TrackedDeviceOrientation;

 bool __declspec(property(get=get_enabled))  enabled;


// Methods

/// @brief Method .ctor addr 0x29270fc size 0x8 virtual false final false
 void _ctor(UnityEngine::InputSystem::DefaultInputActions wrapper) ;

/// @brief Method get_Navigate addr 0x2927104 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_Navigate() ;

/// @brief Method get_Submit addr 0x2927120 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_Submit() ;

/// @brief Method get_Cancel addr 0x292713c size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_Cancel() ;

/// @brief Method get_Point addr 0x2927158 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_Point() ;

/// @brief Method get_Click addr 0x2927174 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_Click() ;

/// @brief Method get_ScrollWheel addr 0x2927190 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_ScrollWheel() ;

/// @brief Method get_MiddleClick addr 0x29271ac size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_MiddleClick() ;

/// @brief Method get_RightClick addr 0x29271c8 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_RightClick() ;

/// @brief Method get_TrackedDevicePosition addr 0x29271e4 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_TrackedDevicePosition() ;

/// @brief Method get_TrackedDeviceOrientation addr 0x2927200 size 0x1c virtual false final false
 UnityEngine::InputSystem::InputAction get_TrackedDeviceOrientation() ;

/// @brief Method Get addr 0x292721c size 0x1c virtual false final false
 UnityEngine::InputSystem::InputActionMap Get() ;

/// @brief Method Enable addr 0x2927238 size 0x24 virtual false final false
 void Enable() ;

/// @brief Method Disable addr 0x292725c size 0x24 virtual false final false
 void Disable() ;

/// @brief Method get_enabled addr 0x2927280 size 0x24 virtual false final false
 bool get_enabled() ;

/// @brief Method op_Implicit addr 0x29272a4 size 0x18 virtual false final false
static UnityEngine::InputSystem::InputActionMap op_Implicit_UnityEngine__InputSystem__InputActionMap(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__UIActions set) ;

/// @brief Method SetCallbacks addr 0x29272bc size 0x2404 virtual false final false
 void SetCallbacks(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IUIActions instance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::IPlayerActions
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6390))
// CS Name: UnityEngine.InputSystem.DefaultInputActions::IPlayerActions
class CORDL_TYPE UnityEngine__InputSystem__DefaultInputActions__IPlayerActions : public ::cordl_internals::InterfaceW {
public:
// Declarations
~UnityEngine__InputSystem__DefaultInputActions__IPlayerActions() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__DefaultInputActions__IPlayerActions(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnMove addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnMove(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnLook addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnLook(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnFire addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnFire(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::IUIActions
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6391))
// CS Name: UnityEngine.InputSystem.DefaultInputActions::IUIActions
class CORDL_TYPE UnityEngine__InputSystem__DefaultInputActions__IUIActions : public ::cordl_internals::InterfaceW {
public:
// Declarations
~UnityEngine__InputSystem__DefaultInputActions__IUIActions() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__DefaultInputActions__IUIActions(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnNavigate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNavigate(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnSubmit addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSubmit(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnCancel addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnCancel(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnPoint addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPoint(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnClick addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnClick(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnScrollWheel addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnScrollWheel(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnMiddleClick addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnMiddleClick(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnRightClick addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnRightClick(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnTrackedDevicePosition addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnTrackedDevicePosition(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnTrackedDeviceOrientation addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnTrackedDeviceOrientation(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::DefaultInputActions
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6392))
// CS Name: UnityEngine.InputSystem.DefaultInputActions
class CORDL_TYPE DefaultInputActions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using IUIActions = UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IUIActions;

using IPlayerActions = UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IPlayerActions;

using UIActions = UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__UIActions;

using PlayerActions = UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__PlayerActions;

/// @brief Convert operator to UnityEngine::InputSystem::IInputActionCollection2
constexpr operator  UnityEngine::InputSystem::IInputActionCollection2() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::IInputActionCollection
constexpr operator  UnityEngine::InputSystem::IInputActionCollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputAction>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputAction>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~DefaultInputActions() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultInputActions", modifiers: " const&", def_value: None }]
constexpr DefaultInputActions(DefaultInputActions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultInputActions", modifiers: "&&", def_value: None }]
constexpr DefaultInputActions(DefaultInputActions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultInputActions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultInputActions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultInputActions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultInputActions& operator=(DefaultInputActions&& o) noexcept = default;
  constexpr DefaultInputActions& operator=(DefaultInputActions const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::InputActionAsset __declspec(property(get=__get__asset_k__BackingField, put=__set__asset_k__BackingField))  _asset_k__BackingField;

constexpr void __set__asset_k__BackingField(UnityEngine::InputSystem::InputActionAsset value) ;

constexpr UnityEngine::InputSystem::InputActionAsset __get__asset_k__BackingField() const;

 UnityEngine::InputSystem::InputActionMap __declspec(property(get=__get_m_Player, put=__set_m_Player))  m_Player;

constexpr void __set_m_Player(UnityEngine::InputSystem::InputActionMap value) ;

constexpr UnityEngine::InputSystem::InputActionMap __get_m_Player() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IPlayerActions __declspec(property(get=__get_m_PlayerActionsCallbackInterface, put=__set_m_PlayerActionsCallbackInterface))  m_PlayerActionsCallbackInterface;

constexpr void __set_m_PlayerActionsCallbackInterface(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IPlayerActions value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IPlayerActions __get_m_PlayerActionsCallbackInterface() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_Player_Move, put=__set_m_Player_Move))  m_Player_Move;

constexpr void __set_m_Player_Move(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_Player_Move() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_Player_Look, put=__set_m_Player_Look))  m_Player_Look;

constexpr void __set_m_Player_Look(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_Player_Look() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_Player_Fire, put=__set_m_Player_Fire))  m_Player_Fire;

constexpr void __set_m_Player_Fire(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_Player_Fire() const;

 UnityEngine::InputSystem::InputActionMap __declspec(property(get=__get_m_UI, put=__set_m_UI))  m_UI;

constexpr void __set_m_UI(UnityEngine::InputSystem::InputActionMap value) ;

constexpr UnityEngine::InputSystem::InputActionMap __get_m_UI() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IUIActions __declspec(property(get=__get_m_UIActionsCallbackInterface, put=__set_m_UIActionsCallbackInterface))  m_UIActionsCallbackInterface;

constexpr void __set_m_UIActionsCallbackInterface(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IUIActions value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IUIActions __get_m_UIActionsCallbackInterface() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_Navigate, put=__set_m_UI_Navigate))  m_UI_Navigate;

constexpr void __set_m_UI_Navigate(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_Navigate() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_Submit, put=__set_m_UI_Submit))  m_UI_Submit;

constexpr void __set_m_UI_Submit(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_Submit() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_Cancel, put=__set_m_UI_Cancel))  m_UI_Cancel;

constexpr void __set_m_UI_Cancel(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_Cancel() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_Point, put=__set_m_UI_Point))  m_UI_Point;

constexpr void __set_m_UI_Point(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_Point() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_Click, put=__set_m_UI_Click))  m_UI_Click;

constexpr void __set_m_UI_Click(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_Click() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_ScrollWheel, put=__set_m_UI_ScrollWheel))  m_UI_ScrollWheel;

constexpr void __set_m_UI_ScrollWheel(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_ScrollWheel() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_MiddleClick, put=__set_m_UI_MiddleClick))  m_UI_MiddleClick;

constexpr void __set_m_UI_MiddleClick(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_MiddleClick() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_RightClick, put=__set_m_UI_RightClick))  m_UI_RightClick;

constexpr void __set_m_UI_RightClick(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_RightClick() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_TrackedDevicePosition, put=__set_m_UI_TrackedDevicePosition))  m_UI_TrackedDevicePosition;

constexpr void __set_m_UI_TrackedDevicePosition(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_TrackedDevicePosition() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_UI_TrackedDeviceOrientation, put=__set_m_UI_TrackedDeviceOrientation))  m_UI_TrackedDeviceOrientation;

constexpr void __set_m_UI_TrackedDeviceOrientation(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_UI_TrackedDeviceOrientation() const;

 int32_t __declspec(property(get=__get_m_KeyboardMouseSchemeIndex, put=__set_m_KeyboardMouseSchemeIndex))  m_KeyboardMouseSchemeIndex;

constexpr void __set_m_KeyboardMouseSchemeIndex(int32_t value) ;

constexpr int32_t __get_m_KeyboardMouseSchemeIndex() const;

 int32_t __declspec(property(get=__get_m_GamepadSchemeIndex, put=__set_m_GamepadSchemeIndex))  m_GamepadSchemeIndex;

constexpr void __set_m_GamepadSchemeIndex(int32_t value) ;

constexpr int32_t __get_m_GamepadSchemeIndex() const;

 int32_t __declspec(property(get=__get_m_TouchSchemeIndex, put=__set_m_TouchSchemeIndex))  m_TouchSchemeIndex;

constexpr void __set_m_TouchSchemeIndex(int32_t value) ;

constexpr int32_t __get_m_TouchSchemeIndex() const;

 int32_t __declspec(property(get=__get_m_JoystickSchemeIndex, put=__set_m_JoystickSchemeIndex))  m_JoystickSchemeIndex;

constexpr void __set_m_JoystickSchemeIndex(int32_t value) ;

constexpr int32_t __get_m_JoystickSchemeIndex() const;

 int32_t __declspec(property(get=__get_m_XRSchemeIndex, put=__set_m_XRSchemeIndex))  m_XRSchemeIndex;

constexpr void __set_m_XRSchemeIndex(int32_t value) ;

constexpr int32_t __get_m_XRSchemeIndex() const;


// Properties

 UnityEngine::InputSystem::InputActionAsset __declspec(property(get=get_asset))  asset;

 System::Nullable_1<UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindingMask, put=set_bindingMask))  bindingMask;

 System::Nullable_1<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice>> __declspec(property(get=get_devices, put=set_devices))  devices;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=get_controlSchemes))  controlSchemes;

 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindings))  bindings;

 UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__PlayerActions __declspec(property(get=get_Player))  Player;

 UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__UIActions __declspec(property(get=get_UI))  UI;

 UnityEngine::InputSystem::InputControlScheme __declspec(property(get=get_KeyboardMouseScheme))  KeyboardMouseScheme;

 UnityEngine::InputSystem::InputControlScheme __declspec(property(get=get_GamepadScheme))  GamepadScheme;

 UnityEngine::InputSystem::InputControlScheme __declspec(property(get=get_TouchScheme))  TouchScheme;

 UnityEngine::InputSystem::InputControlScheme __declspec(property(get=get_JoystickScheme))  JoystickScheme;

 UnityEngine::InputSystem::InputControlScheme __declspec(property(get=get_XRScheme))  XRScheme;


// Methods

/// @brief Method get_asset addr 0x2925b0c size 0x8 virtual false final false
 UnityEngine::InputSystem::InputActionAsset get_asset() ;

// Ctor Parameters []
explicit DefaultInputActions() ;

/// @brief Method .ctor addr 0x2925b14 size 0x360 virtual false final false
 void _ctor() ;

/// @brief Method Dispose addr 0x2925e74 size 0x5c virtual true final true
 void Dispose() ;

/// @brief Method get_bindingMask addr 0x2925ed0 size 0x28 virtual true final true
 System::Nullable_1<UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method set_bindingMask addr 0x2925ef8 size 0x4c virtual true final true
 void set_bindingMask(System::Nullable_1<UnityEngine::InputSystem::InputBinding> value) ;

/// @brief Method get_devices addr 0x2925f44 size 0x40 virtual true final true
 System::Nullable_1<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice>> get_devices() ;

/// @brief Method set_devices addr 0x2925f84 size 0x4c virtual true final true
 void set_devices(System::Nullable_1<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice>> value) ;

/// @brief Method get_controlSchemes addr 0x2925fd0 size 0x1c virtual true final true
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControlScheme> get_controlSchemes() ;

/// @brief Method Contains addr 0x2925fec size 0x1c virtual true final true
 bool Contains(UnityEngine::InputSystem::InputAction action) ;

/// @brief Method GetEnumerator addr 0x2926008 size 0x1c virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputAction> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2926024 size 0x1c virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Enable addr 0x2926040 size 0x1c virtual true final true
 void Enable() ;

/// @brief Method Disable addr 0x292605c size 0x1c virtual true final true
 void Disable() ;

/// @brief Method get_bindings addr 0x2926078 size 0x1c virtual true final true
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputBinding> get_bindings() ;

/// @brief Method FindAction addr 0x2926094 size 0x20 virtual true final true
 UnityEngine::InputSystem::InputAction FindAction(::StringW actionNameOrId, bool throwIfNotFound) ;

/// @brief Method FindBinding addr 0x29260b4 size 0x5c virtual true final true
 int32_t FindBinding(UnityEngine::InputSystem::InputBinding bindingMask, ByRef<UnityEngine::InputSystem::InputAction> action) ;

/// @brief Method get_Player addr 0x2926110 size 0x4 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__PlayerActions get_Player() ;

/// @brief Method get_UI addr 0x2926114 size 0x4 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__UIActions get_UI() ;

/// @brief Method get_KeyboardMouseScheme addr 0x2926118 size 0xc4 virtual false final false
 UnityEngine::InputSystem::InputControlScheme get_KeyboardMouseScheme() ;

/// @brief Method get_GamepadScheme addr 0x29261dc size 0xc4 virtual false final false
 UnityEngine::InputSystem::InputControlScheme get_GamepadScheme() ;

/// @brief Method get_TouchScheme addr 0x29262a0 size 0xc4 virtual false final false
 UnityEngine::InputSystem::InputControlScheme get_TouchScheme() ;

/// @brief Method get_JoystickScheme addr 0x2926364 size 0xc4 virtual false final false
 UnityEngine::InputSystem::InputControlScheme get_JoystickScheme() ;

/// @brief Method get_XRScheme addr 0x2926428 size 0xc4 virtual false final false
 UnityEngine::InputSystem::InputControlScheme get_XRScheme() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::DefaultInputActions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::DefaultInputActions, "UnityEngine.InputSystem", "DefaultInputActions");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IPlayerActions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IPlayerActions, "UnityEngine.InputSystem", "DefaultInputActions/IPlayerActions");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IUIActions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__IUIActions, "UnityEngine.InputSystem", "DefaultInputActions/IUIActions");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__PlayerActions, "UnityEngine.InputSystem", "DefaultInputActions/PlayerActions");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__DefaultInputActions__UIActions, "UnityEngine.InputSystem", "DefaultInputActions/UIActions");
