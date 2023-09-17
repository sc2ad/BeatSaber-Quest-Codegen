#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsHandshakeHash
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1201))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash
class CORDL_TYPE TlsHandshakeHash : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDigest
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest() const noexcept;

~TlsHandshakeHash() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsHandshakeHash(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method NotifyPrfDetermined addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash NotifyPrfDetermined() ;

/// @brief Method TrackHashAlgorithm addr 0x0 size 0xffffffffffffffff virtual true final false
 void TrackHashAlgorithm(uint8_t hashAlgorithm) ;

/// @brief Method SealHashAlgorithms addr 0x0 size 0xffffffffffffffff virtual true final false
 void SealHashAlgorithms() ;

/// @brief Method StopTracking addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash StopTracking() ;

/// @brief Method ForkPrfHash addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::IDigest ForkPrfHash() ;

/// @brief Method GetFinalHash addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetFinalHash(uint8_t hashAlgorithm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash, "Org.BouncyCastle.Crypto.Tls", "TlsHandshakeHash");
