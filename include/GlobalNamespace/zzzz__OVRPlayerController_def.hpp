#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPlayerController;
}
// Type: ::OVRPlayerController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8943))
// CS Name: OVRPlayerController
class CORDL_TYPE OVRPlayerController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~OVRPlayerController() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlayerController", modifiers: " const&", def_value: None }]
constexpr OVRPlayerController(OVRPlayerController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlayerController", modifiers: "&&", def_value: None }]
constexpr OVRPlayerController(OVRPlayerController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRPlayerController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRPlayerController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRPlayerController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRPlayerController& operator=(OVRPlayerController&& o) noexcept = default;
  constexpr OVRPlayerController& operator=(OVRPlayerController const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_Acceleration, put=__set_Acceleration))  Acceleration;

constexpr void __set_Acceleration(float_t value) ;

constexpr float_t __get_Acceleration() const;

 float_t __declspec(property(get=__get_Damping, put=__set_Damping))  Damping;

constexpr void __set_Damping(float_t value) ;

constexpr float_t __get_Damping() const;

 float_t __declspec(property(get=__get_BackAndSideDampen, put=__set_BackAndSideDampen))  BackAndSideDampen;

constexpr void __set_BackAndSideDampen(float_t value) ;

constexpr float_t __get_BackAndSideDampen() const;

 float_t __declspec(property(get=__get_JumpForce, put=__set_JumpForce))  JumpForce;

constexpr void __set_JumpForce(float_t value) ;

constexpr float_t __get_JumpForce() const;

 float_t __declspec(property(get=__get_RotationAmount, put=__set_RotationAmount))  RotationAmount;

constexpr void __set_RotationAmount(float_t value) ;

constexpr float_t __get_RotationAmount() const;

 float_t __declspec(property(get=__get_RotationRatchet, put=__set_RotationRatchet))  RotationRatchet;

constexpr void __set_RotationRatchet(float_t value) ;

constexpr float_t __get_RotationRatchet() const;

 bool __declspec(property(get=__get_SnapRotation, put=__set_SnapRotation))  SnapRotation;

constexpr void __set_SnapRotation(bool value) ;

constexpr bool __get_SnapRotation() const;

 bool __declspec(property(get=__get_RotateAroundGuardianCenter, put=__set_RotateAroundGuardianCenter))  RotateAroundGuardianCenter;

constexpr void __set_RotateAroundGuardianCenter(bool value) ;

constexpr bool __get_RotateAroundGuardianCenter() const;

 int32_t __declspec(property(get=__get_FixedSpeedSteps, put=__set_FixedSpeedSteps))  FixedSpeedSteps;

constexpr void __set_FixedSpeedSteps(int32_t value) ;

constexpr int32_t __get_FixedSpeedSteps() const;

 bool __declspec(property(get=__get_HmdResetsY, put=__set_HmdResetsY))  HmdResetsY;

constexpr void __set_HmdResetsY(bool value) ;

constexpr bool __get_HmdResetsY() const;

 bool __declspec(property(get=__get_HmdRotatesY, put=__set_HmdRotatesY))  HmdRotatesY;

constexpr void __set_HmdRotatesY(bool value) ;

constexpr bool __get_HmdRotatesY() const;

 float_t __declspec(property(get=__get_GravityModifier, put=__set_GravityModifier))  GravityModifier;

constexpr void __set_GravityModifier(float_t value) ;

constexpr float_t __get_GravityModifier() const;

 bool __declspec(property(get=__get_useProfileData, put=__set_useProfileData))  useProfileData;

constexpr void __set_useProfileData(bool value) ;

constexpr bool __get_useProfileData() const;

 float_t __declspec(property(get=__get_CameraHeight, put=__set_CameraHeight))  CameraHeight;

constexpr void __set_CameraHeight(float_t value) ;

constexpr float_t __get_CameraHeight() const;

 ::System::Action_1<::UnityEngine::Transform> __declspec(property(get=__get_TransformUpdated, put=__set_TransformUpdated))  TransformUpdated;

constexpr void __set_TransformUpdated(::System::Action_1<::UnityEngine::Transform> value) ;

constexpr ::System::Action_1<::UnityEngine::Transform> __get_TransformUpdated() const;

 bool __declspec(property(get=__get_Teleported, put=__set_Teleported))  Teleported;

constexpr void __set_Teleported(bool value) ;

constexpr bool __get_Teleported() const;

 ::System::Action __declspec(property(get=__get_CameraUpdated, put=__set_CameraUpdated))  CameraUpdated;

constexpr void __set_CameraUpdated(::System::Action value) ;

constexpr ::System::Action __get_CameraUpdated() const;

 ::System::Action __declspec(property(get=__get_PreCharacterMove, put=__set_PreCharacterMove))  PreCharacterMove;

constexpr void __set_PreCharacterMove(::System::Action value) ;

constexpr ::System::Action __get_PreCharacterMove() const;

 bool __declspec(property(get=__get_EnableLinearMovement, put=__set_EnableLinearMovement))  EnableLinearMovement;

constexpr void __set_EnableLinearMovement(bool value) ;

constexpr bool __get_EnableLinearMovement() const;

 bool __declspec(property(get=__get_EnableRotation, put=__set_EnableRotation))  EnableRotation;

constexpr void __set_EnableRotation(bool value) ;

constexpr bool __get_EnableRotation() const;

 bool __declspec(property(get=__get_RotationEitherThumbstick, put=__set_RotationEitherThumbstick))  RotationEitherThumbstick;

constexpr void __set_RotationEitherThumbstick(bool value) ;

constexpr bool __get_RotationEitherThumbstick() const;

 ::UnityEngine::CharacterController __declspec(property(get=__get_Controller, put=__set_Controller))  Controller;

constexpr void __set_Controller(::UnityEngine::CharacterController value) ;

constexpr ::UnityEngine::CharacterController __get_Controller() const;

 ::GlobalNamespace::OVRCameraRig __declspec(property(get=__get_CameraRig, put=__set_CameraRig))  CameraRig;

constexpr void __set_CameraRig(::GlobalNamespace::OVRCameraRig value) ;

constexpr ::GlobalNamespace::OVRCameraRig __get_CameraRig() const;

 float_t __declspec(property(get=__get_MoveScale, put=__set_MoveScale))  MoveScale;

constexpr void __set_MoveScale(float_t value) ;

constexpr float_t __get_MoveScale() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_MoveThrottle, put=__set_MoveThrottle))  MoveThrottle;

constexpr void __set_MoveThrottle(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_MoveThrottle() const;

 float_t __declspec(property(get=__get_FallSpeed, put=__set_FallSpeed))  FallSpeed;

constexpr void __set_FallSpeed(float_t value) ;

constexpr float_t __get_FallSpeed() const;

 ::System::Nullable_1<::GlobalNamespace::OVRPose> __declspec(property(get=__get_InitialPose, put=__set_InitialPose))  InitialPose;

constexpr void __set_InitialPose(::System::Nullable_1<::GlobalNamespace::OVRPose> value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::OVRPose> __get_InitialPose() const;

 float_t __declspec(property(get=__get__InitialYRotation_k__BackingField, put=__set__InitialYRotation_k__BackingField))  _InitialYRotation_k__BackingField;

constexpr void __set__InitialYRotation_k__BackingField(float_t value) ;

constexpr float_t __get__InitialYRotation_k__BackingField() const;

 float_t __declspec(property(get=__get_MoveScaleMultiplier, put=__set_MoveScaleMultiplier))  MoveScaleMultiplier;

constexpr void __set_MoveScaleMultiplier(float_t value) ;

constexpr float_t __get_MoveScaleMultiplier() const;

 float_t __declspec(property(get=__get_RotationScaleMultiplier, put=__set_RotationScaleMultiplier))  RotationScaleMultiplier;

constexpr void __set_RotationScaleMultiplier(float_t value) ;

constexpr float_t __get_RotationScaleMultiplier() const;

 bool __declspec(property(get=__get_SkipMouseRotation, put=__set_SkipMouseRotation))  SkipMouseRotation;

constexpr void __set_SkipMouseRotation(bool value) ;

constexpr bool __get_SkipMouseRotation() const;

 bool __declspec(property(get=__get_HaltUpdateMovement, put=__set_HaltUpdateMovement))  HaltUpdateMovement;

constexpr void __set_HaltUpdateMovement(bool value) ;

constexpr bool __get_HaltUpdateMovement() const;

 bool __declspec(property(get=__get_prevHatLeft, put=__set_prevHatLeft))  prevHatLeft;

constexpr void __set_prevHatLeft(bool value) ;

constexpr bool __get_prevHatLeft() const;

 bool __declspec(property(get=__get_prevHatRight, put=__set_prevHatRight))  prevHatRight;

constexpr void __set_prevHatRight(bool value) ;

constexpr bool __get_prevHatRight() const;

 float_t __declspec(property(get=__get_SimulationRate, put=__set_SimulationRate))  SimulationRate;

constexpr void __set_SimulationRate(float_t value) ;

constexpr float_t __get_SimulationRate() const;

 float_t __declspec(property(get=__get_buttonRotation, put=__set_buttonRotation))  buttonRotation;

constexpr void __set_buttonRotation(float_t value) ;

constexpr float_t __get_buttonRotation() const;

 bool __declspec(property(get=__get_ReadyToSnapTurn, put=__set_ReadyToSnapTurn))  ReadyToSnapTurn;

constexpr void __set_ReadyToSnapTurn(bool value) ;

constexpr bool __get_ReadyToSnapTurn() const;

 bool __declspec(property(get=__get_playerControllerEnabled, put=__set_playerControllerEnabled))  playerControllerEnabled;

constexpr void __set_playerControllerEnabled(bool value) ;

constexpr bool __get_playerControllerEnabled() const;


// Properties

 float_t __declspec(property(get=get_InitialYRotation, put=set_InitialYRotation))  InitialYRotation;


// Methods

/// @brief Method add_TransformUpdated addr 0x262b890 size 0xb0 virtual false final false
 void add_TransformUpdated(::System::Action_1<::UnityEngine::Transform> value) ;

/// @brief Method remove_TransformUpdated addr 0x262b940 size 0xb0 virtual false final false
 void remove_TransformUpdated(::System::Action_1<::UnityEngine::Transform> value) ;

/// @brief Method add_CameraUpdated addr 0x262b9f0 size 0x9c virtual false final false
 void add_CameraUpdated(::System::Action value) ;

/// @brief Method remove_CameraUpdated addr 0x262ba8c size 0x9c virtual false final false
 void remove_CameraUpdated(::System::Action value) ;

/// @brief Method add_PreCharacterMove addr 0x262bb28 size 0x9c virtual false final false
 void add_PreCharacterMove(::System::Action value) ;

/// @brief Method remove_PreCharacterMove addr 0x262bbc4 size 0x9c virtual false final false
 void remove_PreCharacterMove(::System::Action value) ;

/// @brief Method get_InitialYRotation addr 0x262bc60 size 0x8 virtual false final false
 float_t get_InitialYRotation() ;

/// @brief Method set_InitialYRotation addr 0x262bc68 size 0x8 virtual false final false
 void set_InitialYRotation(float_t value) ;

/// @brief Method Start addr 0x262bc70 size 0xc4 virtual false final false
 void Start() ;

/// @brief Method Awake addr 0x262bd34 size 0x1c8 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x262befc size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x262bf00 size 0x19c virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x262c09c size 0x1fc virtual false final false
 void Update() ;

/// @brief Method UpdateController addr 0x262c298 size 0x6f0 virtual true final false
 void UpdateController() ;

/// @brief Method UpdateMovement addr 0x262c988 size 0xc94 virtual true final false
 void UpdateMovement() ;

/// @brief Method UpdateTransform addr 0x262d61c size 0x188 virtual false final false
 void UpdateTransform(::GlobalNamespace::OVRCameraRig rig) ;

/// @brief Method Jump addr 0x262d7a4 size 0x80 virtual false final false
 bool Jump() ;

/// @brief Method Stop addr 0x262d824 size 0xa4 virtual false final false
 void Stop() ;

/// @brief Method GetMoveScaleMultiplier addr 0x262d8c8 size 0xc virtual false final false
 void GetMoveScaleMultiplier(ByRef<float_t> moveScaleMultiplier) ;

/// @brief Method SetMoveScaleMultiplier addr 0x262d8d4 size 0x8 virtual false final false
 void SetMoveScaleMultiplier(float_t moveScaleMultiplier) ;

/// @brief Method GetRotationScaleMultiplier addr 0x262d8dc size 0xc virtual false final false
 void GetRotationScaleMultiplier(ByRef<float_t> rotationScaleMultiplier) ;

/// @brief Method SetRotationScaleMultiplier addr 0x262d8e8 size 0x8 virtual false final false
 void SetRotationScaleMultiplier(float_t rotationScaleMultiplier) ;

/// @brief Method GetSkipMouseRotation addr 0x262d8f0 size 0xc virtual false final false
 void GetSkipMouseRotation(ByRef<bool> skipMouseRotation) ;

/// @brief Method SetSkipMouseRotation addr 0x262d8fc size 0xc virtual false final false
 void SetSkipMouseRotation(bool skipMouseRotation) ;

/// @brief Method GetHaltUpdateMovement addr 0x262d908 size 0xc virtual false final false
 void GetHaltUpdateMovement(ByRef<bool> haltUpdateMovement) ;

/// @brief Method SetHaltUpdateMovement addr 0x262d914 size 0xc virtual false final false
 void SetHaltUpdateMovement(bool haltUpdateMovement) ;

/// @brief Method ResetOrientation addr 0x262d920 size 0xc4 virtual false final false
 void ResetOrientation() ;

// Ctor Parameters []
explicit OVRPlayerController() ;

/// @brief Method .ctor addr 0x262d9e4 size 0xb4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlayerController, "", "OVRPlayerController");
