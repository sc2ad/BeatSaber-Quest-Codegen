#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct ____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType;
}
namespace UnityEngine::InputSystem::XR {
struct ____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType;
}
namespace UnityEngine::InputSystem::XR {
class TrackedPoseDriver;
}
// Type: ::TrackingType
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6410))
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver::TrackingType
struct CORDL_TYPE ____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType(____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType const&) = default;
                    constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType(____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType&&) = default;
                    constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType& operator=(____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType& operator=(____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType_Unwrapped : int32_t {
__RotationAndPosition = 0,
__RotationOnly = 1,
__PositionOnly = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RotationAndPosition offset 0
static ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType const RotationAndPosition;

/// @brief Field RotationOnly offset 0
static ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType const RotationOnly;

/// @brief Field PositionOnly offset 0
static ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType const PositionOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
// Type: ::UpdateType
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6411))
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver::UpdateType
struct CORDL_TYPE ____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType(____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType const&) = default;
                    constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType(____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType&&) = default;
                    constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType& operator=(____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType& operator=(____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType_Unwrapped : int32_t {
__UpdateAndBeforeRender = 0,
__Update = 1,
__BeforeRender = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UpdateAndBeforeRender offset 0
static ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType const UpdateAndBeforeRender;

/// @brief Field Update offset 0
static ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType const Update;

/// @brief Field BeforeRender offset 0
static ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType const BeforeRender;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
// Type: UnityEngine.InputSystem.XR::TrackedPoseDriver
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6412))
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateType = ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType;

using TrackingType = ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType;

/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~TrackedPoseDriver() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: " const&", def_value: None }]
constexpr TrackedPoseDriver(TrackedPoseDriver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "&&", def_value: None }]
constexpr TrackedPoseDriver(TrackedPoseDriver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackedPoseDriver(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TrackedPoseDriver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackedPoseDriver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackedPoseDriver& operator=(TrackedPoseDriver&& o) noexcept = default;
  constexpr TrackedPoseDriver& operator=(TrackedPoseDriver const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType __declspec(property(get=__get_m_TrackingType, put=__set_m_TrackingType))  m_TrackingType;

constexpr void __set_m_TrackingType(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType value) ;

constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType __get_m_TrackingType() const;

 ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType __declspec(property(get=__get_m_UpdateType, put=__set_m_UpdateType))  m_UpdateType;

constexpr void __set_m_UpdateType(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType value) ;

constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType __get_m_UpdateType() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_PositionInput, put=__set_m_PositionInput))  m_PositionInput;

constexpr void __set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_PositionInput() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_RotationInput, put=__set_m_RotationInput))  m_RotationInput;

constexpr void __set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_RotationInput() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_CurrentPosition, put=__set_m_CurrentPosition))  m_CurrentPosition;

constexpr void __set_m_CurrentPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_CurrentPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_m_CurrentRotation, put=__set_m_CurrentRotation))  m_CurrentRotation;

constexpr void __set_m_CurrentRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_m_CurrentRotation() const;

 bool __declspec(property(get=__get_m_RotationBound, put=__set_m_RotationBound))  m_RotationBound;

constexpr void __set_m_RotationBound(bool value) ;

constexpr bool __get_m_RotationBound() const;

 bool __declspec(property(get=__get_m_PositionBound, put=__set_m_PositionBound))  m_PositionBound;

constexpr void __set_m_PositionBound(bool value) ;

constexpr bool __get_m_PositionBound() const;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_PositionAction, put=__set_m_PositionAction))  m_PositionAction;

constexpr void __set_m_PositionAction(::UnityEngine::InputSystem::InputAction value) ;

constexpr ::UnityEngine::InputSystem::InputAction __get_m_PositionAction() const;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_RotationAction, put=__set_m_RotationAction))  m_RotationAction;

constexpr void __set_m_RotationAction(::UnityEngine::InputSystem::InputAction value) ;

constexpr ::UnityEngine::InputSystem::InputAction __get_m_RotationAction() const;

 bool __declspec(property(get=__get_m_HasMigratedActions, put=__set_m_HasMigratedActions))  m_HasMigratedActions;

constexpr void __set_m_HasMigratedActions(bool value) ;

constexpr bool __get_m_HasMigratedActions() const;


// Properties

 ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType __declspec(property(get=get_trackingType, put=set_trackingType))  trackingType;

 ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType __declspec(property(get=get_updateType, put=set_updateType))  updateType;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_positionInput, put=set_positionInput))  positionInput;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_rotationInput, put=set_rotationInput))  rotationInput;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=get_positionAction, put=set_positionAction))  positionAction;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=get_rotationAction, put=set_rotationAction))  rotationAction;


// Methods

/// @brief Method get_trackingType addr 0x29333f8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType get_trackingType() ;

/// @brief Method set_trackingType addr 0x2933400 size 0x8 virtual false final false
 void set_trackingType(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType value) ;

/// @brief Method get_updateType addr 0x2933408 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType get_updateType() ;

/// @brief Method set_updateType addr 0x2933410 size 0x8 virtual false final false
 void set_updateType(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType value) ;

/// @brief Method get_positionInput addr 0x2933418 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_positionInput() ;

/// @brief Method set_positionInput addr 0x293342c size 0x6c virtual false final false
 void set_positionInput(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method get_rotationInput addr 0x2933790 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_rotationInput() ;

/// @brief Method set_rotationInput addr 0x29337a4 size 0x6c virtual false final false
 void set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method BindActions addr 0x2933b08 size 0x18 virtual false final false
 void BindActions() ;

/// @brief Method BindPosition addr 0x29335e8 size 0x1a8 virtual false final false
 void BindPosition() ;

/// @brief Method BindRotation addr 0x2933960 size 0x1a8 virtual false final false
 void BindRotation() ;

/// @brief Method UnbindActions addr 0x2933b20 size 0x18 virtual false final false
 void UnbindActions() ;

/// @brief Method UnbindPosition addr 0x2933498 size 0x150 virtual false final false
 void UnbindPosition() ;

/// @brief Method UnbindRotation addr 0x2933810 size 0x150 virtual false final false
 void UnbindRotation() ;

/// @brief Method OnPositionPerformed addr 0x2933b38 size 0x60 virtual false final false
 void OnPositionPerformed(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnPositionCanceled addr 0x2933b98 size 0x58 virtual false final false
 void OnPositionCanceled(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnRotationPerformed addr 0x2933bf0 size 0x60 virtual false final false
 void OnRotationPerformed(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnRotationCanceled addr 0x2933c50 size 0x50 virtual false final false
 void OnRotationCanceled(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method Awake addr 0x2933ca0 size 0x6c virtual true final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2933dc4 size 0xb4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2933e78 size 0xb4 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2933f2c size 0x6c virtual true final false
 void OnDestroy() ;

/// @brief Method UpdateCallback addr 0x2933f98 size 0x68 virtual false final false
 void UpdateCallback() ;

/// @brief Method OnUpdate addr 0x2934000 size 0x1c virtual true final false
 void OnUpdate() ;

/// @brief Method OnBeforeRender addr 0x293401c size 0x20 virtual true final false
 void OnBeforeRender() ;

/// @brief Method SetLocalTransform addr 0x293403c size 0xcc virtual true final false
 void SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation) ;

/// @brief Method HasStereoCamera addr 0x2933d0c size 0xb8 virtual false final false
 bool HasStereoCamera() ;

/// @brief Method PerformUpdate addr 0x2934108 size 0x1c virtual true final false
 void PerformUpdate() ;

/// @brief Method get_positionAction addr 0x2934124 size 0xc virtual false final false
 ::UnityEngine::InputSystem::InputAction get_positionAction() ;

/// @brief Method set_positionAction addr 0x2934130 size 0x48 virtual false final false
 void set_positionAction(::UnityEngine::InputSystem::InputAction value) ;

/// @brief Method get_rotationAction addr 0x2934178 size 0xc virtual false final false
 ::UnityEngine::InputSystem::InputAction get_rotationAction() ;

/// @brief Method set_rotationAction addr 0x2934184 size 0x48 virtual false final false
 void set_rotationAction(::UnityEngine::InputSystem::InputAction value) ;

/// @brief Method Reset addr 0x29341cc size 0xc virtual false final false
 void Reset() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x29341d8 size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x29341dc size 0x78 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

// Ctor Parameters []
explicit TrackedPoseDriver() ;

/// @brief Method .ctor addr 0x2934254 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType, "UnityEngine.InputSystem.XR", "TrackedPoseDriver/TrackingType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType, "UnityEngine.InputSystem.XR", "TrackedPoseDriver/UpdateType");
NEED_NO_BOX(::UnityEngine::InputSystem::XR::TrackedPoseDriver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::TrackedPoseDriver, "UnityEngine.InputSystem.XR", "TrackedPoseDriver");
