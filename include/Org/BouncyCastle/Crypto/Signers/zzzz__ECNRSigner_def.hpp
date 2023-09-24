#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class ECNRSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::ECNRSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1130))
// CS Name: Org.BouncyCastle.Crypto.Signers.ECNRSigner
class CORDL_TYPE ECNRSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsaExt
constexpr operator  Org::BouncyCastle::Crypto::IDsaExt() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsa
constexpr operator  Org::BouncyCastle::Crypto::IDsa() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ECNRSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECNRSigner", modifiers: " const&", def_value: None }]
constexpr ECNRSigner(ECNRSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECNRSigner", modifiers: "&&", def_value: None }]
constexpr ECNRSigner(ECNRSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECNRSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECNRSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECNRSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECNRSigner& operator=(ECNRSigner&& o) noexcept = default;
  constexpr ECNRSigner& operator=(ECNRSigner const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;

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

/// @brief Method get_AlgorithmName addr 0xebb3c0 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebb400 size 0x1f4 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_Order addr 0xebb5f4 size 0x24 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Order() ;

/// @brief Method GenerateSignature addr 0xebb618 size 0x3d0 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> GenerateSignature(::ArrayW<uint8_t> message) ;

/// @brief Method VerifySignature addr 0xebb9e8 size 0x2d8 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> message, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger s) ;

static Org::BouncyCastle::Crypto::Signers::ECNRSigner New_ctor() ;

/// @brief Method .ctor addr 0xebbcc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::ECNRSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::ECNRSigner, "Org.BouncyCastle.Crypto.Signers", "ECNRSigner");
