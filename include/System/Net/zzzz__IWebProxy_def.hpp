#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System {
class Uri;
}
namespace System::Net {
class ICredentials;
}
// Forward declare root types
namespace System::Net {
class IWebProxy;
}
// Type: System.Net::IWebProxy
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7989))
// CS Name: System.Net.IWebProxy
class CORDL_TYPE IWebProxy : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IWebProxy() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IWebProxy(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Net::ICredentials __declspec(property(get=get_Credentials))  Credentials;


// Methods

/// @brief Method GetProxy addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Uri GetProxy(System::Uri destination) ;

/// @brief Method IsBypassed addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsBypassed(System::Uri host) ;

/// @brief Method get_Credentials addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::ICredentials get_Credentials() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::IWebProxy);
DEFINE_IL2CPP_ARG_TYPE(System::Net::IWebProxy, "System.Net", "IWebProxy");
