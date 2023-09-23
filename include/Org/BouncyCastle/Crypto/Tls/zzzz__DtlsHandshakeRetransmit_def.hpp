#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsHandshakeRetransmit;
}
// Type: Org.BouncyCastle.Crypto.Tls::DtlsHandshakeRetransmit
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1226))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsHandshakeRetransmit
class CORDL_TYPE DtlsHandshakeRetransmit : public ::cordl_internals::InterfaceW {
public:
// Declarations
~DtlsHandshakeRetransmit() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsHandshakeRetransmit(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ReceivedHandshakeRecord addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit, "Org.BouncyCastle.Crypto.Tls", "DtlsHandshakeRetransmit");
