#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
// Forward declare root types
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
// Type: System.Net.Security::SslClientAuthenticationOptions
namespace System::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8213))
// CS Name: System.Net.Security.SslClientAuthenticationOptions
class CORDL_TYPE SslClientAuthenticationOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SslClientAuthenticationOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "SslClientAuthenticationOptions", modifiers: " const&", def_value: None }]
constexpr SslClientAuthenticationOptions(SslClientAuthenticationOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SslClientAuthenticationOptions", modifiers: "&&", def_value: None }]
constexpr SslClientAuthenticationOptions(SslClientAuthenticationOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SslClientAuthenticationOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SslClientAuthenticationOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SslClientAuthenticationOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SslClientAuthenticationOptions& operator=(SslClientAuthenticationOptions&& o) noexcept = default;
  constexpr SslClientAuthenticationOptions& operator=(SslClientAuthenticationOptions const& o) noexcept = default;
                


// Fields

 System::Net::Security::EncryptionPolicy __declspec(property(get=__get__encryptionPolicy, put=__set__encryptionPolicy))  _encryptionPolicy;

constexpr void __set__encryptionPolicy(System::Net::Security::EncryptionPolicy value) ;

constexpr System::Net::Security::EncryptionPolicy __get__encryptionPolicy() const;

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(get=__get__checkCertificateRevocation, put=__set__checkCertificateRevocation))  _checkCertificateRevocation;

constexpr void __set__checkCertificateRevocation(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

constexpr System::Security::Cryptography::X509Certificates::X509RevocationMode __get__checkCertificateRevocation() const;

 System::Security::Authentication::SslProtocols __declspec(property(get=__get__enabledSslProtocols, put=__set__enabledSslProtocols))  _enabledSslProtocols;

constexpr void __set__enabledSslProtocols(System::Security::Authentication::SslProtocols value) ;

constexpr System::Security::Authentication::SslProtocols __get__enabledSslProtocols() const;

 bool __declspec(property(get=__get__allowRenegotiation, put=__set__allowRenegotiation))  _allowRenegotiation;

constexpr void __set__allowRenegotiation(bool value) ;

constexpr bool __get__allowRenegotiation() const;

 System::Net::Security::LocalCertificateSelectionCallback __declspec(property(get=__get__LocalCertificateSelectionCallback_k__BackingField, put=__set__LocalCertificateSelectionCallback_k__BackingField))  _LocalCertificateSelectionCallback_k__BackingField;

constexpr void __set__LocalCertificateSelectionCallback_k__BackingField(System::Net::Security::LocalCertificateSelectionCallback value) ;

constexpr System::Net::Security::LocalCertificateSelectionCallback __get__LocalCertificateSelectionCallback_k__BackingField() const;

 ::StringW __declspec(property(get=__get__TargetHost_k__BackingField, put=__set__TargetHost_k__BackingField))  _TargetHost_k__BackingField;

constexpr void __set__TargetHost_k__BackingField(::StringW value) ;

constexpr ::StringW __get__TargetHost_k__BackingField() const;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=__get__ClientCertificates_k__BackingField, put=__set__ClientCertificates_k__BackingField))  _ClientCertificates_k__BackingField;

constexpr void __set__ClientCertificates_k__BackingField(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509CertificateCollection __get__ClientCertificates_k__BackingField() const;


// Properties

 System::Net::Security::LocalCertificateSelectionCallback __declspec(property(put=set_LocalCertificateSelectionCallback))  LocalCertificateSelectionCallback;

 ::StringW __declspec(property(get=get_TargetHost, put=set_TargetHost))  TargetHost;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_ClientCertificates, put=set_ClientCertificates))  ClientCertificates;

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(put=set_CertificateRevocationCheckMode))  CertificateRevocationCheckMode;

 System::Net::Security::EncryptionPolicy __declspec(property(put=set_EncryptionPolicy))  EncryptionPolicy;

 System::Security::Authentication::SslProtocols __declspec(property(get=get_EnabledSslProtocols, put=set_EnabledSslProtocols))  EnabledSslProtocols;


// Methods

/// @brief Method set_LocalCertificateSelectionCallback addr 0x276cae8 size 0x8 virtual false final false
 void set_LocalCertificateSelectionCallback(System::Net::Security::LocalCertificateSelectionCallback value) ;

/// @brief Method get_TargetHost addr 0x276caf0 size 0x8 virtual false final false
 ::StringW get_TargetHost() ;

/// @brief Method set_TargetHost addr 0x276caf8 size 0x8 virtual false final false
 void set_TargetHost(::StringW value) ;

/// @brief Method get_ClientCertificates addr 0x276cb00 size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509CertificateCollection get_ClientCertificates() ;

/// @brief Method set_ClientCertificates addr 0x276cb08 size 0x8 virtual false final false
 void set_ClientCertificates(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

/// @brief Method set_CertificateRevocationCheckMode addr 0x276cb10 size 0xa0 virtual false final false
 void set_CertificateRevocationCheckMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

/// @brief Method set_EncryptionPolicy addr 0x276cbb0 size 0xa0 virtual false final false
 void set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value) ;

/// @brief Method get_EnabledSslProtocols addr 0x276cc50 size 0x8 virtual false final false
 System::Security::Authentication::SslProtocols get_EnabledSslProtocols() ;

/// @brief Method set_EnabledSslProtocols addr 0x276cc58 size 0x8 virtual false final false
 void set_EnabledSslProtocols(System::Security::Authentication::SslProtocols value) ;

// Ctor Parameters []
explicit SslClientAuthenticationOptions() ;

/// @brief Method .ctor addr 0x276cc60 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
NEED_NO_BOX(System::Net::Security::SslClientAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::SslClientAuthenticationOptions, "System.Net.Security", "SslClientAuthenticationOptions");
