#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__GameplayType;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class NoteMovement;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TutorialNoteController__Pool;
}
namespace GlobalNamespace {
class TutorialNoteController;
}
// Type: ::TutorialNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4903))
// CS Name: TutorialNoteController
class CORDL_TYPE TutorialNoteController : public GlobalNamespace::NoteController {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__TutorialNoteController__Pool;

/// @brief Convert operator to GlobalNamespace::IGameNoteMirrorable
constexpr operator  GlobalNamespace::IGameNoteMirrorable() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteMirrorable
constexpr operator  GlobalNamespace::INoteMirrorable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~TutorialNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialNoteController", modifiers: " const&", def_value: None }]
constexpr TutorialNoteController(TutorialNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialNoteController", modifiers: "&&", def_value: None }]
constexpr TutorialNoteController(TutorialNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialNoteController(void* ptr) noexcept : GlobalNamespace::NoteController(ptr) {
}


  constexpr TutorialNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialNoteController& operator=(TutorialNoteController&& o) noexcept = default;
  constexpr TutorialNoteController& operator=(TutorialNoteController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoxCuttableBySaber __declspec(property(get=__get__cuttableBySaberCore, put=__set__cuttableBySaberCore))  _cuttableBySaberCore;

constexpr void __set__cuttableBySaberCore(GlobalNamespace::BoxCuttableBySaber value) ;

constexpr GlobalNamespace::BoxCuttableBySaber __get__cuttableBySaberCore() const;

 GlobalNamespace::BoxCuttableBySaber __declspec(property(get=__get__cuttableBySaberBeforeNote, put=__set__cuttableBySaberBeforeNote))  _cuttableBySaberBeforeNote;

constexpr void __set__cuttableBySaberBeforeNote(GlobalNamespace::BoxCuttableBySaber value) ;

constexpr GlobalNamespace::BoxCuttableBySaber __get__cuttableBySaberBeforeNote() const;

 UnityEngine::GameObject __declspec(property(get=__get__wrapperGO, put=__set__wrapperGO))  _wrapperGO;

constexpr void __set__wrapperGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__wrapperGO() const;

 bool __declspec(property(get=__get__beforeNoteCutWasOk, put=__set__beforeNoteCutWasOk))  _beforeNoteCutWasOk;

constexpr void __set__beforeNoteCutWasOk(bool value) ;

constexpr bool __get__beforeNoteCutWasOk() const;

 float_t __declspec(property(get=__get__cutAngleTolerance, put=__set__cutAngleTolerance))  _cutAngleTolerance;

constexpr void __set__cutAngleTolerance(float_t value) ;

constexpr float_t __get__cutAngleTolerance() const;


// Properties

 GlobalNamespace::NoteMovement __declspec(property(get=get_noteMovement))  noteMovement;

 GlobalNamespace::NoteVisualModifierType __declspec(property(get=get_noteVisualModifierType))  noteVisualModifierType;

 GlobalNamespace::GlobalNamespace__NoteData__GameplayType __declspec(property(get=get_gameplayType))  gameplayType;


// Methods

/// @brief Method get_noteMovement addr 0x2243870 size 0x8 virtual true final true
 GlobalNamespace::NoteMovement get_noteMovement() ;

/// @brief Method get_noteVisualModifierType addr 0x2243878 size 0x8 virtual true final true
 GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType() ;

/// @brief Method get_gameplayType addr 0x2243880 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__NoteData__GameplayType get_gameplayType() ;

/// @brief Method Init addr 0x2243888 size 0x100 virtual false final false
 void Init(GlobalNamespace::NoteData noteData, float_t worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity, float_t cutAngleTolerance, float_t uniformScale) ;

/// @brief Method Awake addr 0x2243988 size 0xe8 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2243a70 size 0x15c virtual true final false
 void OnDestroy() ;

/// @brief Method NoteDidPassMissedMarker addr 0x2243bcc size 0x48 virtual true final false
 void NoteDidPassMissedMarker() ;

/// @brief Method HandleBeforeNoteWasCutBySaber addr 0x2243c14 size 0x10c virtual false final false
 void HandleBeforeNoteWasCutBySaber(GlobalNamespace::Saber saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) ;

/// @brief Method HandleCoreWasCutBySaber addr 0x2243d20 size 0x3f4 virtual false final false
 void HandleCoreWasCutBySaber(GlobalNamespace::Saber saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) ;

/// @brief Method HiddenStateDidChange addr 0x2244114 size 0x24 virtual true final false
 void HiddenStateDidChange(bool hide) ;

/// @brief Method Pause addr 0x2244138 size 0x10 virtual true final false
 void Pause(bool pause) ;

// Ctor Parameters []
explicit TutorialNoteController() ;

/// @brief Method .ctor addr 0x2244148 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(4903)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2724 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4902))
// CS Name: TutorialNoteController::Pool
class CORDL_TYPE GlobalNamespace__TutorialNoteController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::TutorialNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__TutorialNoteController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialNoteController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TutorialNoteController__Pool(GlobalNamespace__TutorialNoteController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialNoteController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TutorialNoteController__Pool(GlobalNamespace__TutorialNoteController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialNoteController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::TutorialNoteController>(ptr) {
}


  constexpr GlobalNamespace__TutorialNoteController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TutorialNoteController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TutorialNoteController__Pool& operator=(GlobalNamespace__TutorialNoteController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__TutorialNoteController__Pool& operator=(GlobalNamespace__TutorialNoteController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__TutorialNoteController__Pool() ;

/// @brief Method .ctor addr 0x224414c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TutorialNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialNoteController__Pool, "", "TutorialNoteController/Pool");
NEED_NO_BOX(GlobalNamespace::TutorialNoteController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialNoteController, "", "TutorialNoteController");
