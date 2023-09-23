#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class ITranslator;
}
// Type: Org.BouncyCastle.Utilities.Encoders::ITranslator
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1800))
// CS Name: Org.BouncyCastle.Utilities.Encoders.ITranslator
class CORDL_TYPE ITranslator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITranslator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITranslator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetEncodedBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetEncodedBlockSize() ;

/// @brief Method Encode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Encode(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method GetDecodedBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDecodedBlockSize() ;

/// @brief Method Decode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Decode(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(Org::BouncyCastle::Utilities::Encoders::ITranslator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::ITranslator, "Org.BouncyCastle.Utilities.Encoders", "ITranslator");
