#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmExponentiator;
}
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::IGcmExponentiator
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(949))
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
class CORDL_TYPE IGcmExponentiator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGcmExponentiator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGcmExponentiator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::ArrayW<uint8_t> x) ;

/// @brief Method ExponentiateX addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes::Gcm
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmExponentiator");
