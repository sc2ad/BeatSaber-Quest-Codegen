#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Type: Org.BouncyCastle.Crypto::IEntropySource
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1102))
// CS Name: Org.BouncyCastle.Crypto.IEntropySource
class CORDL_TYPE IEntropySource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEntropySource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEntropySource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_IsPredictionResistant))  IsPredictionResistant;

 int32_t __declspec(property(get=get_EntropySize))  EntropySize;


// Methods

/// @brief Method get_IsPredictionResistant addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsPredictionResistant() ;

/// @brief Method GetEntropy addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetEntropy() ;

/// @brief Method get_EntropySize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_EntropySize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IEntropySource);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IEntropySource, "Org.BouncyCastle.Crypto", "IEntropySource");
