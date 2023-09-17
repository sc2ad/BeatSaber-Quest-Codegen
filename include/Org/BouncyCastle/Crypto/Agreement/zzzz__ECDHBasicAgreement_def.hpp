#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHBasicAgreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::ECDHBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(736))
// CS Name: Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement
class CORDL_TYPE ECDHBasicAgreement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBasicAgreement
constexpr operator  ::Org::BouncyCastle::Crypto::IBasicAgreement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ECDHBasicAgreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHBasicAgreement", modifiers: " const&", def_value: None }]
constexpr ECDHBasicAgreement(ECDHBasicAgreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHBasicAgreement", modifiers: "&&", def_value: None }]
constexpr ECDHBasicAgreement(ECDHBasicAgreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECDHBasicAgreement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECDHBasicAgreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECDHBasicAgreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECDHBasicAgreement& operator=(ECDHBasicAgreement&& o) noexcept = default;
  constexpr ECDHBasicAgreement& operator=(ECDHBasicAgreement const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_privKey, put=__set_privKey))  privKey;

constexpr void __set_privKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_privKey() const;


// Methods

/// @brief Method Init addr 0x118f2b4 size 0xec virtual true final false
 void Init(::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetFieldSize addr 0x118f3a0 size 0x48 virtual true final false
 int32_t GetFieldSize() ;

/// @brief Method CalculateAgreement addr 0x118f3e8 size 0x268 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters pubKey) ;

// Ctor Parameters []
explicit ECDHBasicAgreement() ;

/// @brief Method .ctor addr 0x118f650 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement, "Org.BouncyCastle.Crypto.Agreement", "ECDHBasicAgreement");
