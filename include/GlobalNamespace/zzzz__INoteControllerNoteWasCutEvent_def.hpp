#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteWasCutEvent;
}
// Type: ::INoteControllerNoteWasCutEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4882))
// CS Name: INoteControllerNoteWasCutEvent
class CORDL_TYPE INoteControllerNoteWasCutEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteControllerNoteWasCutEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteControllerNoteWasCutEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteControllerNoteWasCut addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteWasCutEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteWasCutEvent, "", "INoteControllerNoteWasCutEvent");
