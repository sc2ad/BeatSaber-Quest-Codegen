#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
struct Guid;
}
namespace System {
class ICloneable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem {
struct InputActionType;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputActionState__TriggerState;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputAction__ActionFlags;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputAction__CallbackContext;
}
// Type: ::ActionFlags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6215))
// CS Name: UnityEngine.InputSystem.InputAction::ActionFlags
struct CORDL_TYPE UnityEngine__InputSystem__InputAction__ActionFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputAction__ActionFlags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputAction__ActionFlags(UnityEngine__InputSystem__InputAction__ActionFlags const&) = default;
                    constexpr UnityEngine__InputSystem__InputAction__ActionFlags(UnityEngine__InputSystem__InputAction__ActionFlags&&) = default;
                    constexpr UnityEngine__InputSystem__InputAction__ActionFlags& operator=(UnityEngine__InputSystem__InputAction__ActionFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputAction__ActionFlags& operator=(UnityEngine__InputSystem__InputAction__ActionFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputAction__ActionFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputAction__ActionFlags_Unwrapped : int32_t {
__WantsInitialStateCheck = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputAction__ActionFlags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputAction__ActionFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field WantsInitialStateCheck offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__ActionFlags const WantsInitialStateCheck;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::CallbackContext
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6216))
// CS Name: UnityEngine.InputSystem.InputAction::CallbackContext
struct CORDL_TYPE UnityEngine__InputSystem__InputAction__CallbackContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_State", ty: "UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: None }, CppParam { name: "m_ActionIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputAction__CallbackContext(UnityEngine::InputSystem::InputActionState m_State, int32_t m_ActionIndex) noexcept;


                    constexpr UnityEngine__InputSystem__InputAction__CallbackContext(UnityEngine__InputSystem__InputAction__CallbackContext const&) = default;
                    constexpr UnityEngine__InputSystem__InputAction__CallbackContext(UnityEngine__InputSystem__InputAction__CallbackContext&&) = default;
                    constexpr UnityEngine__InputSystem__InputAction__CallbackContext& operator=(UnityEngine__InputSystem__InputAction__CallbackContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputAction__CallbackContext& operator=(UnityEngine__InputSystem__InputAction__CallbackContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputAction__CallbackContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::InputActionState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(UnityEngine::InputSystem::InputActionState value) ;

constexpr UnityEngine::InputSystem::InputActionState __get_m_State() const;

 int32_t __declspec(property(get=__get_m_ActionIndex, put=__set_m_ActionIndex))  m_ActionIndex;

constexpr void __set_m_ActionIndex(int32_t value) ;

constexpr int32_t __get_m_ActionIndex() const;


// Properties

 int32_t __declspec(property(get=get_actionIndex))  actionIndex;

 int32_t __declspec(property(get=get_bindingIndex))  bindingIndex;

 int32_t __declspec(property(get=get_controlIndex))  controlIndex;

 int32_t __declspec(property(get=get_interactionIndex))  interactionIndex;

 UnityEngine::InputSystem::InputActionPhase __declspec(property(get=get_phase))  phase;

 bool __declspec(property(get=get_started))  started;

 bool __declspec(property(get=get_performed))  performed;

 bool __declspec(property(get=get_canceled))  canceled;

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_action))  action;

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_control))  control;

 UnityEngine::InputSystem::IInputInteraction __declspec(property(get=get_interaction))  interaction;

 double_t __declspec(property(get=get_time))  time;

 double_t __declspec(property(get=get_startTime))  startTime;

 double_t __declspec(property(get=get_duration))  duration;

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_actionIndex addr 0x28a59ac size 0x8 virtual false final false
 int32_t get_actionIndex() ;

/// @brief Method get_bindingIndex addr 0x28a59b4 size 0x34 virtual false final false
 int32_t get_bindingIndex() ;

/// @brief Method get_controlIndex addr 0x28a59e8 size 0x34 virtual false final false
 int32_t get_controlIndex() ;

/// @brief Method get_interactionIndex addr 0x28a5a1c size 0x34 virtual false final false
 int32_t get_interactionIndex() ;

/// @brief Method get_phase addr 0x28a5a50 size 0x30 virtual false final false
 UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method get_started addr 0x28a5a80 size 0x38 virtual false final false
 bool get_started() ;

/// @brief Method get_performed addr 0x28a5ab8 size 0x38 virtual false final false
 bool get_performed() ;

/// @brief Method get_canceled addr 0x28a5af0 size 0x38 virtual false final false
 bool get_canceled() ;

/// @brief Method get_action addr 0x28a5b28 size 0x30 virtual false final false
 UnityEngine::InputSystem::InputAction get_action() ;

/// @brief Method get_control addr 0x28a5b58 size 0x44 virtual false final false
 UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method get_interaction addr 0x28a5b9c size 0x58 virtual false final false
 UnityEngine::InputSystem::IInputInteraction get_interaction() ;

/// @brief Method get_time addr 0x28a5bf4 size 0x38 virtual false final false
 double_t get_time() ;

/// @brief Method get_startTime addr 0x28a5c2c size 0x38 virtual false final false
 double_t get_startTime() ;

/// @brief Method get_duration addr 0x28a5c64 size 0x68 virtual false final false
 double_t get_duration() ;

/// @brief Method get_valueType addr 0x28a5ccc size 0x50 virtual false final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x28a5d1c size 0x50 virtual false final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x28a5d6c size 0x1c8 virtual false final false
 void ReadValue(void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue() ;

/// @brief Method ReadValueAsButton addr 0x28a5f34 size 0x84 virtual false final false
 bool ReadValueAsButton() ;

/// @brief Method ReadValueAsObject addr 0x28a5fb8 size 0x88 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject() ;

/// @brief Method ToString addr 0x28a6040 size 0x250 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputAction
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6217))
// CS Name: UnityEngine.InputSystem.InputAction
class CORDL_TYPE InputAction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CallbackContext = UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext;

using ActionFlags = UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__ActionFlags;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1c0};

virtual ~InputAction() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputAction", modifiers: " const&", def_value: None }]
constexpr InputAction(InputAction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputAction", modifiers: "&&", def_value: None }]
constexpr InputAction(InputAction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputAction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputAction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputAction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputAction& operator=(InputAction&& o) noexcept = default;
  constexpr InputAction& operator=(InputAction const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 UnityEngine::InputSystem::InputActionType __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(UnityEngine::InputSystem::InputActionType value) ;

constexpr UnityEngine::InputSystem::InputActionType __get_m_Type() const;

 ::StringW __declspec(property(get=__get_m_ExpectedControlType, put=__set_m_ExpectedControlType))  m_ExpectedControlType;

constexpr void __set_m_ExpectedControlType(::StringW value) ;

constexpr ::StringW __get_m_ExpectedControlType() const;

 ::StringW __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(::StringW value) ;

constexpr ::StringW __get_m_Id() const;

 ::StringW __declspec(property(get=__get_m_Processors, put=__set_m_Processors))  m_Processors;

constexpr void __set_m_Processors(::StringW value) ;

constexpr ::StringW __get_m_Processors() const;

 ::StringW __declspec(property(get=__get_m_Interactions, put=__set_m_Interactions))  m_Interactions;

constexpr void __set_m_Interactions(::StringW value) ;

constexpr ::StringW __get_m_Interactions() const;

 ::ArrayW<UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_SingletonActionBindings, put=__set_m_SingletonActionBindings))  m_SingletonActionBindings;

constexpr void __set_m_SingletonActionBindings(::ArrayW<UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputBinding> __get_m_SingletonActionBindings() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__ActionFlags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__ActionFlags value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__ActionFlags __get_m_Flags() const;

 System::Nullable_1<UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_BindingMask, put=__set_m_BindingMask))  m_BindingMask;

constexpr void __set_m_BindingMask(System::Nullable_1<UnityEngine::InputSystem::InputBinding> value) ;

constexpr System::Nullable_1<UnityEngine::InputSystem::InputBinding> __get_m_BindingMask() const;

 int32_t __declspec(property(get=__get_m_BindingsStartIndex, put=__set_m_BindingsStartIndex))  m_BindingsStartIndex;

constexpr void __set_m_BindingsStartIndex(int32_t value) ;

constexpr int32_t __get_m_BindingsStartIndex() const;

 int32_t __declspec(property(get=__get_m_BindingsCount, put=__set_m_BindingsCount))  m_BindingsCount;

constexpr void __set_m_BindingsCount(int32_t value) ;

constexpr int32_t __get_m_BindingsCount() const;

 int32_t __declspec(property(get=__get_m_ControlStartIndex, put=__set_m_ControlStartIndex))  m_ControlStartIndex;

constexpr void __set_m_ControlStartIndex(int32_t value) ;

constexpr int32_t __get_m_ControlStartIndex() const;

 int32_t __declspec(property(get=__get_m_ControlCount, put=__set_m_ControlCount))  m_ControlCount;

constexpr void __set_m_ControlCount(int32_t value) ;

constexpr int32_t __get_m_ControlCount() const;

 int32_t __declspec(property(get=__get_m_ActionIndexInState, put=__set_m_ActionIndexInState))  m_ActionIndexInState;

constexpr void __set_m_ActionIndexInState(int32_t value) ;

constexpr int32_t __get_m_ActionIndexInState() const;

 UnityEngine::InputSystem::InputActionMap __declspec(property(get=__get_m_ActionMap, put=__set_m_ActionMap))  m_ActionMap;

constexpr void __set_m_ActionMap(UnityEngine::InputSystem::InputActionMap value) ;

constexpr UnityEngine::InputSystem::InputActionMap __get_m_ActionMap() const;

 UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> __declspec(property(get=__get_m_OnStarted, put=__set_m_OnStarted))  m_OnStarted;

constexpr void __set_m_OnStarted(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> value) ;

constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> __get_m_OnStarted() const;

 UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> __declspec(property(get=__get_m_OnCanceled, put=__set_m_OnCanceled))  m_OnCanceled;

constexpr void __set_m_OnCanceled(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> value) ;

constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> __get_m_OnCanceled() const;

 UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> __declspec(property(get=__get_m_OnPerformed, put=__set_m_OnPerformed))  m_OnPerformed;

constexpr void __set_m_OnPerformed(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> value) ;

constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> __get_m_OnPerformed() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 UnityEngine::InputSystem::InputActionType __declspec(property(get=get_type))  type;

 System::Guid __declspec(property(get=get_id))  id;

 System::Guid __declspec(property(get=get_idDontGenerate))  idDontGenerate;

 ::StringW __declspec(property(get=get_expectedControlType, put=set_expectedControlType))  expectedControlType;

 ::StringW __declspec(property(get=get_processors))  processors;

 ::StringW __declspec(property(get=get_interactions))  interactions;

 UnityEngine::InputSystem::InputActionMap __declspec(property(get=get_actionMap))  actionMap;

 System::Nullable_1<UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindingMask, put=set_bindingMask))  bindingMask;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindings))  bindings;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> __declspec(property(get=get_controls))  controls;

 UnityEngine::InputSystem::InputActionPhase __declspec(property(get=get_phase))  phase;

 bool __declspec(property(get=get_inProgress))  inProgress;

 bool __declspec(property(get=get_enabled))  enabled;

 bool __declspec(property(get=get_triggered))  triggered;

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_activeControl))  activeControl;

 bool __declspec(property(get=get_wantsInitialStateCheck, put=set_wantsInitialStateCheck))  wantsInitialStateCheck;

 bool __declspec(property(get=get_isSingletonAction))  isSingletonAction;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState __declspec(property(get=get_currentState))  currentState;


// Methods

/// @brief Method get_name addr 0x28a3ee8 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_type addr 0x28a3ef0 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputActionType get_type() ;

/// @brief Method get_id addr 0x28a3ef8 size 0x34 virtual false final false
 System::Guid get_id() ;

/// @brief Method get_idDontGenerate addr 0x28a3f78 size 0x48 virtual false final false
 System::Guid get_idDontGenerate() ;

/// @brief Method get_expectedControlType addr 0x28a3fc0 size 0x8 virtual false final false
 ::StringW get_expectedControlType() ;

/// @brief Method set_expectedControlType addr 0x28a3fc8 size 0x8 virtual false final false
 void set_expectedControlType(::StringW value) ;

/// @brief Method get_processors addr 0x28a3fd0 size 0x8 virtual false final false
 ::StringW get_processors() ;

/// @brief Method get_interactions addr 0x28a3fd8 size 0x8 virtual false final false
 ::StringW get_interactions() ;

/// @brief Method get_actionMap addr 0x28a3fe0 size 0x20 virtual false final false
 UnityEngine::InputSystem::InputActionMap get_actionMap() ;

/// @brief Method get_bindingMask addr 0x28a4020 size 0x10 virtual false final false
 System::Nullable_1<UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method set_bindingMask addr 0x28a4030 size 0x1f4 virtual false final false
 void set_bindingMask(System::Nullable_1<UnityEngine::InputSystem::InputBinding> value) ;

/// @brief Method get_bindings addr 0x28a42ec size 0x30 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputBinding> get_bindings() ;

/// @brief Method get_controls addr 0x28a439c size 0x44 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> get_controls() ;

/// @brief Method get_phase addr 0x28a4494 size 0x40 virtual false final false
 UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method get_inProgress addr 0x28a4530 size 0x4c virtual false final false
 bool get_inProgress() ;

/// @brief Method get_enabled addr 0x28a457c size 0x48 virtual false final false
 bool get_enabled() ;

/// @brief Method add_started addr 0x28a45c4 size 0x58 virtual false final false
 void add_started(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method remove_started addr 0x28a461c size 0x58 virtual false final false
 void remove_started(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method add_canceled addr 0x28a4674 size 0x58 virtual false final false
 void add_canceled(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method remove_canceled addr 0x28a46cc size 0x58 virtual false final false
 void remove_canceled(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method add_performed addr 0x28a4724 size 0x58 virtual false final false
 void add_performed(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method remove_performed addr 0x28a477c size 0x58 virtual false final false
 void remove_performed(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method get_triggered addr 0x28a47d4 size 0x4 virtual false final false
 bool get_triggered() ;

/// @brief Method get_activeControl addr 0x28a4878 size 0x8c virtual false final false
 UnityEngine::InputSystem::InputControl get_activeControl() ;

/// @brief Method get_wantsInitialStateCheck addr 0x28a4904 size 0x1c virtual false final false
 bool get_wantsInitialStateCheck() ;

/// @brief Method set_wantsInitialStateCheck addr 0x28a4920 size 0x1c virtual false final false
 void set_wantsInitialStateCheck(bool value) ;

// Ctor Parameters []
explicit InputAction() ;

/// @brief Method .ctor addr 0x28a493c size 0x10 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "UnityEngine::InputSystem::InputActionType", modifiers: "", def_value: None }, CppParam { name: "binding", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }]
explicit InputAction(::StringW name, UnityEngine::InputSystem::InputActionType type, ::StringW binding, ::StringW interactions, ::StringW processors, ::StringW expectedControlType) ;

/// @brief Method .ctor addr 0x28a494c size 0x120 virtual false final false
 void _ctor(::StringW name, UnityEngine::InputSystem::InputActionType type, ::StringW binding, ::StringW interactions, ::StringW processors, ::StringW expectedControlType) ;

/// @brief Method Dispose addr 0x28a4a6c size 0x1c virtual true final true
 void Dispose() ;

/// @brief Method ToString addr 0x28a4a88 size 0x2d0 virtual true final false
 ::StringW ToString() ;

/// @brief Method Enable addr 0x28a4d58 size 0x88 virtual false final false
 void Enable() ;

/// @brief Method Disable addr 0x28a4de0 size 0x70 virtual false final false
 void Disable() ;

/// @brief Method Clone addr 0x28a4e50 size 0xdc virtual false final false
 UnityEngine::InputSystem::InputAction Clone() ;

/// @brief Method System.ICloneable.Clone addr 0x28a4f2c size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue() ;

/// @brief Method ReadValueAsObject addr 0x28a4f30 size 0x9c virtual false final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject() ;

/// @brief Method Reset addr 0x28a4fcc size 0x9c virtual false final false
 void Reset() ;

/// @brief Method IsPressed addr 0x28a5068 size 0x54 virtual false final false
 bool IsPressed() ;

/// @brief Method IsInProgress addr 0x28a50bc size 0x58 virtual false final false
 bool IsInProgress() ;

/// @brief Method WasPressedThisFrame addr 0x28a5114 size 0xa0 virtual false final false
 bool WasPressedThisFrame() ;

/// @brief Method WasReleasedThisFrame addr 0x28a51b4 size 0xa0 virtual false final false
 bool WasReleasedThisFrame() ;

/// @brief Method WasPerformedThisFrame addr 0x28a47d8 size 0xa0 virtual false final false
 bool WasPerformedThisFrame() ;

/// @brief Method GetTimeoutCompletionPercentage addr 0x28a5254 size 0x134 virtual false final false
 float_t GetTimeoutCompletionPercentage() ;

/// @brief Method get_isSingletonAction addr 0x28a4000 size 0x20 virtual false final false
 bool get_isSingletonAction() ;

/// @brief Method get_currentState addr 0x28a44d4 size 0x5c virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState get_currentState() ;

/// @brief Method MakeSureIdIsInPlace addr 0x28a3f2c size 0x4c virtual false final false
 ::StringW MakeSureIdIsInPlace() ;

/// @brief Method GenerateId addr 0x28a5388 size 0x34 virtual false final false
 void GenerateId() ;

/// @brief Method GetOrCreateActionMap addr 0x28a4224 size 0x24 virtual false final false
 UnityEngine::InputSystem::InputActionMap GetOrCreateActionMap() ;

/// @brief Method CreateInternalActionMapForSingletonAction addr 0x28a53bc size 0xd4 virtual false final false
 void CreateInternalActionMapForSingletonAction() ;

/// @brief Method RequestInitialStateCheckOnEnabledAction addr 0x28a54a0 size 0x40 virtual false final false
 void RequestInitialStateCheckOnEnabledAction() ;

/// @brief Method ActiveControlIsValid addr 0x28a54e0 size 0xf4 virtual false final false
 bool ActiveControlIsValid(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method FindEffectiveBindingMask addr 0x28a56b4 size 0x90 virtual false final false
 System::Nullable_1<UnityEngine::InputSystem::InputBinding> FindEffectiveBindingMask() ;

/// @brief Method BindingIndexOnActionToBindingIndexOnMap addr 0x28a5744 size 0x1a0 virtual false final false
 int32_t BindingIndexOnActionToBindingIndexOnMap(int32_t indexOfBindingOnAction) ;

/// @brief Method BindingIndexOnMapToBindingIndexOnAction addr 0x28a58e4 size 0xc8 virtual false final false
 int32_t BindingIndexOnMapToBindingIndexOnAction(int32_t indexOfBindingOnMap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__ActionFlags, "UnityEngine.InputSystem", "InputAction/ActionFlags");
NEED_NO_BOX(UnityEngine::InputSystem::InputAction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputAction, "UnityEngine.InputSystem", "InputAction");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext, "UnityEngine.InputSystem", "InputAction/CallbackContext");
