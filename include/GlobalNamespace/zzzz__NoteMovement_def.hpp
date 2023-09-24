#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class NoteJump;
}
namespace GlobalNamespace {
class NoteFloorMovement;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct GlobalNamespace__NoteMovement__MovementPhase;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__NoteMovement__MovementPhase;
}
namespace GlobalNamespace {
class NoteMovement;
}
// Type: ::MovementPhase
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4898))
// CS Name: NoteMovement::MovementPhase
struct CORDL_TYPE GlobalNamespace__NoteMovement__MovementPhase : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__NoteMovement__MovementPhase(int32_t value__) noexcept;


                    constexpr GlobalNamespace__NoteMovement__MovementPhase(GlobalNamespace__NoteMovement__MovementPhase const&) = default;
                    constexpr GlobalNamespace__NoteMovement__MovementPhase(GlobalNamespace__NoteMovement__MovementPhase&&) = default;
                    constexpr GlobalNamespace__NoteMovement__MovementPhase& operator=(GlobalNamespace__NoteMovement__MovementPhase const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__NoteMovement__MovementPhase& operator=(GlobalNamespace__NoteMovement__MovementPhase&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteMovement__MovementPhase(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__NoteMovement__MovementPhase_Unwrapped : int32_t {
__None = 0,
__MovingOnTheFloor = 1,
__Jumping = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__NoteMovement__MovementPhase_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__NoteMovement__MovementPhase_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase const None;

/// @brief Field MovingOnTheFloor offset 0
static GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase const MovingOnTheFloor;

/// @brief Field Jumping offset 0
static GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase const Jumping;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteMovement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4899))
// CS Name: NoteMovement
class CORDL_TYPE NoteMovement : public UnityEngine::MonoBehaviour {
public:
// Declarations
using MovementPhase = GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~NoteMovement() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteMovement", modifiers: " const&", def_value: None }]
constexpr NoteMovement(NoteMovement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteMovement", modifiers: "&&", def_value: None }]
constexpr NoteMovement(NoteMovement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteMovement(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteMovement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteMovement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteMovement& operator=(NoteMovement&& o) noexcept = default;
  constexpr NoteMovement& operator=(NoteMovement const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NoteFloorMovement __declspec(property(get=__get__floorMovement, put=__set__floorMovement))  _floorMovement;

constexpr void __set__floorMovement(GlobalNamespace::NoteFloorMovement value) ;

constexpr GlobalNamespace::NoteFloorMovement __get__floorMovement() const;

 GlobalNamespace::NoteJump __declspec(property(get=__get__jump, put=__set__jump))  _jump;

constexpr void __set__jump(GlobalNamespace::NoteJump value) ;

constexpr GlobalNamespace::NoteJump __get__jump() const;

 float_t __declspec(property(get=__get__zOffset, put=__set__zOffset))  _zOffset;

constexpr void __set__zOffset(float_t value) ;

constexpr float_t __get__zOffset() const;

 System::Action __declspec(property(get=__get_didInitEvent, put=__set_didInitEvent))  didInitEvent;

constexpr void __set_didInitEvent(System::Action value) ;

constexpr System::Action __get_didInitEvent() const;

 System::Action __declspec(property(get=__get_noteDidStartJumpEvent, put=__set_noteDidStartJumpEvent))  noteDidStartJumpEvent;

constexpr void __set_noteDidStartJumpEvent(System::Action value) ;

constexpr System::Action __get_noteDidStartJumpEvent() const;

 System::Action __declspec(property(get=__get_noteDidFinishJumpEvent, put=__set_noteDidFinishJumpEvent))  noteDidFinishJumpEvent;

constexpr void __set_noteDidFinishJumpEvent(System::Action value) ;

constexpr System::Action __get_noteDidFinishJumpEvent() const;

 System::Action __declspec(property(get=__get_noteDidPassMissedMarkerEvent, put=__set_noteDidPassMissedMarkerEvent))  noteDidPassMissedMarkerEvent;

constexpr void __set_noteDidPassMissedMarkerEvent(System::Action value) ;

constexpr System::Action __get_noteDidPassMissedMarkerEvent() const;

 System::Action __declspec(property(get=__get_noteDidPassHalfJumpEvent, put=__set_noteDidPassHalfJumpEvent))  noteDidPassHalfJumpEvent;

constexpr void __set_noteDidPassHalfJumpEvent(System::Action value) ;

constexpr System::Action __get_noteDidPassHalfJumpEvent() const;

 System::Action_1<GlobalNamespace::NoteMovement> __declspec(property(get=__get_noteDidPassJumpThreeQuartersEvent, put=__set_noteDidPassJumpThreeQuartersEvent))  noteDidPassJumpThreeQuartersEvent;

constexpr void __set_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement> value) ;

constexpr System::Action_1<GlobalNamespace::NoteMovement> __get_noteDidPassJumpThreeQuartersEvent() const;

 System::Action __declspec(property(get=__get_noteDidMoveInJumpPhaseEvent, put=__set_noteDidMoveInJumpPhaseEvent))  noteDidMoveInJumpPhaseEvent;

constexpr void __set_noteDidMoveInJumpPhaseEvent(System::Action value) ;

constexpr System::Action __get_noteDidMoveInJumpPhaseEvent() const;

 GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase __declspec(property(get=__get__movementPhase_k__BackingField, put=__set__movementPhase_k__BackingField))  _movementPhase_k__BackingField;

constexpr void __set__movementPhase_k__BackingField(GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase __get__movementPhase_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position() const;

 UnityEngine::Vector3 __declspec(property(get=__get__prevPosition, put=__set__prevPosition))  _prevPosition;

constexpr void __set__prevPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__prevPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get__localPosition, put=__set__localPosition))  _localPosition;

constexpr void __set__localPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__localPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get__prevLocalPosition, put=__set__prevLocalPosition))  _prevLocalPosition;

constexpr void __set__prevLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__prevLocalPosition() const;


// Properties

 GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase __declspec(property(get=get_movementPhase, put=set_movementPhase))  movementPhase;

 UnityEngine::Vector3 __declspec(property(get=get_position))  position;

 UnityEngine::Vector3 __declspec(property(get=get_prevPosition))  prevPosition;

 UnityEngine::Vector3 __declspec(property(get=get_localPosition))  localPosition;

 UnityEngine::Vector3 __declspec(property(get=get_prevLocalPosition))  prevLocalPosition;

 UnityEngine::Quaternion __declspec(property(get=get_worldRotation))  worldRotation;

 UnityEngine::Quaternion __declspec(property(get=get_inverseWorldRotation))  inverseWorldRotation;

 UnityEngine::Vector3 __declspec(property(get=get_moveEndPos))  moveEndPos;

 float_t __declspec(property(get=get_moveStartTime))  moveStartTime;

 float_t __declspec(property(get=get_moveDuration))  moveDuration;

 UnityEngine::Vector3 __declspec(property(get=get_beatPos))  beatPos;

 float_t __declspec(property(get=get_jumpDuration))  jumpDuration;

 UnityEngine::Vector3 __declspec(property(get=get_jumpMoveVec))  jumpMoveVec;

 float_t __declspec(property(get=get_distanceToPlayer))  distanceToPlayer;


// Methods

/// @brief Method add_didInitEvent addr 0x2242ab0 size 0x9c virtual false final false
 void add_didInitEvent(System::Action value) ;

/// @brief Method remove_didInitEvent addr 0x2242b4c size 0x9c virtual false final false
 void remove_didInitEvent(System::Action value) ;

/// @brief Method add_noteDidStartJumpEvent addr 0x223e9b8 size 0x9c virtual false final false
 void add_noteDidStartJumpEvent(System::Action value) ;

/// @brief Method remove_noteDidStartJumpEvent addr 0x223ec3c size 0x9c virtual false final false
 void remove_noteDidStartJumpEvent(System::Action value) ;

/// @brief Method add_noteDidFinishJumpEvent addr 0x223e91c size 0x9c virtual false final false
 void add_noteDidFinishJumpEvent(System::Action value) ;

/// @brief Method remove_noteDidFinishJumpEvent addr 0x223eba0 size 0x9c virtual false final false
 void remove_noteDidFinishJumpEvent(System::Action value) ;

/// @brief Method add_noteDidPassMissedMarkerEvent addr 0x223eb04 size 0x9c virtual false final false
 void add_noteDidPassMissedMarkerEvent(System::Action value) ;

/// @brief Method remove_noteDidPassMissedMarkerEvent addr 0x223ed88 size 0x9c virtual false final false
 void remove_noteDidPassMissedMarkerEvent(System::Action value) ;

/// @brief Method add_noteDidPassHalfJumpEvent addr 0x2242be8 size 0x9c virtual false final false
 void add_noteDidPassHalfJumpEvent(System::Action value) ;

/// @brief Method remove_noteDidPassHalfJumpEvent addr 0x2242c84 size 0x9c virtual false final false
 void remove_noteDidPassHalfJumpEvent(System::Action value) ;

/// @brief Method add_noteDidPassJumpThreeQuartersEvent addr 0x223ea54 size 0xb0 virtual false final false
 void add_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement> value) ;

/// @brief Method remove_noteDidPassJumpThreeQuartersEvent addr 0x223ecd8 size 0xb0 virtual false final false
 void remove_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement> value) ;

/// @brief Method add_noteDidMoveInJumpPhaseEvent addr 0x2242d20 size 0x9c virtual false final false
 void add_noteDidMoveInJumpPhaseEvent(System::Action value) ;

/// @brief Method remove_noteDidMoveInJumpPhaseEvent addr 0x2242dbc size 0x9c virtual false final false
 void remove_noteDidMoveInJumpPhaseEvent(System::Action value) ;

/// @brief Method get_movementPhase addr 0x2242e58 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase get_movementPhase() ;

/// @brief Method set_movementPhase addr 0x2242e60 size 0x8 virtual false final false
 void set_movementPhase(GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase value) ;

/// @brief Method get_position addr 0x2242e68 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method get_prevPosition addr 0x2242e74 size 0xc virtual false final false
 UnityEngine::Vector3 get_prevPosition() ;

/// @brief Method get_localPosition addr 0x2242e80 size 0xc virtual false final false
 UnityEngine::Vector3 get_localPosition() ;

/// @brief Method get_prevLocalPosition addr 0x2242e8c size 0xc virtual false final false
 UnityEngine::Vector3 get_prevLocalPosition() ;

/// @brief Method get_worldRotation addr 0x223e6b0 size 0x20 virtual false final false
 UnityEngine::Quaternion get_worldRotation() ;

/// @brief Method get_inverseWorldRotation addr 0x223e6d0 size 0x20 virtual false final false
 UnityEngine::Quaternion get_inverseWorldRotation() ;

/// @brief Method get_moveEndPos addr 0x223e87c size 0x20 virtual false final false
 UnityEngine::Vector3 get_moveEndPos() ;

/// @brief Method get_moveStartTime addr 0x223e714 size 0x1c virtual false final false
 float_t get_moveStartTime() ;

/// @brief Method get_moveDuration addr 0x223e754 size 0x1c virtual false final false
 float_t get_moveDuration() ;

/// @brief Method get_beatPos addr 0x223e810 size 0x44 virtual false final false
 UnityEngine::Vector3 get_beatPos() ;

/// @brief Method get_jumpDuration addr 0x223e794 size 0x1c virtual false final false
 float_t get_jumpDuration() ;

/// @brief Method get_jumpMoveVec addr 0x223e7d8 size 0x20 virtual false final false
 UnityEngine::Vector3 get_jumpMoveVec() ;

/// @brief Method get_distanceToPlayer addr 0x2242e98 size 0x34 virtual false final false
 float_t get_distanceToPlayer() ;

/// @brief Method Init addr 0x223f4ec size 0x1a4 virtual false final false
 void Init(float_t beatTime, float_t worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity, float_t flipYSide, float_t endRotation, bool rotateTowardsPlayer, bool useRandomRotation) ;

/// @brief Method Awake addr 0x2242ecc size 0x1c8 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2243094 size 0x230 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleFloorMovementDidFinish addr 0x22432c4 size 0x64 virtual false final false
 void HandleFloorMovementDidFinish() ;

/// @brief Method HandleNoteJumpDidFinish addr 0x2243328 size 0x20 virtual false final false
 void HandleNoteJumpDidFinish() ;

/// @brief Method HandleNoteJumpDidPassMissedMark addr 0x2243348 size 0x1c virtual false final false
 void HandleNoteJumpDidPassMissedMark() ;

/// @brief Method HandleNoteJumpDidPassThreeQuarters addr 0x2243364 size 0x20 virtual false final false
 void HandleNoteJumpDidPassThreeQuarters(GlobalNamespace::NoteJump noteJump) ;

/// @brief Method HandleNoteJumpNoteJumpDidPassHalf addr 0x2243384 size 0x1c virtual false final false
 void HandleNoteJumpNoteJumpDidPassHalf() ;

/// @brief Method ManualUpdate addr 0x223ee4c size 0xb8 virtual false final false
 void ManualUpdate() ;

static GlobalNamespace::NoteMovement New_ctor() ;

/// @brief Method .ctor addr 0x22433a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteMovement__MovementPhase, "", "NoteMovement/MovementPhase");
NEED_NO_BOX(GlobalNamespace::NoteMovement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMovement, "", "NoteMovement");
