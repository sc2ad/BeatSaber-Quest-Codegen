#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsServer;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsServer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1163))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1173))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsServer
class CORDL_TYPE AbstractTlsServer : public Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsServer
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsServer() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsPeer
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsPeer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~AbstractTlsServer() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsServer", modifiers: " const&", def_value: None }]
constexpr AbstractTlsServer(AbstractTlsServer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsServer", modifiers: "&&", def_value: None }]
constexpr AbstractTlsServer(AbstractTlsServer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsServer(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer(ptr) {
}


  constexpr AbstractTlsServer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsServer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsServer& operator=(AbstractTlsServer&& o) noexcept = default;
  constexpr AbstractTlsServer& operator=(AbstractTlsServer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsCipherFactory __declspec(property(get=__get_mCipherFactory, put=__set_mCipherFactory))  mCipherFactory;

constexpr void __set_mCipherFactory(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCipherFactory __get_mCipherFactory() const;

 Org::BouncyCastle::Crypto::Tls::TlsServerContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(Org::BouncyCastle::Crypto::Tls::TlsServerContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsServerContext __get_mContext() const;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_mClientVersion, put=__set_mClientVersion))  mClientVersion;

constexpr void __set_mClientVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_mClientVersion() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_mOfferedCipherSuites, put=__set_mOfferedCipherSuites))  mOfferedCipherSuites;

constexpr void __set_mOfferedCipherSuites(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_mOfferedCipherSuites() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mOfferedCompressionMethods, put=__set_mOfferedCompressionMethods))  mOfferedCompressionMethods;

constexpr void __set_mOfferedCompressionMethods(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mOfferedCompressionMethods() const;

 System::Collections::IDictionary __declspec(property(get=__get_mClientExtensions, put=__set_mClientExtensions))  mClientExtensions;

constexpr void __set_mClientExtensions(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_mClientExtensions() const;

 bool __declspec(property(get=__get_mEncryptThenMacOffered, put=__set_mEncryptThenMacOffered))  mEncryptThenMacOffered;

constexpr void __set_mEncryptThenMacOffered(bool value) ;

constexpr bool __get_mEncryptThenMacOffered() const;

 int16_t __declspec(property(get=__get_mMaxFragmentLengthOffered, put=__set_mMaxFragmentLengthOffered))  mMaxFragmentLengthOffered;

constexpr void __set_mMaxFragmentLengthOffered(int16_t value) ;

constexpr int16_t __get_mMaxFragmentLengthOffered() const;

 bool __declspec(property(get=__get_mTruncatedHMacOffered, put=__set_mTruncatedHMacOffered))  mTruncatedHMacOffered;

constexpr void __set_mTruncatedHMacOffered(bool value) ;

constexpr bool __get_mTruncatedHMacOffered() const;

 System::Collections::IList __declspec(property(get=__get_mSupportedSignatureAlgorithms, put=__set_mSupportedSignatureAlgorithms))  mSupportedSignatureAlgorithms;

constexpr void __set_mSupportedSignatureAlgorithms(System::Collections::IList value) ;

constexpr System::Collections::IList __get_mSupportedSignatureAlgorithms() const;

 bool __declspec(property(get=__get_mEccCipherSuitesOffered, put=__set_mEccCipherSuitesOffered))  mEccCipherSuitesOffered;

constexpr void __set_mEccCipherSuitesOffered(bool value) ;

constexpr bool __get_mEccCipherSuitesOffered() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_mNamedCurves, put=__set_mNamedCurves))  mNamedCurves;

constexpr void __set_mNamedCurves(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_mNamedCurves() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mClientECPointFormats, put=__set_mClientECPointFormats))  mClientECPointFormats;

constexpr void __set_mClientECPointFormats(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mClientECPointFormats() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mServerECPointFormats, put=__set_mServerECPointFormats))  mServerECPointFormats;

constexpr void __set_mServerECPointFormats(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mServerECPointFormats() const;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_mServerVersion, put=__set_mServerVersion))  mServerVersion;

constexpr void __set_mServerVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_mServerVersion() const;

 int32_t __declspec(property(get=__get_mSelectedCipherSuite, put=__set_mSelectedCipherSuite))  mSelectedCipherSuite;

constexpr void __set_mSelectedCipherSuite(int32_t value) ;

constexpr int32_t __get_mSelectedCipherSuite() const;

 uint8_t __declspec(property(get=__get_mSelectedCompressionMethod, put=__set_mSelectedCompressionMethod))  mSelectedCompressionMethod;

constexpr void __set_mSelectedCompressionMethod(uint8_t value) ;

constexpr uint8_t __get_mSelectedCompressionMethod() const;

 System::Collections::IDictionary __declspec(property(get=__get_mServerExtensions, put=__set_mServerExtensions))  mServerExtensions;

constexpr void __set_mServerExtensions(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_mServerExtensions() const;


// Properties

 bool __declspec(property(get=get_AllowEncryptThenMac))  AllowEncryptThenMac;

 bool __declspec(property(get=get_AllowTruncatedHMac))  AllowTruncatedHMac;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_MaximumVersion))  MaximumVersion;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_MinimumVersion))  MinimumVersion;


// Methods

// Ctor Parameters []
explicit AbstractTlsServer() ;

/// @brief Method .ctor addr 0xecc9ec size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "cipherFactory", ty: "Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }]
explicit AbstractTlsServer(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory) ;

/// @brief Method .ctor addr 0xecca58 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory) ;

/// @brief Method get_AllowEncryptThenMac addr 0xecca80 size 0x8 virtual true final false
 bool get_AllowEncryptThenMac() ;

/// @brief Method get_AllowTruncatedHMac addr 0xecca88 size 0x8 virtual true final false
 bool get_AllowTruncatedHMac() ;

/// @brief Method CheckServerExtensions addr 0xecca90 size 0x20 virtual true final false
 System::Collections::IDictionary CheckServerExtensions() ;

/// @brief Method GetCipherSuites addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method GetCompressionMethods addr 0xeccab0 size 0x44 virtual false final false
 ::ArrayW<uint8_t> GetCompressionMethods() ;

/// @brief Method get_MaximumVersion addr 0xeccaf4 size 0x58 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_MaximumVersion() ;

/// @brief Method get_MinimumVersion addr 0xeccb4c size 0x58 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_MinimumVersion() ;

/// @brief Method SupportsClientEccCapabilities addr 0xeccba4 size 0xf4 virtual true final false
 bool SupportsClientEccCapabilities(::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> ecPointFormats) ;

/// @brief Method Init addr 0xeccc98 size 0x8 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsServerContext context) ;

/// @brief Method NotifyClientVersion addr 0xeccca0 size 0x8 virtual true final false
 void NotifyClientVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion clientVersion) ;

/// @brief Method NotifyFallback addr 0xeccca8 size 0x7c virtual true final false
 void NotifyFallback(bool isFallback) ;

/// @brief Method NotifyOfferedCipherSuites addr 0xeccd24 size 0x74 virtual true final false
 void NotifyOfferedCipherSuites(::ArrayW<int32_t> offeredCipherSuites) ;

/// @brief Method NotifyOfferedCompressionMethods addr 0xeccd98 size 0x8 virtual true final false
 void NotifyOfferedCompressionMethods(::ArrayW<uint8_t> offeredCompressionMethods) ;

/// @brief Method ProcessClientExtensions addr 0xeccda0 size 0x168 virtual true final false
 void ProcessClientExtensions(System::Collections::IDictionary clientExtensions) ;

/// @brief Method GetServerVersion addr 0xeccf08 size 0xe0 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion GetServerVersion() ;

/// @brief Method GetSelectedCipherSuite addr 0xeccfe8 size 0x200 virtual true final false
 int32_t GetSelectedCipherSuite() ;

/// @brief Method GetSelectedCompressionMethod addr 0xecd1e8 size 0x118 virtual true final false
 uint8_t GetSelectedCompressionMethod() ;

/// @brief Method GetServerExtensions addr 0xecd300 size 0x20c virtual true final false
 System::Collections::IDictionary GetServerExtensions() ;

/// @brief Method GetServerSupplementalData addr 0xecd50c size 0x8 virtual true final false
 System::Collections::IList GetServerSupplementalData() ;

/// @brief Method GetCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCredentials GetCredentials() ;

/// @brief Method GetCertificateStatus addr 0xecd514 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::CertificateStatus GetCertificateStatus() ;

/// @brief Method GetKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method GetCertificateRequest addr 0xecd51c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::CertificateRequest GetCertificateRequest() ;

/// @brief Method ProcessClientSupplementalData addr 0xecd524 size 0x4c virtual true final false
 void ProcessClientSupplementalData(System::Collections::IList clientSupplementalData) ;

/// @brief Method NotifyClientCertificate addr 0xecd570 size 0x44 virtual true final false
 void NotifyClientCertificate(Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate) ;

/// @brief Method GetCompression addr 0xecd5b4 size 0xa8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCompression GetCompression() ;

/// @brief Method GetCipher addr 0xecd65c size 0x104 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCipher GetCipher() ;

/// @brief Method GetNewSessionTicket addr 0xecd760 size 0x94 virtual true final false
 Org::BouncyCastle::Crypto::Tls::NewSessionTicket GetNewSessionTicket() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsServer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsServer");
