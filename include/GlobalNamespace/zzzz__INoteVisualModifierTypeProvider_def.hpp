#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
// Type: ::INoteVisualModifierTypeProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4866))
// CS Name: INoteVisualModifierTypeProvider
class CORDL_TYPE INoteVisualModifierTypeProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteVisualModifierTypeProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteVisualModifierTypeProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::GlobalNamespace::NoteVisualModifierType __declspec(property(get=get_noteVisualModifierType))  noteVisualModifierType;


// Methods

/// @brief Method get_noteVisualModifierType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::INoteVisualModifierTypeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteVisualModifierTypeProvider, "", "INoteVisualModifierTypeProvider");
