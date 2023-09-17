#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class NoteControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
// Type: ::INoteControllerNoteDidStartDissolvingEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4884))
// CS Name: INoteControllerNoteDidStartDissolvingEvent
class CORDL_TYPE INoteControllerNoteDidStartDissolvingEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteControllerNoteDidStartDissolvingEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteControllerNoteDidStartDissolvingEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteControllerNoteDidStartDissolving addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase noteController, float_t duration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent, "", "INoteControllerNoteDidStartDissolvingEvent");
