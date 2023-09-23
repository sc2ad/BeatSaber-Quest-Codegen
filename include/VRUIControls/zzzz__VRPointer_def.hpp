#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace VRUIControls {
class VRLaserPointer;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class VRController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace VRUIControls {
class VRPointer;
}
// Type: VRUIControls::VRPointer
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15644))
// CS Name: VRUIControls.VRPointer
class CORDL_TYPE VRPointer : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~VRPointer() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRPointer", modifiers: " const&", def_value: None }]
constexpr VRPointer(VRPointer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRPointer", modifiers: "&&", def_value: None }]
constexpr VRPointer(VRPointer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRPointer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRPointer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRPointer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRPointer& operator=(VRPointer&& o) noexcept = default;
  constexpr VRPointer& operator=(VRPointer const& o) noexcept = default;
                


// Fields

 GlobalNamespace::VRController __declspec(property(get=__get__leftVRController, put=__set__leftVRController))  _leftVRController;

constexpr void __set__leftVRController(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__leftVRController() const;

 GlobalNamespace::VRController __declspec(property(get=__get__rightVRController, put=__set__rightVRController))  _rightVRController;

constexpr void __set__rightVRController(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__rightVRController() const;

 VRUIControls::VRLaserPointer __declspec(property(get=__get__laserPointerPrefab, put=__set__laserPointerPrefab))  _laserPointerPrefab;

constexpr void __set__laserPointerPrefab(VRUIControls::VRLaserPointer value) ;

constexpr VRUIControls::VRLaserPointer __get__laserPointerPrefab() const;

 UnityEngine::Transform __declspec(property(get=__get__cursorPrefab, put=__set__cursorPrefab))  _cursorPrefab;

constexpr void __set__cursorPrefab(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__cursorPrefab() const;

 float_t __declspec(property(get=__get__defaultLaserPointerLength, put=__set__defaultLaserPointerLength))  _defaultLaserPointerLength;

constexpr void __set__defaultLaserPointerLength(float_t value) ;

constexpr float_t __get__defaultLaserPointerLength() const;

 float_t __declspec(property(get=__get__laserPointerWidth, put=__set__laserPointerWidth))  _laserPointerWidth;

constexpr void __set__laserPointerWidth(float_t value) ;

constexpr float_t __get__laserPointerWidth() const;

/// @brief Field kScrollMultiplier offset 0
static constexpr float_t  kScrollMultiplier{1};

/// @brief Field kTriggerThreshold offset 0
static constexpr float_t  kTriggerThreshold{0.1};

 VRUIControls::VRLaserPointer __declspec(property(get=__get__laserPointer, put=__set__laserPointer))  _laserPointer;

constexpr void __set__laserPointer(VRUIControls::VRLaserPointer value) ;

constexpr VRUIControls::VRLaserPointer __get__laserPointer() const;

 UnityEngine::Transform __declspec(property(get=__get__cursorTransform, put=__set__cursorTransform))  _cursorTransform;

constexpr void __set__cursorTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__cursorTransform() const;

 VRUIControls::VRLaserPointer __declspec(property(get=__get__leftLaserPointer, put=__set__leftLaserPointer))  _leftLaserPointer;

constexpr void __set__leftLaserPointer(VRUIControls::VRLaserPointer value) ;

constexpr VRUIControls::VRLaserPointer __get__leftLaserPointer() const;

 VRUIControls::VRLaserPointer __declspec(property(get=__get__rightLaserPointer, put=__set__rightLaserPointer))  _rightLaserPointer;

constexpr void __set__rightLaserPointer(VRUIControls::VRLaserPointer value) ;

constexpr VRUIControls::VRLaserPointer __get__rightLaserPointer() const;

 UnityEngine::Transform __declspec(property(get=__get__leftCursorTransform, put=__set__leftCursorTransform))  _leftCursorTransform;

constexpr void __set__leftCursorTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__leftCursorTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__rightCursorTransform, put=__set__rightCursorTransform))  _rightCursorTransform;

constexpr void __set__rightCursorTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rightCursorTransform() const;

 UnityEngine::EventSystems::EventSystem __declspec(property(get=__get__eventSystem, put=__set__eventSystem))  _eventSystem;

constexpr void __set__eventSystem(UnityEngine::EventSystems::EventSystem value) ;

constexpr UnityEngine::EventSystems::EventSystem __get__eventSystem() const;

 GlobalNamespace::VRController __declspec(property(get=__get__lastSelectedVrController, put=__set__lastSelectedVrController))  _lastSelectedVrController;

constexpr void __set__lastSelectedVrController(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__lastSelectedVrController() const;

 bool __declspec(property(get=__get__lastSelectedControllerWasRight, put=__set__lastSelectedControllerWasRight))  _lastSelectedControllerWasRight;

constexpr void __set__lastSelectedControllerWasRight(bool value) ;

constexpr bool __get__lastSelectedControllerWasRight() const;

 bool __declspec(property(get=__get__rightControllerWasReleased, put=__set__rightControllerWasReleased))  _rightControllerWasReleased;

constexpr void __set__rightControllerWasReleased(bool value) ;

constexpr bool __get__rightControllerWasReleased() const;

 bool __declspec(property(get=__get__leftControllerWasReleased, put=__set__leftControllerWasReleased))  _leftControllerWasReleased;

constexpr void __set__leftControllerWasReleased(bool value) ;

constexpr bool __get__leftControllerWasReleased() const;

 bool __declspec(property(get=__get__hasLaserPointers, put=__set__hasLaserPointers))  _hasLaserPointers;

constexpr void __set__hasLaserPointers(bool value) ;

constexpr bool __get__hasLaserPointers() const;

 bool __declspec(property(get=__get__hasCursors, put=__set__hasCursors))  _hasCursors;

constexpr void __set__hasCursors(bool value) ;

constexpr bool __get__hasCursors() const;

 UnityEngine::EventSystems::PointerEventData __declspec(property(get=__get__pointerData, put=__set__pointerData))  _pointerData;

constexpr void __set__pointerData(UnityEngine::EventSystems::PointerEventData value) ;

constexpr UnityEngine::EventSystems::PointerEventData __get__pointerData() const;


// Properties

 GlobalNamespace::VRController __declspec(property(get=get_lastSelectedVrController))  lastSelectedVrController;

 UnityEngine::Vector3 __declspec(property(get=get_cursorPosition))  cursorPosition;

 ::StringW __declspec(property(get=get_state))  state;


// Methods

/// @brief Method get_lastSelectedVrController addr 0x2d3f550 size 0x8 virtual false final false
 GlobalNamespace::VRController get_lastSelectedVrController() ;

/// @brief Method get_cursorPosition addr 0x2d3f558 size 0xf0 virtual false final false
 UnityEngine::Vector3 get_cursorPosition() ;

/// @brief Method Awake addr 0x2d3f648 size 0xb4 virtual false final false
 void Awake() ;

/// @brief Method OnDisable addr 0x2d3f958 size 0x18 virtual false final false
 void OnDisable() ;

/// @brief Method LateUpdate addr 0x2d3f988 size 0x14c virtual false final false
 void LateUpdate() ;

/// @brief Method IsLeftControllerDown addr 0x2d3fad4 size 0x50 virtual false final false
 bool IsLeftControllerDown() ;

/// @brief Method IsRightControllerDown addr 0x2d3fb24 size 0x50 virtual false final false
 bool IsRightControllerDown() ;

/// @brief Method SelectRightController addr 0x2d3f934 size 0x14 virtual false final false
 void SelectRightController() ;

/// @brief Method SelectLeftController addr 0x2d3f948 size 0x10 virtual false final false
 void SelectLeftController() ;

/// @brief Method EnabledLastSelectedPointer addr 0x2d3fb74 size 0x54 virtual false final false
 void EnabledLastSelectedPointer() ;

/// @brief Method CreateLaserPointers addr 0x2d3f6fc size 0x104 virtual false final false
 bool CreateLaserPointers() ;

/// @brief Method SetupLaserPointer addr 0x2d3fbc8 size 0x74 virtual false final false
 void SetupLaserPointer(VRUIControls::VRLaserPointer laserPointer) ;

/// @brief Method CreateCursors addr 0x2d3f800 size 0x134 virtual false final false
 bool CreateCursors() ;

/// @brief Method RefreshLaserPointerAndLaserHit addr 0x2d3fc3c size 0x238 virtual false final false
 void RefreshLaserPointerAndLaserHit(UnityEngine::EventSystems::PointerEventData pointerData) ;

/// @brief Method OnApplicationFocus addr 0x2d3fe74 size 0xc virtual false final false
 void OnApplicationFocus(bool hasFocus) ;

/// @brief Method HideLaserPointersAndCursors addr 0x2d3f970 size 0x18 virtual false final false
 void HideLaserPointersAndCursors() ;

/// @brief Method HideLaserPointers addr 0x2d3fee0 size 0x60 virtual false final false
 void HideLaserPointers() ;

/// @brief Method HideCursors addr 0x2d3fe80 size 0x60 virtual false final false
 void HideCursors() ;

/// @brief Method get_state addr 0x2d3ff40 size 0x2f4 virtual false final false
 ::StringW get_state() ;

/// @brief Method Process addr 0x2d3ec3c size 0x68 virtual false final false
 void Process(UnityEngine::EventSystems::PointerEventData pointerEventData) ;

// Ctor Parameters []
explicit VRPointer() ;

/// @brief Method .ctor addr 0x2d40234 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
NEED_NO_BOX(VRUIControls::VRPointer);
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRPointer, "VRUIControls", "VRPointer");
