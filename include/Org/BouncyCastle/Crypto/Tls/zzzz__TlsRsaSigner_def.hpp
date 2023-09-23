#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsRsaSigner;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsRsaSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1319))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsRsaSigner
class CORDL_TYPE TlsRsaSigner : public Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TlsRsaSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaSigner", modifiers: " const&", def_value: None }]
constexpr TlsRsaSigner(TlsRsaSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaSigner", modifiers: "&&", def_value: None }]
constexpr TlsRsaSigner(TlsRsaSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsRsaSigner(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner(ptr) {
}


  constexpr TlsRsaSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsRsaSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsRsaSigner& operator=(TlsRsaSigner&& o) noexcept = default;
  constexpr TlsRsaSigner& operator=(TlsRsaSigner const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateRawSignature addr 0xf24724 size 0x208 virtual true final false
 ::ArrayW<uint8_t> GenerateRawSignature(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> hash) ;

/// @brief Method VerifyRawSignature addr 0xf2492c size 0x15c virtual true final false
 bool VerifyRawSignature(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::ArrayW<uint8_t> sigBytes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, ::ArrayW<uint8_t> hash) ;

/// @brief Method CreateSigner addr 0xf24a88 size 0x114 virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateSigner(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method CreateVerifyer addr 0xf24b9c size 0x1c virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateVerifyer(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method IsValidPublicKey addr 0xf24bb8 size 0x84 virtual true final false
 bool IsValidPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method MakeSigner addr 0xf24c3c size 0x2c4 virtual true final false
 Org::BouncyCastle::Crypto::ISigner MakeSigner(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, bool raw, bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters cp) ;

/// @brief Method CreateRsaImpl addr 0xf25170 size 0x8c virtual true final false
 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher CreateRsaImpl() ;

// Ctor Parameters []
explicit TlsRsaSigner() ;

/// @brief Method .ctor addr 0xf1cebc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsRsaSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsRsaSigner, "Org.BouncyCastle.Crypto.Tls", "TlsRsaSigner");
