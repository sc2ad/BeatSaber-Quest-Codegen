#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
// Type: ::ISaberSwingRatingCounterDidFinishReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15106))
// CS Name: ISaberSwingRatingCounterDidFinishReceiver
class CORDL_TYPE ISaberSwingRatingCounterDidFinishReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISaberSwingRatingCounterDidFinishReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISaberSwingRatingCounterDidFinishReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleSaberSwingRatingCounterDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleSaberSwingRatingCounterDidFinish(::GlobalNamespace::ISaberSwingRatingCounter saberSwingRatingCounter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver, "", "ISaberSwingRatingCounterDidFinishReceiver");
