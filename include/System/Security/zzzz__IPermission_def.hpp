#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Security {
class ISecurityEncodable;
}
// Forward declare root types
namespace System::Security {
class IPermission;
}
// Type: System.Security::IPermission
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2874))
// CS Name: System.Security.IPermission
class CORDL_TYPE IPermission : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Security::ISecurityEncodable
constexpr operator  ::System::Security::ISecurityEncodable() const noexcept;

~IPermission() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPermission(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Demand addr 0x0 size 0xffffffffffffffff virtual true final false
 void Demand() ;

/// @brief Method IsSubsetOf addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsSubsetOf(::System::Security::IPermission target) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
} // end anonymous namespace
NEED_NO_BOX(::System::Security::IPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::IPermission, "System.Security", "IPermission");
