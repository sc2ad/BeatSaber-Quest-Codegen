#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHCBasicAgreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::ECDHCBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(737))
// CS Name: Org.BouncyCastle.Crypto.Agreement.ECDHCBasicAgreement
class CORDL_TYPE ECDHCBasicAgreement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBasicAgreement
constexpr operator  Org::BouncyCastle::Crypto::IBasicAgreement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ECDHCBasicAgreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHCBasicAgreement", modifiers: " const&", def_value: None }]
constexpr ECDHCBasicAgreement(ECDHCBasicAgreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHCBasicAgreement", modifiers: "&&", def_value: None }]
constexpr ECDHCBasicAgreement(ECDHCBasicAgreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECDHCBasicAgreement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECDHCBasicAgreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECDHCBasicAgreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECDHCBasicAgreement& operator=(ECDHCBasicAgreement&& o) noexcept = default;
  constexpr ECDHCBasicAgreement& operator=(ECDHCBasicAgreement const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_privKey, put=__set_privKey))  privKey;

constexpr void __set_privKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_privKey() const;


// Methods

/// @brief Method Init addr 0x118f658 size 0xec virtual true final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetFieldSize addr 0x118f744 size 0x48 virtual true final false
 int32_t GetFieldSize() ;

/// @brief Method CalculateAgreement addr 0x118f78c size 0x1f4 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters pubKey) ;

// Ctor Parameters []
explicit ECDHCBasicAgreement() ;

/// @brief Method .ctor addr 0x118f980 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::ECDHCBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::ECDHCBasicAgreement, "Org.BouncyCastle.Crypto.Agreement", "ECDHCBasicAgreement");
