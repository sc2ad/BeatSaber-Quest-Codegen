#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
namespace {
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerNoteController;
}
// Type: ::MultiplayerConnectedPlayerNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5238))
// CS Name: MultiplayerConnectedPlayerNoteController
class CORDL_TYPE MultiplayerConnectedPlayerNoteController : public ::GlobalNamespace::NoteController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~MultiplayerConnectedPlayerNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerNoteController", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerNoteController(MultiplayerConnectedPlayerNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerNoteController", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerNoteController(MultiplayerConnectedPlayerNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerNoteController(void* ptr) noexcept : ::GlobalNamespace::NoteController(ptr) {
}


  constexpr MultiplayerConnectedPlayerNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerNoteController& operator=(MultiplayerConnectedPlayerNoteController&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerNoteController& operator=(MultiplayerConnectedPlayerNoteController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__visualsWrapperGo, put=__set__visualsWrapperGo))  _visualsWrapperGo;

constexpr void __set__visualsWrapperGo(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__visualsWrapperGo() const;


// Methods

/// @brief Method HiddenStateDidChange addr 0x20e2398 size 0x24 virtual true final false
 void HiddenStateDidChange(bool hide) ;

/// @brief Method Pause addr 0x20e23bc size 0x10 virtual true final false
 void Pause(bool pause) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerNoteController() ;

/// @brief Method .ctor addr 0x20e210c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerNoteController, "", "MultiplayerConnectedPlayerNoteController");
