#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class GenericSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::GenericSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1139))
// CS Name: Org.BouncyCastle.Crypto.Signers.GenericSigner
class CORDL_TYPE GenericSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GenericSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSigner", modifiers: " const&", def_value: None }]
constexpr GenericSigner(GenericSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSigner", modifiers: "&&", def_value: None }]
constexpr GenericSigner(GenericSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericSigner& operator=(GenericSigner&& o) noexcept = default;
  constexpr GenericSigner& operator=(GenericSigner const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_engine() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "engine", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit GenericSigner(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher engine, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xebe218 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher engine, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method get_AlgorithmName addr 0xebe244 size 0x274 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebe4b8 size 0x228 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xebe6e0 size 0xac virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xebe78c size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method GenerateSignature addr 0xebe850 size 0x220 virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xebea70 size 0x360 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebedd0 size 0xa4 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::GenericSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::GenericSigner, "Org.BouncyCastle.Crypto.Signers", "GenericSigner");
