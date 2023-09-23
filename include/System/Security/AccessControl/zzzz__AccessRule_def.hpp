#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
#include <cstdint>
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AccessRule;
}
// Type: System.Security.AccessControl::AccessRule
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3011))
// CS Name: System.Security.AccessControl.AccessRule
class CORDL_TYPE AccessRule : public System::Security::AccessControl::AuthorizationRule {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AccessRule() = default;

// Ctor Parameters [CppParam { name: "", ty: "AccessRule", modifiers: " const&", def_value: None }]
constexpr AccessRule(AccessRule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AccessRule", modifiers: "&&", def_value: None }]
constexpr AccessRule(AccessRule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AccessRule(void* ptr) noexcept : System::Security::AccessControl::AuthorizationRule(ptr) {
}


  constexpr AccessRule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AccessRule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AccessRule& operator=(AccessRule&& o) noexcept = default;
  constexpr AccessRule& operator=(AccessRule const& o) noexcept = default;
                


// Fields

 System::Security::AccessControl::AccessControlType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Security::AccessControl::AccessControlType value) ;

constexpr System::Security::AccessControl::AccessControlType __get_type() const;


// Properties

 System::Security::AccessControl::AccessControlType __declspec(property(get=get_AccessControlType))  AccessControlType;


// Methods

// Ctor Parameters [CppParam { name: "identity", ty: "System::Security::Principal::IdentityReference", modifiers: "", def_value: None }, CppParam { name: "accessMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isInherited", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "inheritanceFlags", ty: "System::Security::AccessControl::InheritanceFlags", modifiers: "", def_value: None }, CppParam { name: "propagationFlags", ty: "System::Security::AccessControl::PropagationFlags", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::Security::AccessControl::AccessControlType", modifiers: "", def_value: None }]
explicit AccessRule(System::Security::Principal::IdentityReference identity, int32_t accessMask, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type) ;

/// @brief Method .ctor addr 0x23154a4 size 0x90 virtual false final false
 void _ctor(System::Security::Principal::IdentityReference identity, int32_t accessMask, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type) ;

/// @brief Method get_AccessControlType addr 0x23156d0 size 0x8 virtual false final false
 System::Security::AccessControl::AccessControlType get_AccessControlType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::AccessRule);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::AccessRule, "System.Security.AccessControl", "AccessRule");
