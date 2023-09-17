#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Type: Org.BouncyCastle.Crypto::IBlockResult
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(709))
// CS Name: Org.BouncyCastle.Crypto.IBlockResult
class CORDL_TYPE IBlockResult : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBlockResult() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBlockResult(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Collect addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> Collect() ;

/// @brief Method Collect addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Collect(::ArrayW<uint8_t> destination, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IBlockResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IBlockResult, "Org.BouncyCastle.Crypto", "IBlockResult");
