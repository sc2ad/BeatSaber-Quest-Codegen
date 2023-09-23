#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAgreementCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsDHKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1298))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange
class CORDL_TYPE TlsDHKeyExchange : public Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~TlsDHKeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDHKeyExchange", modifiers: " const&", def_value: None }]
constexpr TlsDHKeyExchange(TlsDHKeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDHKeyExchange", modifiers: "&&", def_value: None }]
constexpr TlsDHKeyExchange(TlsDHKeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsDHKeyExchange(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(ptr) {
}


  constexpr TlsDHKeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsDHKeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsDHKeyExchange& operator=(TlsDHKeyExchange&& o) noexcept = default;
  constexpr TlsDHKeyExchange& operator=(TlsDHKeyExchange const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsSigner __declspec(property(get=__get_mTlsSigner, put=__set_mTlsSigner))  mTlsSigner;

constexpr void __set_mTlsSigner(Org::BouncyCastle::Crypto::Tls::TlsSigner value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSigner __get_mTlsSigner() const;

 Org::BouncyCastle::Crypto::Tls::TlsDHVerifier __declspec(property(get=__get_mDHVerifier, put=__set_mDHVerifier))  mDHVerifier;

constexpr void __set_mDHVerifier(Org::BouncyCastle::Crypto::Tls::TlsDHVerifier value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsDHVerifier __get_mDHVerifier() const;

 Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_mDHParameters, put=__set_mDHParameters))  mDHParameters;

constexpr void __set_mDHParameters(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHParameters __get_mDHParameters() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_mServerPublicKey, put=__set_mServerPublicKey))  mServerPublicKey;

constexpr void __set_mServerPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_mServerPublicKey() const;

 Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials __declspec(property(get=__get_mAgreementCredentials, put=__set_mAgreementCredentials))  mAgreementCredentials;

constexpr void __set_mAgreementCredentials(Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials __get_mAgreementCredentials() const;

 Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters __declspec(property(get=__get_mDHAgreePrivateKey, put=__set_mDHAgreePrivateKey))  mDHAgreePrivateKey;

constexpr void __set_mDHAgreePrivateKey(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters __get_mDHAgreePrivateKey() const;

 Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters __declspec(property(get=__get_mDHAgreePublicKey, put=__set_mDHAgreePublicKey))  mDHAgreePublicKey;

constexpr void __set_mDHAgreePublicKey(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters __get_mDHAgreePublicKey() const;


// Properties

 bool __declspec(property(get=get_RequiresServerKeyExchange))  RequiresServerKeyExchange;


// Methods

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "dhParameters", ty: "Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
explicit TlsDHKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

/// @brief Method .ctor addr 0xf16990 size 0x8c virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "dhVerifier", ty: "Org::BouncyCastle::Crypto::Tls::TlsDHVerifier", modifiers: "", def_value: None }, CppParam { name: "dhParameters", ty: "Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
explicit TlsDHKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

/// @brief Method .ctor addr 0xf16a1c size 0x13c virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

/// @brief Method Init addr 0xf16b60 size 0xc0 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method SkipServerCredentials addr 0xf16c20 size 0x58 virtual true final false
 void SkipServerCredentials() ;

/// @brief Method ProcessServerCertificate addr 0xf16c78 size 0x3c4 virtual true final false
 void ProcessServerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method get_RequiresServerKeyExchange addr 0xf1703c size 0x28 virtual true final false
 bool get_RequiresServerKeyExchange() ;

/// @brief Method GenerateServerKeyExchange addr 0xf17064 size 0x15c virtual true final false
 ::ArrayW<uint8_t> GenerateServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0xf17304 size 0x118 virtual true final false
 void ProcessServerKeyExchange(System::IO::Stream input) ;

/// @brief Method ValidateCertificateRequest addr 0xf175e4 size 0xcc virtual true final false
 void ValidateCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method ProcessClientCredentials addr 0xf176b0 size 0x118 virtual true final false
 void ProcessClientCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials) ;

/// @brief Method GenerateClientKeyExchange addr 0xf177c8 size 0x100 virtual true final false
 void GenerateClientKeyExchange(System::IO::Stream output) ;

/// @brief Method ProcessClientCertificate addr 0xf179e4 size 0x58 virtual true final false
 void ProcessClientCertificate(Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate) ;

/// @brief Method ProcessClientKeyExchange addr 0xf17a3c size 0xb4 virtual true final false
 void ProcessClientKeyExchange(System::IO::Stream input) ;

/// @brief Method GeneratePremasterSecret addr 0xf17af0 size 0x128 virtual true final false
 ::ArrayW<uint8_t> GeneratePremasterSecret() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, "Org.BouncyCastle.Crypto.Tls", "TlsDHKeyExchange");
