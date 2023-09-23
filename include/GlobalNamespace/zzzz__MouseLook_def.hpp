#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MouseLook;
}
// Type: ::MouseLook
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5923))
// CS Name: MouseLook
class CORDL_TYPE MouseLook : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MouseLook() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseLook", modifiers: " const&", def_value: None }]
constexpr MouseLook(MouseLook const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseLook", modifiers: "&&", def_value: None }]
constexpr MouseLook(MouseLook&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseLook(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MouseLook& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseLook& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseLook& operator=(MouseLook&& o) noexcept = default;
  constexpr MouseLook& operator=(MouseLook const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__xSensitivity, put=__set__xSensitivity))  _xSensitivity;

constexpr void __set__xSensitivity(float_t value) ;

constexpr float_t __get__xSensitivity() const;

 float_t __declspec(property(get=__get__ySensitivity, put=__set__ySensitivity))  _ySensitivity;

constexpr void __set__ySensitivity(float_t value) ;

constexpr float_t __get__ySensitivity() const;

 bool __declspec(property(get=__get__clampVerticalRotation, put=__set__clampVerticalRotation))  _clampVerticalRotation;

constexpr void __set__clampVerticalRotation(bool value) ;

constexpr bool __get__clampVerticalRotation() const;

 float_t __declspec(property(get=__get__minimumX, put=__set__minimumX))  _minimumX;

constexpr void __set__minimumX(float_t value) ;

constexpr float_t __get__minimumX() const;

 float_t __declspec(property(get=__get__maximumX, put=__set__maximumX))  _maximumX;

constexpr void __set__maximumX(float_t value) ;

constexpr float_t __get__maximumX() const;

 bool __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(bool value) ;

constexpr bool __get__smooth() const;

 float_t __declspec(property(get=__get__smoothTime, put=__set__smoothTime))  _smoothTime;

constexpr void __set__smoothTime(float_t value) ;

constexpr float_t __get__smoothTime() const;

 bool __declspec(property(get=__get__lockCursor, put=__set__lockCursor))  _lockCursor;

constexpr void __set__lockCursor(bool value) ;

constexpr bool __get__lockCursor() const;

 UnityEngine::Quaternion __declspec(property(get=__get__characterTargetRot, put=__set__characterTargetRot))  _characterTargetRot;

constexpr void __set__characterTargetRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__characterTargetRot() const;

 UnityEngine::Quaternion __declspec(property(get=__get__cameraTargetRot, put=__set__cameraTargetRot))  _cameraTargetRot;

constexpr void __set__cameraTargetRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__cameraTargetRot() const;

 bool __declspec(property(get=__get__cursorIsLocked, put=__set__cursorIsLocked))  _cursorIsLocked;

constexpr void __set__cursorIsLocked(bool value) ;

constexpr bool __get__cursorIsLocked() const;


// Methods

/// @brief Method Init addr 0x2192b70 size 0x6c virtual false final false
 void Init(UnityEngine::Transform character, UnityEngine::Transform camera) ;

/// @brief Method SetRotations addr 0x21935c0 size 0x14 virtual false final false
 void SetRotations(UnityEngine::Quaternion characterRotation, UnityEngine::Quaternion cameraRotation) ;

/// @brief Method LookRotation addr 0x219305c size 0x35c virtual false final false
 void LookRotation(UnityEngine::Transform character, UnityEngine::Transform camera) ;

/// @brief Method SetCursorLock addr 0x2192c24 size 0x34 virtual false final false
 void SetCursorLock(bool value) ;

/// @brief Method UpdateCursorLock addr 0x2193638 size 0x10 virtual false final false
 void UpdateCursorLock() ;

/// @brief Method InternalLockUpdate addr 0x2193648 size 0x78 virtual false final false
 void InternalLockUpdate() ;

/// @brief Method ClampRotationAroundXAxis addr 0x21935d4 size 0x64 virtual false final false
 UnityEngine::Quaternion ClampRotationAroundXAxis(UnityEngine::Quaternion q) ;

// Ctor Parameters []
explicit MouseLook() ;

/// @brief Method .ctor addr 0x219358c size 0x34 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MouseLook);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MouseLook, "", "MouseLook");
