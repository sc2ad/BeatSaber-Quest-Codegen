#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__GenericSecurityDescriptor_def.hpp"
namespace System::Security::AccessControl {
class CommonAcl;
}
namespace System::Security::AccessControl {
class DiscretionaryAcl;
}
namespace System::Security::AccessControl {
class SystemAcl;
}
namespace System::Security::AccessControl {
struct ControlFlags;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonSecurityDescriptor;
}
// Type: System.Security.AccessControl::CommonSecurityDescriptor
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3023))
// CS Name: System.Security.AccessControl.CommonSecurityDescriptor
class CORDL_TYPE CommonSecurityDescriptor : public System::Security::AccessControl::GenericSecurityDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CommonSecurityDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonSecurityDescriptor", modifiers: " const&", def_value: None }]
constexpr CommonSecurityDescriptor(CommonSecurityDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonSecurityDescriptor", modifiers: "&&", def_value: None }]
constexpr CommonSecurityDescriptor(CommonSecurityDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommonSecurityDescriptor(void* ptr) noexcept : System::Security::AccessControl::GenericSecurityDescriptor(ptr) {
}


  constexpr CommonSecurityDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommonSecurityDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommonSecurityDescriptor& operator=(CommonSecurityDescriptor&& o) noexcept = default;
  constexpr CommonSecurityDescriptor& operator=(CommonSecurityDescriptor const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_is_container, put=__set_is_container))  is_container;

constexpr void __set_is_container(bool value) ;

constexpr bool __get_is_container() const;

 bool __declspec(property(get=__get_is_ds, put=__set_is_ds))  is_ds;

constexpr void __set_is_ds(bool value) ;

constexpr bool __get_is_ds() const;

 System::Security::AccessControl::ControlFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(System::Security::AccessControl::ControlFlags value) ;

constexpr System::Security::AccessControl::ControlFlags __get_flags() const;

 System::Security::Principal::SecurityIdentifier __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(System::Security::Principal::SecurityIdentifier value) ;

constexpr System::Security::Principal::SecurityIdentifier __get_owner() const;

 System::Security::Principal::SecurityIdentifier __declspec(property(get=__get_group, put=__set_group))  group;

constexpr void __set_group(System::Security::Principal::SecurityIdentifier value) ;

constexpr System::Security::Principal::SecurityIdentifier __get_group() const;

 System::Security::AccessControl::SystemAcl __declspec(property(get=__get_system_acl, put=__set_system_acl))  system_acl;

constexpr void __set_system_acl(System::Security::AccessControl::SystemAcl value) ;

constexpr System::Security::AccessControl::SystemAcl __get_system_acl() const;

 System::Security::AccessControl::DiscretionaryAcl __declspec(property(get=__get_discretionary_acl, put=__set_discretionary_acl))  discretionary_acl;

constexpr void __set_discretionary_acl(System::Security::AccessControl::DiscretionaryAcl value) ;

constexpr System::Security::AccessControl::DiscretionaryAcl __get_discretionary_acl() const;


// Properties

 System::Security::AccessControl::DiscretionaryAcl __declspec(property(get=get_DiscretionaryAcl, put=set_DiscretionaryAcl))  DiscretionaryAcl;

 System::Security::Principal::SecurityIdentifier __declspec(property(put=set_Group))  Group;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 bool __declspec(property(get=get_IsDS))  IsDS;

 System::Security::Principal::SecurityIdentifier __declspec(property(put=set_Owner))  Owner;

 System::Security::AccessControl::SystemAcl __declspec(property(put=set_SystemAcl))  SystemAcl;


// Methods

static System::Security::AccessControl::CommonSecurityDescriptor New_ctor(bool isContainer, bool isDS, System::Security::AccessControl::ControlFlags flags, System::Security::Principal::SecurityIdentifier owner, System::Security::Principal::SecurityIdentifier group, System::Security::AccessControl::SystemAcl systemAcl, System::Security::AccessControl::DiscretionaryAcl discretionaryAcl) ;

/// @brief Method .ctor addr 0x2317dd0 size 0x74 virtual false final false
 void _ctor(bool isContainer, bool isDS, System::Security::AccessControl::ControlFlags flags, System::Security::Principal::SecurityIdentifier owner, System::Security::Principal::SecurityIdentifier group, System::Security::AccessControl::SystemAcl systemAcl, System::Security::AccessControl::DiscretionaryAcl discretionaryAcl) ;

/// @brief Method Init addr 0x2317e4c size 0x84 virtual false final false
 void Init(bool isContainer, bool isDS, System::Security::AccessControl::ControlFlags flags, System::Security::Principal::SecurityIdentifier owner, System::Security::Principal::SecurityIdentifier group, System::Security::AccessControl::SystemAcl systemAcl, System::Security::AccessControl::DiscretionaryAcl discretionaryAcl) ;

/// @brief Method get_DiscretionaryAcl addr 0x2318004 size 0x8 virtual false final false
 System::Security::AccessControl::DiscretionaryAcl get_DiscretionaryAcl() ;

/// @brief Method set_DiscretionaryAcl addr 0x2317f00 size 0x104 virtual false final false
 void set_DiscretionaryAcl(System::Security::AccessControl::DiscretionaryAcl value) ;

/// @brief Method set_Group addr 0x231813c size 0x8 virtual true final false
 void set_Group(System::Security::Principal::SecurityIdentifier value) ;

/// @brief Method get_IsContainer addr 0x2318144 size 0x8 virtual false final false
 bool get_IsContainer() ;

/// @brief Method get_IsDS addr 0x231814c size 0x8 virtual false final false
 bool get_IsDS() ;

/// @brief Method set_Owner addr 0x2318154 size 0x8 virtual true final false
 void set_Owner(System::Security::Principal::SecurityIdentifier value) ;

/// @brief Method set_SystemAcl addr 0x2317ed0 size 0x30 virtual false final false
 void set_SystemAcl(System::Security::AccessControl::SystemAcl value) ;

/// @brief Method CheckAclConsistency addr 0x2318078 size 0xc4 virtual false final false
 void CheckAclConsistency(System::Security::AccessControl::CommonAcl acl) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::CommonSecurityDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::CommonSecurityDescriptor, "System.Security.AccessControl", "CommonSecurityDescriptor");
