#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::ISP80090Drbg
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1094))
// CS Name: Org.BouncyCastle.Crypto.Prng.Drbg.ISP80090Drbg
class CORDL_TYPE ISP80090Drbg : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISP80090Drbg() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISP80090Drbg(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_BlockSize))  BlockSize;


// Methods

/// @brief Method get_BlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_BlockSize() ;

/// @brief Method Generate addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Generate(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> additionalInput, bool predictionResistant) ;

/// @brief Method Reseed addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reseed(::ArrayW<uint8_t> additionalInput) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng::Drbg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg, "Org.BouncyCastle.Crypto.Prng.Drbg", "ISP80090Drbg");
