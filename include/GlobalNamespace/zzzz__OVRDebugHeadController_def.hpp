#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class OVRCameraRig;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDebugHeadController;
}
// Type: ::OVRDebugHeadController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8456))
// CS Name: OVRDebugHeadController
class CORDL_TYPE OVRDebugHeadController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OVRDebugHeadController() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDebugHeadController", modifiers: " const&", def_value: None }]
constexpr OVRDebugHeadController(OVRDebugHeadController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDebugHeadController", modifiers: "&&", def_value: None }]
constexpr OVRDebugHeadController(OVRDebugHeadController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRDebugHeadController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRDebugHeadController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRDebugHeadController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRDebugHeadController& operator=(OVRDebugHeadController&& o) noexcept = default;
  constexpr OVRDebugHeadController& operator=(OVRDebugHeadController const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_AllowPitchLook, put=__set_AllowPitchLook))  AllowPitchLook;

constexpr void __set_AllowPitchLook(bool value) ;

constexpr bool __get_AllowPitchLook() const;

 bool __declspec(property(get=__get_AllowYawLook, put=__set_AllowYawLook))  AllowYawLook;

constexpr void __set_AllowYawLook(bool value) ;

constexpr bool __get_AllowYawLook() const;

 bool __declspec(property(get=__get_InvertPitch, put=__set_InvertPitch))  InvertPitch;

constexpr void __set_InvertPitch(bool value) ;

constexpr bool __get_InvertPitch() const;

 float_t __declspec(property(get=__get_GamePad_PitchDegreesPerSec, put=__set_GamePad_PitchDegreesPerSec))  GamePad_PitchDegreesPerSec;

constexpr void __set_GamePad_PitchDegreesPerSec(float_t value) ;

constexpr float_t __get_GamePad_PitchDegreesPerSec() const;

 float_t __declspec(property(get=__get_GamePad_YawDegreesPerSec, put=__set_GamePad_YawDegreesPerSec))  GamePad_YawDegreesPerSec;

constexpr void __set_GamePad_YawDegreesPerSec(float_t value) ;

constexpr float_t __get_GamePad_YawDegreesPerSec() const;

 bool __declspec(property(get=__get_AllowMovement, put=__set_AllowMovement))  AllowMovement;

constexpr void __set_AllowMovement(bool value) ;

constexpr bool __get_AllowMovement() const;

 float_t __declspec(property(get=__get_ForwardSpeed, put=__set_ForwardSpeed))  ForwardSpeed;

constexpr void __set_ForwardSpeed(float_t value) ;

constexpr float_t __get_ForwardSpeed() const;

 float_t __declspec(property(get=__get_StrafeSpeed, put=__set_StrafeSpeed))  StrafeSpeed;

constexpr void __set_StrafeSpeed(float_t value) ;

constexpr float_t __get_StrafeSpeed() const;

 GlobalNamespace::OVRCameraRig __declspec(property(get=__get_CameraRig, put=__set_CameraRig))  CameraRig;

constexpr void __set_CameraRig(GlobalNamespace::OVRCameraRig value) ;

constexpr GlobalNamespace::OVRCameraRig __get_CameraRig() const;


// Methods

/// @brief Method Awake addr 0x25adf94 size 0xf0 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x25ae084 size 0x4 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x25ae088 size 0x524 virtual false final false
 void Update() ;

static GlobalNamespace::OVRDebugHeadController New_ctor() ;

/// @brief Method .ctor addr 0x25ae5ac size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRDebugHeadController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDebugHeadController, "", "OVRDebugHeadController");
