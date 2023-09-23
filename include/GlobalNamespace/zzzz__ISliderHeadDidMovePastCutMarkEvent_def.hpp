#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderHeadDidMovePastCutMarkEvent;
}
// Type: ::ISliderHeadDidMovePastCutMarkEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4916))
// CS Name: ISliderHeadDidMovePastCutMarkEvent
class CORDL_TYPE ISliderHeadDidMovePastCutMarkEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISliderHeadDidMovePastCutMarkEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISliderHeadDidMovePastCutMarkEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleSliderStartDidMovePastCutMark addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleSliderStartDidMovePastCutMark(GlobalNamespace::SliderController sliderController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent, "", "ISliderHeadDidMovePastCutMarkEvent");
