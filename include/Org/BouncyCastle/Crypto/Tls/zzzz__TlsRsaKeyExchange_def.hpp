#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsRsaKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsRsaKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1318))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange
class CORDL_TYPE TlsRsaKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TlsRsaKeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaKeyExchange", modifiers: " const&", def_value: None }]
constexpr TlsRsaKeyExchange(TlsRsaKeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaKeyExchange", modifiers: "&&", def_value: None }]
constexpr TlsRsaKeyExchange(TlsRsaKeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsRsaKeyExchange(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(ptr) {
}


  constexpr TlsRsaKeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsRsaKeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsRsaKeyExchange& operator=(TlsRsaKeyExchange&& o) noexcept = default;
  constexpr TlsRsaKeyExchange& operator=(TlsRsaKeyExchange const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_mServerPublicKey, put=__set_mServerPublicKey))  mServerPublicKey;

constexpr void __set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_mServerPublicKey() const;

 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=__get_mRsaServerPublicKey, put=__set_mRsaServerPublicKey))  mRsaServerPublicKey;

constexpr void __set_mRsaServerPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __get_mRsaServerPublicKey() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials __declspec(property(get=__get_mServerCredentials, put=__set_mServerCredentials))  mServerCredentials;

constexpr void __set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials __get_mServerCredentials() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPremasterSecret, put=__set_mPremasterSecret))  mPremasterSecret;

constexpr void __set_mPremasterSecret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPremasterSecret() const;


// Methods

// Ctor Parameters [CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit TlsRsaKeyExchange(::System::Collections::IList supportedSignatureAlgorithms) ;

/// @brief Method .ctor addr 0xf23ff4 size 0x18 virtual false final false
 void _ctor(::System::Collections::IList supportedSignatureAlgorithms) ;

/// @brief Method SkipServerCredentials addr 0xf2400c size 0x40 virtual true final false
 void SkipServerCredentials() ;

/// @brief Method ProcessServerCredentials addr 0xf2404c size 0x168 virtual true final false
 void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials) ;

/// @brief Method ProcessServerCertificate addr 0xf241b4 size 0x240 virtual true final false
 void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method ValidateCertificateRequest addr 0xf243f4 size 0x9c virtual true final false
 void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method ProcessClientCredentials addr 0xf24490 size 0x8c virtual true final false
 void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials) ;

/// @brief Method GenerateClientKeyExchange addr 0xf2451c size 0x28 virtual true final false
 void GenerateClientKeyExchange(::System::IO::Stream output) ;

/// @brief Method ProcessClientKeyExchange addr 0xf24544 size 0x118 virtual true final false
 void ProcessClientKeyExchange(::System::IO::Stream input) ;

/// @brief Method GeneratePremasterSecret addr 0xf2465c size 0x58 virtual true final false
 ::ArrayW<uint8_t> GeneratePremasterSecret() ;

/// @brief Method ValidateRsaPublicKey addr 0xf246b4 size 0x70 virtual true final false
 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters ValidateRsaPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange, "Org.BouncyCastle.Crypto.Tls", "TlsRsaKeyExchange");
