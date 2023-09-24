#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECDHBasicAgreement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHWithKdfBasicAgreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::ECDHWithKdfBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(736))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(738))
// CS Name: Org.BouncyCastle.Crypto.Agreement.ECDHWithKdfBasicAgreement
class CORDL_TYPE ECDHWithKdfBasicAgreement : public Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ECDHWithKdfBasicAgreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHWithKdfBasicAgreement", modifiers: " const&", def_value: None }]
constexpr ECDHWithKdfBasicAgreement(ECDHWithKdfBasicAgreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHWithKdfBasicAgreement", modifiers: "&&", def_value: None }]
constexpr ECDHWithKdfBasicAgreement(ECDHWithKdfBasicAgreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECDHWithKdfBasicAgreement(void* ptr) noexcept : Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement(ptr) {
}


  constexpr ECDHWithKdfBasicAgreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECDHWithKdfBasicAgreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECDHWithKdfBasicAgreement& operator=(ECDHWithKdfBasicAgreement&& o) noexcept = default;
  constexpr ECDHWithKdfBasicAgreement& operator=(ECDHWithKdfBasicAgreement const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::StringW value) ;

constexpr ::StringW __get_algorithm() const;

 Org::BouncyCastle::Crypto::IDerivationFunction __declspec(property(get=__get_kdf, put=__set_kdf))  kdf;

constexpr void __set_kdf(Org::BouncyCastle::Crypto::IDerivationFunction value) ;

constexpr Org::BouncyCastle::Crypto::IDerivationFunction __get_kdf() const;


// Methods

static Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement New_ctor(::StringW algorithm, Org::BouncyCastle::Crypto::IDerivationFunction kdf) ;

/// @brief Method .ctor addr 0x118f988 size 0xa4 virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Crypto::IDerivationFunction kdf) ;

/// @brief Method CalculateAgreement addr 0x118fa2c size 0x26c virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters pubKey) ;

/// @brief Method BigIntToBytes addr 0x118fc98 size 0x3c virtual false final false
 ::ArrayW<uint8_t> BigIntToBytes(Org::BouncyCastle::Math::BigInteger r) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement, "Org.BouncyCastle.Crypto.Agreement", "ECDHWithKdfBasicAgreement");
