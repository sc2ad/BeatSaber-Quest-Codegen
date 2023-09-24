#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace System::Net::Security {
class SslServerAuthenticationOptions;
}
// Type: System.Net.Security::SslServerAuthenticationOptions
namespace System::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8214))
// CS Name: System.Net.Security.SslServerAuthenticationOptions
class CORDL_TYPE SslServerAuthenticationOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SslServerAuthenticationOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "SslServerAuthenticationOptions", modifiers: " const&", def_value: None }]
constexpr SslServerAuthenticationOptions(SslServerAuthenticationOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SslServerAuthenticationOptions", modifiers: "&&", def_value: None }]
constexpr SslServerAuthenticationOptions(SslServerAuthenticationOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SslServerAuthenticationOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SslServerAuthenticationOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SslServerAuthenticationOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SslServerAuthenticationOptions& operator=(SslServerAuthenticationOptions&& o) noexcept = default;
  constexpr SslServerAuthenticationOptions& operator=(SslServerAuthenticationOptions const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(get=__get__checkCertificateRevocation, put=__set__checkCertificateRevocation))  _checkCertificateRevocation;

constexpr void __set__checkCertificateRevocation(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

constexpr System::Security::Cryptography::X509Certificates::X509RevocationMode __get__checkCertificateRevocation() const;

 System::Security::Authentication::SslProtocols __declspec(property(get=__get__enabledSslProtocols, put=__set__enabledSslProtocols))  _enabledSslProtocols;

constexpr void __set__enabledSslProtocols(System::Security::Authentication::SslProtocols value) ;

constexpr System::Security::Authentication::SslProtocols __get__enabledSslProtocols() const;

 System::Net::Security::EncryptionPolicy __declspec(property(get=__get__encryptionPolicy, put=__set__encryptionPolicy))  _encryptionPolicy;

constexpr void __set__encryptionPolicy(System::Net::Security::EncryptionPolicy value) ;

constexpr System::Net::Security::EncryptionPolicy __get__encryptionPolicy() const;

 bool __declspec(property(get=__get__allowRenegotiation, put=__set__allowRenegotiation))  _allowRenegotiation;

constexpr void __set__allowRenegotiation(bool value) ;

constexpr bool __get__allowRenegotiation() const;

 bool __declspec(property(get=__get__ClientCertificateRequired_k__BackingField, put=__set__ClientCertificateRequired_k__BackingField))  _ClientCertificateRequired_k__BackingField;

constexpr void __set__ClientCertificateRequired_k__BackingField(bool value) ;

constexpr bool __get__ClientCertificateRequired_k__BackingField() const;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=__get__ServerCertificate_k__BackingField, put=__set__ServerCertificate_k__BackingField))  _ServerCertificate_k__BackingField;

constexpr void __set__ServerCertificate_k__BackingField(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate __get__ServerCertificate_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_ClientCertificateRequired, put=set_ClientCertificateRequired))  ClientCertificateRequired;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_ServerCertificate, put=set_ServerCertificate))  ServerCertificate;

 System::Security::Authentication::SslProtocols __declspec(property(get=get_EnabledSslProtocols, put=set_EnabledSslProtocols))  EnabledSslProtocols;

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(put=set_CertificateRevocationCheckMode))  CertificateRevocationCheckMode;

 System::Net::Security::EncryptionPolicy __declspec(property(put=set_EncryptionPolicy))  EncryptionPolicy;


// Methods

/// @brief Method get_ClientCertificateRequired addr 0x276cc70 size 0x8 virtual false final false
 bool get_ClientCertificateRequired() ;

/// @brief Method set_ClientCertificateRequired addr 0x276cc78 size 0xc virtual false final false
 void set_ClientCertificateRequired(bool value) ;

/// @brief Method get_ServerCertificate addr 0x276cc84 size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_ServerCertificate() ;

/// @brief Method set_ServerCertificate addr 0x276cc8c size 0x8 virtual false final false
 void set_ServerCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

/// @brief Method get_EnabledSslProtocols addr 0x276cc94 size 0x8 virtual false final false
 System::Security::Authentication::SslProtocols get_EnabledSslProtocols() ;

/// @brief Method set_EnabledSslProtocols addr 0x276cc9c size 0x8 virtual false final false
 void set_EnabledSslProtocols(System::Security::Authentication::SslProtocols value) ;

/// @brief Method set_CertificateRevocationCheckMode addr 0x276cca4 size 0xa0 virtual false final false
 void set_CertificateRevocationCheckMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

/// @brief Method set_EncryptionPolicy addr 0x276cd44 size 0xa0 virtual false final false
 void set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value) ;

static System::Net::Security::SslServerAuthenticationOptions New_ctor() ;

/// @brief Method .ctor addr 0x276cde4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
NEED_NO_BOX(System::Net::Security::SslServerAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::SslServerAuthenticationOptions, "System.Net.Security", "SslServerAuthenticationOptions");
