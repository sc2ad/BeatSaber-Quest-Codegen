#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
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
namespace Org::BouncyCastle::Crypto::Generators {
class DHParametersHelper;
}
// Type: Org.BouncyCastle.Crypto.Generators::DHParametersHelper
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(896))
// CS Name: Org.BouncyCastle.Crypto.Generators.DHParametersHelper
class CORDL_TYPE DHParametersHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DHParametersHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHParametersHelper", modifiers: " const&", def_value: None }]
constexpr DHParametersHelper(DHParametersHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHParametersHelper", modifiers: "&&", def_value: None }]
constexpr DHParametersHelper(DHParametersHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHParametersHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHParametersHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHParametersHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHParametersHelper& operator=(DHParametersHelper&& o) noexcept = default;
  constexpr DHParametersHelper& operator=(DHParametersHelper const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Six, put=__set_Six))  Six;

static void __set_Six(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Six() ;

static ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get_primeLists, put=__set_primeLists))  primeLists;

static void __set_primeLists(::ArrayW<::ArrayW<int32_t>> value) ;

static ::ArrayW<::ArrayW<int32_t>> __get_primeLists() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_primeProducts, put=__set_primeProducts))  primeProducts;

static void __set_primeProducts(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_primeProducts() ;

static ::ArrayW<Org::BouncyCastle::Math::BigInteger> __declspec(property(get=__get_BigPrimeProducts, put=__set_BigPrimeProducts))  BigPrimeProducts;

static void __set_BigPrimeProducts(::ArrayW<Org::BouncyCastle::Math::BigInteger> value) ;

static ::ArrayW<Org::BouncyCastle::Math::BigInteger> __get_BigPrimeProducts() ;


// Methods

/// @brief Method ConstructBigPrimeProducts addr 0xe6be4c size 0x110 virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::BigInteger> ConstructBigPrimeProducts(::ArrayW<int32_t> primeProducts) ;

/// @brief Method GenerateSafePrimes addr 0xe6b878 size 0x4dc virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::BigInteger> GenerateSafePrimes(int32_t size, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method SelectGenerator addr 0xe6bd54 size 0xf0 virtual false final false
static Org::BouncyCastle::Math::BigInteger SelectGenerator(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters []
explicit DHParametersHelper() ;

/// @brief Method .ctor addr 0xe6c004 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::DHParametersHelper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::DHParametersHelper, "Org.BouncyCastle.Crypto.Generators", "DHParametersHelper");
