#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsClient;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsClient
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1163))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1165))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsClient
class CORDL_TYPE AbstractTlsClient : public Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsClient
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsClient() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsPeer
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsPeer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~AbstractTlsClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsClient", modifiers: " const&", def_value: None }]
constexpr AbstractTlsClient(AbstractTlsClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsClient", modifiers: "&&", def_value: None }]
constexpr AbstractTlsClient(AbstractTlsClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsClient(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer(ptr) {
}


  constexpr AbstractTlsClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsClient& operator=(AbstractTlsClient&& o) noexcept = default;
  constexpr AbstractTlsClient& operator=(AbstractTlsClient const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsCipherFactory __declspec(property(get=__get_mCipherFactory, put=__set_mCipherFactory))  mCipherFactory;

constexpr void __set_mCipherFactory(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCipherFactory __get_mCipherFactory() const;

 Org::BouncyCastle::Crypto::Tls::TlsClientContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(Org::BouncyCastle::Crypto::Tls::TlsClientContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsClientContext __get_mContext() const;

 System::Collections::IList __declspec(property(get=__get_mSupportedSignatureAlgorithms, put=__set_mSupportedSignatureAlgorithms))  mSupportedSignatureAlgorithms;

constexpr void __set_mSupportedSignatureAlgorithms(System::Collections::IList value) ;

constexpr System::Collections::IList __get_mSupportedSignatureAlgorithms() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_mNamedCurves, put=__set_mNamedCurves))  mNamedCurves;

constexpr void __set_mNamedCurves(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_mNamedCurves() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mClientECPointFormats, put=__set_mClientECPointFormats))  mClientECPointFormats;

constexpr void __set_mClientECPointFormats(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mClientECPointFormats() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mServerECPointFormats, put=__set_mServerECPointFormats))  mServerECPointFormats;

constexpr void __set_mServerECPointFormats(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mServerECPointFormats() const;

 int32_t __declspec(property(get=__get_mSelectedCipherSuite, put=__set_mSelectedCipherSuite))  mSelectedCipherSuite;

constexpr void __set_mSelectedCipherSuite(int32_t value) ;

constexpr int32_t __get_mSelectedCipherSuite() const;

 int16_t __declspec(property(get=__get_mSelectedCompressionMethod, put=__set_mSelectedCompressionMethod))  mSelectedCompressionMethod;

constexpr void __set_mSelectedCompressionMethod(int16_t value) ;

constexpr int16_t __get_mSelectedCompressionMethod() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_ClientHelloRecordLayerVersion))  ClientHelloRecordLayerVersion;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_ClientVersion))  ClientVersion;

 bool __declspec(property(get=get_IsFallback))  IsFallback;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_MinimumVersion))  MinimumVersion;


// Methods

static Org::BouncyCastle::Crypto::Tls::AbstractTlsClient New_ctor() ;

/// @brief Method .ctor addr 0xecb33c size 0x6c virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Tls::AbstractTlsClient New_ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory) ;

/// @brief Method .ctor addr 0xecb3b0 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory) ;

/// @brief Method AllowUnexpectedServerExtension addr 0xecb3d8 size 0xb8 virtual true final false
 bool AllowUnexpectedServerExtension(int32_t extensionType, ::ArrayW<uint8_t> extensionData) ;

/// @brief Method CheckForUnexpectedServerExtension addr 0xecb490 size 0xd4 virtual true final false
 void CheckForUnexpectedServerExtension(System::Collections::IDictionary serverExtensions, int32_t extensionType) ;

/// @brief Method Init addr 0xecb564 size 0x8 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsClientContext context) ;

/// @brief Method GetSessionToResume addr 0xecb56c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSession GetSessionToResume() ;

/// @brief Method get_ClientHelloRecordLayerVersion addr 0xecb574 size 0x10 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ClientHelloRecordLayerVersion() ;

/// @brief Method get_ClientVersion addr 0xecb584 size 0x58 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ClientVersion() ;

/// @brief Method get_IsFallback addr 0xecb5dc size 0x8 virtual true final false
 bool get_IsFallback() ;

/// @brief Method GetClientExtensions addr 0xecb5e4 size 0x25c virtual true final false
 System::Collections::IDictionary GetClientExtensions() ;

/// @brief Method get_MinimumVersion addr 0xecb840 size 0x58 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_MinimumVersion() ;

/// @brief Method NotifyServerVersion addr 0xecb898 size 0x7c virtual true final false
 void NotifyServerVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion serverVersion) ;

/// @brief Method GetCipherSuites addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method GetCompressionMethods addr 0xecb914 size 0x44 virtual true final false
 ::ArrayW<uint8_t> GetCompressionMethods() ;

/// @brief Method NotifySessionID addr 0xecb958 size 0x4 virtual true final false
 void NotifySessionID(::ArrayW<uint8_t> sessionID) ;

/// @brief Method NotifySelectedCipherSuite addr 0xecb95c size 0x8 virtual true final false
 void NotifySelectedCipherSuite(int32_t selectedCipherSuite) ;

/// @brief Method NotifySelectedCompressionMethod addr 0xecb964 size 0xc virtual true final false
 void NotifySelectedCompressionMethod(uint8_t selectedCompressionMethod) ;

/// @brief Method ProcessServerExtensions addr 0xecb970 size 0x114 virtual true final false
 void ProcessServerExtensions(System::Collections::IDictionary serverExtensions) ;

/// @brief Method ProcessServerSupplementalData addr 0xecba84 size 0x4c virtual true final false
 void ProcessServerSupplementalData(System::Collections::IList serverSupplementalData) ;

/// @brief Method GetKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method GetAuthentication addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsAuthentication GetAuthentication() ;

/// @brief Method GetClientSupplementalData addr 0xecbad0 size 0x8 virtual true final false
 System::Collections::IList GetClientSupplementalData() ;

/// @brief Method GetCompression addr 0xecbad8 size 0x100 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCompression GetCompression() ;

/// @brief Method GetCipher addr 0xecbbd8 size 0x104 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCipher GetCipher() ;

/// @brief Method NotifyNewSessionTicket addr 0xecbcdc size 0x4 virtual true final false
 void NotifyNewSessionTicket(Org::BouncyCastle::Crypto::Tls::NewSessionTicket newSessionTicket) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsClient");
