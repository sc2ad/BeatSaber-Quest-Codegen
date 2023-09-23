#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidStartJumpEvent;
}
// Type: ::INoteControllerNoteDidStartJumpEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4879))
// CS Name: INoteControllerNoteDidStartJumpEvent
class CORDL_TYPE INoteControllerNoteDidStartJumpEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteControllerNoteDidStartJumpEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteControllerNoteDidStartJumpEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteControllerNoteDidStartJump addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteControllerNoteDidStartJump(GlobalNamespace::NoteController noteController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INoteControllerNoteDidStartJumpEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteDidStartJumpEvent, "", "INoteControllerNoteDidStartJumpEvent");
