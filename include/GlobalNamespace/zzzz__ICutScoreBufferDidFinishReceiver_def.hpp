#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class CutScoreBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
// Type: ::ICutScoreBufferDidFinishReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5403))
// CS Name: ICutScoreBufferDidFinishReceiver
class CORDL_TYPE ICutScoreBufferDidFinishReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICutScoreBufferDidFinishReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICutScoreBufferDidFinishReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleCutScoreBufferDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleCutScoreBufferDidFinish(GlobalNamespace::CutScoreBuffer cutScoreBuffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ICutScoreBufferDidFinishReceiver);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICutScoreBufferDidFinishReceiver, "", "ICutScoreBufferDidFinishReceiver");
