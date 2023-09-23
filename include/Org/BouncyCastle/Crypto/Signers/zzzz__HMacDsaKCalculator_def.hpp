#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class HMacDsaKCalculator;
}
// Type: Org.BouncyCastle.Crypto.Signers::HMacDsaKCalculator
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1143))
// CS Name: Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator
class CORDL_TYPE HMacDsaKCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Signers::IDsaKCalculator
constexpr operator  Org::BouncyCastle::Crypto::Signers::IDsaKCalculator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMacDsaKCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMacDsaKCalculator", modifiers: " const&", def_value: None }]
constexpr HMacDsaKCalculator(HMacDsaKCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMacDsaKCalculator", modifiers: "&&", def_value: None }]
constexpr HMacDsaKCalculator(HMacDsaKCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMacDsaKCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMacDsaKCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMacDsaKCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMacDsaKCalculator& operator=(HMacDsaKCalculator&& o) noexcept = default;
  constexpr HMacDsaKCalculator& operator=(HMacDsaKCalculator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Macs::HMac __declspec(property(get=__get_hMac, put=__set_hMac))  hMac;

constexpr void __set_hMac(Org::BouncyCastle::Crypto::Macs::HMac value) ;

constexpr Org::BouncyCastle::Crypto::Macs::HMac __get_hMac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_K, put=__set_K))  K;

constexpr void __set_K(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_K() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_V, put=__set_V))  V;

constexpr void __set_V(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_V() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_n() const;


// Properties

 bool __declspec(property(get=get_IsDeterministic))  IsDeterministic;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit HMacDsaKCalculator(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xec0344 size 0xe8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method get_IsDeterministic addr 0xec042c size 0x8 virtual true final false
 bool get_IsDeterministic() ;

/// @brief Method Init addr 0xec0434 size 0x50 virtual true final false
 void Init(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Init addr 0xec0484 size 0x424 virtual true final true
 void Init(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger d, ::ArrayW<uint8_t> message) ;

/// @brief Method NextK addr 0xec0970 size 0x27c virtual true final false
 Org::BouncyCastle::Math::BigInteger NextK() ;

/// @brief Method BitsToInt addr 0xec08a8 size 0xc8 virtual false final false
 Org::BouncyCastle::Math::BigInteger BitsToInt(::ArrayW<uint8_t> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator, "Org.BouncyCastle.Crypto.Signers", "HMacDsaKCalculator");
