#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class ECGost3410Signer;
}
// Type: Org.BouncyCastle.Crypto.Signers::ECGost3410Signer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1129))
// CS Name: Org.BouncyCastle.Crypto.Signers.ECGost3410Signer
class CORDL_TYPE ECGost3410Signer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsaExt
constexpr operator  Org::BouncyCastle::Crypto::IDsaExt() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsa
constexpr operator  Org::BouncyCastle::Crypto::IDsa() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ECGost3410Signer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410Signer", modifiers: " const&", def_value: None }]
constexpr ECGost3410Signer(ECGost3410Signer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410Signer", modifiers: "&&", def_value: None }]
constexpr ECGost3410Signer(ECGost3410Signer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECGost3410Signer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECGost3410Signer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECGost3410Signer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECGost3410Signer& operator=(ECGost3410Signer&& o) noexcept = default;
  constexpr ECGost3410Signer& operator=(ECGost3410Signer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ECKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECKeyParameters __get_key() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Order))  Order;


// Methods

/// @brief Method get_AlgorithmName addr 0xebaa80 size 0x1c virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebaa9c size 0x1f4 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_Order addr 0xebac90 size 0x24 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Order() ;

/// @brief Method GenerateSignature addr 0xebacb4 size 0x3a4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> GenerateSignature(::ArrayW<uint8_t> message) ;

/// @brief Method VerifySignature addr 0xebb058 size 0x304 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> message, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger s) ;

/// @brief Method CreateBasePointMultiplier addr 0xebb35c size 0x5c virtual true final false
 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier CreateBasePointMultiplier() ;

static Org::BouncyCastle::Crypto::Signers::ECGost3410Signer New_ctor() ;

/// @brief Method .ctor addr 0xebb3b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::ECGost3410Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::ECGost3410Signer, "Org.BouncyCastle.Crypto.Signers", "ECGost3410Signer");
