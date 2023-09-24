#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsSigner;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1175))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner
class CORDL_TYPE AbstractTlsSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsSigner
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsSigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AbstractTlsSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSigner", modifiers: " const&", def_value: None }]
constexpr AbstractTlsSigner(AbstractTlsSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSigner", modifiers: "&&", def_value: None }]
constexpr AbstractTlsSigner(AbstractTlsSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractTlsSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsSigner& operator=(AbstractTlsSigner&& o) noexcept = default;
  constexpr AbstractTlsSigner& operator=(AbstractTlsSigner const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsContext __get_mContext() const;


// Methods

/// @brief Method Init addr 0xecd7f4 size 0x8 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method GenerateRawSignature addr 0xecd7fc size 0x1c virtual true final false
 ::ArrayW<uint8_t> GenerateRawSignature(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> md5AndSha1) ;

/// @brief Method GenerateRawSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GenerateRawSignature(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> hash) ;

/// @brief Method VerifyRawSignature addr 0xecd818 size 0x20 virtual true final false
 bool VerifyRawSignature(::ArrayW<uint8_t> sigBytes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, ::ArrayW<uint8_t> md5AndSha1) ;

/// @brief Method VerifyRawSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VerifyRawSignature(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::ArrayW<uint8_t> sigBytes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, ::ArrayW<uint8_t> hash) ;

/// @brief Method CreateSigner addr 0xecd838 size 0x18 virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method CreateSigner addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateSigner(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method CreateVerifyer addr 0xecd850 size 0x18 virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateVerifyer(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method CreateVerifyer addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateVerifyer(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method IsValidPublicKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsValidPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

static Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner New_ctor() ;

/// @brief Method .ctor addr 0xecd868 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsSigner");
