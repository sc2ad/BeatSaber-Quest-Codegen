#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidFinishJumpEvent;
}
// Type: ::INoteControllerNoteDidFinishJumpEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4880))
// CS Name: INoteControllerNoteDidFinishJumpEvent
class CORDL_TYPE INoteControllerNoteDidFinishJumpEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteControllerNoteDidFinishJumpEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteControllerNoteDidFinishJumpEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteControllerNoteDidFinishJump addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteControllerNoteDidFinishJump(GlobalNamespace::NoteController noteController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INoteControllerNoteDidFinishJumpEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteDidFinishJumpEvent, "", "INoteControllerNoteDidFinishJumpEvent");
