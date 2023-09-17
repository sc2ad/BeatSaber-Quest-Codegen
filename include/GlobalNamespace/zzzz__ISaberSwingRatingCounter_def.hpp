#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
// Type: ::ISaberSwingRatingCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15107))
// CS Name: ISaberSwingRatingCounter
class CORDL_TYPE ISaberSwingRatingCounter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISaberSwingRatingCounter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISaberSwingRatingCounter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_beforeCutRating))  beforeCutRating;

 float_t __declspec(property(get=get_afterCutRating))  afterCutRating;


// Methods

/// @brief Method get_beforeCutRating addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_beforeCutRating() ;

/// @brief Method get_afterCutRating addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_afterCutRating() ;

/// @brief Method RegisterDidChangeReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver receiver) ;

/// @brief Method RegisterDidFinishReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver receiver) ;

/// @brief Method UnregisterDidChangeReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver receiver) ;

/// @brief Method UnregisterDidFinishReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver receiver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ISaberSwingRatingCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberSwingRatingCounter, "", "ISaberSwingRatingCounter");
