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
namespace Mono::Security::Protocol::Ntlm {
class MessageBase;
}
namespace System::Net {
class Authorization;
}
// Forward declare root types
namespace Mono::Http {
class NtlmSession;
}
// Type: Mono.Http::NtlmSession
namespace Mono::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7701))
// CS Name: Mono.Http.NtlmSession
class CORDL_TYPE NtlmSession : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NtlmSession() = default;

// Ctor Parameters [CppParam { name: "", ty: "NtlmSession", modifiers: " const&", def_value: None }]
constexpr NtlmSession(NtlmSession const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NtlmSession", modifiers: "&&", def_value: None }]
constexpr NtlmSession(NtlmSession&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NtlmSession(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NtlmSession& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NtlmSession& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NtlmSession& operator=(NtlmSession&& o) noexcept = default;
  constexpr NtlmSession& operator=(NtlmSession const& o) noexcept = default;
                


// Fields

 Mono::Security::Protocol::Ntlm::MessageBase __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(Mono::Security::Protocol::Ntlm::MessageBase value) ;

constexpr Mono::Security::Protocol::Ntlm::MessageBase __get_message() const;


// Methods

// Ctor Parameters []
explicit NtlmSession() ;

/// @brief Method .ctor addr 0x269457c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Authenticate addr 0x2694584 size 0x48c virtual false final false
 System::Net::Authorization Authenticate(::StringW challenge, System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Http
NEED_NO_BOX(Mono::Http::NtlmSession);
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::NtlmSession, "Mono.Http", "NtlmSession");
