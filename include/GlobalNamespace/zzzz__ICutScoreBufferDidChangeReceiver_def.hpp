#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class CutScoreBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
// Type: ::ICutScoreBufferDidChangeReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5402))
// CS Name: ICutScoreBufferDidChangeReceiver
class CORDL_TYPE ICutScoreBufferDidChangeReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICutScoreBufferDidChangeReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICutScoreBufferDidChangeReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleCutScoreBufferDidChange addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleCutScoreBufferDidChange(GlobalNamespace::CutScoreBuffer cutScoreBuffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ICutScoreBufferDidChangeReceiver);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICutScoreBufferDidChangeReceiver, "", "ICutScoreBufferDidChangeReceiver");
