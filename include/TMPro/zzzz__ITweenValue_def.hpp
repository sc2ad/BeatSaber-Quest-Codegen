#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace TMPro {
class ITweenValue;
}
// Type: TMPro::ITweenValue
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12279))
// CS Name: TMPro.ITweenValue
class CORDL_TYPE ITweenValue : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITweenValue() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITweenValue(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_ignoreTimeScale))  ignoreTimeScale;

 float_t __declspec(property(get=get_duration))  duration;


// Methods

/// @brief Method TweenValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void TweenValue(float_t floatPercentage) ;

/// @brief Method get_ignoreTimeScale addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ignoreTimeScale() ;

/// @brief Method get_duration addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_duration() ;

/// @brief Method ValidTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ValidTarget() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::ITweenValue);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITweenValue, "TMPro", "ITweenValue");
