#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class IAuthenticationModule;
}
namespace System::Net {
class Authorization;
}
// Forward declare root types
namespace System::Net {
class NtlmClient;
}
// Type: System.Net::NtlmClient
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8048))
// CS Name: System.Net.NtlmClient
class CORDL_TYPE NtlmClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Net::IAuthenticationModule
constexpr operator  System::Net::IAuthenticationModule() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NtlmClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: " const&", def_value: None }]
constexpr NtlmClient(NtlmClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: "&&", def_value: None }]
constexpr NtlmClient(NtlmClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NtlmClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NtlmClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NtlmClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NtlmClient& operator=(NtlmClient&& o) noexcept = default;
  constexpr NtlmClient& operator=(NtlmClient const& o) noexcept = default;
                


// Fields

 System::Net::IAuthenticationModule __declspec(property(get=__get_authObject, put=__set_authObject))  authObject;

constexpr void __set_authObject(System::Net::IAuthenticationModule value) ;

constexpr System::Net::IAuthenticationModule __get_authObject() const;


// Properties

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;


// Methods

// Ctor Parameters []
explicit NtlmClient() ;

/// @brief Method .ctor addr 0x2842ecc size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method Authenticate addr 0x2842f38 size 0xd0 virtual true final true
 System::Net::Authorization Authenticate(::StringW challenge, System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method PreAuthenticate addr 0x2843008 size 0x8 virtual true final true
 System::Net::Authorization PreAuthenticate(System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method get_AuthenticationType addr 0x2843010 size 0x40 virtual true final true
 ::StringW get_AuthenticationType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::NtlmClient);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NtlmClient, "System.Net", "NtlmClient");
