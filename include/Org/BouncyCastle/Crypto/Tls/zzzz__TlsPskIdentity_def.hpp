#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsPskIdentity
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1180))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsPskIdentity
class CORDL_TYPE TlsPskIdentity : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsPskIdentity() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsPskIdentity(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SkipIdentityHint addr 0x0 size 0xffffffffffffffff virtual true final false
 void SkipIdentityHint() ;

/// @brief Method NotifyIdentityHint addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyIdentityHint(::ArrayW<uint8_t> psk_identity_hint) ;

/// @brief Method GetPskIdentity addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetPskIdentity() ;

/// @brief Method GetPsk addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetPsk() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity, "Org.BouncyCastle.Crypto.Tls", "TlsPskIdentity");
