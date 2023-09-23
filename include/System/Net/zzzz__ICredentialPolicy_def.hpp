#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System::Net {
class ICredentialPolicy;
}
// Type: System.Net::ICredentialPolicy
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8039))
// CS Name: System.Net.ICredentialPolicy
class CORDL_TYPE ICredentialPolicy : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICredentialPolicy() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICredentialPolicy(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ICredentialPolicy);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ICredentialPolicy, "System.Net", "ICredentialPolicy");
