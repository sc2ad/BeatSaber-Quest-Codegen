#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
// Forward declare root types
namespace Mono::Net::Security {
class MobileTlsContext;
}
// Type: Mono.Net.Security::MobileTlsContext
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7688))
// CS Name: Mono.Net.Security.MobileTlsContext
class CORDL_TYPE MobileTlsContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MobileTlsContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "MobileTlsContext", modifiers: " const&", def_value: None }]
constexpr MobileTlsContext(MobileTlsContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MobileTlsContext", modifiers: "&&", def_value: None }]
constexpr MobileTlsContext(MobileTlsContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MobileTlsContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MobileTlsContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MobileTlsContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MobileTlsContext& operator=(MobileTlsContext&& o) noexcept = default;
  constexpr MobileTlsContext& operator=(MobileTlsContext const& o) noexcept = default;
                


// Fields

 Mono::Net::Security::ChainValidationHelper __declspec(property(get=__get_certificateValidator, put=__set_certificateValidator))  certificateValidator;

constexpr void __set_certificateValidator(Mono::Net::Security::ChainValidationHelper value) ;

constexpr Mono::Net::Security::ChainValidationHelper __get_certificateValidator() const;

 Mono::Net::Security::MonoSslAuthenticationOptions __declspec(property(get=__get__Options_k__BackingField, put=__set__Options_k__BackingField))  _Options_k__BackingField;

constexpr void __set__Options_k__BackingField(Mono::Net::Security::MonoSslAuthenticationOptions value) ;

constexpr Mono::Net::Security::MonoSslAuthenticationOptions __get__Options_k__BackingField() const;

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=__get__Parent_k__BackingField, put=__set__Parent_k__BackingField))  _Parent_k__BackingField;

constexpr void __set__Parent_k__BackingField(Mono::Net::Security::MobileAuthenticatedStream value) ;

constexpr Mono::Net::Security::MobileAuthenticatedStream __get__Parent_k__BackingField() const;

 bool __declspec(property(get=__get__IsServer_k__BackingField, put=__set__IsServer_k__BackingField))  _IsServer_k__BackingField;

constexpr void __set__IsServer_k__BackingField(bool value) ;

constexpr bool __get__IsServer_k__BackingField() const;

 ::StringW __declspec(property(get=__get__TargetHost_k__BackingField, put=__set__TargetHost_k__BackingField))  _TargetHost_k__BackingField;

constexpr void __set__TargetHost_k__BackingField(::StringW value) ;

constexpr ::StringW __get__TargetHost_k__BackingField() const;

 ::StringW __declspec(property(get=__get__ServerName_k__BackingField, put=__set__ServerName_k__BackingField))  _ServerName_k__BackingField;

constexpr void __set__ServerName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ServerName_k__BackingField() const;

 bool __declspec(property(get=__get__AskForClientCertificate_k__BackingField, put=__set__AskForClientCertificate_k__BackingField))  _AskForClientCertificate_k__BackingField;

constexpr void __set__AskForClientCertificate_k__BackingField(bool value) ;

constexpr bool __get__AskForClientCertificate_k__BackingField() const;

 System::Security::Authentication::SslProtocols __declspec(property(get=__get__EnabledProtocols_k__BackingField, put=__set__EnabledProtocols_k__BackingField))  _EnabledProtocols_k__BackingField;

constexpr void __set__EnabledProtocols_k__BackingField(System::Security::Authentication::SslProtocols value) ;

constexpr System::Security::Authentication::SslProtocols __get__EnabledProtocols_k__BackingField() const;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=__get__ClientCertificates_k__BackingField, put=__set__ClientCertificates_k__BackingField))  _ClientCertificates_k__BackingField;

constexpr void __set__ClientCertificates_k__BackingField(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509CertificateCollection __get__ClientCertificates_k__BackingField() const;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=__get__LocalServerCertificate_k__BackingField, put=__set__LocalServerCertificate_k__BackingField))  _LocalServerCertificate_k__BackingField;

constexpr void __set__LocalServerCertificate_k__BackingField(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate __get__LocalServerCertificate_k__BackingField() const;


// Properties

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=get_Parent))  Parent;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=get_Settings))  Settings;

 bool __declspec(property(get=get_IsAuthenticated))  IsAuthenticated;

 bool __declspec(property(get=get_IsServer))  IsServer;

 ::StringW __declspec(property(get=get_TargetHost))  TargetHost;

 ::StringW __declspec(property(get=get_ServerName))  ServerName;

 bool __declspec(property(get=get_AskForClientCertificate))  AskForClientCertificate;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_ClientCertificates))  ClientCertificates;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_LocalServerCertificate, put=set_LocalServerCertificate))  LocalServerCertificate;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_LocalClientCertificate))  LocalClientCertificate;

 System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=get_RemoteCertificate))  RemoteCertificate;


// Methods

static Mono::Net::Security::MobileTlsContext New_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, Mono::Net::Security::MonoSslAuthenticationOptions options) ;

/// @brief Method .ctor addr 0x2688df0 size 0x140 virtual false final false
 void _ctor(Mono::Net::Security::MobileAuthenticatedStream parent, Mono::Net::Security::MonoSslAuthenticationOptions options) ;

/// @brief Method get_Parent addr 0x2692544 size 0x8 virtual false final false
 Mono::Net::Security::MobileAuthenticatedStream get_Parent() ;

/// @brief Method get_Settings addr 0x2689780 size 0x1c virtual false final false
 Mono::Security::Interface::MonoTlsSettings get_Settings() ;

/// @brief Method get_IsAuthenticated addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsAuthenticated() ;

/// @brief Method get_IsServer addr 0x269254c size 0x8 virtual false final false
 bool get_IsServer() ;

/// @brief Method get_TargetHost addr 0x2692554 size 0x8 virtual false final false
 ::StringW get_TargetHost() ;

/// @brief Method get_ServerName addr 0x269255c size 0x8 virtual false final false
 ::StringW get_ServerName() ;

/// @brief Method get_AskForClientCertificate addr 0x2692564 size 0x8 virtual false final false
 bool get_AskForClientCertificate() ;

/// @brief Method get_ClientCertificates addr 0x269256c size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509CertificateCollection get_ClientCertificates() ;

/// @brief Method StartHandshake addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartHandshake() ;

/// @brief Method ProcessHandshake addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ProcessHandshake() ;

/// @brief Method FinishHandshake addr 0x0 size 0xffffffffffffffff virtual true final false
 void FinishHandshake() ;

/// @brief Method get_LocalServerCertificate addr 0x2692574 size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_LocalServerCertificate() ;

/// @brief Method set_LocalServerCertificate addr 0x269257c size 0x8 virtual false final false
 void set_LocalServerCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

/// @brief Method get_LocalClientCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_LocalClientCertificate() ;

/// @brief Method get_RemoteCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate2 get_RemoteCertificate() ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ValueTuple_2<int32_t,bool> Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ValueTuple_2<int32_t,bool> Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Shutdown addr 0x0 size 0xffffffffffffffff virtual true final false
 void Shutdown() ;

/// @brief Method PendingRenegotiation addr 0x0 size 0xffffffffffffffff virtual true final false
 bool PendingRenegotiation() ;

/// @brief Method ValidateCertificate addr 0x2689b08 size 0x50 virtual false final false
 bool ValidateCertificate(System::Security::Cryptography::X509Certificates::X509Certificate2 leaf, System::Security::Cryptography::X509Certificates::X509Chain chain) ;

/// @brief Method SelectClientCertificate addr 0x268ac50 size 0x504 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate SelectClientCertificate(::ArrayW<::StringW> acceptableIssuers) ;

/// @brief Method Renegotiate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Renegotiate() ;

/// @brief Method Dispose addr 0x26907c8 size 0x70 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2692584 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x2692588 size 0xa4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::MobileTlsContext);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MobileTlsContext, "Mono.Net.Security", "MobileTlsContext");
