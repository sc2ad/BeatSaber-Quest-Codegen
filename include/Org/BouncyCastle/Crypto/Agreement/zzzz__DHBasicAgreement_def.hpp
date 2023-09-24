#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHBasicAgreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::DHBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(734))
// CS Name: Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement
class CORDL_TYPE DHBasicAgreement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBasicAgreement
constexpr operator  Org::BouncyCastle::Crypto::IBasicAgreement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DHBasicAgreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHBasicAgreement", modifiers: " const&", def_value: None }]
constexpr DHBasicAgreement(DHBasicAgreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHBasicAgreement", modifiers: "&&", def_value: None }]
constexpr DHBasicAgreement(DHBasicAgreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHBasicAgreement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHBasicAgreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHBasicAgreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHBasicAgreement& operator=(DHBasicAgreement&& o) noexcept = default;
  constexpr DHBasicAgreement& operator=(DHBasicAgreement const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters __get_key() const;

 Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_dhParams, put=__set_dhParams))  dhParams;

constexpr void __set_dhParams(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHParameters __get_dhParams() const;


// Methods

/// @brief Method Init addr 0x118e798 size 0x13c virtual true final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetFieldSize addr 0x118e8d4 size 0x44 virtual true final false
 int32_t GetFieldSize() ;

/// @brief Method CalculateAgreement addr 0x118e918 size 0x27c virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters pubKey) ;

static Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement New_ctor() ;

/// @brief Method .ctor addr 0x118eb94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement, "Org.BouncyCastle.Crypto.Agreement", "DHBasicAgreement");
