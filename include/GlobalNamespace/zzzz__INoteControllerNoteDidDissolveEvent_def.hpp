#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidDissolveEvent;
}
// Type: ::INoteControllerNoteDidDissolveEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4885))
// CS Name: INoteControllerNoteDidDissolveEvent
class CORDL_TYPE INoteControllerNoteDidDissolveEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteControllerNoteDidDissolveEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteControllerNoteDidDissolveEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteControllerNoteDidDissolve addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteControllerNoteDidDissolve(GlobalNamespace::NoteController noteController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INoteControllerNoteDidDissolveEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteDidDissolveEvent, "", "INoteControllerNoteDidDissolveEvent");
