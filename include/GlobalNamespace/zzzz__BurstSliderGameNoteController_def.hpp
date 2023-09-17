#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__NoteData__GameplayType;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
template<typename T>
class ICubeNoteControllerInitializable_1;
}
namespace GlobalNamespace {
class INoteMovementProvider;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BurstSliderGameNoteController__Pool;
}
// Type: ::BurstSliderGameNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4854))
// CS Name: BurstSliderGameNoteController
class CORDL_TYPE BurstSliderGameNoteController : public ::GlobalNamespace::NoteController {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__BurstSliderGameNoteController__Pool;

/// @brief Convert operator to ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController>
constexpr operator  ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController>() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::INoteVisualModifierTypeProvider
constexpr operator  ::GlobalNamespace::INoteVisualModifierTypeProvider() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::INoteMovementProvider
constexpr operator  ::GlobalNamespace::INoteMovementProvider() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IGameNoteMirrorable
constexpr operator  ::GlobalNamespace::IGameNoteMirrorable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::INoteMirrorable
constexpr operator  ::GlobalNamespace::INoteMirrorable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~BurstSliderGameNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BurstSliderGameNoteController", modifiers: " const&", def_value: None }]
constexpr BurstSliderGameNoteController(BurstSliderGameNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BurstSliderGameNoteController", modifiers: "&&", def_value: None }]
constexpr BurstSliderGameNoteController(BurstSliderGameNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BurstSliderGameNoteController(void* ptr) noexcept : ::GlobalNamespace::NoteController(ptr) {
}


  constexpr BurstSliderGameNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BurstSliderGameNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BurstSliderGameNoteController& operator=(BurstSliderGameNoteController&& o) noexcept = default;
  constexpr BurstSliderGameNoteController& operator=(BurstSliderGameNoteController const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::BoxCuttableBySaber> __declspec(property(get=__get__bigCuttableBySaberList, put=__set__bigCuttableBySaberList))  _bigCuttableBySaberList;

constexpr void __set__bigCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber> value) ;

constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber> __get__bigCuttableBySaberList() const;

 ::ArrayW<::GlobalNamespace::BoxCuttableBySaber> __declspec(property(get=__get__smallCuttableBySaberList, put=__set__smallCuttableBySaberList))  _smallCuttableBySaberList;

constexpr void __set__smallCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber> value) ;

constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber> __get__smallCuttableBySaberList() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__wrapperGO, put=__set__wrapperGO))  _wrapperGO;

constexpr void __set__wrapperGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__wrapperGO() const;

 ::GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 ::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController> __declspec(property(get=__get_cubeNoteControllerDidInitEvent, put=__set_cubeNoteControllerDidInitEvent))  cubeNoteControllerDidInitEvent;

constexpr void __set_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController> value) ;

constexpr ::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController> __get_cubeNoteControllerDidInitEvent() const;

 ::GlobalNamespace::NoteVisualModifierType __declspec(property(get=__get__noteVisualModifierType, put=__set__noteVisualModifierType))  _noteVisualModifierType;

constexpr void __set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value) ;

constexpr ::GlobalNamespace::NoteVisualModifierType __get__noteVisualModifierType() const;

 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __declspec(property(get=__get__gameplayType, put=__set__gameplayType))  _gameplayType;

constexpr void __set__gameplayType(::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __get__gameplayType() const;

 ::GlobalNamespace::BoxCuttableBySaber __declspec(property(get=__get__bigCuttableBySaber, put=__set__bigCuttableBySaber))  _bigCuttableBySaber;

constexpr void __set__bigCuttableBySaber(::GlobalNamespace::BoxCuttableBySaber value) ;

constexpr ::GlobalNamespace::BoxCuttableBySaber __get__bigCuttableBySaber() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__originalColliderSize, put=__set__originalColliderSize))  _originalColliderSize;

constexpr void __set__originalColliderSize(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__originalColliderSize() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__originalColliderCenter, put=__set__originalColliderCenter))  _originalColliderCenter;

constexpr void __set__originalColliderCenter(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__originalColliderCenter() const;


// Properties

 ::GlobalNamespace::NoteMovement __declspec(property(get=get_noteMovement))  noteMovement;

 ::GlobalNamespace::NoteVisualModifierType __declspec(property(get=get_noteVisualModifierType))  noteVisualModifierType;

 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __declspec(property(get=get_gameplayType))  gameplayType;


// Methods

/// @brief Method add_cubeNoteControllerDidInitEvent addr 0x2239300 size 0xb0 virtual true final true
 void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController> value) ;

/// @brief Method remove_cubeNoteControllerDidInitEvent addr 0x22393b0 size 0xb0 virtual true final true
 void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController> value) ;

/// @brief Method get_noteMovement addr 0x2239460 size 0x8 virtual true final true
 ::GlobalNamespace::NoteMovement get_noteMovement() ;

/// @brief Method get_noteVisualModifierType addr 0x2239468 size 0x8 virtual true final true
 ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType() ;

/// @brief Method get_gameplayType addr 0x2239470 size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType get_gameplayType() ;

/// @brief Method Init addr 0x222eea4 size 0x2a8 virtual false final false
 void Init(::GlobalNamespace::NoteData noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale) ;

/// @brief Method Awake addr 0x2239478 size 0x1ac virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2239624 size 0x1d0 virtual true final false
 void OnDestroy() ;

/// @brief Method NoteDidPassMissedMarker addr 0x22397f4 size 0xc0 virtual true final false
 void NoteDidPassMissedMarker() ;

/// @brief Method NoteDidStartDissolving addr 0x22398b4 size 0xb8 virtual true final false
 void NoteDidStartDissolving() ;

/// @brief Method HandleBigWasCutBySaber addr 0x223996c size 0x18 virtual false final false
 void HandleBigWasCutBySaber(::GlobalNamespace::Saber saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec) ;

/// @brief Method HandleSmallWasCutBySaber addr 0x2239e54 size 0x18 virtual false final false
 void HandleSmallWasCutBySaber(::GlobalNamespace::Saber saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec) ;

/// @brief Method HandleCut addr 0x2239984 size 0x4d0 virtual false final false
 void HandleCut(::GlobalNamespace::Saber saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec, bool allowBadCut) ;

/// @brief Method NoteDidStartJump addr 0x2239e6c size 0xb8 virtual true final false
 void NoteDidStartJump() ;

/// @brief Method HiddenStateDidChange addr 0x2239f24 size 0x24 virtual true final false
 void HiddenStateDidChange(bool hide) ;

/// @brief Method Pause addr 0x2239f48 size 0x10 virtual true final false
 void Pause(bool pause) ;

// Ctor Parameters []
explicit BurstSliderGameNoteController() ;

/// @brief Method .ctor addr 0x2239f58 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 275 }), TypeDefinitionIndex(TypeDefinitionIndex(4854))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4853))
// CS Name: BurstSliderGameNoteController::Pool
class CORDL_TYPE ____GlobalNamespace__BurstSliderGameNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BurstSliderGameNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__BurstSliderGameNoteController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BurstSliderGameNoteController__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BurstSliderGameNoteController__Pool(____GlobalNamespace__BurstSliderGameNoteController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BurstSliderGameNoteController__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BurstSliderGameNoteController__Pool(____GlobalNamespace__BurstSliderGameNoteController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BurstSliderGameNoteController__Pool(void* ptr) noexcept : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BurstSliderGameNoteController>(ptr) {
}


  constexpr ____GlobalNamespace__BurstSliderGameNoteController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BurstSliderGameNoteController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BurstSliderGameNoteController__Pool& operator=(____GlobalNamespace__BurstSliderGameNoteController__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__BurstSliderGameNoteController__Pool& operator=(____GlobalNamespace__BurstSliderGameNoteController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BurstSliderGameNoteController__Pool() ;

/// @brief Method .ctor addr 0x223af60 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BurstSliderGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderGameNoteController, "", "BurstSliderGameNoteController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BurstSliderGameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BurstSliderGameNoteController__Pool, "", "BurstSliderGameNoteController/Pool");
