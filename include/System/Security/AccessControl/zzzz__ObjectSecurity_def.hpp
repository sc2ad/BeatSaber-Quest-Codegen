#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Security::AccessControl {
class AuthorizationRuleCollection;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
class QualifiedAce;
}
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Security::AccessControl {
class CommonSecurityDescriptor;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Threading {
class ReaderWriterLock;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System {
class Type;
}
namespace System::Security::AccessControl {
class AccessRule;
}
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectSecurity;
}
// Type: System.Security.AccessControl::ObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3040))
// CS Name: System.Security.AccessControl.ObjectSecurity
class CORDL_TYPE ObjectSecurity : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ObjectSecurity() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: " const&", def_value: None }]
constexpr ObjectSecurity(ObjectSecurity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "&&", def_value: None }]
constexpr ObjectSecurity(ObjectSecurity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectSecurity(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectSecurity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectSecurity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectSecurity& operator=(ObjectSecurity&& o) noexcept = default;
  constexpr ObjectSecurity& operator=(ObjectSecurity const& o) noexcept = default;
                


// Fields

 System::Security::AccessControl::CommonSecurityDescriptor __declspec(property(get=__get_descriptor, put=__set_descriptor))  descriptor;

constexpr void __set_descriptor(System::Security::AccessControl::CommonSecurityDescriptor value) ;

constexpr System::Security::AccessControl::CommonSecurityDescriptor __get_descriptor() const;

 System::Security::AccessControl::AccessControlSections __declspec(property(get=__get_sections_modified, put=__set_sections_modified))  sections_modified;

constexpr void __set_sections_modified(System::Security::AccessControl::AccessControlSections value) ;

constexpr System::Security::AccessControl::AccessControlSections __get_sections_modified() const;

 System::Threading::ReaderWriterLock __declspec(property(get=__get_rw_lock, put=__set_rw_lock))  rw_lock;

constexpr void __set_rw_lock(System::Threading::ReaderWriterLock value) ;

constexpr System::Threading::ReaderWriterLock __get_rw_lock() const;


// Properties

 System::Security::AccessControl::AccessControlSections __declspec(property(put=set_AccessControlSectionsModified))  AccessControlSectionsModified;


// Methods

// Ctor Parameters [CppParam { name: "securityDescriptor", ty: "System::Security::AccessControl::CommonSecurityDescriptor", modifiers: "", def_value: None }]
explicit ObjectSecurity(System::Security::AccessControl::CommonSecurityDescriptor securityDescriptor) ;

/// @brief Method .ctor addr 0x231958c size 0xc4 virtual false final false
 void _ctor(System::Security::AccessControl::CommonSecurityDescriptor securityDescriptor) ;

// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDS", ty: "bool", modifiers: "", def_value: None }]
explicit ObjectSecurity(bool isContainer, bool isDS) ;

/// @brief Method .ctor addr 0x23179a4 size 0xfc virtual false final false
 void _ctor(bool isContainer, bool isDS) ;

/// @brief Method set_AccessControlSectionsModified addr 0x2318ec4 size 0x24 virtual false final false
 void set_AccessControlSectionsModified(System::Security::AccessControl::AccessControlSections value) ;

/// @brief Method AccessRuleFactory addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::AccessControl::AccessRule AccessRuleFactory(System::Security::Principal::IdentityReference identityReference, int32_t accessMask, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type) ;

/// @brief Method ReadLock addr 0x23196c0 size 0x20 virtual false final false
 void ReadLock() ;

/// @brief Method ReadUnlock addr 0x23196e0 size 0x1c virtual false final false
 void ReadUnlock() ;

/// @brief Method Writing addr 0x2319650 size 0x70 virtual false final false
 void Writing() ;

/// @brief Method WriteLock addr 0x2318ea4 size 0x20 virtual false final false
 void WriteLock() ;

/// @brief Method WriteUnlock addr 0x23196fc size 0x1c virtual false final false
 void WriteUnlock() ;

/// @brief Method InternalGetAccessRules addr 0x2317aac size 0x324 virtual false final false
 System::Security::AccessControl::AuthorizationRuleCollection InternalGetAccessRules(bool includeExplicit, bool includeInherited, System::Type targetType) ;

/// @brief Method InternalAccessRuleFactory addr 0x2319718 size 0x70 virtual true final false
 System::Security::AccessControl::AccessRule InternalAccessRuleFactory(System::Security::AccessControl::QualifiedAce ace, System::Type targetType, System::Security::AccessControl::AccessControlType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::ObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::ObjectSecurity, "System.Security.AccessControl", "ObjectSecurity");
