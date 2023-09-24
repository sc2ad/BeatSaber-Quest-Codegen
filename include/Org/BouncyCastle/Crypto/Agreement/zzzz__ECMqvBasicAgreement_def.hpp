#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class MqvPrivateParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECMqvBasicAgreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::ECMqvBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(739))
// CS Name: Org.BouncyCastle.Crypto.Agreement.ECMqvBasicAgreement
class CORDL_TYPE ECMqvBasicAgreement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBasicAgreement
constexpr operator  Org::BouncyCastle::Crypto::IBasicAgreement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ECMqvBasicAgreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECMqvBasicAgreement", modifiers: " const&", def_value: None }]
constexpr ECMqvBasicAgreement(ECMqvBasicAgreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECMqvBasicAgreement", modifiers: "&&", def_value: None }]
constexpr ECMqvBasicAgreement(ECMqvBasicAgreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECMqvBasicAgreement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECMqvBasicAgreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECMqvBasicAgreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECMqvBasicAgreement& operator=(ECMqvBasicAgreement&& o) noexcept = default;
  constexpr ECMqvBasicAgreement& operator=(ECMqvBasicAgreement const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters __declspec(property(get=__get_privParams, put=__set_privParams))  privParams;

constexpr void __set_privParams(Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters __get_privParams() const;


// Methods

/// @brief Method Init addr 0x118fcd4 size 0xec virtual true final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetFieldSize addr 0x118fdc0 size 0x58 virtual true final false
 int32_t GetFieldSize() ;

/// @brief Method CalculateAgreement addr 0x118fe18 size 0x20c virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters pubKey) ;

/// @brief Method CalculateMqvAgreement addr 0x1190024 size 0x254 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint CalculateMqvAgreement(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters d1U, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters d2U, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters Q2U, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters Q1V, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters Q2V) ;

static Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement New_ctor() ;

/// @brief Method .ctor addr 0x1190278 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement, "Org.BouncyCastle.Crypto.Agreement", "ECMqvBasicAgreement");
