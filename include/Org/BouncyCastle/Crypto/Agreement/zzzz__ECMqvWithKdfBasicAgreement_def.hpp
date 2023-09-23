#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvBasicAgreement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECMqvWithKdfBasicAgreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::ECMqvWithKdfBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(739))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(740))
// CS Name: Org.BouncyCastle.Crypto.Agreement.ECMqvWithKdfBasicAgreement
class CORDL_TYPE ECMqvWithKdfBasicAgreement : public Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ECMqvWithKdfBasicAgreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECMqvWithKdfBasicAgreement", modifiers: " const&", def_value: None }]
constexpr ECMqvWithKdfBasicAgreement(ECMqvWithKdfBasicAgreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECMqvWithKdfBasicAgreement", modifiers: "&&", def_value: None }]
constexpr ECMqvWithKdfBasicAgreement(ECMqvWithKdfBasicAgreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECMqvWithKdfBasicAgreement(void* ptr) noexcept : Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement(ptr) {
}


  constexpr ECMqvWithKdfBasicAgreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECMqvWithKdfBasicAgreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECMqvWithKdfBasicAgreement& operator=(ECMqvWithKdfBasicAgreement&& o) noexcept = default;
  constexpr ECMqvWithKdfBasicAgreement& operator=(ECMqvWithKdfBasicAgreement const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::StringW value) ;

constexpr ::StringW __get_algorithm() const;

 Org::BouncyCastle::Crypto::IDerivationFunction __declspec(property(get=__get_kdf, put=__set_kdf))  kdf;

constexpr void __set_kdf(Org::BouncyCastle::Crypto::IDerivationFunction value) ;

constexpr Org::BouncyCastle::Crypto::IDerivationFunction __get_kdf() const;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "kdf", ty: "Org::BouncyCastle::Crypto::IDerivationFunction", modifiers: "", def_value: None }]
explicit ECMqvWithKdfBasicAgreement(::StringW algorithm, Org::BouncyCastle::Crypto::IDerivationFunction kdf) ;

/// @brief Method .ctor addr 0x1190280 size 0xa4 virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Crypto::IDerivationFunction kdf) ;

/// @brief Method CalculateAgreement addr 0x1190324 size 0x26c virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters pubKey) ;

/// @brief Method BigIntToBytes addr 0x1190590 size 0x4c virtual false final false
 ::ArrayW<uint8_t> BigIntToBytes(Org::BouncyCastle::Math::BigInteger r) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement, "Org.BouncyCastle.Crypto.Agreement", "ECMqvWithKdfBasicAgreement");
