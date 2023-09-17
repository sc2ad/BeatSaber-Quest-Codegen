#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__NoteData__GameplayType;
}
namespace GlobalNamespace {
class NoteMovement;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
// Type: ::IGameNoteMirrorable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4862))
// CS Name: IGameNoteMirrorable
class CORDL_TYPE IGameNoteMirrorable : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INoteMirrorable
constexpr operator  ::GlobalNamespace::INoteMirrorable() const noexcept;

~IGameNoteMirrorable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGameNoteMirrorable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::GlobalNamespace::NoteMovement __declspec(property(get=get_noteMovement))  noteMovement;

 ::GlobalNamespace::NoteVisualModifierType __declspec(property(get=get_noteVisualModifierType))  noteVisualModifierType;

 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __declspec(property(get=get_gameplayType))  gameplayType;


// Methods

/// @brief Method get_noteMovement addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::NoteMovement get_noteMovement() ;

/// @brief Method get_noteVisualModifierType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType() ;

/// @brief Method get_gameplayType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType get_gameplayType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IGameNoteMirrorable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGameNoteMirrorable, "", "IGameNoteMirrorable");
