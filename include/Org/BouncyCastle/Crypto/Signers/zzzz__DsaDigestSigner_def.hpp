#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class DsaDigestSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::DsaDigestSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1124))
// CS Name: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
class CORDL_TYPE DsaDigestSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ISigner
constexpr operator  ::Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DsaDigestSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaDigestSigner", modifiers: " const&", def_value: None }]
constexpr DsaDigestSigner(DsaDigestSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaDigestSigner", modifiers: "&&", def_value: None }]
constexpr DsaDigestSigner(DsaDigestSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaDigestSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DsaDigestSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaDigestSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaDigestSigner& operator=(DsaDigestSigner&& o) noexcept = default;
  constexpr DsaDigestSigner& operator=(DsaDigestSigner const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IDsa __declspec(property(get=__get_dsa, put=__set_dsa))  dsa;

constexpr void __set_dsa(::Org::BouncyCastle::Crypto::IDsa value) ;

constexpr ::Org::BouncyCastle::Crypto::IDsa __get_dsa() const;

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding value) ;

constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding __get_encoding() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "dsa", ty: "::Org::BouncyCastle::Crypto::IDsa", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit DsaDigestSigner(::Org::BouncyCastle::Crypto::IDsa dsa, ::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xeb8380 size 0x80 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDsa dsa, ::Org::BouncyCastle::Crypto::IDigest digest) ;

// Ctor Parameters [CppParam { name: "dsa", ty: "::Org::BouncyCastle::Crypto::IDsaExt", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding", modifiers: "", def_value: None }]
explicit DsaDigestSigner(::Org::BouncyCastle::Crypto::IDsaExt dsa, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding encoding) ;

/// @brief Method .ctor addr 0xeb8400 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDsaExt dsa, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding encoding) ;

/// @brief Method get_AlgorithmName addr 0xeb843c size 0x140 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xeb857c size 0x228 virtual true final false
 void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xeb87a4 size 0xac virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xeb8850 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method GenerateSignature addr 0xeb8914 size 0x37c virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xeb8c90 size 0x370 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xeb9000 size 0xa4 virtual true final false
 void Reset() ;

/// @brief Method GetOrder addr 0xeb90a4 size 0x100 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger GetOrder() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, "Org.BouncyCastle.Crypto.Signers", "DsaDigestSigner");
