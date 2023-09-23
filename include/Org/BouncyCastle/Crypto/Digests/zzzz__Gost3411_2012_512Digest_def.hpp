#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__Gost3411_2012Digest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411_2012_512Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Gost3411_2012_512Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(752))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(754))
// CS Name: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest
class CORDL_TYPE Gost3411_2012_512Digest : public Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Gost3411_2012_512Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012_512Digest", modifiers: " const&", def_value: None }]
constexpr Gost3411_2012_512Digest(Gost3411_2012_512Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012_512Digest", modifiers: "&&", def_value: None }]
constexpr Gost3411_2012_512Digest(Gost3411_2012_512Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3411_2012_512Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest(ptr) {
}


  constexpr Gost3411_2012_512Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3411_2012_512Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3411_2012_512Digest& operator=(Gost3411_2012_512Digest&& o) noexcept = default;
  constexpr Gost3411_2012_512Digest& operator=(Gost3411_2012_512Digest const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_IV, put=__set_IV))  IV;

static void __set_IV(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_IV() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x1199fac size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

// Ctor Parameters []
explicit Gost3411_2012_512Digest() ;

/// @brief Method .ctor addr 0x1199fec size 0x8c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "other", ty: "Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest", modifiers: "", def_value: None }]
explicit Gost3411_2012_512Digest(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest other) ;

/// @brief Method .ctor addr 0x119a078 size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest other) ;

/// @brief Method GetDigestSize addr 0x119a11c size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method Copy addr 0x119a124 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_512Digest");
