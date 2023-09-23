#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
// Type: ::ISaberSwingRatingCounterDidChangeReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15105))
// CS Name: ISaberSwingRatingCounterDidChangeReceiver
class CORDL_TYPE ISaberSwingRatingCounterDidChangeReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISaberSwingRatingCounterDidChangeReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISaberSwingRatingCounterDidChangeReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HandleSaberSwingRatingCounterDidChange addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleSaberSwingRatingCounterDidChange(GlobalNamespace::ISaberSwingRatingCounter saberSwingRatingCounter, float_t rating) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver, "", "ISaberSwingRatingCounterDidChangeReceiver");
