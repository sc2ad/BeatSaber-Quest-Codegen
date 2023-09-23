#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Type: Org.BouncyCastle.Crypto::IDerivationFunction
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(721))
// CS Name: Org.BouncyCastle.Crypto.IDerivationFunction
class CORDL_TYPE IDerivationFunction : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDerivationFunction() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDerivationFunction(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Crypto::IDerivationParameters parameters) ;

/// @brief Method get_Digest addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method GenerateBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IDerivationFunction);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IDerivationFunction, "Org.BouncyCastle.Crypto", "IDerivationFunction");
