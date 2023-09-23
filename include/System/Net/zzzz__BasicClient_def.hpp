#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class Authorization;
}
namespace System::Net {
class IAuthenticationModule;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class ICredentials;
}
// Forward declare root types
namespace System::Net {
class BasicClient;
}
// Type: System.Net::BasicClient
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8000))
// CS Name: System.Net.BasicClient
class CORDL_TYPE BasicClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Net::IAuthenticationModule
constexpr operator  System::Net::IAuthenticationModule() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BasicClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicClient", modifiers: " const&", def_value: None }]
constexpr BasicClient(BasicClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicClient", modifiers: "&&", def_value: None }]
constexpr BasicClient(BasicClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BasicClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicClient& operator=(BasicClient&& o) noexcept = default;
  constexpr BasicClient& operator=(BasicClient const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;


// Methods

/// @brief Method Authenticate addr 0x28292a4 size 0xac virtual true final true
 System::Net::Authorization Authenticate(::StringW challenge, System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method GetBytes addr 0x28296fc size 0xa8 virtual false final false
static ::ArrayW<uint8_t> GetBytes(::StringW str) ;

/// @brief Method InternalAuthenticate addr 0x2829350 size 0x3ac virtual false final false
static System::Net::Authorization InternalAuthenticate(System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method PreAuthenticate addr 0x28297a4 size 0xc virtual true final true
 System::Net::Authorization PreAuthenticate(System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method get_AuthenticationType addr 0x28297b0 size 0x40 virtual true final true
 ::StringW get_AuthenticationType() ;

// Ctor Parameters []
explicit BasicClient() ;

/// @brief Method .ctor addr 0x28286f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::BasicClient);
DEFINE_IL2CPP_ARG_TYPE(System::Net::BasicClient, "System.Net", "BasicClient");
