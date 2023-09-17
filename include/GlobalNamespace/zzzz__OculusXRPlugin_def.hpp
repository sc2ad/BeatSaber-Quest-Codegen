#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Bool;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusXRPlugin;
}
// Type: ::OculusXRPlugin
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8876))
// CS Name: OculusXRPlugin
class CORDL_TYPE OculusXRPlugin : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OculusXRPlugin() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusXRPlugin", modifiers: " const&", def_value: None }]
constexpr OculusXRPlugin(OculusXRPlugin const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusXRPlugin", modifiers: "&&", def_value: None }]
constexpr OculusXRPlugin(OculusXRPlugin&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusXRPlugin(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusXRPlugin& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusXRPlugin& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusXRPlugin& operator=(OculusXRPlugin&& o) noexcept = default;
  constexpr OculusXRPlugin& operator=(OculusXRPlugin const& o) noexcept = default;
                


// Methods

/// @brief Method SetColorScale addr 0x2618e30 size 0x98 virtual false final false
static void SetColorScale(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method SetColorOffset addr 0x2618ec8 size 0x94 virtual false final false
static void SetColorOffset(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method SetSpaceWarp addr 0x2618f5c size 0x7c virtual false final false
static void SetSpaceWarp(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Bool on) ;

/// @brief Method SetAppSpacePosition addr 0x2618fd8 size 0x90 virtual false final false
static void SetAppSpacePosition(float_t x, float_t y, float_t z) ;

/// @brief Method SetAppSpaceRotation addr 0x2619068 size 0x98 virtual false final false
static void SetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OculusXRPlugin);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusXRPlugin, "", "OculusXRPlugin");
