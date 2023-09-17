#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class INoteControllerNoteWasCutEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidDissolveEvent;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartJumpEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidFinishJumpEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteWasMissedEvent;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__NoteController___DissolveCoroutine_d__73;
}
// Type: ::<DissolveCoroutine>d__73
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4876))
// CS Name: NoteController::<DissolveCoroutine>d__73
class CORDL_TYPE ____GlobalNamespace__NoteController___DissolveCoroutine_d__73 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__NoteController___DissolveCoroutine_d__73() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NoteController___DissolveCoroutine_d__73", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NoteController___DissolveCoroutine_d__73(____GlobalNamespace__NoteController___DissolveCoroutine_d__73 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NoteController___DissolveCoroutine_d__73", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NoteController___DissolveCoroutine_d__73(____GlobalNamespace__NoteController___DissolveCoroutine_d__73&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NoteController___DissolveCoroutine_d__73(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__NoteController___DissolveCoroutine_d__73& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NoteController___DissolveCoroutine_d__73& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NoteController___DissolveCoroutine_d__73& operator=(____GlobalNamespace__NoteController___DissolveCoroutine_d__73&& o) noexcept = default;
  constexpr ____GlobalNamespace__NoteController___DissolveCoroutine_d__73& operator=(____GlobalNamespace__NoteController___DissolveCoroutine_d__73 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::NoteController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::NoteController value) ;

constexpr ::GlobalNamespace::NoteController __get___4__this() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__NoteController___DissolveCoroutine_d__73(int32_t __1__state) ;

/// @brief Method .ctor addr 0x223f708 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x223f7b0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x223f7b4 size 0x3e8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x223fb9c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x223fba4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x223fbe4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4886))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4877))
// CS Name: NoteController
class CORDL_TYPE NoteController : public ::GlobalNamespace::NoteControllerBase {
public:
// Declarations
using _DissolveCoroutine_d__73 = ::GlobalNamespace::____GlobalNamespace__NoteController___DissolveCoroutine_d__73;

/// @brief Convert operator to ::GlobalNamespace::INoteMirrorable
constexpr operator  ::GlobalNamespace::INoteMirrorable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IBeatmapObjectController
constexpr operator  ::GlobalNamespace::IBeatmapObjectController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteController", modifiers: " const&", def_value: None }]
constexpr NoteController(NoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteController", modifiers: "&&", def_value: None }]
constexpr NoteController(NoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteController(void* ptr) noexcept : ::GlobalNamespace::NoteControllerBase(ptr) {
}


  constexpr NoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteController& operator=(NoteController&& o) noexcept = default;
  constexpr NoteController& operator=(NoteController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NoteMovement __declspec(property(get=__get__noteMovement, put=__set__noteMovement))  _noteMovement;

constexpr void __set__noteMovement(::GlobalNamespace::NoteMovement value) ;

constexpr ::GlobalNamespace::NoteMovement __get__noteMovement() const;

 ::UnityEngine::Transform __declspec(property(get=__get__noteTransform, put=__set__noteTransform))  _noteTransform;

constexpr void __set__noteTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__noteTransform() const;

 bool __declspec(property(get=__get__hidden_k__BackingField, put=__set__hidden_k__BackingField))  _hidden_k__BackingField;

constexpr void __set__hidden_k__BackingField(bool value) ;

constexpr bool __get__hidden_k__BackingField() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent> __declspec(property(get=__get__didInitEvent, put=__set__didInitEvent))  _didInitEvent;

constexpr void __set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent> __get__didInitEvent() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent> __declspec(property(get=__get__noteDidStartJumpEvent, put=__set__noteDidStartJumpEvent))  _noteDidStartJumpEvent;

constexpr void __set__noteDidStartJumpEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent> __get__noteDidStartJumpEvent() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent> __declspec(property(get=__get__noteDidFinishJumpEvent, put=__set__noteDidFinishJumpEvent))  _noteDidFinishJumpEvent;

constexpr void __set__noteDidFinishJumpEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent> __get__noteDidFinishJumpEvent() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> __declspec(property(get=__get__noteDidPassJumpThreeQuartersEvent, put=__set__noteDidPassJumpThreeQuartersEvent))  _noteDidPassJumpThreeQuartersEvent;

constexpr void __set__noteDidPassJumpThreeQuartersEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> __get__noteDidPassJumpThreeQuartersEvent() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent> __declspec(property(get=__get__noteWasCutEvent, put=__set__noteWasCutEvent))  _noteWasCutEvent;

constexpr void __set__noteWasCutEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent> __get__noteWasCutEvent() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent> __declspec(property(get=__get__noteWasMissedEvent, put=__set__noteWasMissedEvent))  _noteWasMissedEvent;

constexpr void __set__noteWasMissedEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent> __get__noteWasMissedEvent() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> __declspec(property(get=__get__noteDidStartDissolvingEvent, put=__set__noteDidStartDissolvingEvent))  _noteDidStartDissolvingEvent;

constexpr void __set__noteDidStartDissolvingEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> __get__noteDidStartDissolvingEvent() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent> __declspec(property(get=__get__noteDidDissolveEvent, put=__set__noteDidDissolveEvent))  _noteDidDissolveEvent;

constexpr void __set__noteDidDissolveEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent> __get__noteDidDissolveEvent() const;

 ::GlobalNamespace::NoteData __declspec(property(get=__get__noteData, put=__set__noteData))  _noteData;

constexpr void __set__noteData(::GlobalNamespace::NoteData value) ;

constexpr ::GlobalNamespace::NoteData __get__noteData() const;

 bool __declspec(property(get=__get__dissolving, put=__set__dissolving))  _dissolving;

constexpr void __set__dissolving(bool value) ;

constexpr bool __get__dissolving() const;

 float_t __declspec(property(get=__get__uniformScale, put=__set__uniformScale))  _uniformScale;

constexpr void __set__uniformScale(float_t value) ;

constexpr float_t __get__uniformScale() const;


// Properties

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent> __declspec(property(get=get_didInitEvent))  didInitEvent;

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent> __declspec(property(get=get_noteDidStartJumpEvent))  noteDidStartJumpEvent;

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent> __declspec(property(get=get_noteDidFinishJumpEvent))  noteDidFinishJumpEvent;

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> __declspec(property(get=get_noteDidPassJumpThreeQuartersEvent))  noteDidPassJumpThreeQuartersEvent;

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent> __declspec(property(get=get_noteWasCutEvent))  noteWasCutEvent;

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent> __declspec(property(get=get_noteWasMissedEvent))  noteWasMissedEvent;

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> __declspec(property(get=get_noteDidStartDissolvingEvent))  noteDidStartDissolvingEvent;

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent> __declspec(property(get=get_noteDidDissolveEvent))  noteDidDissolveEvent;

 ::UnityEngine::Transform __declspec(property(get=get_noteTransform))  noteTransform;

 ::UnityEngine::Quaternion __declspec(property(get=get_worldRotation))  worldRotation;

 ::UnityEngine::Quaternion __declspec(property(get=get_inverseWorldRotation))  inverseWorldRotation;

 float_t __declspec(property(get=get_moveStartTime))  moveStartTime;

 float_t __declspec(property(get=get_moveDuration))  moveDuration;

 float_t __declspec(property(get=get_jumpDuration))  jumpDuration;

 ::UnityEngine::Vector3 __declspec(property(get=get_jumpMoveVec))  jumpMoveVec;

 ::UnityEngine::Vector3 __declspec(property(get=get_beatPos))  beatPos;

 ::UnityEngine::Vector3 __declspec(property(get=get_jumpStartPos))  jumpStartPos;

 ::GlobalNamespace::NoteData __declspec(property(get=get_noteData))  noteData;

 ::UnityEngine::Vector3 __declspec(property(get=get_moveVec))  moveVec;

 float_t __declspec(property(get=get_uniformScale))  uniformScale;

 bool __declspec(property(get=get_hidden, put=set_hidden))  hidden;


// Methods

/// @brief Method get_didInitEvent addr 0x223e668 size 0x8 virtual true final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent> get_didInitEvent() ;

/// @brief Method get_noteDidStartJumpEvent addr 0x223e670 size 0x8 virtual false final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent> get_noteDidStartJumpEvent() ;

/// @brief Method get_noteDidFinishJumpEvent addr 0x223e678 size 0x8 virtual false final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent> get_noteDidFinishJumpEvent() ;

/// @brief Method get_noteDidPassJumpThreeQuartersEvent addr 0x223e680 size 0x8 virtual true final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> get_noteDidPassJumpThreeQuartersEvent() ;

/// @brief Method get_noteWasCutEvent addr 0x223e688 size 0x8 virtual false final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent> get_noteWasCutEvent() ;

/// @brief Method get_noteWasMissedEvent addr 0x223e690 size 0x8 virtual false final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent> get_noteWasMissedEvent() ;

/// @brief Method get_noteDidStartDissolvingEvent addr 0x223e698 size 0x8 virtual true final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> get_noteDidStartDissolvingEvent() ;

/// @brief Method get_noteDidDissolveEvent addr 0x223e6a0 size 0x8 virtual false final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent> get_noteDidDissolveEvent() ;

/// @brief Method get_noteTransform addr 0x223e6a8 size 0x8 virtual true final true
 ::UnityEngine::Transform get_noteTransform() ;

/// @brief Method get_worldRotation addr 0x223cef8 size 0x28 virtual false final false
 ::UnityEngine::Quaternion get_worldRotation() ;

/// @brief Method get_inverseWorldRotation addr 0x223cf20 size 0x28 virtual false final false
 ::UnityEngine::Quaternion get_inverseWorldRotation() ;

/// @brief Method get_moveStartTime addr 0x223e6f0 size 0x24 virtual false final false
 float_t get_moveStartTime() ;

/// @brief Method get_moveDuration addr 0x223e730 size 0x24 virtual false final false
 float_t get_moveDuration() ;

/// @brief Method get_jumpDuration addr 0x223e770 size 0x24 virtual false final false
 float_t get_jumpDuration() ;

/// @brief Method get_jumpMoveVec addr 0x223e7b0 size 0x28 virtual false final false
 ::UnityEngine::Vector3 get_jumpMoveVec() ;

/// @brief Method get_beatPos addr 0x223e7f8 size 0x18 virtual false final false
 ::UnityEngine::Vector3 get_beatPos() ;

/// @brief Method get_jumpStartPos addr 0x223e854 size 0x28 virtual false final false
 ::UnityEngine::Vector3 get_jumpStartPos() ;

/// @brief Method get_noteData addr 0x223e89c size 0x8 virtual true final false
 ::GlobalNamespace::NoteData get_noteData() ;

/// @brief Method get_moveVec addr 0x223e8a4 size 0x5c virtual false final false
 ::UnityEngine::Vector3 get_moveVec() ;

/// @brief Method get_uniformScale addr 0x223e900 size 0x8 virtual false final false
 float_t get_uniformScale() ;

/// @brief Method get_hidden addr 0x223e908 size 0x8 virtual false final false
 bool get_hidden() ;

/// @brief Method set_hidden addr 0x223e910 size 0xc virtual false final false
 void set_hidden(bool value) ;

/// @brief Method Awake addr 0x223c1c4 size 0x17c virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x223c50c size 0x1c8 virtual true final false
 void OnDestroy() ;

/// @brief Method Update addr 0x223ee24 size 0x10 virtual false final false
 void Update() ;

/// @brief Method ManualUpdate addr 0x223ee34 size 0x18 virtual true final false
 void ManualUpdate() ;

/// @brief Method HandleNoteDidStartJump addr 0x223ef04 size 0x1e0 virtual false final false
 void HandleNoteDidStartJump() ;

/// @brief Method HandleNoteDidFinishJump addr 0x223f0e4 size 0x1e8 virtual false final false
 void HandleNoteDidFinishJump() ;

/// @brief Method HandleNoteDidPassJumpThreeQuarters addr 0x223f2cc size 0x1f0 virtual false final false
 void HandleNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteMovement noteMovement) ;

/// @brief Method HandleNoteDidPassMissedMarkerEvent addr 0x223f4bc size 0x1c virtual false final false
 void HandleNoteDidPassMissedMarkerEvent() ;

/// @brief Method NoteDidStartJump addr 0x223f4d8 size 0x4 virtual true final false
 void NoteDidStartJump() ;

/// @brief Method NoteDidFinishJump addr 0x223f4dc size 0x4 virtual true final false
 void NoteDidFinishJump() ;

/// @brief Method NoteDidPassJumpThreeQuarters addr 0x223f4e0 size 0x4 virtual true final false
 void NoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteMovement noteMovement) ;

/// @brief Method NoteDidPassMissedMarker addr 0x223f4e4 size 0x4 virtual true final false
 void NoteDidPassMissedMarker() ;

/// @brief Method NoteDidStartDissolving addr 0x223f4e8 size 0x4 virtual true final false
 void NoteDidStartDissolving() ;

/// @brief Method SendNoteWasMissedEvent addr 0x223c790 size 0x1cc virtual false final false
 void SendNoteWasMissedEvent() ;

/// @brief Method SendNoteWasCutEvent addr 0x223cf48 size 0x1dc virtual false final false
 void SendNoteWasCutEvent(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method Init addr 0x223bd10 size 0x354 virtual false final false
 void Init(::GlobalNamespace::NoteData noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity, float_t endRotation, float_t uniformScale, bool rotateTowardsPlayer, bool useRandomRotation) ;

/// @brief Method DissolveCoroutine addr 0x223f690 size 0x78 virtual false final false
 ::System::Collections::IEnumerator DissolveCoroutine(float_t duration) ;

/// @brief Method Dissolve addr 0x223f730 size 0x60 virtual true final true
 void Dissolve(float_t duration) ;

/// @brief Method HiddenStateDidChange addr 0x0 size 0xffffffffffffffff virtual true final false
 void HiddenStateDidChange(bool hidden) ;

/// @brief Method Hide addr 0x223f790 size 0x18 virtual true final true
 void Hide(bool hide) ;

/// @brief Method Pause addr 0x0 size 0xffffffffffffffff virtual true final false
 void Pause(bool pause) ;

// Ctor Parameters []
explicit NoteController() ;

/// @brief Method .ctor addr 0x223d214 size 0x258 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteController, "", "NoteController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__NoteController___DissolveCoroutine_d__73);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__NoteController___DissolveCoroutine_d__73, "", "NoteController/<DissolveCoroutine>d__73");
