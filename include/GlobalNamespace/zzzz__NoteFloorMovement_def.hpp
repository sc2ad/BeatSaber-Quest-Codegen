#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteFloorMovement;
}
// Type: ::NoteFloorMovement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4893))
// CS Name: NoteFloorMovement
class CORDL_TYPE NoteFloorMovement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~NoteFloorMovement() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteFloorMovement", modifiers: " const&", def_value: None }]
constexpr NoteFloorMovement(NoteFloorMovement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteFloorMovement", modifiers: "&&", def_value: None }]
constexpr NoteFloorMovement(NoteFloorMovement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteFloorMovement(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteFloorMovement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteFloorMovement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteFloorMovement& operator=(NoteFloorMovement&& o) noexcept = default;
  constexpr NoteFloorMovement& operator=(NoteFloorMovement const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__rotatedObject, put=__set__rotatedObject))  _rotatedObject;

constexpr void __set__rotatedObject(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__rotatedObject() const;

 ::GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms value) ;

constexpr ::GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 ::GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource value) ;

constexpr ::GlobalNamespace::IAudioTimeSource __get__audioTimeSyncController() const;

 ::System::Action __declspec(property(get=__get_floorMovementDidFinishEvent, put=__set_floorMovementDidFinishEvent))  floorMovementDidFinishEvent;

constexpr void __set_floorMovementDidFinishEvent(::System::Action value) ;

constexpr ::System::Action __get_floorMovementDidFinishEvent() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__startPos, put=__set__startPos))  _startPos;

constexpr void __set__startPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__startPos() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__endPos, put=__set__endPos))  _endPos;

constexpr void __set__endPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__endPos() const;

 float_t __declspec(property(get=__get__moveDuration, put=__set__moveDuration))  _moveDuration;

constexpr void __set__moveDuration(float_t value) ;

constexpr float_t __get__moveDuration() const;

 float_t __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(float_t value) ;

constexpr float_t __get__startTime() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get__worldRotation, put=__set__worldRotation))  _worldRotation;

constexpr void __set__worldRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get__worldRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get__inverseWorldRotation, put=__set__inverseWorldRotation))  _inverseWorldRotation;

constexpr void __set__inverseWorldRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get__inverseWorldRotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__localPosition, put=__set__localPosition))  _localPosition;

constexpr void __set__localPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__localPosition() const;


// Properties

 float_t __declspec(property(get=get_distanceToPlayer))  distanceToPlayer;

 ::UnityEngine::Vector3 __declspec(property(get=get_startPos))  startPos;

 ::UnityEngine::Vector3 __declspec(property(get=get_endPos))  endPos;

 float_t __declspec(property(get=get_startTime))  startTime;

 float_t __declspec(property(get=get_moveDuration))  moveDuration;

 ::UnityEngine::Quaternion __declspec(property(get=get_worldRotation))  worldRotation;

 ::UnityEngine::Quaternion __declspec(property(get=get_inverseWorldRotation))  inverseWorldRotation;

 ::UnityEngine::Vector3 __declspec(property(get=get_localPosition))  localPosition;


// Methods

/// @brief Method add_floorMovementDidFinishEvent addr 0x2240a30 size 0x9c virtual false final false
 void add_floorMovementDidFinishEvent(::System::Action value) ;

/// @brief Method remove_floorMovementDidFinishEvent addr 0x2240acc size 0x9c virtual false final false
 void remove_floorMovementDidFinishEvent(::System::Action value) ;

/// @brief Method get_distanceToPlayer addr 0x2240b68 size 0x40 virtual false final false
 float_t get_distanceToPlayer() ;

/// @brief Method get_startPos addr 0x2240ba8 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_startPos() ;

/// @brief Method get_endPos addr 0x2240bb4 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_endPos() ;

/// @brief Method get_startTime addr 0x2240bc0 size 0x8 virtual false final false
 float_t get_startTime() ;

/// @brief Method get_moveDuration addr 0x2240bc8 size 0x8 virtual false final false
 float_t get_moveDuration() ;

/// @brief Method get_worldRotation addr 0x2240bd0 size 0xc virtual false final false
 ::UnityEngine::Quaternion get_worldRotation() ;

/// @brief Method get_inverseWorldRotation addr 0x2240bdc size 0xc virtual false final false
 ::UnityEngine::Quaternion get_inverseWorldRotation() ;

/// @brief Method get_localPosition addr 0x2240be8 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_localPosition() ;

/// @brief Method Init addr 0x2240bf4 size 0xb8 virtual false final false
 void Init(float_t worldRotation, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, float_t moveDuration, float_t startTime) ;

/// @brief Method SetToStart addr 0x2240cac size 0xf4 virtual false final false
 ::UnityEngine::Vector3 SetToStart() ;

/// @brief Method ManualUpdate addr 0x2240da0 size 0x180 virtual false final false
 ::UnityEngine::Vector3 ManualUpdate() ;

// Ctor Parameters []
explicit NoteFloorMovement() ;

/// @brief Method .ctor addr 0x2240f20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NoteFloorMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteFloorMovement, "", "NoteFloorMovement");
