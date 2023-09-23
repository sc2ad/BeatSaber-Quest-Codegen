#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class PlayerSpaceConvertor;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJump;
}
// Type: ::NoteJump
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4894))
// CS Name: NoteJump
class CORDL_TYPE NoteJump : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~NoteJump() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteJump", modifiers: " const&", def_value: None }]
constexpr NoteJump(NoteJump const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteJump", modifiers: "&&", def_value: None }]
constexpr NoteJump(NoteJump&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteJump(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteJump& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteJump& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteJump& operator=(NoteJump&& o) noexcept = default;
  constexpr NoteJump& operator=(NoteJump const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__rotatedObject, put=__set__rotatedObject))  _rotatedObject;

constexpr void __set__rotatedObject(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rotatedObject() const;

 float_t __declspec(property(get=__get__yAvoidanceUp, put=__set__yAvoidanceUp))  _yAvoidanceUp;

constexpr void __set__yAvoidanceUp(float_t value) ;

constexpr float_t __get__yAvoidanceUp() const;

 float_t __declspec(property(get=__get__yAvoidanceDown, put=__set__yAvoidanceDown))  _yAvoidanceDown;

constexpr void __set__yAvoidanceDown(float_t value) ;

constexpr float_t __get__yAvoidanceDown() const;

 float_t __declspec(property(get=__get__endDistanceOffset, put=__set__endDistanceOffset))  _endDistanceOffset;

constexpr void __set__endDistanceOffset(float_t value) ;

constexpr float_t __get__endDistanceOffset() const;

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 GlobalNamespace::PlayerSpaceConvertor __declspec(property(get=__get__playerSpaceConvertor, put=__set__playerSpaceConvertor))  _playerSpaceConvertor;

constexpr void __set__playerSpaceConvertor(GlobalNamespace::PlayerSpaceConvertor value) ;

constexpr GlobalNamespace::PlayerSpaceConvertor __get__playerSpaceConvertor() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSyncController() const;

 System::Action __declspec(property(get=__get_noteJumpDidFinishEvent, put=__set_noteJumpDidFinishEvent))  noteJumpDidFinishEvent;

constexpr void __set_noteJumpDidFinishEvent(System::Action value) ;

constexpr System::Action __get_noteJumpDidFinishEvent() const;

 System::Action __declspec(property(get=__get_noteJumpDidPassMissedMarkerEvent, put=__set_noteJumpDidPassMissedMarkerEvent))  noteJumpDidPassMissedMarkerEvent;

constexpr void __set_noteJumpDidPassMissedMarkerEvent(System::Action value) ;

constexpr System::Action __get_noteJumpDidPassMissedMarkerEvent() const;

 System::Action_1<GlobalNamespace::NoteJump> __declspec(property(get=__get_noteJumpDidPassThreeQuartersEvent, put=__set_noteJumpDidPassThreeQuartersEvent))  noteJumpDidPassThreeQuartersEvent;

constexpr void __set_noteJumpDidPassThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteJump> value) ;

constexpr System::Action_1<GlobalNamespace::NoteJump> __get_noteJumpDidPassThreeQuartersEvent() const;

 System::Action __declspec(property(get=__get_noteJumpDidPassHalfEvent, put=__set_noteJumpDidPassHalfEvent))  noteJumpDidPassHalfEvent;

constexpr void __set_noteJumpDidPassHalfEvent(System::Action value) ;

constexpr System::Action __get_noteJumpDidPassHalfEvent() const;

 System::Action_1<float_t> __declspec(property(get=__get_noteJumpDidUpdateProgressEvent, put=__set_noteJumpDidUpdateProgressEvent))  noteJumpDidUpdateProgressEvent;

constexpr void __set_noteJumpDidUpdateProgressEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_noteJumpDidUpdateProgressEvent() const;

 UnityEngine::Vector3 __declspec(property(get=__get__startPos, put=__set__startPos))  _startPos;

constexpr void __set__startPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__startPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__endPos, put=__set__endPos))  _endPos;

constexpr void __set__endPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__endPos() const;

 float_t __declspec(property(get=__get__jumpDuration, put=__set__jumpDuration))  _jumpDuration;

constexpr void __set__jumpDuration(float_t value) ;

constexpr float_t __get__jumpDuration() const;

 UnityEngine::Vector3 __declspec(property(get=__get__moveVec, put=__set__moveVec))  _moveVec;

constexpr void __set__moveVec(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__moveVec() const;

 float_t __declspec(property(get=__get__beatTime, put=__set__beatTime))  _beatTime;

constexpr void __set__beatTime(float_t value) ;

constexpr float_t __get__beatTime() const;

 float_t __declspec(property(get=__get__startVerticalVelocity, put=__set__startVerticalVelocity))  _startVerticalVelocity;

constexpr void __set__startVerticalVelocity(float_t value) ;

constexpr float_t __get__startVerticalVelocity() const;

 UnityEngine::Quaternion __declspec(property(get=__get__startRotation, put=__set__startRotation))  _startRotation;

constexpr void __set__startRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__startRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get__middleRotation, put=__set__middleRotation))  _middleRotation;

constexpr void __set__middleRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__middleRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get__endRotation, put=__set__endRotation))  _endRotation;

constexpr void __set__endRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__endRotation() const;

 float_t __declspec(property(get=__get__gravity, put=__set__gravity))  _gravity;

constexpr void __set__gravity(float_t value) ;

constexpr float_t __get__gravity() const;

 float_t __declspec(property(get=__get__yAvoidance, put=__set__yAvoidance))  _yAvoidance;

constexpr void __set__yAvoidance(float_t value) ;

constexpr float_t __get__yAvoidance() const;

 float_t __declspec(property(get=__get__missedTime, put=__set__missedTime))  _missedTime;

constexpr void __set__missedTime(float_t value) ;

constexpr float_t __get__missedTime() const;

 bool __declspec(property(get=__get__missedMarkReported, put=__set__missedMarkReported))  _missedMarkReported;

constexpr void __set__missedMarkReported(bool value) ;

constexpr bool __get__missedMarkReported() const;

 bool __declspec(property(get=__get__threeQuartersMarkReported, put=__set__threeQuartersMarkReported))  _threeQuartersMarkReported;

constexpr void __set__threeQuartersMarkReported(bool value) ;

constexpr bool __get__threeQuartersMarkReported() const;

 bool __declspec(property(get=__get__halfJumpMarkReported, put=__set__halfJumpMarkReported))  _halfJumpMarkReported;

constexpr void __set__halfJumpMarkReported(bool value) ;

constexpr bool __get__halfJumpMarkReported() const;

 UnityEngine::Vector3 __declspec(property(get=__get__localPosition, put=__set__localPosition))  _localPosition;

constexpr void __set__localPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__localPosition() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__randomRotations, put=__set__randomRotations))  _randomRotations;

constexpr void __set__randomRotations(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__randomRotations() const;

/// @brief Field kMissedTimeOffset offset 0
static constexpr float_t  kMissedTimeOffset{0.15};

 UnityEngine::Quaternion __declspec(property(get=__get__worldRotation, put=__set__worldRotation))  _worldRotation;

constexpr void __set__worldRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__worldRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get__inverseWorldRotation, put=__set__inverseWorldRotation))  _inverseWorldRotation;

constexpr void __set__inverseWorldRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__inverseWorldRotation() const;

 bool __declspec(property(get=__get__rotateTowardsPlayer, put=__set__rotateTowardsPlayer))  _rotateTowardsPlayer;

constexpr void __set__rotateTowardsPlayer(bool value) ;

constexpr bool __get__rotateTowardsPlayer() const;


// Properties

 float_t __declspec(property(get=get_distanceToPlayer))  distanceToPlayer;

 UnityEngine::Vector3 __declspec(property(get=get_beatPos))  beatPos;

 float_t __declspec(property(get=get_jumpDuration))  jumpDuration;

 UnityEngine::Vector3 __declspec(property(get=get_moveVec))  moveVec;

 UnityEngine::Vector3 __declspec(property(get=get_localPosition))  localPosition;


// Methods

/// @brief Method add_noteJumpDidFinishEvent addr 0x2240f28 size 0x9c virtual false final false
 void add_noteJumpDidFinishEvent(System::Action value) ;

/// @brief Method remove_noteJumpDidFinishEvent addr 0x2240fc4 size 0x9c virtual false final false
 void remove_noteJumpDidFinishEvent(System::Action value) ;

/// @brief Method add_noteJumpDidPassMissedMarkerEvent addr 0x2241060 size 0x9c virtual false final false
 void add_noteJumpDidPassMissedMarkerEvent(System::Action value) ;

/// @brief Method remove_noteJumpDidPassMissedMarkerEvent addr 0x22410fc size 0x9c virtual false final false
 void remove_noteJumpDidPassMissedMarkerEvent(System::Action value) ;

/// @brief Method add_noteJumpDidPassThreeQuartersEvent addr 0x2241198 size 0xb0 virtual false final false
 void add_noteJumpDidPassThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteJump> value) ;

/// @brief Method remove_noteJumpDidPassThreeQuartersEvent addr 0x2241248 size 0xb0 virtual false final false
 void remove_noteJumpDidPassThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteJump> value) ;

/// @brief Method add_noteJumpDidPassHalfEvent addr 0x22412f8 size 0x9c virtual false final false
 void add_noteJumpDidPassHalfEvent(System::Action value) ;

/// @brief Method remove_noteJumpDidPassHalfEvent addr 0x2241394 size 0x9c virtual false final false
 void remove_noteJumpDidPassHalfEvent(System::Action value) ;

/// @brief Method add_noteJumpDidUpdateProgressEvent addr 0x2241430 size 0xb0 virtual false final false
 void add_noteJumpDidUpdateProgressEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_noteJumpDidUpdateProgressEvent addr 0x22414e0 size 0xb0 virtual false final false
 void remove_noteJumpDidUpdateProgressEvent(System::Action_1<float_t> value) ;

/// @brief Method get_distanceToPlayer addr 0x2241590 size 0x48 virtual false final false
 float_t get_distanceToPlayer() ;

/// @brief Method get_beatPos addr 0x22415d8 size 0x30 virtual false final false
 UnityEngine::Vector3 get_beatPos() ;

/// @brief Method get_jumpDuration addr 0x2241608 size 0x8 virtual false final false
 float_t get_jumpDuration() ;

/// @brief Method get_moveVec addr 0x2241610 size 0xc virtual false final false
 UnityEngine::Vector3 get_moveVec() ;

/// @brief Method get_localPosition addr 0x224161c size 0xc virtual false final false
 UnityEngine::Vector3 get_localPosition() ;

/// @brief Method Init addr 0x2241628 size 0x394 virtual false final false
 void Init(float_t beatTime, float_t worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 endPos, float_t jumpDuration, float_t gravity, float_t flipYSide, float_t endRotation, bool rotateTowardsPlayer, bool useRandomRotation) ;

/// @brief Method ManualUpdate addr 0x22419bc size 0x640 virtual false final false
 UnityEngine::Vector3 ManualUpdate() ;

// Ctor Parameters []
explicit NoteJump() ;

/// @brief Method .ctor addr 0x2241ffc size 0x1b8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteJump);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJump, "", "NoteJump");
