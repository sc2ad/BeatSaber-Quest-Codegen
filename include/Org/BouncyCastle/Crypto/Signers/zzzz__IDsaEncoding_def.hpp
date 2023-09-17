#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
// Type: Org.BouncyCastle.Crypto.Signers::IDsaEncoding
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1144))
// CS Name: Org.BouncyCastle.Crypto.Signers.IDsaEncoding
class CORDL_TYPE IDsaEncoding : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDsaEncoding() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDsaEncoding(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Decode addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> Decode(::Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> encoding) ;

/// @brief Method Encode addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> Encode(::Org::BouncyCastle::Math::BigInteger n, ::Org::BouncyCastle::Math::BigInteger r, ::Org::BouncyCastle::Math::BigInteger s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding, "Org.BouncyCastle.Crypto.Signers", "IDsaEncoding");
