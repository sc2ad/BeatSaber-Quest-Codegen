#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class Interpolation;
}
// Type: ::Interpolation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15930))
// CS Name: Interpolation
class CORDL_TYPE Interpolation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Interpolation() = default;

// Ctor Parameters [CppParam { name: "", ty: "Interpolation", modifiers: " const&", def_value: None }]
constexpr Interpolation(Interpolation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Interpolation", modifiers: "&&", def_value: None }]
constexpr Interpolation(Interpolation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Interpolation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Interpolation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Interpolation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Interpolation& operator=(Interpolation&& o) noexcept = default;
  constexpr Interpolation& operator=(Interpolation const& o) noexcept = default;
                


// Methods

/// @brief Method Interpolate addr 0x28799f4 size 0x4a0 virtual false final false
static float_t Interpolate(float_t t, ::GlobalNamespace::EaseType easeType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::Interpolation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interpolation, "", "Interpolation");
