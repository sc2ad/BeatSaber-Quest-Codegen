#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__LongDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha384Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Sha384Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(769))
// CS Name: Org.BouncyCastle.Crypto.Digests.Sha384Digest
class CORDL_TYPE Sha384Digest : public ::Org::BouncyCastle::Crypto::Digests::LongDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~Sha384Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha384Digest", modifiers: " const&", def_value: None }]
constexpr Sha384Digest(Sha384Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha384Digest", modifiers: "&&", def_value: None }]
constexpr Sha384Digest(Sha384Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sha384Digest(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Digests::LongDigest(ptr) {
}


  constexpr Sha384Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sha384Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sha384Digest& operator=(Sha384Digest&& o) noexcept = default;
  constexpr Sha384Digest& operator=(Sha384Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{48};


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit Sha384Digest() ;

/// @brief Method .ctor addr 0xe1714c size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "::Org::BouncyCastle::Crypto::Digests::Sha384Digest", modifiers: "", def_value: None }]
explicit Sha384Digest(::Org::BouncyCastle::Crypto::Digests::Sha384Digest t) ;

/// @brief Method .ctor addr 0xe171a4 size 0x68 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Digests::Sha384Digest t) ;

/// @brief Method get_AlgorithmName addr 0xe1720c size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe1724c size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method DoFinal addr 0xe17254 size 0xb8 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe1730c size 0x48 virtual true final false
 void Reset() ;

/// @brief Method Copy addr 0xe17354 size 0x60 virtual true final false
 ::Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe173b4 size 0x88 virtual true final false
 void Reset(::Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha384Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha384Digest, "Org.BouncyCastle.Crypto.Digests", "Sha384Digest");
