#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteCutSoundEffectDidFinishEvent;
}
// Type: ::INoteCutSoundEffectDidFinishEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4053))
// CS Name: INoteCutSoundEffectDidFinishEvent
class CORDL_TYPE INoteCutSoundEffectDidFinishEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteCutSoundEffectDidFinishEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteCutSoundEffectDidFinishEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleNoteCutSoundEffectDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleNoteCutSoundEffectDidFinish(GlobalNamespace::NoteCutSoundEffect noteCutSoundEffect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INoteCutSoundEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteCutSoundEffectDidFinishEvent, "", "INoteCutSoundEffectDidFinishEvent");
