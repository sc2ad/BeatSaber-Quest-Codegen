#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System::Security::Principal {
class IPrincipal;
}
// Type: System.Security.Principal::IPrincipal
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2992))
// CS Name: System.Security.Principal.IPrincipal
class CORDL_TYPE IPrincipal : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPrincipal() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPrincipal(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::IPrincipal);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::IPrincipal, "System.Security.Principal", "IPrincipal");
