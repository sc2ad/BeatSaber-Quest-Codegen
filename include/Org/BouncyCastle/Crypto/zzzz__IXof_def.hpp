#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IXof;
}
// Type: Org.BouncyCastle.Crypto::IXof
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(773))
// CS Name: Org.BouncyCastle.Crypto.IXof
class CORDL_TYPE IXof : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

~IXof() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXof(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff, int32_t outLen) ;

/// @brief Method DoOutput addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoOutput(::ArrayW<uint8_t> output, int32_t outOff, int32_t outLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IXof);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IXof, "Org.BouncyCastle.Crypto", "IXof");
