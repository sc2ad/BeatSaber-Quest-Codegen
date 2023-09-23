#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410KeyParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Gost3410Signer;
}
// Type: Org.BouncyCastle.Crypto.Signers::Gost3410Signer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1141))
// CS Name: Org.BouncyCastle.Crypto.Signers.Gost3410Signer
class CORDL_TYPE Gost3410Signer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsaExt
constexpr operator  Org::BouncyCastle::Crypto::IDsaExt() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsa
constexpr operator  Org::BouncyCastle::Crypto::IDsa() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Gost3410Signer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410Signer", modifiers: " const&", def_value: None }]
constexpr Gost3410Signer(Gost3410Signer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410Signer", modifiers: "&&", def_value: None }]
constexpr Gost3410Signer(Gost3410Signer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410Signer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3410Signer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410Signer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410Signer& operator=(Gost3410Signer&& o) noexcept = default;
  constexpr Gost3410Signer& operator=(Gost3410Signer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters __get_key() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Order))  Order;


// Methods

/// @brief Method get_AlgorithmName addr 0xebfbd8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebfc18 size 0x1ec virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_Order addr 0xebfe04 size 0x24 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Order() ;

/// @brief Method GenerateSignature addr 0xebfe28 size 0x270 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> GenerateSignature(::ArrayW<uint8_t> message) ;

/// @brief Method VerifySignature addr 0xec0098 size 0x2a4 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> message, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger s) ;

// Ctor Parameters []
explicit Gost3410Signer() ;

/// @brief Method .ctor addr 0xec033c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Gost3410Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Gost3410Signer, "Org.BouncyCastle.Crypto.Signers", "Gost3410Signer");
