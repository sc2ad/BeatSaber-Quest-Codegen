#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentityManager;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsPskKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1317))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsPskKeyExchange
class CORDL_TYPE TlsPskKeyExchange : public Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~TlsPskKeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsPskKeyExchange", modifiers: " const&", def_value: None }]
constexpr TlsPskKeyExchange(TlsPskKeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsPskKeyExchange", modifiers: "&&", def_value: None }]
constexpr TlsPskKeyExchange(TlsPskKeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsPskKeyExchange(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(ptr) {
}


  constexpr TlsPskKeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsPskKeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsPskKeyExchange& operator=(TlsPskKeyExchange&& o) noexcept = default;
  constexpr TlsPskKeyExchange& operator=(TlsPskKeyExchange const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsPskIdentity __declspec(property(get=__get_mPskIdentity, put=__set_mPskIdentity))  mPskIdentity;

constexpr void __set_mPskIdentity(Org::BouncyCastle::Crypto::Tls::TlsPskIdentity value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsPskIdentity __get_mPskIdentity() const;

 Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager __declspec(property(get=__get_mPskIdentityManager, put=__set_mPskIdentityManager))  mPskIdentityManager;

constexpr void __set_mPskIdentityManager(Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager __get_mPskIdentityManager() const;

 Org::BouncyCastle::Crypto::Tls::TlsDHVerifier __declspec(property(get=__get_mDHVerifier, put=__set_mDHVerifier))  mDHVerifier;

constexpr void __set_mDHVerifier(Org::BouncyCastle::Crypto::Tls::TlsDHVerifier value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsDHVerifier __get_mDHVerifier() const;

 Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_mDHParameters, put=__set_mDHParameters))  mDHParameters;

constexpr void __set_mDHParameters(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHParameters __get_mDHParameters() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_mNamedCurves, put=__set_mNamedCurves))  mNamedCurves;

constexpr void __set_mNamedCurves(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_mNamedCurves() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mClientECPointFormats, put=__set_mClientECPointFormats))  mClientECPointFormats;

constexpr void __set_mClientECPointFormats(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mClientECPointFormats() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mServerECPointFormats, put=__set_mServerECPointFormats))  mServerECPointFormats;

constexpr void __set_mServerECPointFormats(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mServerECPointFormats() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPskIdentityHint, put=__set_mPskIdentityHint))  mPskIdentityHint;

constexpr void __set_mPskIdentityHint(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPskIdentityHint() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPsk, put=__set_mPsk))  mPsk;

constexpr void __set_mPsk(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPsk() const;

 Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters __declspec(property(get=__get_mDHAgreePrivateKey, put=__set_mDHAgreePrivateKey))  mDHAgreePrivateKey;

constexpr void __set_mDHAgreePrivateKey(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters __get_mDHAgreePrivateKey() const;

 Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters __declspec(property(get=__get_mDHAgreePublicKey, put=__set_mDHAgreePublicKey))  mDHAgreePublicKey;

constexpr void __set_mDHAgreePublicKey(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters __get_mDHAgreePublicKey() const;

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_mECAgreePrivateKey, put=__set_mECAgreePrivateKey))  mECAgreePrivateKey;

constexpr void __set_mECAgreePrivateKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_mECAgreePrivateKey() const;

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=__get_mECAgreePublicKey, put=__set_mECAgreePublicKey))  mECAgreePublicKey;

constexpr void __set_mECAgreePublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __get_mECAgreePublicKey() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_mServerPublicKey, put=__set_mServerPublicKey))  mServerPublicKey;

constexpr void __set_mServerPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_mServerPublicKey() const;

 Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=__get_mRsaServerPublicKey, put=__set_mRsaServerPublicKey))  mRsaServerPublicKey;

constexpr void __set_mRsaServerPublicKey(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __get_mRsaServerPublicKey() const;

 Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials __declspec(property(get=__get_mServerCredentials, put=__set_mServerCredentials))  mServerCredentials;

constexpr void __set_mServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials __get_mServerCredentials() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPremasterSecret, put=__set_mPremasterSecret))  mPremasterSecret;

constexpr void __set_mPremasterSecret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPremasterSecret() const;


// Properties

 bool __declspec(property(get=get_RequiresServerKeyExchange))  RequiresServerKeyExchange;


// Methods

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "pskIdentity", ty: "Org::BouncyCastle::Crypto::Tls::TlsPskIdentity", modifiers: "", def_value: None }, CppParam { name: "pskIdentityManager", ty: "Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager", modifiers: "", def_value: None }, CppParam { name: "dhParameters", ty: "Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }, CppParam { name: "namedCurves", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "clientECPointFormats", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverECPointFormats", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TlsPskKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity, Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager pskIdentityManager, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats) ;

/// @brief Method .ctor addr 0xf224e8 size 0xcc virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity, Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager pskIdentityManager, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats) ;

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "pskIdentity", ty: "Org::BouncyCastle::Crypto::Tls::TlsPskIdentity", modifiers: "", def_value: None }, CppParam { name: "pskIdentityManager", ty: "Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager", modifiers: "", def_value: None }, CppParam { name: "dhVerifier", ty: "Org::BouncyCastle::Crypto::Tls::TlsDHVerifier", modifiers: "", def_value: None }, CppParam { name: "dhParameters", ty: "Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }, CppParam { name: "namedCurves", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "clientECPointFormats", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverECPointFormats", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TlsPskKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity, Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager pskIdentityManager, Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats) ;

/// @brief Method .ctor addr 0xf225b4 size 0xcc virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity, Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager pskIdentityManager, Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats) ;

/// @brief Method SkipServerCredentials addr 0xf22680 size 0x54 virtual true final false
 void SkipServerCredentials() ;

/// @brief Method ProcessServerCredentials addr 0xf226d4 size 0x168 virtual true final false
 void ProcessServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials) ;

/// @brief Method GenerateServerKeyExchange addr 0xf2283c size 0x338 virtual true final false
 ::ArrayW<uint8_t> GenerateServerKeyExchange() ;

/// @brief Method ProcessServerCertificate addr 0xf22bfc size 0x26c virtual true final false
 void ProcessServerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method get_RequiresServerKeyExchange addr 0xf22e68 size 0x20 virtual true final false
 bool get_RequiresServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0xf22e88 size 0x190 virtual true final false
 void ProcessServerKeyExchange(System::IO::Stream input) ;

/// @brief Method ValidateCertificateRequest addr 0xf230a4 size 0x40 virtual true final false
 void ValidateCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method ProcessClientCredentials addr 0xf230e4 size 0x40 virtual true final false
 void ProcessClientCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials) ;

/// @brief Method GenerateClientKeyExchange addr 0xf23124 size 0x480 virtual true final false
 void GenerateClientKeyExchange(System::IO::Stream output) ;

/// @brief Method ProcessClientKeyExchange addr 0xf23998 size 0x37c virtual true final false
 void ProcessClientKeyExchange(System::IO::Stream input) ;

/// @brief Method GeneratePremasterSecret addr 0xf23d14 size 0x12c virtual true final false
 ::ArrayW<uint8_t> GeneratePremasterSecret() ;

/// @brief Method GenerateOtherSecret addr 0xf23e40 size 0x144 virtual true final false
 ::ArrayW<uint8_t> GenerateOtherSecret(int32_t pskLength) ;

/// @brief Method ValidateRsaPublicKey addr 0xf23f84 size 0x70 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters ValidateRsaPublicKey(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, "Org.BouncyCastle.Crypto.Tls", "TlsPskKeyExchange");
