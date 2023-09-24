#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__KeccakDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha3Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Sha3Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(755))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(770))
// CS Name: Org.BouncyCastle.Crypto.Digests.Sha3Digest
class CORDL_TYPE Sha3Digest : public Org::BouncyCastle::Crypto::Digests::KeccakDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Sha3Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha3Digest", modifiers: " const&", def_value: None }]
constexpr Sha3Digest(Sha3Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha3Digest", modifiers: "&&", def_value: None }]
constexpr Sha3Digest(Sha3Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sha3Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::KeccakDigest(ptr) {
}


  constexpr Sha3Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sha3Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sha3Digest& operator=(Sha3Digest&& o) noexcept = default;
  constexpr Sha3Digest& operator=(Sha3Digest const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method CheckBitLength addr 0xe1743c size 0xc4 virtual false final false
static int32_t CheckBitLength(int32_t bitLength) ;

static Org::BouncyCastle::Crypto::Digests::Sha3Digest New_ctor() ;

/// @brief Method .ctor addr 0xe17500 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Digests::Sha3Digest New_ctor(int32_t bitLength) ;

/// @brief Method .ctor addr 0xe17508 size 0x78 virtual false final false
 void _ctor(int32_t bitLength) ;

static Org::BouncyCastle::Crypto::Digests::Sha3Digest New_ctor(Org::BouncyCastle::Crypto::Digests::Sha3Digest source) ;

/// @brief Method .ctor addr 0xe17580 size 0x68 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::Sha3Digest source) ;

/// @brief Method get_AlgorithmName addr 0xe175e8 size 0x84 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method DoFinal addr 0xe1766c size 0x40 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe176ac size 0xe4 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff, uint8_t partialByte, int32_t partialBits) ;

/// @brief Method Copy addr 0xe17790 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Sha3Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha3Digest, "Org.BouncyCastle.Crypto.Digests", "Sha3Digest");
