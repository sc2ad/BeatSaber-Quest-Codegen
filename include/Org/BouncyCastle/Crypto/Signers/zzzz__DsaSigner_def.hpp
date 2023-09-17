#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class DsaSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::DsaSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1127))
// CS Name: Org.BouncyCastle.Crypto.Signers.DsaSigner
class CORDL_TYPE DsaSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDsaExt
constexpr operator  ::Org::BouncyCastle::Crypto::IDsaExt() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDsa
constexpr operator  ::Org::BouncyCastle::Crypto::IDsa() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DsaSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaSigner", modifiers: " const&", def_value: None }]
constexpr DsaSigner(DsaSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaSigner", modifiers: "&&", def_value: None }]
constexpr DsaSigner(DsaSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DsaSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaSigner& operator=(DsaSigner&& o) noexcept = default;
  constexpr DsaSigner& operator=(DsaSigner const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator __declspec(property(get=__get_kCalculator, put=__set_kCalculator))  kCalculator;

constexpr void __set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator value) ;

constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator __get_kCalculator() const;

 ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters __get_key() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Order))  Order;


// Methods

// Ctor Parameters []
explicit DsaSigner() ;

/// @brief Method .ctor addr 0xeb91a4 size 0x70 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "kCalculator", ty: "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator", modifiers: "", def_value: None }]
explicit DsaSigner(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator kCalculator) ;

/// @brief Method .ctor addr 0xeb9214 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator kCalculator) ;

/// @brief Method get_AlgorithmName addr 0xeb9240 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xeb9280 size 0x28c virtual true final false
 void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_Order addr 0xeb950c size 0x24 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_Order() ;

/// @brief Method GenerateSignature addr 0xeb9530 size 0x3b8 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> GenerateSignature(::ArrayW<uint8_t> message) ;

/// @brief Method VerifySignature addr 0xeb98e8 size 0x21c virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> message, ::Org::BouncyCastle::Math::BigInteger r, ::Org::BouncyCastle::Math::BigInteger s) ;

/// @brief Method CalculateE addr 0xeb9b04 size 0xe0 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger CalculateE(::Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> message) ;

/// @brief Method InitSecureRandom addr 0xeb9be4 size 0x70 virtual true final false
 ::Org::BouncyCastle::Security::SecureRandom InitSecureRandom(bool needed, ::Org::BouncyCastle::Security::SecureRandom provided) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::DsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::DsaSigner, "Org.BouncyCastle.Crypto.Signers", "DsaSigner");
