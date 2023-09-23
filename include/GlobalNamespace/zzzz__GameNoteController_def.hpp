#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__GameplayType;
}
namespace GlobalNamespace {
template<typename T>
class ICubeNoteControllerInitializable_1;
}
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
class INoteMovementProvider;
}
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
class NoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class GameNoteController;
}
namespace GlobalNamespace {
class GlobalNamespace__GameNoteController__Pool;
}
// Type: ::GameNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4860))
// CS Name: GameNoteController
class CORDL_TYPE GameNoteController : public GlobalNamespace::NoteController {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__GameNoteController__Pool;

/// @brief Convert operator to GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::GameNoteController>
constexpr operator  GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::GameNoteController>() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteVisualModifierTypeProvider
constexpr operator  GlobalNamespace::INoteVisualModifierTypeProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteMovementProvider
constexpr operator  GlobalNamespace::INoteMovementProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::IGameNoteMirrorable
constexpr operator  GlobalNamespace::IGameNoteMirrorable() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteMirrorable
constexpr operator  GlobalNamespace::INoteMirrorable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~GameNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameNoteController", modifiers: " const&", def_value: None }]
constexpr GameNoteController(GameNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameNoteController", modifiers: "&&", def_value: None }]
constexpr GameNoteController(GameNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameNoteController(void* ptr) noexcept : GlobalNamespace::NoteController(ptr) {
}


  constexpr GameNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameNoteController& operator=(GameNoteController&& o) noexcept = default;
  constexpr GameNoteController& operator=(GameNoteController const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::BoxCuttableBySaber> __declspec(property(get=__get__bigCuttableBySaberList, put=__set__bigCuttableBySaberList))  _bigCuttableBySaberList;

constexpr void __set__bigCuttableBySaberList(::ArrayW<GlobalNamespace::BoxCuttableBySaber> value) ;

constexpr ::ArrayW<GlobalNamespace::BoxCuttableBySaber> __get__bigCuttableBySaberList() const;

 ::ArrayW<GlobalNamespace::BoxCuttableBySaber> __declspec(property(get=__get__smallCuttableBySaberList, put=__set__smallCuttableBySaberList))  _smallCuttableBySaberList;

constexpr void __set__smallCuttableBySaberList(::ArrayW<GlobalNamespace::BoxCuttableBySaber> value) ;

constexpr ::ArrayW<GlobalNamespace::BoxCuttableBySaber> __get__smallCuttableBySaberList() const;

 UnityEngine::GameObject __declspec(property(get=__get__wrapperGO, put=__set__wrapperGO))  _wrapperGO;

constexpr void __set__wrapperGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__wrapperGO() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 System::Action_1<GlobalNamespace::GameNoteController> __declspec(property(get=__get_cubeNoteControllerDidInitEvent, put=__set_cubeNoteControllerDidInitEvent))  cubeNoteControllerDidInitEvent;

constexpr void __set_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::GameNoteController> value) ;

constexpr System::Action_1<GlobalNamespace::GameNoteController> __get_cubeNoteControllerDidInitEvent() const;

 GlobalNamespace::NoteVisualModifierType __declspec(property(get=__get__noteVisualModifierType, put=__set__noteVisualModifierType))  _noteVisualModifierType;

constexpr void __set__noteVisualModifierType(GlobalNamespace::NoteVisualModifierType value) ;

constexpr GlobalNamespace::NoteVisualModifierType __get__noteVisualModifierType() const;

 GlobalNamespace::GlobalNamespace__NoteData__GameplayType __declspec(property(get=__get__gameplayType, put=__set__gameplayType))  _gameplayType;

constexpr void __set__gameplayType(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType __get__gameplayType() const;

 float_t __declspec(property(get=__get__cutAngleTolerance, put=__set__cutAngleTolerance))  _cutAngleTolerance;

constexpr void __set__cutAngleTolerance(float_t value) ;

constexpr float_t __get__cutAngleTolerance() const;


// Properties

 GlobalNamespace::NoteMovement __declspec(property(get=get_noteMovement))  noteMovement;

 GlobalNamespace::NoteVisualModifierType __declspec(property(get=get_noteVisualModifierType))  noteVisualModifierType;

 GlobalNamespace::GlobalNamespace__NoteData__GameplayType __declspec(property(get=get_gameplayType))  gameplayType;


// Methods

/// @brief Method add_cubeNoteControllerDidInitEvent addr 0x223b8e0 size 0xb0 virtual true final true
 void add_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::GameNoteController> value) ;

/// @brief Method remove_cubeNoteControllerDidInitEvent addr 0x223b990 size 0xb0 virtual true final true
 void remove_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::GameNoteController> value) ;

/// @brief Method get_noteMovement addr 0x223ba40 size 0x8 virtual true final true
 GlobalNamespace::NoteMovement get_noteMovement() ;

/// @brief Method get_noteVisualModifierType addr 0x223ba48 size 0x8 virtual true final true
 GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType() ;

/// @brief Method get_gameplayType addr 0x223ba50 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__NoteData__GameplayType get_gameplayType() ;

/// @brief Method Init addr 0x223ba58 size 0x2b8 virtual false final false
 void Init(GlobalNamespace::NoteData noteData, float_t worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity, GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t cutAngleTolerance, float_t uniformScale) ;

/// @brief Method Awake addr 0x223c064 size 0x160 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x223c340 size 0x1cc virtual true final false
 void OnDestroy() ;

/// @brief Method NoteDidPassMissedMarker addr 0x223c6d4 size 0xbc virtual true final false
 void NoteDidPassMissedMarker() ;

/// @brief Method NoteDidStartDissolving addr 0x223c95c size 0xb8 virtual true final false
 void NoteDidStartDissolving() ;

/// @brief Method HandleBigWasCutBySaber addr 0x223ca14 size 0x18 virtual false final false
 void HandleBigWasCutBySaber(GlobalNamespace::Saber saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) ;

/// @brief Method HandleSmallWasCutBySaber addr 0x223cee0 size 0x18 virtual false final false
 void HandleSmallWasCutBySaber(GlobalNamespace::Saber saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) ;

/// @brief Method HandleCut addr 0x223ca2c size 0x4b4 virtual false final false
 void HandleCut(GlobalNamespace::Saber saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec, bool allowBadCut) ;

/// @brief Method NoteDidStartJump addr 0x223d124 size 0xb8 virtual true final false
 void NoteDidStartJump() ;

/// @brief Method HiddenStateDidChange addr 0x223d1dc size 0x24 virtual true final false
 void HiddenStateDidChange(bool hide) ;

/// @brief Method Pause addr 0x223d200 size 0x10 virtual true final false
 void Pause(bool pause) ;

// Ctor Parameters []
explicit GameNoteController() ;

/// @brief Method .ctor addr 0x223d210 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4860)), TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 297 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4859))
// CS Name: GameNoteController::Pool
class CORDL_TYPE GlobalNamespace__GameNoteController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::GameNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__GameNoteController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameNoteController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameNoteController__Pool(GlobalNamespace__GameNoteController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameNoteController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameNoteController__Pool(GlobalNamespace__GameNoteController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameNoteController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::GameNoteController>(ptr) {
}


  constexpr GlobalNamespace__GameNoteController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameNoteController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameNoteController__Pool& operator=(GlobalNamespace__GameNoteController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__GameNoteController__Pool& operator=(GlobalNamespace__GameNoteController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameNoteController__Pool() ;

/// @brief Method .ctor addr 0x223d46c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameNoteController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameNoteController, "", "GameNoteController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameNoteController__Pool, "", "GameNoteController/Pool");
