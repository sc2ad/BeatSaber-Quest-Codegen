#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class OrgScopedID;
}
// Type: Oculus.Platform.Models::OrgScopedID
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13455))
// CS Name: Oculus.Platform.Models.OrgScopedID
class CORDL_TYPE OrgScopedID : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OrgScopedID() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrgScopedID", modifiers: " const&", def_value: None }]
constexpr OrgScopedID(OrgScopedID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrgScopedID", modifiers: "&&", def_value: None }]
constexpr OrgScopedID(OrgScopedID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrgScopedID(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrgScopedID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrgScopedID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrgScopedID& operator=(OrgScopedID&& o) noexcept = default;
  constexpr OrgScopedID& operator=(OrgScopedID const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OrgScopedID(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1ba4 size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::OrgScopedID);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::OrgScopedID, "Oculus.Platform.Models", "OrgScopedID");
