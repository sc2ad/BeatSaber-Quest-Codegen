#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapObjectController;
}
// Type: ::IBeatmapObjectController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4845))
// CS Name: IBeatmapObjectController
class CORDL_TYPE IBeatmapObjectController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatmapObjectController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapObjectController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Dissolve addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dissolve(float_t duration) ;

/// @brief Method Pause addr 0x0 size 0xffffffffffffffff virtual true final false
 void Pause(bool pause) ;

/// @brief Method Hide addr 0x0 size 0xffffffffffffffff virtual true final false
 void Hide(bool hide) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapObjectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapObjectController, "", "IBeatmapObjectController");
