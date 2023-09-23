#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class StandardDsaEncoding;
}
// Type: Org.BouncyCastle.Crypto.Signers::StandardDsaEncoding
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1154))
// CS Name: Org.BouncyCastle.Crypto.Signers.StandardDsaEncoding
class CORDL_TYPE StandardDsaEncoding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Signers::IDsaEncoding
constexpr operator  Org::BouncyCastle::Crypto::Signers::IDsaEncoding() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StandardDsaEncoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardDsaEncoding", modifiers: " const&", def_value: None }]
constexpr StandardDsaEncoding(StandardDsaEncoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardDsaEncoding", modifiers: "&&", def_value: None }]
constexpr StandardDsaEncoding(StandardDsaEncoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardDsaEncoding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandardDsaEncoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardDsaEncoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardDsaEncoding& operator=(StandardDsaEncoding&& o) noexcept = default;
  constexpr StandardDsaEncoding& operator=(StandardDsaEncoding const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding value) ;

static Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding __get_Instance() ;


// Methods

/// @brief Method Decode addr 0xec9f20 size 0x244 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> Decode(Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> encoding) ;

/// @brief Method Encode addr 0xeca164 size 0x158 virtual true final false
 ::ArrayW<uint8_t> Encode(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger s) ;

/// @brief Method CheckValue addr 0xeca2bc size 0xa0 virtual true final false
 Org::BouncyCastle::Math::BigInteger CheckValue(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method DecodeValue addr 0xeca35c size 0xc0 virtual true final false
 Org::BouncyCastle::Math::BigInteger DecodeValue(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Asn1::Asn1Sequence s, int32_t pos) ;

/// @brief Method EncodeValue addr 0xeca41c size 0x94 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger EncodeValue(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters []
explicit StandardDsaEncoding() ;

/// @brief Method .ctor addr 0xeca514 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding, "Org.BouncyCastle.Crypto.Signers", "StandardDsaEncoding");
