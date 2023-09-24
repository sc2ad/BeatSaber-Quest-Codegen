#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security {
class SecurityElement;
}
namespace System::Security::Permissions {
struct PermissionState;
}
namespace System::Security {
class ISecurityEncodable;
}
namespace System::Security {
class IPermission;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security {
class CodeAccessPermission;
}
// Type: System.Security::CodeAccessPermission
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2878))
// CS Name: System.Security.CodeAccessPermission
class CORDL_TYPE CodeAccessPermission : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Security::IPermission
constexpr operator  System::Security::IPermission() const noexcept;

/// @brief Convert operator to System::Security::ISecurityEncodable
constexpr operator  System::Security::ISecurityEncodable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CodeAccessPermission() = default;

// Ctor Parameters [CppParam { name: "", ty: "CodeAccessPermission", modifiers: " const&", def_value: None }]
constexpr CodeAccessPermission(CodeAccessPermission const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CodeAccessPermission", modifiers: "&&", def_value: None }]
constexpr CodeAccessPermission(CodeAccessPermission&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CodeAccessPermission(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CodeAccessPermission& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CodeAccessPermission& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CodeAccessPermission& operator=(CodeAccessPermission&& o) noexcept = default;
  constexpr CodeAccessPermission& operator=(CodeAccessPermission const& o) noexcept = default;
                


// Methods

static System::Security::CodeAccessPermission New_ctor() ;

/// @brief Method .ctor addr 0x22e4ee8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Demand addr 0x22e4ef0 size 0x2c virtual true final true
 void Demand() ;

/// @brief Method Equals addr 0x22e4fe8 size 0x124 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x22e510c size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsSubsetOf addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsSubsetOf(System::Security::IPermission target) ;

/// @brief Method ToString addr 0x22e5114 size 0x28 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToXml addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::SecurityElement ToXml() ;

/// @brief Method Element addr 0x22e513c size 0x168 virtual false final false
 System::Security::SecurityElement Element(int32_t version) ;

/// @brief Method CheckPermissionState addr 0x22e52a4 size 0xb0 virtual false final false
static System::Security::Permissions::PermissionState CheckPermissionState(System::Security::Permissions::PermissionState state, bool allowUnrestricted) ;

/// @brief Method ThrowInvalidPermission addr 0x22e5354 size 0xa4 virtual false final false
static void ThrowInvalidPermission(System::Security::IPermission target, System::Type expected) ;

/// @brief Method System.Security.IPermission.Demand addr 0x22e53f8 size 0x4 virtual true final true
 void System_Security_IPermission_Demand() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
NEED_NO_BOX(System::Security::CodeAccessPermission);
DEFINE_IL2CPP_ARG_TYPE(System::Security::CodeAccessPermission, "System.Security", "CodeAccessPermission");
