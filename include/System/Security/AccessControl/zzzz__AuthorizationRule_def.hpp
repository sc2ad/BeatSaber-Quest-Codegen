#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AuthorizationRule;
}
// Type: System.Security.AccessControl::AuthorizationRule
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3017))
// CS Name: System.Security.AccessControl.AuthorizationRule
class CORDL_TYPE AuthorizationRule : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AuthorizationRule() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorizationRule", modifiers: " const&", def_value: None }]
constexpr AuthorizationRule(AuthorizationRule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorizationRule", modifiers: "&&", def_value: None }]
constexpr AuthorizationRule(AuthorizationRule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthorizationRule(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AuthorizationRule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthorizationRule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthorizationRule& operator=(AuthorizationRule&& o) noexcept = default;
  constexpr AuthorizationRule& operator=(AuthorizationRule const& o) noexcept = default;
                


// Fields

 ::System::Security::Principal::IdentityReference __declspec(property(get=__get_identity, put=__set_identity))  identity;

constexpr void __set_identity(::System::Security::Principal::IdentityReference value) ;

constexpr ::System::Security::Principal::IdentityReference __get_identity() const;

 int32_t __declspec(property(get=__get_accessMask, put=__set_accessMask))  accessMask;

constexpr void __set_accessMask(int32_t value) ;

constexpr int32_t __get_accessMask() const;

 bool __declspec(property(get=__get_isInherited, put=__set_isInherited))  isInherited;

constexpr void __set_isInherited(bool value) ;

constexpr bool __get_isInherited() const;

 ::System::Security::AccessControl::InheritanceFlags __declspec(property(get=__get_inheritanceFlags, put=__set_inheritanceFlags))  inheritanceFlags;

constexpr void __set_inheritanceFlags(::System::Security::AccessControl::InheritanceFlags value) ;

constexpr ::System::Security::AccessControl::InheritanceFlags __get_inheritanceFlags() const;

 ::System::Security::AccessControl::PropagationFlags __declspec(property(get=__get_propagationFlags, put=__set_propagationFlags))  propagationFlags;

constexpr void __set_propagationFlags(::System::Security::AccessControl::PropagationFlags value) ;

constexpr ::System::Security::AccessControl::PropagationFlags __get_propagationFlags() const;


// Properties

 int32_t __declspec(property(get=get_AccessMask))  AccessMask;


// Methods

// Ctor Parameters [CppParam { name: "identity", ty: "::System::Security::Principal::IdentityReference", modifiers: "", def_value: None }, CppParam { name: "accessMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isInherited", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "inheritanceFlags", ty: "::System::Security::AccessControl::InheritanceFlags", modifiers: "", def_value: None }, CppParam { name: "propagationFlags", ty: "::System::Security::AccessControl::PropagationFlags", modifiers: "", def_value: None }]
explicit AuthorizationRule(::System::Security::Principal::IdentityReference identity, int32_t accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags) ;

/// @brief Method .ctor addr 0x2315534 size 0x19c virtual false final false
 void _ctor(::System::Security::Principal::IdentityReference identity, int32_t accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags) ;

/// @brief Method get_AccessMask addr 0x23157a4 size 0x8 virtual false final false
 int32_t get_AccessMask() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
NEED_NO_BOX(::System::Security::AccessControl::AuthorizationRule);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AuthorizationRule, "System.Security.AccessControl", "AuthorizationRule");
