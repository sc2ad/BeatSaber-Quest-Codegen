#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__ObjectSecurity_def.hpp"
namespace System::Security::AccessControl {
class AuthorizationRuleCollection;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonObjectSecurity;
}
// Type: System.Security.AccessControl::CommonObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3040))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3022))
// CS Name: System.Security.AccessControl.CommonObjectSecurity
class CORDL_TYPE CommonObjectSecurity : public System::Security::AccessControl::ObjectSecurity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CommonObjectSecurity() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: " const&", def_value: None }]
constexpr CommonObjectSecurity(CommonObjectSecurity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "&&", def_value: None }]
constexpr CommonObjectSecurity(CommonObjectSecurity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommonObjectSecurity(void* ptr) noexcept : System::Security::AccessControl::ObjectSecurity(ptr) {
}


  constexpr CommonObjectSecurity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommonObjectSecurity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommonObjectSecurity& operator=(CommonObjectSecurity&& o) noexcept = default;
  constexpr CommonObjectSecurity& operator=(CommonObjectSecurity const& o) noexcept = default;
                


// Methods

static System::Security::AccessControl::CommonObjectSecurity New_ctor(bool isContainer) ;

/// @brief Method .ctor addr 0x2317998 size 0xc virtual false final false
 void _ctor(bool isContainer) ;

/// @brief Method GetAccessRules addr 0x2317aa0 size 0xc virtual false final false
 System::Security::AccessControl::AuthorizationRuleCollection GetAccessRules(bool includeExplicit, bool includeInherited, System::Type targetType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::CommonObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::CommonObjectSecurity, "System.Security.AccessControl", "CommonObjectSecurity");
