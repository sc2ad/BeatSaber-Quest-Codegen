#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
}
// Type: ::ISliderDidFinishJumpEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4915))
// CS Name: ISliderDidFinishJumpEvent
class CORDL_TYPE ISliderDidFinishJumpEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISliderDidFinishJumpEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISliderDidFinishJumpEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleSliderDidFinishJump addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleSliderDidFinishJump(::GlobalNamespace::SliderController sliderController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ISliderDidFinishJumpEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderDidFinishJumpEvent, "", "ISliderDidFinishJumpEvent");
