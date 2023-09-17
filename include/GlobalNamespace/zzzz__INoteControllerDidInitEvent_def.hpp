#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class NoteControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
// Type: ::INoteControllerDidInitEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4878))
// CS Name: INoteControllerDidInitEvent
class CORDL_TYPE INoteControllerDidInitEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteControllerDidInitEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteControllerDidInitEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteControllerDidInit addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase noteController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerDidInitEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerDidInitEvent, "", "INoteControllerDidInitEvent");
