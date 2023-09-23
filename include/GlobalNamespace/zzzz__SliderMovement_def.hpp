#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMovement;
}
// Type: ::SliderMovement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4939))
// CS Name: SliderMovement
class CORDL_TYPE SliderMovement : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~SliderMovement() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMovement", modifiers: " const&", def_value: None }]
constexpr SliderMovement(SliderMovement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMovement", modifiers: "&&", def_value: None }]
constexpr SliderMovement(SliderMovement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderMovement(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SliderMovement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderMovement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderMovement& operator=(SliderMovement&& o) noexcept = default;
  constexpr SliderMovement& operator=(SliderMovement const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSyncController() const;

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 System::Action __declspec(property(get=__get_movementDidFinishEvent, put=__set_movementDidFinishEvent))  movementDidFinishEvent;

constexpr void __set_movementDidFinishEvent(System::Action value) ;

constexpr System::Action __get_movementDidFinishEvent() const;

 System::Action_1<float_t> __declspec(property(get=__get_movementDidMoveEvent, put=__set_movementDidMoveEvent))  movementDidMoveEvent;

constexpr void __set_movementDidMoveEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_movementDidMoveEvent() const;

 System::Action __declspec(property(get=__get_headDidMovePastCutMarkEvent, put=__set_headDidMovePastCutMarkEvent))  headDidMovePastCutMarkEvent;

constexpr void __set_headDidMovePastCutMarkEvent(System::Action value) ;

constexpr System::Action __get_headDidMovePastCutMarkEvent() const;

 System::Action __declspec(property(get=__get_tailDidMovePastCutMarkEvent, put=__set_tailDidMovePastCutMarkEvent))  tailDidMovePastCutMarkEvent;

constexpr void __set_tailDidMovePastCutMarkEvent(System::Action value) ;

constexpr System::Action __get_tailDidMovePastCutMarkEvent() const;

 UnityEngine::Vector3 __declspec(property(get=__get__headNoteJumpStartPos, put=__set__headNoteJumpStartPos))  _headNoteJumpStartPos;

constexpr void __set__headNoteJumpStartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headNoteJumpStartPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__headNoteJumpEndPos, put=__set__headNoteJumpEndPos))  _headNoteJumpEndPos;

constexpr void __set__headNoteJumpEndPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headNoteJumpEndPos() const;

 float_t __declspec(property(get=__get__headNoteTime, put=__set__headNoteTime))  _headNoteTime;

constexpr void __set__headNoteTime(float_t value) ;

constexpr float_t __get__headNoteTime() const;

 float_t __declspec(property(get=__get__tailNoteTime, put=__set__tailNoteTime))  _tailNoteTime;

constexpr void __set__tailNoteTime(float_t value) ;

constexpr float_t __get__tailNoteTime() const;

 UnityEngine::Vector3 __declspec(property(get=__get__localPosition, put=__set__localPosition))  _localPosition;

constexpr void __set__localPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__localPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get__worldRotation, put=__set__worldRotation))  _worldRotation;

constexpr void __set__worldRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__worldRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get__inverseWorldRotation, put=__set__inverseWorldRotation))  _inverseWorldRotation;

constexpr void __set__inverseWorldRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__inverseWorldRotation() const;

 float_t __declspec(property(get=__get__jumpDuration, put=__set__jumpDuration))  _jumpDuration;

constexpr void __set__jumpDuration(float_t value) ;

constexpr float_t __get__jumpDuration() const;

 float_t __declspec(property(get=__get__headNoteGravity, put=__set__headNoteGravity))  _headNoteGravity;

constexpr void __set__headNoteGravity(float_t value) ;

constexpr float_t __get__headNoteGravity() const;

 float_t __declspec(property(get=__get__tailNoteGravity, put=__set__tailNoteGravity))  _tailNoteGravity;

constexpr void __set__tailNoteGravity(float_t value) ;

constexpr float_t __get__tailNoteGravity() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 bool __declspec(property(get=__get__movementEndReported, put=__set__movementEndReported))  _movementEndReported;

constexpr void __set__movementEndReported(bool value) ;

constexpr bool __get__movementEndReported() const;

 bool __declspec(property(get=__get__headDidMovePastCutMarkReported, put=__set__headDidMovePastCutMarkReported))  _headDidMovePastCutMarkReported;

constexpr void __set__headDidMovePastCutMarkReported(bool value) ;

constexpr bool __get__headDidMovePastCutMarkReported() const;

 bool __declspec(property(get=__get__tailDidMovePastCutMarkReported, put=__set__tailDidMovePastCutMarkReported))  _tailDidMovePastCutMarkReported;

constexpr void __set__tailDidMovePastCutMarkReported(bool value) ;

constexpr bool __get__tailDidMovePastCutMarkReported() const;

 float_t __declspec(property(get=__get__timeSinceHeadNoteJump, put=__set__timeSinceHeadNoteJump))  _timeSinceHeadNoteJump;

constexpr void __set__timeSinceHeadNoteJump(float_t value) ;

constexpr float_t __get__timeSinceHeadNoteJump() const;


// Properties

 float_t __declspec(property(get=get_jumpDuration))  jumpDuration;

 float_t __declspec(property(get=get_headNoteGravity))  headNoteGravity;

 float_t __declspec(property(get=get_tailNoteGravity))  tailNoteGravity;

 float_t __declspec(property(get=get_timeSinceHeadNoteJump))  timeSinceHeadNoteJump;


// Methods

/// @brief Method add_movementDidFinishEvent addr 0x224830c size 0x9c virtual false final false
 void add_movementDidFinishEvent(System::Action value) ;

/// @brief Method remove_movementDidFinishEvent addr 0x2248974 size 0x9c virtual false final false
 void remove_movementDidFinishEvent(System::Action value) ;

/// @brief Method add_movementDidMoveEvent addr 0x224c14c size 0xb0 virtual false final false
 void add_movementDidMoveEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_movementDidMoveEvent addr 0x224c1fc size 0xb0 virtual false final false
 void remove_movementDidMoveEvent(System::Action_1<float_t> value) ;

/// @brief Method add_headDidMovePastCutMarkEvent addr 0x22483a8 size 0x9c virtual false final false
 void add_headDidMovePastCutMarkEvent(System::Action value) ;

/// @brief Method remove_headDidMovePastCutMarkEvent addr 0x2248a10 size 0x9c virtual false final false
 void remove_headDidMovePastCutMarkEvent(System::Action value) ;

/// @brief Method add_tailDidMovePastCutMarkEvent addr 0x2248444 size 0x9c virtual false final false
 void add_tailDidMovePastCutMarkEvent(System::Action value) ;

/// @brief Method remove_tailDidMovePastCutMarkEvent addr 0x2248aac size 0x9c virtual false final false
 void remove_tailDidMovePastCutMarkEvent(System::Action value) ;

/// @brief Method get_jumpDuration addr 0x224c2ac size 0x8 virtual false final false
 float_t get_jumpDuration() ;

/// @brief Method get_headNoteGravity addr 0x224c2b4 size 0x8 virtual false final false
 float_t get_headNoteGravity() ;

/// @brief Method get_tailNoteGravity addr 0x224c2bc size 0x8 virtual false final false
 float_t get_tailNoteGravity() ;

/// @brief Method get_timeSinceHeadNoteJump addr 0x224c2c4 size 0x8 virtual false final false
 float_t get_timeSinceHeadNoteJump() ;

/// @brief Method Init addr 0x224764c size 0xf0 virtual false final false
 void Init(float_t headNoteTime, float_t tailNoteTime, float_t worldRotation, UnityEngine::Vector3 headNoteJumpStartPos, UnityEngine::Vector3 headNoteJumpEndPos, float_t jumpDuration, float_t headNoteGravity, float_t tailNoteGravity) ;

/// @brief Method StartMovement addr 0x2248184 size 0x28 virtual false final false
 void StartMovement() ;

/// @brief Method ManualUpdate addr 0x2248cb4 size 0x20c virtual false final false
 void ManualUpdate() ;

// Ctor Parameters []
explicit SliderMovement() ;

/// @brief Method .ctor addr 0x224c2cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SliderMovement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderMovement, "", "SliderMovement");
