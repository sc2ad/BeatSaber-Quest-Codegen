#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class PlainDsaEncoding;
}
// Type: Org.BouncyCastle.Crypto.Signers::PlainDsaEncoding
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1149))
// CS Name: Org.BouncyCastle.Crypto.Signers.PlainDsaEncoding
class CORDL_TYPE PlainDsaEncoding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding
constexpr operator  ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlainDsaEncoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlainDsaEncoding", modifiers: " const&", def_value: None }]
constexpr PlainDsaEncoding(PlainDsaEncoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlainDsaEncoding", modifiers: "&&", def_value: None }]
constexpr PlainDsaEncoding(PlainDsaEncoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlainDsaEncoding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlainDsaEncoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlainDsaEncoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlainDsaEncoding& operator=(PlainDsaEncoding&& o) noexcept = default;
  constexpr PlainDsaEncoding& operator=(PlainDsaEncoding const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding value) ;

static ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding __get_Instance() ;


// Methods

/// @brief Method Decode addr 0xec4eb8 size 0x198 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> Decode(::Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> encoding) ;

/// @brief Method Encode addr 0xec5050 size 0xcc virtual true final false
 ::ArrayW<uint8_t> Encode(::Org::BouncyCastle::Math::BigInteger n, ::Org::BouncyCastle::Math::BigInteger r, ::Org::BouncyCastle::Math::BigInteger s) ;

/// @brief Method CheckValue addr 0xec511c size 0x9c virtual true final false
 ::Org::BouncyCastle::Math::BigInteger CheckValue(::Org::BouncyCastle::Math::BigInteger n, ::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method DecodeValue addr 0xec51b8 size 0xa0 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger DecodeValue(::Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method EncodeValue addr 0xec5258 size 0x124 virtual true final false
 void EncodeValue(::Org::BouncyCastle::Math::BigInteger n, ::Org::BouncyCastle::Math::BigInteger x, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

// Ctor Parameters []
explicit PlainDsaEncoding() ;

/// @brief Method .ctor addr 0xec53e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding, "Org.BouncyCastle.Crypto.Signers", "PlainDsaEncoding");
