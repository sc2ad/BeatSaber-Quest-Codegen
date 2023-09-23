#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderDidDissolveEvent;
}
// Type: ::ISliderDidDissolveEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4919))
// CS Name: ISliderDidDissolveEvent
class CORDL_TYPE ISliderDidDissolveEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISliderDidDissolveEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISliderDidDissolveEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleSliderDidDissolve addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleSliderDidDissolve(GlobalNamespace::SliderController sliderController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISliderDidDissolveEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISliderDidDissolveEvent, "", "ISliderDidDissolveEvent");
