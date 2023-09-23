#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace GlobalNamespace {
class OVRDirectComposition;
}
// Type: ::OVRDirectComposition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8441))
// CS Name: OVRDirectComposition
class CORDL_TYPE OVRDirectComposition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRDirectComposition() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDirectComposition", modifiers: " const&", def_value: None }]
constexpr OVRDirectComposition(OVRDirectComposition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDirectComposition", modifiers: "&&", def_value: None }]
constexpr OVRDirectComposition(OVRDirectComposition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRDirectComposition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRDirectComposition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRDirectComposition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRDirectComposition& operator=(OVRDirectComposition&& o) noexcept = default;
  constexpr OVRDirectComposition& operator=(OVRDirectComposition const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OVRDirectComposition() ;

/// @brief Method .ctor addr 0x25a6204 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRDirectComposition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDirectComposition, "", "OVRDirectComposition");
