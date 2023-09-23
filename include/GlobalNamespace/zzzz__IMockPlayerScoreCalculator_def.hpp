#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace GlobalNamespace {
class MockNoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
// Type: ::IMockPlayerScoreCalculator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15484))
// CS Name: IMockPlayerScoreCalculator
class CORDL_TYPE IMockPlayerScoreCalculator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMockPlayerScoreCalculator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMockPlayerScoreCalculator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetScoreForNote addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetScoreForNote(GlobalNamespace::MockNoteData noteData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IMockPlayerScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMockPlayerScoreCalculator, "", "IMockPlayerScoreCalculator");
