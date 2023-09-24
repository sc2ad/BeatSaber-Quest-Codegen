#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace GlobalNamespace {
class OVRSandwichComposition;
}
// Type: ::OVRSandwichComposition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8444))
// CS Name: OVRSandwichComposition
class CORDL_TYPE OVRSandwichComposition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRSandwichComposition() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSandwichComposition", modifiers: " const&", def_value: None }]
constexpr OVRSandwichComposition(OVRSandwichComposition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSandwichComposition", modifiers: "&&", def_value: None }]
constexpr OVRSandwichComposition(OVRSandwichComposition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSandwichComposition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRSandwichComposition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSandwichComposition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSandwichComposition& operator=(OVRSandwichComposition&& o) noexcept = default;
  constexpr OVRSandwichComposition& operator=(OVRSandwichComposition const& o) noexcept = default;
                


// Methods

static GlobalNamespace::OVRSandwichComposition New_ctor() ;

/// @brief Method .ctor addr 0x25a8fb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRSandwichComposition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSandwichComposition, "", "OVRSandwichComposition");
