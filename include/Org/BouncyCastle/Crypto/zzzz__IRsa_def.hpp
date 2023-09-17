#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
// Type: Org.BouncyCastle.Crypto::IRsa
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(864))
// CS Name: Org.BouncyCastle.Crypto.IRsa
class CORDL_TYPE IRsa : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IRsa() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRsa(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetInputBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetOutputBlockSize() ;

/// @brief Method ConvertInput addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::BigInteger ConvertInput(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method ProcessBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::BigInteger ProcessBlock(::Org::BouncyCastle::Math::BigInteger input) ;

/// @brief Method ConvertOutput addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> ConvertOutput(::Org::BouncyCastle::Math::BigInteger result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IRsa);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IRsa, "Org.BouncyCastle.Crypto", "IRsa");
