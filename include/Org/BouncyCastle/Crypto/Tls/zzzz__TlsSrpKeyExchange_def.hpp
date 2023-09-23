#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Client;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Server;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1326))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSrpKeyExchange
class CORDL_TYPE TlsSrpKeyExchange : public Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~TlsSrpKeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSrpKeyExchange", modifiers: " const&", def_value: None }]
constexpr TlsSrpKeyExchange(TlsSrpKeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSrpKeyExchange", modifiers: "&&", def_value: None }]
constexpr TlsSrpKeyExchange(TlsSrpKeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSrpKeyExchange(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(ptr) {
}


  constexpr TlsSrpKeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsSrpKeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsSrpKeyExchange& operator=(TlsSrpKeyExchange&& o) noexcept = default;
  constexpr TlsSrpKeyExchange& operator=(TlsSrpKeyExchange const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsSigner __declspec(property(get=__get_mTlsSigner, put=__set_mTlsSigner))  mTlsSigner;

constexpr void __set_mTlsSigner(Org::BouncyCastle::Crypto::Tls::TlsSigner value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSigner __get_mTlsSigner() const;

 Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier __declspec(property(get=__get_mGroupVerifier, put=__set_mGroupVerifier))  mGroupVerifier;

constexpr void __set_mGroupVerifier(Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier __get_mGroupVerifier() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mIdentity, put=__set_mIdentity))  mIdentity;

constexpr void __set_mIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mIdentity() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPassword, put=__set_mPassword))  mPassword;

constexpr void __set_mPassword(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPassword() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_mServerPublicKey, put=__set_mServerPublicKey))  mServerPublicKey;

constexpr void __set_mServerPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_mServerPublicKey() const;

 Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters __declspec(property(get=__get_mSrpGroup, put=__set_mSrpGroup))  mSrpGroup;

constexpr void __set_mSrpGroup(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters __get_mSrpGroup() const;

 Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client __declspec(property(get=__get_mSrpClient, put=__set_mSrpClient))  mSrpClient;

constexpr void __set_mSrpClient(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client value) ;

constexpr Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client __get_mSrpClient() const;

 Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server __declspec(property(get=__get_mSrpServer, put=__set_mSrpServer))  mSrpServer;

constexpr void __set_mSrpServer(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server value) ;

constexpr Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server __get_mSrpServer() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_mSrpPeerCredentials, put=__set_mSrpPeerCredentials))  mSrpPeerCredentials;

constexpr void __set_mSrpPeerCredentials(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_mSrpPeerCredentials() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_mSrpVerifier, put=__set_mSrpVerifier))  mSrpVerifier;

constexpr void __set_mSrpVerifier(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_mSrpVerifier() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSrpSalt, put=__set_mSrpSalt))  mSrpSalt;

constexpr void __set_mSrpSalt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSrpSalt() const;

 Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials __declspec(property(get=__get_mServerCredentials, put=__set_mServerCredentials))  mServerCredentials;

constexpr void __set_mServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials __get_mServerCredentials() const;


// Properties

 bool __declspec(property(get=get_RequiresServerKeyExchange))  RequiresServerKeyExchange;


// Methods

/// @brief Method CreateSigner addr 0xf29e64 size 0xfc virtual false final false
static Org::BouncyCastle::Crypto::Tls::TlsSigner CreateSigner(int32_t keyExchange) ;

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TlsSrpKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

/// @brief Method .ctor addr 0xf29f60 size 0x94 virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "groupVerifier", ty: "Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TlsSrpKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier groupVerifier, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

/// @brief Method .ctor addr 0xf29ff4 size 0xc4 virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier groupVerifier, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "loginParameters", ty: "Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters", modifiers: "", def_value: None }]
explicit TlsSrpKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<uint8_t> identity, Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters loginParameters) ;

/// @brief Method .ctor addr 0xf2a0b8 size 0xf8 virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<uint8_t> identity, Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters loginParameters) ;

/// @brief Method Init addr 0xf2a1b0 size 0xc0 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method SkipServerCredentials addr 0xf2a270 size 0x50 virtual true final false
 void SkipServerCredentials() ;

/// @brief Method ProcessServerCertificate addr 0xf2a2c0 size 0x278 virtual true final false
 void ProcessServerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method ProcessServerCredentials addr 0xf2a538 size 0x174 virtual true final false
 void ProcessServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials) ;

/// @brief Method get_RequiresServerKeyExchange addr 0xf2a6ac size 0x8 virtual true final false
 bool get_RequiresServerKeyExchange() ;

/// @brief Method GenerateServerKeyExchange addr 0xf2a6b4 size 0x534 virtual true final false
 ::ArrayW<uint8_t> GenerateServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0xf2abe8 size 0x538 virtual true final false
 void ProcessServerKeyExchange(System::IO::Stream input) ;

/// @brief Method ValidateCertificateRequest addr 0xf2b120 size 0x40 virtual true final false
 void ValidateCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method ProcessClientCredentials addr 0xf2b160 size 0x40 virtual true final false
 void ProcessClientCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials) ;

/// @brief Method GenerateClientKeyExchange addr 0xf2b1a0 size 0x114 virtual true final false
 void GenerateClientKeyExchange(System::IO::Stream output) ;

/// @brief Method ProcessClientKeyExchange addr 0xf2b32c size 0x1d4 virtual true final false
 void ProcessClientKeyExchange(System::IO::Stream input) ;

/// @brief Method GeneratePremasterSecret addr 0xf2b59c size 0x118 virtual true final false
 ::ArrayW<uint8_t> GeneratePremasterSecret() ;

/// @brief Method InitVerifyer addr 0xf2b6b4 size 0x1d0 virtual true final false
 Org::BouncyCastle::Crypto::ISigner InitVerifyer(Org::BouncyCastle::Crypto::Tls::TlsSigner tlsSigner, Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, "Org.BouncyCastle.Crypto.Tls", "TlsSrpKeyExchange");
