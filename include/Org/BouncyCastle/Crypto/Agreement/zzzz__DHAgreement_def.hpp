#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
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
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHAgreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::DHAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(732))
// CS Name: Org.BouncyCastle.Crypto.Agreement.DHAgreement
class CORDL_TYPE DHAgreement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DHAgreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHAgreement", modifiers: " const&", def_value: None }]
constexpr DHAgreement(DHAgreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHAgreement", modifiers: "&&", def_value: None }]
constexpr DHAgreement(DHAgreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHAgreement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHAgreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHAgreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHAgreement& operator=(DHAgreement&& o) noexcept = default;
  constexpr DHAgreement& operator=(DHAgreement const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters __get_key() const;

 ::Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_dhParams, put=__set_dhParams))  dhParams;

constexpr void __set_dhParams(::Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters __get_dhParams() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_privateValue, put=__set_privateValue))  privateValue;

constexpr void __set_privateValue(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_privateValue() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Methods

/// @brief Method Init addr 0x118e1ac size 0x1b8 virtual false final false
 void Init(::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method CalculateMessage addr 0x118e364 size 0x194 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger CalculateMessage() ;

/// @brief Method CalculateAgreement addr 0x118e4f8 size 0x298 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger CalculateAgreement(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters pub, ::Org::BouncyCastle::Math::BigInteger message) ;

// Ctor Parameters []
explicit DHAgreement() ;

/// @brief Method .ctor addr 0x118e790 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::DHAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, "Org.BouncyCastle.Crypto.Agreement", "DHAgreement");
