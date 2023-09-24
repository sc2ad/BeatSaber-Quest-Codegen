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
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class RandomDsaKCalculator;
}
// Type: Org.BouncyCastle.Crypto.Signers::RandomDsaKCalculator
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1151))
// CS Name: Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator
class CORDL_TYPE RandomDsaKCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Signers::IDsaKCalculator
constexpr operator  Org::BouncyCastle::Crypto::Signers::IDsaKCalculator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RandomDsaKCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomDsaKCalculator", modifiers: " const&", def_value: None }]
constexpr RandomDsaKCalculator(RandomDsaKCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomDsaKCalculator", modifiers: "&&", def_value: None }]
constexpr RandomDsaKCalculator(RandomDsaKCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomDsaKCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RandomDsaKCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomDsaKCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomDsaKCalculator& operator=(RandomDsaKCalculator&& o) noexcept = default;
  constexpr RandomDsaKCalculator& operator=(RandomDsaKCalculator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_q() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 bool __declspec(property(get=get_IsDeterministic))  IsDeterministic;


// Methods

/// @brief Method get_IsDeterministic addr 0xec6d0c size 0x8 virtual true final false
 bool get_IsDeterministic() ;

/// @brief Method Init addr 0xec6d14 size 0x8 virtual true final false
 void Init(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Init addr 0xec6d1c size 0x50 virtual true final false
 void Init(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger d, ::ArrayW<uint8_t> message) ;

/// @brief Method NextK addr 0xec6d6c size 0xc4 virtual true final false
 Org::BouncyCastle::Math::BigInteger NextK() ;

static Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator New_ctor() ;

/// @brief Method .ctor addr 0xec6e30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator, "Org.BouncyCastle.Crypto.Signers", "RandomDsaKCalculator");
