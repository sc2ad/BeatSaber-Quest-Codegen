#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class BeatEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
// Type: ::IBeatEffectDidFinishEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4950))
// CS Name: IBeatEffectDidFinishEvent
class CORDL_TYPE IBeatEffectDidFinishEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatEffectDidFinishEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatEffectDidFinishEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleBeatEffectDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect beatEffect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IBeatEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatEffectDidFinishEvent, "", "IBeatEffectDidFinishEvent");
