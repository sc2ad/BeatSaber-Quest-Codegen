#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class Authorization;
}
// Forward declare root types
namespace System::Net {
class IAuthenticationModule;
}
// Type: System.Net::IAuthenticationModule
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7919))
// CS Name: System.Net.IAuthenticationModule
class CORDL_TYPE IAuthenticationModule : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAuthenticationModule() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAuthenticationModule(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;


// Methods

/// @brief Method Authenticate addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::Authorization Authenticate(::StringW challenge, System::Net::WebRequest request, System::Net::ICredentials credentials) ;

/// @brief Method PreAuthenticate addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::Authorization PreAuthenticate(System::Net::WebRequest request, System::Net::ICredentials credentials) ;

/// @brief Method get_AuthenticationType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AuthenticationType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::IAuthenticationModule);
DEFINE_IL2CPP_ARG_TYPE(System::Net::IAuthenticationModule, "System.Net", "IAuthenticationModule");
