#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoSslClientAuthenticationOptions;
}
// Type: Mono.Net.Security::MonoSslClientAuthenticationOptions
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7690))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7691))
// CS Name: Mono.Net.Security.MonoSslClientAuthenticationOptions
class CORDL_TYPE MonoSslClientAuthenticationOptions : public Mono::Net::Security::MonoSslAuthenticationOptions {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoSslClientAuthenticationOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoSslClientAuthenticationOptions", modifiers: " const&", def_value: None }]
constexpr MonoSslClientAuthenticationOptions(MonoSslClientAuthenticationOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoSslClientAuthenticationOptions", modifiers: "&&", def_value: None }]
constexpr MonoSslClientAuthenticationOptions(MonoSslClientAuthenticationOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoSslClientAuthenticationOptions(void* ptr) noexcept : Mono::Net::Security::MonoSslAuthenticationOptions(ptr) {
}


  constexpr MonoSslClientAuthenticationOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoSslClientAuthenticationOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoSslClientAuthenticationOptions& operator=(MonoSslClientAuthenticationOptions&& o) noexcept = default;
  constexpr MonoSslClientAuthenticationOptions& operator=(MonoSslClientAuthenticationOptions const& o) noexcept = default;
                


// Fields

 System::Net::Security::SslClientAuthenticationOptions __declspec(property(get=__get__Options_k__BackingField, put=__set__Options_k__BackingField))  _Options_k__BackingField;

constexpr void __set__Options_k__BackingField(System::Net::Security::SslClientAuthenticationOptions value) ;

constexpr System::Net::Security::SslClientAuthenticationOptions __get__Options_k__BackingField() const;


// Properties

 System::Net::Security::SslClientAuthenticationOptions __declspec(property(get=get_Options))  Options;

 bool __declspec(property(get=get_ServerMode))  ServerMode;

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(put=set_CertificateRevocationCheckMode))  CertificateRevocationCheckMode;

 System::Net::Security::EncryptionPolicy __declspec(property(put=set_EncryptionPolicy))  EncryptionPolicy;

 System::Security::Authentication::SslProtocols __declspec(property(get=get_EnabledSslProtocols, put=set_EnabledSslProtocols))  EnabledSslProtocols;

 ::StringW __declspec(property(get=get_TargetHost, put=set_TargetHost))  TargetHost;

 bool __declspec(property(get=get_ClientCertificateRequired, put=set_ClientCertificateRequired))  ClientCertificateRequired;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_ClientCertificates, put=set_ClientCertificates))  ClientCertificates;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_ServerCertificate, put=set_ServerCertificate))  ServerCertificate;


// Methods

/// @brief Method get_Options addr 0x269263c size 0x8 virtual false final false
 System::Net::Security::SslClientAuthenticationOptions get_Options() ;

/// @brief Method get_ServerMode addr 0x2692644 size 0x8 virtual true final false
 bool get_ServerMode() ;

// Ctor Parameters []
explicit MonoSslClientAuthenticationOptions() ;

/// @brief Method .ctor addr 0x268f9b8 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method set_CertificateRevocationCheckMode addr 0x269264c size 0x1c virtual true final false
 void set_CertificateRevocationCheckMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

/// @brief Method set_EncryptionPolicy addr 0x2692668 size 0x1c virtual true final false
 void set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value) ;

/// @brief Method get_EnabledSslProtocols addr 0x2692684 size 0x1c virtual true final false
 System::Security::Authentication::SslProtocols get_EnabledSslProtocols() ;

/// @brief Method set_EnabledSslProtocols addr 0x26926a0 size 0x1c virtual true final false
 void set_EnabledSslProtocols(System::Security::Authentication::SslProtocols value) ;

/// @brief Method get_TargetHost addr 0x26926bc size 0x1c virtual true final false
 ::StringW get_TargetHost() ;

/// @brief Method set_TargetHost addr 0x26926d8 size 0x1c virtual true final false
 void set_TargetHost(::StringW value) ;

/// @brief Method get_ClientCertificateRequired addr 0x26926f4 size 0x40 virtual true final false
 bool get_ClientCertificateRequired() ;

/// @brief Method set_ClientCertificateRequired addr 0x2692734 size 0x40 virtual true final false
 void set_ClientCertificateRequired(bool value) ;

/// @brief Method get_ClientCertificates addr 0x2692774 size 0x1c virtual true final false
 System::Security::Cryptography::X509Certificates::X509CertificateCollection get_ClientCertificates() ;

/// @brief Method set_ClientCertificates addr 0x2692790 size 0x1c virtual true final false
 void set_ClientCertificates(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

/// @brief Method get_ServerCertificate addr 0x26927ac size 0x40 virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_ServerCertificate() ;

/// @brief Method set_ServerCertificate addr 0x26927ec size 0x40 virtual true final false
 void set_ServerCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::MonoSslClientAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MonoSslClientAuthenticationOptions, "Mono.Net.Security", "MonoSslClientAuthenticationOptions");
