#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmMultiplier;
}
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::IGcmMultiplier
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(951))
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
class CORDL_TYPE IGcmMultiplier : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGcmMultiplier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGcmMultiplier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::ArrayW<uint8_t> H) ;

/// @brief Method MultiplyH addr 0x0 size 0xffffffffffffffff virtual true final false
 void MultiplyH(::ArrayW<uint8_t> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmMultiplier");
