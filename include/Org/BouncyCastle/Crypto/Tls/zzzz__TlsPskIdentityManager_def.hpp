#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentityManager;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsPskIdentityManager
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1316))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsPskIdentityManager
class CORDL_TYPE TlsPskIdentityManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsPskIdentityManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsPskIdentityManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetHint addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetHint() ;

/// @brief Method GetPsk addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetPsk(::ArrayW<uint8_t> identity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager, "Org.BouncyCastle.Crypto.Tls", "TlsPskIdentityManager");
