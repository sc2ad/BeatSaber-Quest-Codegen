#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace Mono::Net::Security {
class Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0;
}
namespace Mono::Security::Interface {
class ValidationResult;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System {
template<typename T>
class WeakReference_1;
}
namespace System::Net::Security {
class LocalCertSelectionCallback;
}
namespace Mono::Security::Interface {
class ICertificateValidator;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Forward declare root types
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace Mono::Net::Security {
class Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0;
}
// Type: ::<>c__DisplayClass11_0
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7678))
// CS Name: Mono.Net.Security.ChainValidationHelper::<>c__DisplayClass11_0
class CORDL_TYPE Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0", modifiers: " const&", def_value: None }]
constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0(Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0(Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0& operator=(Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0&& o) noexcept = default;
  constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0& operator=(Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0 const& o) noexcept = default;
                


// Fields

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get_settings() const;


// Methods

static Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0 New_ctor() ;

/// @brief Method .ctor addr 0x268ec68 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetValidationCallback>b__0 addr 0x268f36c size 0x160 virtual false final false
 bool _GetValidationCallback_b__0(::bs_hook::Il2CppWrapperType s, System::Security::Cryptography::X509Certificates::X509Certificate c, System::Security::Cryptography::X509Certificates::X509Chain ch, System::Net::Security::SslPolicyErrors e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: Mono.Net.Security::ChainValidationHelper
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7679))
// CS Name: Mono.Net.Security.ChainValidationHelper
class CORDL_TYPE ChainValidationHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass11_0 = Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0;

/// @brief Convert operator to Mono::Security::Interface::ICertificateValidator
constexpr operator  Mono::Security::Interface::ICertificateValidator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ChainValidationHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChainValidationHelper", modifiers: " const&", def_value: None }]
constexpr ChainValidationHelper(ChainValidationHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChainValidationHelper", modifiers: "&&", def_value: None }]
constexpr ChainValidationHelper(ChainValidationHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChainValidationHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChainValidationHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChainValidationHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChainValidationHelper& operator=(ChainValidationHelper&& o) noexcept = default;
  constexpr ChainValidationHelper& operator=(ChainValidationHelper const& o) noexcept = default;
                


// Fields

 System::WeakReference_1<System::Net::Security::SslStream> __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(System::WeakReference_1<System::Net::Security::SslStream> value) ;

constexpr System::WeakReference_1<System::Net::Security::SslStream> __get_owner() const;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get_settings() const;

 Mono::Net::Security::MobileTlsProvider __declspec(property(get=__get_provider, put=__set_provider))  provider;

constexpr void __set_provider(Mono::Net::Security::MobileTlsProvider value) ;

constexpr Mono::Net::Security::MobileTlsProvider __get_provider() const;

 System::Net::ServerCertValidationCallback __declspec(property(get=__get_certValidationCallback, put=__set_certValidationCallback))  certValidationCallback;

constexpr void __set_certValidationCallback(System::Net::ServerCertValidationCallback value) ;

constexpr System::Net::ServerCertValidationCallback __get_certValidationCallback() const;

 System::Net::Security::LocalCertSelectionCallback __declspec(property(get=__get_certSelectionCallback, put=__set_certSelectionCallback))  certSelectionCallback;

constexpr void __set_certSelectionCallback(System::Net::Security::LocalCertSelectionCallback value) ;

constexpr System::Net::Security::LocalCertSelectionCallback __get_certSelectionCallback() const;

 Mono::Net::Security::MonoTlsStream __declspec(property(get=__get_tlsStream, put=__set_tlsStream))  tlsStream;

constexpr void __set_tlsStream(Mono::Net::Security::MonoTlsStream value) ;

constexpr Mono::Net::Security::MonoTlsStream __get_tlsStream() const;

 System::Net::HttpWebRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get_request() const;


// Properties

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=get_Settings))  Settings;


// Methods

/// @brief Method GetInternalValidator addr 0x268e5cc size 0xe0 virtual false final false
static Mono::Net::Security::ChainValidationHelper GetInternalValidator(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings) ;

/// @brief Method Create addr 0x268e920 size 0x8c virtual false final false
static Mono::Net::Security::ChainValidationHelper Create(Mono::Net::Security::MobileTlsProvider provider, ByRef<Mono::Security::Interface::MonoTlsSettings> settings, Mono::Net::Security::MonoTlsStream stream) ;

static Mono::Net::Security::ChainValidationHelper New_ctor(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings, bool cloneSettings, Mono::Net::Security::MonoTlsStream stream) ;

/// @brief Method .ctor addr 0x268e6ac size 0x274 virtual false final false
 void _ctor(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings, bool cloneSettings, Mono::Net::Security::MonoTlsStream stream) ;

/// @brief Method GetValidationCallback addr 0x268eac8 size 0xf0 virtual false final false
static System::Net::ServerCertValidationCallback GetValidationCallback(Mono::Security::Interface::MonoTlsSettings settings) ;

/// @brief Method DefaultSelectionCallback addr 0x268ec70 size 0x3c virtual false final false
static System::Security::Cryptography::X509Certificates::X509Certificate DefaultSelectionCallback(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) ;

/// @brief Method get_Settings addr 0x268ecac size 0x8 virtual true final true
 Mono::Security::Interface::MonoTlsSettings get_Settings() ;

/// @brief Method SelectClientCertificate addr 0x268ecb4 size 0x3c virtual true final true
 bool SelectClientCertificate(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers, ByRef<System::Security::Cryptography::X509Certificates::X509Certificate> clientCertificate) ;

/// @brief Method ValidateCertificate addr 0x268ecf0 size 0xd4 virtual false final false
 Mono::Security::Interface::ValidationResult ValidateCertificate(::StringW host, bool serverMode, System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain) ;

/// @brief Method ValidateChain addr 0x268edc4 size 0xdc virtual false final false
 Mono::Security::Interface::ValidationResult ValidateChain(::StringW host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection certs, System::Net::Security::SslPolicyErrors errors) ;

/// @brief Method ValidateChain addr 0x268eea0 size 0x410 virtual false final false
 Mono::Security::Interface::ValidationResult ValidateChain(::StringW host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate leaf, ByRef<System::Security::Cryptography::X509Certificates::X509Chain> chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection certs, System::Net::Security::SslPolicyErrors errors) ;

/// @brief Method InvokeCallback addr 0x268f2b0 size 0xb4 virtual false final false
 bool InvokeCallback(System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors errors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::ChainValidationHelper);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::ChainValidationHelper, "Mono.Net.Security", "ChainValidationHelper");
NEED_NO_BOX(Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0, "Mono.Net.Security", "ChainValidationHelper/<>c__DisplayClass11_0");
