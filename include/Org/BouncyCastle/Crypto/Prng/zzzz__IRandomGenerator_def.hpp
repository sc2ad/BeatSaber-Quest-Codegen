#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
// Type: Org.BouncyCastle.Crypto.Prng::IRandomGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1105))
// CS Name: Org.BouncyCastle.Crypto.Prng.IRandomGenerator
class CORDL_TYPE IRandomGenerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IRandomGenerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRandomGenerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method AddSeedMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddSeedMaterial(::ArrayW<uint8_t> seed) ;

/// @brief Method AddSeedMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddSeedMaterial(int64_t seed) ;

/// @brief Method NextBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes) ;

/// @brief Method NextBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::IRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::IRandomGenerator, "Org.BouncyCastle.Crypto.Prng", "IRandomGenerator");
