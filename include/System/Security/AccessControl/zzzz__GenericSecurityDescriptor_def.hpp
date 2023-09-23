#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class GenericSecurityDescriptor;
}
// Type: System.Security.AccessControl::GenericSecurityDescriptor
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3033))
// CS Name: System.Security.AccessControl.GenericSecurityDescriptor
class CORDL_TYPE GenericSecurityDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericSecurityDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSecurityDescriptor", modifiers: " const&", def_value: None }]
constexpr GenericSecurityDescriptor(GenericSecurityDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSecurityDescriptor", modifiers: "&&", def_value: None }]
constexpr GenericSecurityDescriptor(GenericSecurityDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericSecurityDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericSecurityDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericSecurityDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericSecurityDescriptor& operator=(GenericSecurityDescriptor&& o) noexcept = default;
  constexpr GenericSecurityDescriptor& operator=(GenericSecurityDescriptor const& o) noexcept = default;
                


// Properties

 System::Security::Principal::SecurityIdentifier __declspec(property(put=set_Group))  Group;

 System::Security::Principal::SecurityIdentifier __declspec(property(put=set_Owner))  Owner;


// Methods

// Ctor Parameters []
explicit GenericSecurityDescriptor() ;

/// @brief Method .ctor addr 0x2317e44 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method set_Group addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Group(System::Security::Principal::SecurityIdentifier value) ;

/// @brief Method set_Owner addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Owner(System::Security::Principal::SecurityIdentifier value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::GenericSecurityDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::GenericSecurityDescriptor, "System.Security.AccessControl", "GenericSecurityDescriptor");
