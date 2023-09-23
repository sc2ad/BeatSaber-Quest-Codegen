#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Utilities;
}
// Type: Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Utilities
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(730))
// CS Name: Org.BouncyCastle.Crypto.Agreement.Srp.Srp6Utilities
class CORDL_TYPE Srp6Utilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Srp6Utilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6Utilities", modifiers: " const&", def_value: None }]
constexpr Srp6Utilities(Srp6Utilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6Utilities", modifiers: "&&", def_value: None }]
constexpr Srp6Utilities(Srp6Utilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Srp6Utilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Srp6Utilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Srp6Utilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Srp6Utilities& operator=(Srp6Utilities&& o) noexcept = default;
  constexpr Srp6Utilities& operator=(Srp6Utilities const& o) noexcept = default;
                


// Methods

/// @brief Method CalculateK addr 0x118d048 size 0xc virtual false final false
static Org::BouncyCastle::Math::BigInteger CalculateK(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method CalculateU addr 0x118ce64 size 0x4 virtual false final false
static Org::BouncyCastle::Math::BigInteger CalculateU(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger A, Org::BouncyCastle::Math::BigInteger B) ;

/// @brief Method CalculateX addr 0x118c930 size 0x408 virtual false final false
static Org::BouncyCastle::Math::BigInteger CalculateX(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

/// @brief Method GeneratePrivateValue addr 0x118cf44 size 0x104 virtual false final false
static Org::BouncyCastle::Math::BigInteger GeneratePrivateValue(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method ValidatePublicValue addr 0x118cd7c size 0xe8 virtual false final false
static Org::BouncyCastle::Math::BigInteger ValidatePublicValue(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method CalculateM1 addr 0x118d0d8 size 0x4 virtual false final false
static Org::BouncyCastle::Math::BigInteger CalculateM1(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger A, Org::BouncyCastle::Math::BigInteger B, Org::BouncyCastle::Math::BigInteger S) ;

/// @brief Method CalculateM2 addr 0x118d194 size 0x4 virtual false final false
static Org::BouncyCastle::Math::BigInteger CalculateM2(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger A, Org::BouncyCastle::Math::BigInteger M1, Org::BouncyCastle::Math::BigInteger S) ;

/// @brief Method CalculateKey addr 0x118d21c size 0x218 virtual false final false
static Org::BouncyCastle::Math::BigInteger CalculateKey(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger S) ;

/// @brief Method HashPaddedTriplet addr 0x118dd60 size 0x32c virtual false final false
static Org::BouncyCastle::Math::BigInteger HashPaddedTriplet(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger n1, Org::BouncyCastle::Math::BigInteger n2, Org::BouncyCastle::Math::BigInteger n3) ;

/// @brief Method HashPaddedPair addr 0x118dac0 size 0x2a0 virtual false final false
static Org::BouncyCastle::Math::BigInteger HashPaddedPair(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger n1, Org::BouncyCastle::Math::BigInteger n2) ;

/// @brief Method GetPadded addr 0x118e08c size 0x9c virtual false final false
static ::ArrayW<uint8_t> GetPadded(Org::BouncyCastle::Math::BigInteger n, int32_t length) ;

// Ctor Parameters []
explicit Srp6Utilities() ;

/// @brief Method .ctor addr 0x118e128 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6Utilities");
