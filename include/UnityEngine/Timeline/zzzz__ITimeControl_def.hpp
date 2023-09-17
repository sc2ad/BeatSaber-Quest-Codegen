#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine::Timeline {
class ITimeControl;
}
// Type: UnityEngine.Timeline::ITimeControl
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14116))
// CS Name: UnityEngine.Timeline.ITimeControl
class CORDL_TYPE ITimeControl : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITimeControl() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITimeControl(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetTime addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetTime(double_t time) ;

/// @brief Method OnControlTimeStart addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnControlTimeStart() ;

/// @brief Method OnControlTimeStop addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnControlTimeStop() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::ITimeControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ITimeControl, "UnityEngine.Timeline", "ITimeControl");
