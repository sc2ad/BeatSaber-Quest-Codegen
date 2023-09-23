#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderTailDidMovePastCutMarkEvent;
}
// Type: ::ISliderTailDidMovePastCutMarkEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4917))
// CS Name: ISliderTailDidMovePastCutMarkEvent
class CORDL_TYPE ISliderTailDidMovePastCutMarkEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISliderTailDidMovePastCutMarkEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISliderTailDidMovePastCutMarkEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleSliderTailDidMovePastCutMark addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleSliderTailDidMovePastCutMark(GlobalNamespace::SliderController sliderController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISliderTailDidMovePastCutMarkEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISliderTailDidMovePastCutMarkEvent, "", "ISliderTailDidMovePastCutMarkEvent");
