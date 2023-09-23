#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Gost3410DigestSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::Gost3410DigestSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1140))
// CS Name: Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner
class CORDL_TYPE Gost3410DigestSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Gost3410DigestSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410DigestSigner", modifiers: " const&", def_value: None }]
constexpr Gost3410DigestSigner(Gost3410DigestSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410DigestSigner", modifiers: "&&", def_value: None }]
constexpr Gost3410DigestSigner(Gost3410DigestSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410DigestSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3410DigestSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410DigestSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410DigestSigner& operator=(Gost3410DigestSigner&& o) noexcept = default;
  constexpr Gost3410DigestSigner& operator=(Gost3410DigestSigner const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 Org::BouncyCastle::Crypto::IDsa __declspec(property(get=__get_dsaSigner, put=__set_dsaSigner))  dsaSigner;

constexpr void __set_dsaSigner(Org::BouncyCastle::Crypto::IDsa value) ;

constexpr Org::BouncyCastle::Crypto::IDsa __get_dsaSigner() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 int32_t __declspec(property(get=__get_halfSize, put=__set_halfSize))  halfSize;

constexpr void __set_halfSize(int32_t value) ;

constexpr int32_t __get_halfSize() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "signer", ty: "Org::BouncyCastle::Crypto::IDsa", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit Gost3410DigestSigner(Org::BouncyCastle::Crypto::IDsa signer, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xebee74 size 0xcc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDsa signer, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method get_AlgorithmName addr 0xebef40 size 0x140 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebf080 size 0x228 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xebf2a8 size 0xac virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xebf354 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method GenerateSignature addr 0xebf418 size 0x3b8 virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xebf7d0 size 0x364 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebfb34 size 0xa4 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, "Org.BouncyCastle.Crypto.Signers", "Gost3410DigestSigner");
