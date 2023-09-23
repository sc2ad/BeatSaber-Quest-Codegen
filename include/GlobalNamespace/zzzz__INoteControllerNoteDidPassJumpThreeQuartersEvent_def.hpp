#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
// Type: ::INoteControllerNoteDidPassJumpThreeQuartersEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4881))
// CS Name: INoteControllerNoteDidPassJumpThreeQuartersEvent
class CORDL_TYPE INoteControllerNoteDidPassJumpThreeQuartersEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteControllerNoteDidPassJumpThreeQuartersEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteControllerNoteDidPassJumpThreeQuartersEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteControllerNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteControllerBase noteController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent, "", "INoteControllerNoteDidPassJumpThreeQuartersEvent");
