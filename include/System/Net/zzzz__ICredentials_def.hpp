#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class NetworkCredential;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class ICredentials;
}
// Type: System.Net::ICredentials
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7921))
// CS Name: System.Net.ICredentials
class CORDL_TYPE ICredentials : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICredentials() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICredentials(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetCredential addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::NetworkCredential GetCredential(System::Uri uri, ::StringW authType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ICredentials);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ICredentials, "System.Net", "ICredentials");
