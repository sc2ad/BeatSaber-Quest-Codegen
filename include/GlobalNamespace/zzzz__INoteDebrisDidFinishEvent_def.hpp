#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class NoteDebris;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteDebrisDidFinishEvent;
}
// Type: ::INoteDebrisDidFinishEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4887))
// CS Name: INoteDebrisDidFinishEvent
class CORDL_TYPE INoteDebrisDidFinishEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteDebrisDidFinishEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteDebrisDidFinishEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteDebrisDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris noteDebris) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::INoteDebrisDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteDebrisDidFinishEvent, "", "INoteDebrisDidFinishEvent");
