#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
template<typename T>
class ICubeNoteControllerInitializable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class INoteMovementProvider;
}
namespace GlobalNamespace {
class GlobalNamespace__MirroredGameNoteController__Pool;
}
namespace GlobalNamespace {
class NoteMovement;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MirroredGameNoteController__Pool;
}
namespace GlobalNamespace {
class MirroredGameNoteController;
}
// Type: ::MirroredGameNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4872), inst: 4483 }), TypeDefinitionIndex(TypeDefinitionIndex(4862)), TypeDefinitionIndex(TypeDefinitionIndex(4872))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4871))
// CS Name: MirroredGameNoteController
class CORDL_TYPE MirroredGameNoteController : public GlobalNamespace::MirroredNoteController_1<GlobalNamespace::IGameNoteMirrorable> {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__MirroredGameNoteController__Pool;

/// @brief Convert operator to GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MirroredGameNoteController>
constexpr operator  GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MirroredGameNoteController>() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteVisualModifierTypeProvider
constexpr operator  GlobalNamespace::INoteVisualModifierTypeProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteMovementProvider
constexpr operator  GlobalNamespace::INoteMovementProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MirroredGameNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredGameNoteController", modifiers: " const&", def_value: None }]
constexpr MirroredGameNoteController(MirroredGameNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredGameNoteController", modifiers: "&&", def_value: None }]
constexpr MirroredGameNoteController(MirroredGameNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirroredGameNoteController(void* ptr) noexcept : GlobalNamespace::MirroredNoteController_1<GlobalNamespace::IGameNoteMirrorable>(ptr) {
}


  constexpr MirroredGameNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirroredGameNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirroredGameNoteController& operator=(MirroredGameNoteController&& o) noexcept = default;
  constexpr MirroredGameNoteController& operator=(MirroredGameNoteController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 System::Action_1<GlobalNamespace::MirroredGameNoteController> __declspec(property(get=__get_cubeNoteControllerDidInitEvent, put=__set_cubeNoteControllerDidInitEvent))  cubeNoteControllerDidInitEvent;

constexpr void __set_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MirroredGameNoteController> value) ;

constexpr System::Action_1<GlobalNamespace::MirroredGameNoteController> __get_cubeNoteControllerDidInitEvent() const;

static int32_t __declspec(property(get=__get__colorId, put=__set__colorId))  _colorId;

static void __set__colorId(int32_t value) ;

static int32_t __get__colorId() ;


// Properties

 GlobalNamespace::NoteMovement __declspec(property(get=get_noteMovement))  noteMovement;

 GlobalNamespace::NoteVisualModifierType __declspec(property(get=get_noteVisualModifierType))  noteVisualModifierType;


// Methods

/// @brief Method add_cubeNoteControllerDidInitEvent addr 0x223d5b8 size 0xb0 virtual true final true
 void add_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MirroredGameNoteController> value) ;

/// @brief Method remove_cubeNoteControllerDidInitEvent addr 0x223d668 size 0xb0 virtual true final true
 void remove_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MirroredGameNoteController> value) ;

/// @brief Method get_noteMovement addr 0x223d718 size 0xac virtual true final true
 GlobalNamespace::NoteMovement get_noteMovement() ;

/// @brief Method get_noteVisualModifierType addr 0x223d7c4 size 0xa4 virtual true final true
 GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType() ;

/// @brief Method Mirror addr 0x223d868 size 0x150 virtual true final false
 void Mirror(GlobalNamespace::IGameNoteMirrorable noteController) ;

static GlobalNamespace::MirroredGameNoteController New_ctor() ;

/// @brief Method .ctor addr 0x223d9b8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(4871)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 332 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4870))
// CS Name: MirroredGameNoteController::Pool
class CORDL_TYPE GlobalNamespace__MirroredGameNoteController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::MirroredGameNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__MirroredGameNoteController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MirroredGameNoteController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MirroredGameNoteController__Pool(GlobalNamespace__MirroredGameNoteController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MirroredGameNoteController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MirroredGameNoteController__Pool(GlobalNamespace__MirroredGameNoteController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MirroredGameNoteController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::MirroredGameNoteController>(ptr) {
}


  constexpr GlobalNamespace__MirroredGameNoteController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MirroredGameNoteController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MirroredGameNoteController__Pool& operator=(GlobalNamespace__MirroredGameNoteController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__MirroredGameNoteController__Pool& operator=(GlobalNamespace__MirroredGameNoteController__Pool const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__MirroredGameNoteController__Pool New_ctor() ;

/// @brief Method .ctor addr 0x223da68 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MirroredGameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MirroredGameNoteController__Pool, "", "MirroredGameNoteController/Pool");
NEED_NO_BOX(GlobalNamespace::MirroredGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredGameNoteController, "", "MirroredGameNoteController");
