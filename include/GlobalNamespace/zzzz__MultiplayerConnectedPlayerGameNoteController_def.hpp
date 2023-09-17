#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerNoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__NoteData__GameplayType;
}
namespace GlobalNamespace {
class INoteMovementProvider;
}
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
template<typename T>
class ICubeNoteControllerInitializable_1;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class NoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool;
}
// Type: ::MultiplayerConnectedPlayerGameNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5237))
// CS Name: MultiplayerConnectedPlayerGameNoteController
class CORDL_TYPE MultiplayerConnectedPlayerGameNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool;

/// @brief Convert operator to ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>
constexpr operator  ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::INoteVisualModifierTypeProvider
constexpr operator  ::GlobalNamespace::INoteVisualModifierTypeProvider() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::INoteMovementProvider
constexpr operator  ::GlobalNamespace::INoteMovementProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MultiplayerConnectedPlayerGameNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameNoteController", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerGameNoteController(MultiplayerConnectedPlayerGameNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameNoteController", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerGameNoteController(MultiplayerConnectedPlayerGameNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerGameNoteController(void* ptr) noexcept : ::GlobalNamespace::MultiplayerConnectedPlayerNoteController(ptr) {
}


  constexpr MultiplayerConnectedPlayerGameNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerGameNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerGameNoteController& operator=(MultiplayerConnectedPlayerGameNoteController&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerGameNoteController& operator=(MultiplayerConnectedPlayerGameNoteController const& o) noexcept = default;
                


// Fields

 ::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __declspec(property(get=__get_cubeNoteControllerDidInitEvent, put=__set_cubeNoteControllerDidInitEvent))  cubeNoteControllerDidInitEvent;

constexpr void __set_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __get_cubeNoteControllerDidInitEvent() const;

 ::GlobalNamespace::NoteVisualModifierType __declspec(property(get=__get__noteVisualModifierType, put=__set__noteVisualModifierType))  _noteVisualModifierType;

constexpr void __set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value) ;

constexpr ::GlobalNamespace::NoteVisualModifierType __get__noteVisualModifierType() const;

 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __declspec(property(get=__get__gameplayType, put=__set__gameplayType))  _gameplayType;

constexpr void __set__gameplayType(::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __get__gameplayType() const;


// Properties

 ::GlobalNamespace::NoteMovement __declspec(property(get=get_noteMovement))  noteMovement;

 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __declspec(property(get=get_gameplayType))  gameplayType;

 ::GlobalNamespace::NoteVisualModifierType __declspec(property(get=get_noteVisualModifierType))  noteVisualModifierType;


// Methods

/// @brief Method add_cubeNoteControllerDidInitEvent addr 0x20e21d0 size 0xb0 virtual true final true
 void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) ;

/// @brief Method remove_cubeNoteControllerDidInitEvent addr 0x20e2280 size 0xb0 virtual true final true
 void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) ;

/// @brief Method get_noteMovement addr 0x20e2330 size 0x8 virtual true final true
 ::GlobalNamespace::NoteMovement get_noteMovement() ;

/// @brief Method get_gameplayType addr 0x20e2338 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType get_gameplayType() ;

/// @brief Method get_noteVisualModifierType addr 0x20e2340 size 0x8 virtual true final true
 ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType() ;

/// @brief Method Init addr 0x20de224 size 0x118 virtual false final false
 void Init(::GlobalNamespace::NoteData noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerGameNoteController() ;

/// @brief Method .ctor addr 0x20e2348 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 340 }), TypeDefinitionIndex(TypeDefinitionIndex(5237))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5236))
// CS Name: MultiplayerConnectedPlayerGameNoteController::Pool
class CORDL_TYPE ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool(____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool(____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool(void* ptr) noexcept : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool& operator=(____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool& operator=(____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool() ;

/// @brief Method .ctor addr 0x20e2350 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, "", "MultiplayerConnectedPlayerGameNoteController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool, "", "MultiplayerConnectedPlayerGameNoteController/Pool");
