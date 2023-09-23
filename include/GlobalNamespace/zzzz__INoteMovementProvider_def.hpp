#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteMovement;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteMovementProvider;
}
// Type: ::INoteMovementProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4864))
// CS Name: INoteMovementProvider
class CORDL_TYPE INoteMovementProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteMovementProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteMovementProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::NoteMovement __declspec(property(get=get_noteMovement))  noteMovement;


// Methods

/// @brief Method get_noteMovement addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::NoteMovement get_noteMovement() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INoteMovementProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteMovementProvider, "", "INoteMovementProvider");
