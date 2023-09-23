#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class FlyingObjectEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
// Type: ::IFlyingObjectEffectDidFinishEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4966))
// CS Name: IFlyingObjectEffectDidFinishEvent
class CORDL_TYPE IFlyingObjectEffectDidFinishEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFlyingObjectEffectDidFinishEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFlyingObjectEffectDidFinishEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleFlyingObjectEffectDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleFlyingObjectEffectDidFinish(GlobalNamespace::FlyingObjectEffect flyingObjectEffect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IFlyingObjectEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IFlyingObjectEffectDidFinishEvent, "", "IFlyingObjectEffectDidFinishEvent");
