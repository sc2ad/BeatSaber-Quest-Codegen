#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderDidStartDissolvingEvent;
}
// Type: ::ISliderDidStartDissolvingEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4918))
// CS Name: ISliderDidStartDissolvingEvent
class CORDL_TYPE ISliderDidStartDissolvingEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISliderDidStartDissolvingEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISliderDidStartDissolvingEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleSliderDidStartDissolving addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleSliderDidStartDissolving(::GlobalNamespace::SliderController sliderController, float_t duration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ISliderDidStartDissolvingEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderDidStartDissolvingEvent, "", "ISliderDidStartDissolvingEvent");
