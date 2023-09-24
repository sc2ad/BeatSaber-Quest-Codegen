#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class SM2Signer;
}
// Type: Org.BouncyCastle.Crypto.Signers::SM2Signer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1153))
// CS Name: Org.BouncyCastle.Crypto.Signers.SM2Signer
class CORDL_TYPE SM2Signer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SM2Signer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2Signer", modifiers: " const&", def_value: None }]
constexpr SM2Signer(SM2Signer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2Signer", modifiers: "&&", def_value: None }]
constexpr SM2Signer(SM2Signer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM2Signer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SM2Signer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM2Signer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM2Signer& operator=(SM2Signer&& o) noexcept = default;
  constexpr SM2Signer& operator=(SM2Signer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Signers::IDsaKCalculator __declspec(property(get=__get_kCalculator, put=__set_kCalculator))  kCalculator;

constexpr void __set_kCalculator(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator value) ;

constexpr Org::BouncyCastle::Crypto::Signers::IDsaKCalculator __get_kCalculator() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 Org::BouncyCastle::Crypto::Signers::IDsaEncoding __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(Org::BouncyCastle::Crypto::Signers::IDsaEncoding value) ;

constexpr Org::BouncyCastle::Crypto::Signers::IDsaEncoding __get_encoding() const;

 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=__get_ecParams, put=__set_ecParams))  ecParams;

constexpr void __set_ecParams(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __get_ecParams() const;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_pubPoint, put=__set_pubPoint))  pubPoint;

constexpr void __set_pubPoint(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_pubPoint() const;

 Org::BouncyCastle::Crypto::Parameters::ECKeyParameters __declspec(property(get=__get_ecKey, put=__set_ecKey))  ecKey;

constexpr void __set_ecKey(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECKeyParameters __get_ecKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_z() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Signers::SM2Signer New_ctor() ;

/// @brief Method .ctor addr 0xec8678 size 0x98 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Signers::SM2Signer New_ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xec8790 size 0x70 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

static Org::BouncyCastle::Crypto::Signers::SM2Signer New_ctor(Org::BouncyCastle::Crypto::Signers::IDsaEncoding encoding) ;

/// @brief Method .ctor addr 0xec8800 size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Signers::IDsaEncoding encoding) ;

static Org::BouncyCastle::Crypto::Signers::SM2Signer New_ctor(Org::BouncyCastle::Crypto::Signers::IDsaEncoding encoding, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xec8710 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Signers::IDsaEncoding encoding, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method get_AlgorithmName addr 0xec8874 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xec88b4 size 0x654 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xec9078 size 0xac virtual true final false
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0xec9124 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method VerifySignature addr 0xec91e8 size 0x184 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xec95d0 size 0x134 virtual true final false
 void Reset() ;

/// @brief Method GenerateSignature addr 0xec9704 size 0x4fc virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xec936c size 0x264 virtual false final false
 bool VerifySignature(Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger s) ;

/// @brief Method GetZ addr 0xec8f08 size 0x170 virtual false final false
 ::ArrayW<uint8_t> GetZ(::ArrayW<uint8_t> userID) ;

/// @brief Method AddUserID addr 0xec9c00 size 0x188 virtual false final false
 void AddUserID(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> userID) ;

/// @brief Method AddFieldElement addr 0xec9d88 size 0xd4 virtual false final false
 void AddFieldElement(Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Math::EC::ECFieldElement v) ;

/// @brief Method CalculateE addr 0xec9e5c size 0x68 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateE(Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> message) ;

/// @brief Method CreateBasePointMultiplier addr 0xec9ec4 size 0x5c virtual true final false
 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier CreateBasePointMultiplier() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::SM2Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::SM2Signer, "Org.BouncyCastle.Crypto.Signers", "SM2Signer");
