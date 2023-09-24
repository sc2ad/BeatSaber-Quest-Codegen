#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1174))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSigner
class CORDL_TYPE TlsSigner : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsSigner() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSigner(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method GenerateRawSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GenerateRawSignature(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> md5AndSha1) ;

/// @brief Method GenerateRawSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GenerateRawSignature(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> hash) ;

/// @brief Method VerifyRawSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VerifyRawSignature(::ArrayW<uint8_t> sigBytes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, ::ArrayW<uint8_t> md5AndSha1) ;

/// @brief Method VerifyRawSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VerifyRawSignature(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::ArrayW<uint8_t> sigBytes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, ::ArrayW<uint8_t> hash) ;

/// @brief Method CreateSigner addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method CreateSigner addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateSigner(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method CreateVerifyer addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateVerifyer(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method CreateVerifyer addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateVerifyer(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method IsValidPublicKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsValidPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsSigner, "Org.BouncyCastle.Crypto.Tls", "TlsSigner");
