#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace GlobalNamespace {
class OVRCameraComposition;
}
// Type: ::OVRCameraComposition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8438))
// CS Name: OVRCameraComposition
class CORDL_TYPE OVRCameraComposition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRCameraComposition() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCameraComposition", modifiers: " const&", def_value: None }]
constexpr OVRCameraComposition(OVRCameraComposition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCameraComposition", modifiers: "&&", def_value: None }]
constexpr OVRCameraComposition(OVRCameraComposition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRCameraComposition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRCameraComposition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRCameraComposition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRCameraComposition& operator=(OVRCameraComposition&& o) noexcept = default;
  constexpr OVRCameraComposition& operator=(OVRCameraComposition const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OVRCameraComposition() ;

/// @brief Method .ctor addr 0x25a4d80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRCameraComposition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCameraComposition, "", "OVRCameraComposition");
