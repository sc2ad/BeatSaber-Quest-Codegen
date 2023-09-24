#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAgreementCredentials;
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
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsECDHKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsECDHKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1304))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange
class CORDL_TYPE TlsECDHKeyExchange : public Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~TlsECDHKeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsECDHKeyExchange", modifiers: " const&", def_value: None }]
constexpr TlsECDHKeyExchange(TlsECDHKeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsECDHKeyExchange", modifiers: "&&", def_value: None }]
constexpr TlsECDHKeyExchange(TlsECDHKeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsECDHKeyExchange(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(ptr) {
}


  constexpr TlsECDHKeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsECDHKeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsECDHKeyExchange& operator=(TlsECDHKeyExchange&& o) noexcept = default;
  constexpr TlsECDHKeyExchange& operator=(TlsECDHKeyExchange const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsSigner __declspec(property(get=__get_mTlsSigner, put=__set_mTlsSigner))  mTlsSigner;

constexpr void __set_mTlsSigner(Org::BouncyCastle::Crypto::Tls::TlsSigner value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSigner __get_mTlsSigner() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_mNamedCurves, put=__set_mNamedCurves))  mNamedCurves;

constexpr void __set_mNamedCurves(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_mNamedCurves() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mClientECPointFormats, put=__set_mClientECPointFormats))  mClientECPointFormats;

constexpr void __set_mClientECPointFormats(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mClientECPointFormats() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mServerECPointFormats, put=__set_mServerECPointFormats))  mServerECPointFormats;

constexpr void __set_mServerECPointFormats(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mServerECPointFormats() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_mServerPublicKey, put=__set_mServerPublicKey))  mServerPublicKey;

constexpr void __set_mServerPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_mServerPublicKey() const;

 Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials __declspec(property(get=__get_mAgreementCredentials, put=__set_mAgreementCredentials))  mAgreementCredentials;

constexpr void __set_mAgreementCredentials(Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials __get_mAgreementCredentials() const;

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_mECAgreePrivateKey, put=__set_mECAgreePrivateKey))  mECAgreePrivateKey;

constexpr void __set_mECAgreePrivateKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_mECAgreePrivateKey() const;

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=__get_mECAgreePublicKey, put=__set_mECAgreePublicKey))  mECAgreePublicKey;

constexpr void __set_mECAgreePublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __get_mECAgreePublicKey() const;


// Properties

 bool __declspec(property(get=get_RequiresServerKeyExchange))  RequiresServerKeyExchange;


// Methods

static Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange New_ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats) ;

/// @brief Method .ctor addr 0xf1cd7c size 0x140 virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats) ;

/// @brief Method Init addr 0xf1cecc size 0xc0 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method SkipServerCredentials addr 0xf1cf8c size 0x54 virtual true final false
 void SkipServerCredentials() ;

/// @brief Method ProcessServerCertificate addr 0xf1d020 size 0x3b0 virtual true final false
 void ProcessServerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method get_RequiresServerKeyExchange addr 0xf1d50c size 0x2c virtual true final false
 bool get_RequiresServerKeyExchange() ;

/// @brief Method GenerateServerKeyExchange addr 0xf1d538 size 0x164 virtual true final false
 ::ArrayW<uint8_t> GenerateServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0xf1d69c size 0x120 virtual true final false
 void ProcessServerKeyExchange(System::IO::Stream input) ;

/// @brief Method ValidateCertificateRequest addr 0xf1d848 size 0xe0 virtual true final false
 void ValidateCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method ProcessClientCredentials addr 0xf1d928 size 0x114 virtual true final false
 void ProcessClientCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials) ;

/// @brief Method GenerateClientKeyExchange addr 0xf1da3c size 0x110 virtual true final false
 void GenerateClientKeyExchange(System::IO::Stream output) ;

/// @brief Method ProcessClientCertificate addr 0xf1db4c size 0x54 virtual true final false
 void ProcessClientCertificate(Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate) ;

/// @brief Method ProcessClientKeyExchange addr 0xf1dba0 size 0xc8 virtual true final false
 void ProcessClientKeyExchange(System::IO::Stream input) ;

/// @brief Method GeneratePremasterSecret addr 0xf1dc68 size 0x128 virtual true final false
 ::ArrayW<uint8_t> GeneratePremasterSecret() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, "Org.BouncyCastle.Crypto.Tls", "TlsECDHKeyExchange");
