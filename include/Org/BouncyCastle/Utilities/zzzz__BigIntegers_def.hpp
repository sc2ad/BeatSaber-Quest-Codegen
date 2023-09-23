#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class BigIntegers;
}
// Type: Org.BouncyCastle.Utilities::BigIntegers
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1832))
// CS Name: Org.BouncyCastle.Utilities.BigIntegers
class CORDL_TYPE BigIntegers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BigIntegers() = default;

// Ctor Parameters [CppParam { name: "", ty: "BigIntegers", modifiers: " const&", def_value: None }]
constexpr BigIntegers(BigIntegers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BigIntegers", modifiers: "&&", def_value: None }]
constexpr BigIntegers(BigIntegers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BigIntegers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BigIntegers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BigIntegers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BigIntegers& operator=(BigIntegers&& o) noexcept = default;
  constexpr BigIntegers& operator=(BigIntegers const& o) noexcept = default;
                


// Fields

/// @brief Field MaxIterations offset 0
static constexpr int32_t  MaxIterations{1000};


// Methods

/// @brief Method AsUnsignedByteArray addr 0x10e2098 size 0x14 virtual false final false
static ::ArrayW<uint8_t> AsUnsignedByteArray(Org::BouncyCastle::Math::BigInteger n) ;

/// @brief Method AsUnsignedByteArray addr 0x10e20ac size 0x10c virtual false final false
static ::ArrayW<uint8_t> AsUnsignedByteArray(int32_t length, Org::BouncyCastle::Math::BigInteger n) ;

/// @brief Method AsUnsignedByteArray addr 0x10e21b8 size 0x14c virtual false final false
static void AsUnsignedByteArray(Org::BouncyCastle::Math::BigInteger value, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method CreateRandomBigInteger addr 0x10e2304 size 0x74 virtual false final false
static Org::BouncyCastle::Math::BigInteger CreateRandomBigInteger(int32_t bitLength, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method CreateRandomInRange addr 0x10e2378 size 0x214 virtual false final false
static Org::BouncyCastle::Math::BigInteger CreateRandomInRange(Org::BouncyCastle::Math::BigInteger min, Org::BouncyCastle::Math::BigInteger max, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method GetUnsignedByteLength addr 0x10e258c size 0x30 virtual false final false
static int32_t GetUnsignedByteLength(Org::BouncyCastle::Math::BigInteger n) ;

// Ctor Parameters []
explicit BigIntegers() ;

/// @brief Method .ctor addr 0x10e25bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
NEED_NO_BOX(Org::BouncyCastle::Utilities::BigIntegers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::BigIntegers, "Org.BouncyCastle.Utilities", "BigIntegers");
