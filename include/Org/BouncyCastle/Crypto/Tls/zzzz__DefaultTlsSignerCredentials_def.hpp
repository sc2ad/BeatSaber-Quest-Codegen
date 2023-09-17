#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSignerCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsSignerCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsSignerCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1177))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1215))
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsSignerCredentials
class CORDL_TYPE DefaultTlsSignerCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DefaultTlsSignerCredentials() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSignerCredentials", modifiers: " const&", def_value: None }]
constexpr DefaultTlsSignerCredentials(DefaultTlsSignerCredentials const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSignerCredentials", modifiers: "&&", def_value: None }]
constexpr DefaultTlsSignerCredentials(DefaultTlsSignerCredentials&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTlsSignerCredentials(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials(ptr) {
}


  constexpr DefaultTlsSignerCredentials& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTlsSignerCredentials& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTlsSignerCredentials& operator=(DefaultTlsSignerCredentials&& o) noexcept = default;
  constexpr DefaultTlsSignerCredentials& operator=(DefaultTlsSignerCredentials const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext __get_mContext() const;

 ::Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=__get_mCertificate, put=__set_mCertificate))  mCertificate;

constexpr void __set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate __get_mCertificate() const;

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_mPrivateKey, put=__set_mPrivateKey))  mPrivateKey;

constexpr void __set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_mPrivateKey() const;

 ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm __declspec(property(get=__get_mSignatureAndHashAlgorithm, put=__set_mSignatureAndHashAlgorithm))  mSignatureAndHashAlgorithm;

constexpr void __set_mSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm __get_mSignatureAndHashAlgorithm() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsSigner __declspec(property(get=__get_mSigner, put=__set_mSigner))  mSigner;

constexpr void __set_mSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner __get_mSigner() const;


// Properties

 ::Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=get_Certificate))  Certificate;

 ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm __declspec(property(get=get_SignatureAndHashAlgorithm))  SignatureAndHashAlgorithm;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "::Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "certificate", ty: "::Org::BouncyCastle::Crypto::Tls::Certificate", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit DefaultTlsSignerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Tls::Certificate certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method .ctor addr 0xed68d0 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Tls::Certificate certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

// Ctor Parameters [CppParam { name: "context", ty: "::Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "certificate", ty: "::Org::BouncyCastle::Crypto::Tls::Certificate", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "signatureAndHashAlgorithm", ty: "::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm", modifiers: "", def_value: None }]
explicit DefaultTlsSignerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Tls::Certificate certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm signatureAndHashAlgorithm) ;

/// @brief Method .ctor addr 0xed68d8 size 0x420 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Tls::Certificate certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm signatureAndHashAlgorithm) ;

/// @brief Method get_Certificate addr 0xed6cf8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::Certificate get_Certificate() ;

/// @brief Method GenerateCertificateSignature addr 0xed6d00 size 0x238 virtual true final false
 ::ArrayW<uint8_t> GenerateCertificateSignature(::ArrayW<uint8_t> hash) ;

/// @brief Method get_SignatureAndHashAlgorithm addr 0xed6f38 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm get_SignatureAndHashAlgorithm() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsSignerCredentials");
