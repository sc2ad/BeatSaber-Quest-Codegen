#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfigurationExtensions;
}
// Type: ::OVRMixedRealityCaptureConfigurationExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8930))
// CS Name: OVRMixedRealityCaptureConfigurationExtensions
class CORDL_TYPE OVRMixedRealityCaptureConfigurationExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRMixedRealityCaptureConfigurationExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureConfigurationExtensions", modifiers: " const&", def_value: None }]
constexpr OVRMixedRealityCaptureConfigurationExtensions(OVRMixedRealityCaptureConfigurationExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureConfigurationExtensions", modifiers: "&&", def_value: None }]
constexpr OVRMixedRealityCaptureConfigurationExtensions(OVRMixedRealityCaptureConfigurationExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMixedRealityCaptureConfigurationExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRMixedRealityCaptureConfigurationExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMixedRealityCaptureConfigurationExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMixedRealityCaptureConfigurationExtensions& operator=(OVRMixedRealityCaptureConfigurationExtensions&& o) noexcept = default;
  constexpr OVRMixedRealityCaptureConfigurationExtensions& operator=(OVRMixedRealityCaptureConfigurationExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ApplyTo addr 0x2626988 size 0x4 virtual false final false
static void ApplyTo(GlobalNamespace::OVRMixedRealityCaptureConfiguration dest, GlobalNamespace::OVRMixedRealityCaptureConfiguration source) ;

/// @brief Method ReadFrom addr 0x262698c size 0x1428 virtual false final false
static void ReadFrom(GlobalNamespace::OVRMixedRealityCaptureConfiguration dest, GlobalNamespace::OVRMixedRealityCaptureConfiguration source) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions, "", "OVRMixedRealityCaptureConfigurationExtensions");
