#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Type: Org.BouncyCastle.Crypto::IDigest
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(745))
// CS Name: Org.BouncyCastle.Crypto.IDigest
class CORDL_TYPE IDigest : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDigest() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDigest(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method GetByteLength addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetByteLength() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IDigest, "Org.BouncyCastle.Crypto", "IDigest");
