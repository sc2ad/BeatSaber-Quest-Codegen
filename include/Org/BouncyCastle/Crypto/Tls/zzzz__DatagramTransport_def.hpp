#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
// Type: Org.BouncyCastle.Crypto.Tls::DatagramTransport
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1207))
// CS Name: Org.BouncyCastle.Crypto.Tls.DatagramTransport
class CORDL_TYPE DatagramTransport : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCloseable
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCloseable() const noexcept;

~DatagramTransport() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DatagramTransport(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetReceiveLimit addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetReceiveLimit() ;

/// @brief Method GetSendLimit addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetSendLimit() ;

/// @brief Method Receive addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Receive(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t waitMillis) ;

/// @brief Method Send addr 0x0 size 0xffffffffffffffff virtual true final false
 void Send(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DatagramTransport);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DatagramTransport, "Org.BouncyCastle.Crypto.Tls", "DatagramTransport");
