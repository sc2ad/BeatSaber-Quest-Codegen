#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ISignerWithRecovery;
}
// Type: Org.BouncyCastle.Crypto::ISignerWithRecovery
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1145))
// CS Name: Org.BouncyCastle.Crypto.ISignerWithRecovery
class CORDL_TYPE ISignerWithRecovery : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

~ISignerWithRecovery() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISignerWithRecovery(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method HasFullMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 bool HasFullMessage() ;

/// @brief Method GetRecoveredMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetRecoveredMessage() ;

/// @brief Method UpdateWithRecoveredMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateWithRecoveredMessage(::ArrayW<uint8_t> signature) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::ISignerWithRecovery);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::ISignerWithRecovery, "Org.BouncyCastle.Crypto", "ISignerWithRecovery");
