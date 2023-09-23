#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class MathfExtra;
}
// Type: ::MathfExtra
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16058))
// CS Name: MathfExtra
class CORDL_TYPE MathfExtra : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MathfExtra() = default;

// Ctor Parameters [CppParam { name: "", ty: "MathfExtra", modifiers: " const&", def_value: None }]
constexpr MathfExtra(MathfExtra const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MathfExtra", modifiers: "&&", def_value: None }]
constexpr MathfExtra(MathfExtra&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MathfExtra(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MathfExtra& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MathfExtra& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MathfExtra& operator=(MathfExtra&& o) noexcept = default;
  constexpr MathfExtra& operator=(MathfExtra const& o) noexcept = default;
                


// Methods

/// @brief Method Mod addr 0x2278068 size 0x14 virtual false final false
static float_t Mod(float_t value, float_t mod) ;

/// @brief Method Round addr 0x227807c size 0x118 virtual false final false
static float_t Round(float_t value, int32_t decimals) ;

/// @brief Method MaxAbs addr 0x2278194 size 0x14 virtual false final false
static float_t MaxAbs(float_t a, float_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MathfExtra);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MathfExtra, "", "MathfExtra");
