#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
namespace System::Security {
class SecurityElement;
}
namespace System::Security::Permissions {
struct SecurityPermissionFlag;
}
namespace System::Security {
class IPermission;
}
namespace System::Security::Permissions {
struct PermissionState;
}
// Forward declare root types
namespace System::Security::Permissions {
class SecurityPermission;
}
// Type: System.Security.Permissions::SecurityPermission
namespace System::Security::Permissions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2878))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2902))
// CS Name: System.Security.Permissions.SecurityPermission
class CORDL_TYPE SecurityPermission : public System::Security::CodeAccessPermission {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecurityPermission() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityPermission", modifiers: " const&", def_value: None }]
constexpr SecurityPermission(SecurityPermission const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityPermission", modifiers: "&&", def_value: None }]
constexpr SecurityPermission(SecurityPermission&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityPermission(void* ptr) noexcept : System::Security::CodeAccessPermission(ptr) {
}


  constexpr SecurityPermission& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityPermission& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityPermission& operator=(SecurityPermission&& o) noexcept = default;
  constexpr SecurityPermission& operator=(SecurityPermission const& o) noexcept = default;
                


// Fields

 System::Security::Permissions::SecurityPermissionFlag __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(System::Security::Permissions::SecurityPermissionFlag value) ;

constexpr System::Security::Permissions::SecurityPermissionFlag __get_flags() const;


// Properties

 System::Security::Permissions::SecurityPermissionFlag __declspec(property(put=set_Flags))  Flags;


// Methods

// Ctor Parameters [CppParam { name: "state", ty: "System::Security::Permissions::PermissionState", modifiers: "", def_value: None }]
explicit SecurityPermission(System::Security::Permissions::PermissionState state) ;

/// @brief Method .ctor addr 0x22eac50 size 0x40 virtual false final false
 void _ctor(System::Security::Permissions::PermissionState state) ;

// Ctor Parameters [CppParam { name: "flag", ty: "System::Security::Permissions::SecurityPermissionFlag", modifiers: "", def_value: None }]
explicit SecurityPermission(System::Security::Permissions::SecurityPermissionFlag flag) ;

/// @brief Method .ctor addr 0x22eac90 size 0x2c virtual false final false
 void _ctor(System::Security::Permissions::SecurityPermissionFlag flag) ;

/// @brief Method set_Flags addr 0x22eacbc size 0xb8 virtual false final false
 void set_Flags(System::Security::Permissions::SecurityPermissionFlag value) ;

/// @brief Method IsUnrestricted addr 0x22ead74 size 0x14 virtual true final true
 bool IsUnrestricted() ;

/// @brief Method IsSubsetOf addr 0x22ead88 size 0x58 virtual true final false
 bool IsSubsetOf(System::Security::IPermission target) ;

/// @brief Method ToXml addr 0x22eae94 size 0xec virtual true final false
 System::Security::SecurityElement ToXml() ;

/// @brief Method IsEmpty addr 0x22eae84 size 0x10 virtual false final false
 bool IsEmpty() ;

/// @brief Method Cast addr 0x22eade0 size 0xa4 virtual false final false
 System::Security::Permissions::SecurityPermission Cast(System::Security::IPermission target) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Permissions
NEED_NO_BOX(System::Security::Permissions::SecurityPermission);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Permissions::SecurityPermission, "System.Security.Permissions", "SecurityPermission");
