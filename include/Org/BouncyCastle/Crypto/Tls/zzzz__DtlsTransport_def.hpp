#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
// Type: Org.BouncyCastle.Crypto.Tls::DtlsTransport
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1237))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsTransport
class CORDL_TYPE DtlsTransport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::DatagramTransport
constexpr operator  Org::BouncyCastle::Crypto::Tls::DatagramTransport() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCloseable
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCloseable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DtlsTransport() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsTransport", modifiers: " const&", def_value: None }]
constexpr DtlsTransport(DtlsTransport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsTransport", modifiers: "&&", def_value: None }]
constexpr DtlsTransport(DtlsTransport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsTransport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DtlsTransport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsTransport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsTransport& operator=(DtlsTransport&& o) noexcept = default;
  constexpr DtlsTransport& operator=(DtlsTransport const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer __declspec(property(get=__get_mRecordLayer, put=__set_mRecordLayer))  mRecordLayer;

constexpr void __set_mRecordLayer(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer __get_mRecordLayer() const;


// Methods

// Ctor Parameters [CppParam { name: "recordLayer", ty: "Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer", modifiers: "", def_value: None }]
explicit DtlsTransport(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer) ;

/// @brief Method .ctor addr 0xf03a70 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer) ;

/// @brief Method GetReceiveLimit addr 0xf03a98 size 0x24 virtual true final false
 int32_t GetReceiveLimit() ;

/// @brief Method GetSendLimit addr 0xf03abc size 0x24 virtual true final false
 int32_t GetSendLimit() ;

/// @brief Method Receive addr 0xf03ae0 size 0x39c virtual true final false
 int32_t Receive(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t waitMillis) ;

/// @brief Method Send addr 0xf03e7c size 0x348 virtual true final false
 void Send(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method Close addr 0xf041c4 size 0x24 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DtlsTransport);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DtlsTransport, "Org.BouncyCastle.Crypto.Tls", "DtlsTransport");
