#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpIdentityManager;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpIdentityManager
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1278))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSrpIdentityManager
class CORDL_TYPE TlsSrpIdentityManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsSrpIdentityManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSrpIdentityManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetLoginParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters GetLoginParameters(::ArrayW<uint8_t> identity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager, "Org.BouncyCastle.Crypto.Tls", "TlsSrpIdentityManager");
