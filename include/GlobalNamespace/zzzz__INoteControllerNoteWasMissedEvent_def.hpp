#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteWasMissedEvent;
}
// Type: ::INoteControllerNoteWasMissedEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4883))
// CS Name: INoteControllerNoteWasMissedEvent
class CORDL_TYPE INoteControllerNoteWasMissedEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteControllerNoteWasMissedEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteControllerNoteWasMissedEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteControllerNoteWasMissed addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteControllerNoteWasMissed(GlobalNamespace::NoteController noteController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INoteControllerNoteWasMissedEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteWasMissedEvent, "", "INoteControllerNoteWasMissedEvent");
