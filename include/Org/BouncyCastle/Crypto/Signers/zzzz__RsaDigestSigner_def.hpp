#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class RsaDigestSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::RsaDigestSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1152))
// CS Name: Org.BouncyCastle.Crypto.Signers.RsaDigestSigner
class CORDL_TYPE RsaDigestSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ISigner
constexpr operator  ::Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RsaDigestSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaDigestSigner", modifiers: " const&", def_value: None }]
constexpr RsaDigestSigner(RsaDigestSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaDigestSigner", modifiers: "&&", def_value: None }]
constexpr RsaDigestSigner(RsaDigestSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaDigestSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaDigestSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaDigestSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaDigestSigner& operator=(RsaDigestSigner&& o) noexcept = default;
  constexpr RsaDigestSigner& operator=(RsaDigestSigner const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_rsaEngine, put=__set_rsaEngine))  rsaEngine;

constexpr void __set_rsaEngine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_rsaEngine() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algId, put=__set_algId))  algId;

constexpr void __set_algId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algId() const;

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;

static ::System::Collections::IDictionary __declspec(property(get=__get_oidMap, put=__set_oidMap))  oidMap;

static void __set_oidMap(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_oidMap() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit RsaDigestSigner(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xec75e8 size 0x1ac virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "digestOid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit RsaDigestSigner(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid) ;

/// @brief Method .ctor addr 0xec7794 size 0xb0 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid) ;

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "algId", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit RsaDigestSigner(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId) ;

/// @brief Method .ctor addr 0xec7844 size 0x7c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId) ;

// Ctor Parameters [CppParam { name: "rsa", ty: "::Org::BouncyCastle::Crypto::IRsa", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "digestOid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit RsaDigestSigner(::Org::BouncyCastle::Crypto::IRsa rsa, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid) ;

/// @brief Method .ctor addr 0xec794c size 0xc0 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IRsa rsa, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid) ;

// Ctor Parameters [CppParam { name: "rsa", ty: "::Org::BouncyCastle::Crypto::IRsa", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "algId", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit RsaDigestSigner(::Org::BouncyCastle::Crypto::IRsa rsa, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId) ;

/// @brief Method .ctor addr 0xec78c0 size 0x8c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IRsa rsa, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId) ;

// Ctor Parameters [CppParam { name: "rsaEngine", ty: "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "algId", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit RsaDigestSigner(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher rsaEngine, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId) ;

/// @brief Method .ctor addr 0xec7a0c size 0x90 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher rsaEngine, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId) ;

/// @brief Method get_AlgorithmName addr 0xec7a9c size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xec7b5c size 0x228 virtual true final false
 void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xec7d84 size 0xac virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xec7e30 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method GenerateSignature addr 0xec7ef4 size 0x230 virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xec81ac size 0x428 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xec85d4 size 0xa4 virtual true final false
 void Reset() ;

/// @brief Method DerEncode addr 0xec8124 size 0x88 virtual false final false
 ::ArrayW<uint8_t> DerEncode(::ArrayW<uint8_t> hash) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner, "Org.BouncyCastle.Crypto.Signers", "RsaDigestSigner");
