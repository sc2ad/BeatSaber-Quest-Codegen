#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Security {
class ISecurityEncodable;
}
// Type: System.Security::ISecurityEncodable
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2875))
// CS Name: System.Security.ISecurityEncodable
class CORDL_TYPE ISecurityEncodable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISecurityEncodable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISecurityEncodable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ToXml addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::SecurityElement ToXml() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
NEED_NO_BOX(System::Security::ISecurityEncodable);
DEFINE_IL2CPP_ARG_TYPE(System::Security::ISecurityEncodable, "System.Security", "ISecurityEncodable");
