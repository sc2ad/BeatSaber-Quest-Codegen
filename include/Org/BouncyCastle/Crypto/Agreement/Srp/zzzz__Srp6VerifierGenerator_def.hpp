#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6VerifierGenerator;
}
// Type: Org.BouncyCastle.Crypto.Agreement.Srp::Srp6VerifierGenerator
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(731))
// CS Name: Org.BouncyCastle.Crypto.Agreement.Srp.Srp6VerifierGenerator
class CORDL_TYPE Srp6VerifierGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Srp6VerifierGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6VerifierGenerator", modifiers: " const&", def_value: None }]
constexpr Srp6VerifierGenerator(Srp6VerifierGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6VerifierGenerator", modifiers: "&&", def_value: None }]
constexpr Srp6VerifierGenerator(Srp6VerifierGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Srp6VerifierGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Srp6VerifierGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Srp6VerifierGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Srp6VerifierGenerator& operator=(Srp6VerifierGenerator&& o) noexcept = default;
  constexpr Srp6VerifierGenerator& operator=(Srp6VerifierGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_N, put=__set_N))  N;

constexpr void __set_N(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_N() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_g() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;


// Methods

static Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator New_ctor() ;

/// @brief Method .ctor addr 0x118e130 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x118e138 size 0xc virtual true final false
 void Init(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0x118e144 size 0x28 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method GenerateVerifier addr 0x118e16c size 0x40 virtual true final false
 Org::BouncyCastle::Math::BigInteger GenerateVerifier(::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6VerifierGenerator");
