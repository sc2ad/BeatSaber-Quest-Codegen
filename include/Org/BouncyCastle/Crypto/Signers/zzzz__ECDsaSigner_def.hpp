#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class ECDsaSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::ECDsaSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1128))
// CS Name: Org.BouncyCastle.Crypto.Signers.ECDsaSigner
class CORDL_TYPE ECDsaSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsaExt
constexpr operator  Org::BouncyCastle::Crypto::IDsaExt() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsa
constexpr operator  Org::BouncyCastle::Crypto::IDsa() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ECDsaSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDsaSigner", modifiers: " const&", def_value: None }]
constexpr ECDsaSigner(ECDsaSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDsaSigner", modifiers: "&&", def_value: None }]
constexpr ECDsaSigner(ECDsaSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECDsaSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECDsaSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECDsaSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECDsaSigner& operator=(ECDsaSigner&& o) noexcept = default;
  constexpr ECDsaSigner& operator=(ECDsaSigner const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Eight, put=__set_Eight))  Eight;

static void __set_Eight(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Eight() ;

 Org::BouncyCastle::Crypto::Signers::IDsaKCalculator __declspec(property(get=__get_kCalculator, put=__set_kCalculator))  kCalculator;

constexpr void __set_kCalculator(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator value) ;

constexpr Org::BouncyCastle::Crypto::Signers::IDsaKCalculator __get_kCalculator() const;

 Org::BouncyCastle::Crypto::Parameters::ECKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECKeyParameters __get_key() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Order))  Order;


// Methods

static Org::BouncyCastle::Crypto::Signers::ECDsaSigner New_ctor() ;

/// @brief Method .ctor addr 0xeb9c54 size 0x70 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Signers::ECDsaSigner New_ctor(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator kCalculator) ;

/// @brief Method .ctor addr 0xeb9cc4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator kCalculator) ;

/// @brief Method get_AlgorithmName addr 0xeb9cf0 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xeb9d30 size 0x28c virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_Order addr 0xeb9fbc size 0x24 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Order() ;

/// @brief Method GenerateSignature addr 0xeb9fe0 size 0x480 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> GenerateSignature(::ArrayW<uint8_t> message) ;

/// @brief Method VerifySignature addr 0xeba460 size 0x388 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> message, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger s) ;

/// @brief Method CalculateE addr 0xeba7e8 size 0xc0 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateE(Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> message) ;

/// @brief Method CreateBasePointMultiplier addr 0xeba8a8 size 0x5c virtual true final false
 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier CreateBasePointMultiplier() ;

/// @brief Method GetDenominator addr 0xeba904 size 0x94 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement GetDenominator(int32_t coordinateSystem, Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method InitSecureRandom addr 0xeba998 size 0x70 virtual true final false
 Org::BouncyCastle::Security::SecureRandom InitSecureRandom(bool needed, Org::BouncyCastle::Security::SecureRandom provided) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::ECDsaSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::ECDsaSigner, "Org.BouncyCastle.Crypto.Signers", "ECDsaSigner");
