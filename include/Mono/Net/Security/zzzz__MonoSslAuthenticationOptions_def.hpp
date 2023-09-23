#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Net::Security {
class ServerCertSelectionCallback;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
// Type: Mono.Net.Security::MonoSslAuthenticationOptions
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7690))
// CS Name: Mono.Net.Security.MonoSslAuthenticationOptions
class CORDL_TYPE MonoSslAuthenticationOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MonoSslAuthenticationOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoSslAuthenticationOptions", modifiers: " const&", def_value: None }]
constexpr MonoSslAuthenticationOptions(MonoSslAuthenticationOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoSslAuthenticationOptions", modifiers: "&&", def_value: None }]
constexpr MonoSslAuthenticationOptions(MonoSslAuthenticationOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoSslAuthenticationOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoSslAuthenticationOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoSslAuthenticationOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoSslAuthenticationOptions& operator=(MonoSslAuthenticationOptions&& o) noexcept = default;
  constexpr MonoSslAuthenticationOptions& operator=(MonoSslAuthenticationOptions const& o) noexcept = default;
                


// Fields

 System::Net::Security::ServerCertSelectionCallback __declspec(property(get=__get__ServerCertSelectionDelegate_k__BackingField, put=__set__ServerCertSelectionDelegate_k__BackingField))  _ServerCertSelectionDelegate_k__BackingField;

constexpr void __set__ServerCertSelectionDelegate_k__BackingField(System::Net::Security::ServerCertSelectionCallback value) ;

constexpr System::Net::Security::ServerCertSelectionCallback __get__ServerCertSelectionDelegate_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_ServerMode))  ServerMode;

 System::Security::Authentication::SslProtocols __declspec(property(get=get_EnabledSslProtocols, put=set_EnabledSslProtocols))  EnabledSslProtocols;

 System::Net::Security::EncryptionPolicy __declspec(property(put=set_EncryptionPolicy))  EncryptionPolicy;

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(put=set_CertificateRevocationCheckMode))  CertificateRevocationCheckMode;

 ::StringW __declspec(property(get=get_TargetHost, put=set_TargetHost))  TargetHost;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_ServerCertificate, put=set_ServerCertificate))  ServerCertificate;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_ClientCertificates, put=set_ClientCertificates))  ClientCertificates;

 bool __declspec(property(get=get_ClientCertificateRequired, put=set_ClientCertificateRequired))  ClientCertificateRequired;

 System::Net::Security::ServerCertSelectionCallback __declspec(property(get=get_ServerCertSelectionDelegate))  ServerCertSelectionDelegate;


// Methods

/// @brief Method get_ServerMode addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ServerMode() ;

/// @brief Method get_EnabledSslProtocols addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Authentication::SslProtocols get_EnabledSslProtocols() ;

/// @brief Method set_EnabledSslProtocols addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_EnabledSslProtocols(System::Security::Authentication::SslProtocols value) ;

/// @brief Method set_EncryptionPolicy addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value) ;

/// @brief Method set_CertificateRevocationCheckMode addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_CertificateRevocationCheckMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

/// @brief Method get_TargetHost addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_TargetHost() ;

/// @brief Method set_TargetHost addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_TargetHost(::StringW value) ;

/// @brief Method get_ServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_ServerCertificate() ;

/// @brief Method set_ServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_ServerCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

/// @brief Method get_ClientCertificates addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::X509Certificates::X509CertificateCollection get_ClientCertificates() ;

/// @brief Method set_ClientCertificates addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_ClientCertificates(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

/// @brief Method get_ClientCertificateRequired addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ClientCertificateRequired() ;

/// @brief Method set_ClientCertificateRequired addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_ClientCertificateRequired(bool value) ;

/// @brief Method get_ServerCertSelectionDelegate addr 0x269262c size 0x8 virtual false final false
 System::Net::Security::ServerCertSelectionCallback get_ServerCertSelectionDelegate() ;

// Ctor Parameters []
explicit MonoSslAuthenticationOptions() ;

/// @brief Method .ctor addr 0x2692634 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::MonoSslAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MonoSslAuthenticationOptions, "Mono.Net.Security", "MonoSslAuthenticationOptions");
