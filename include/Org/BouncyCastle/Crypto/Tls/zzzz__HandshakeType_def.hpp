#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HandshakeType;
}
// Type: Org.BouncyCastle.Crypto.Tls::HandshakeType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1245))
// CS Name: Org.BouncyCastle.Crypto.Tls.HandshakeType
class CORDL_TYPE HandshakeType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HandshakeType() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandshakeType", modifiers: " const&", def_value: None }]
constexpr HandshakeType(HandshakeType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandshakeType", modifiers: "&&", def_value: None }]
constexpr HandshakeType(HandshakeType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandshakeType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HandshakeType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandshakeType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandshakeType& operator=(HandshakeType&& o) noexcept = default;
  constexpr HandshakeType& operator=(HandshakeType const& o) noexcept = default;
                


// Fields

/// @brief Field hello_request offset 0
static constexpr uint8_t  hello_request{0u};

/// @brief Field client_hello offset 0
static constexpr uint8_t  client_hello{1u};

/// @brief Field server_hello offset 0
static constexpr uint8_t  server_hello{2u};

/// @brief Field certificate offset 0
static constexpr uint8_t  certificate{11u};

/// @brief Field server_key_exchange offset 0
static constexpr uint8_t  server_key_exchange{12u};

/// @brief Field certificate_request offset 0
static constexpr uint8_t  certificate_request{13u};

/// @brief Field server_hello_done offset 0
static constexpr uint8_t  server_hello_done{14u};

/// @brief Field certificate_verify offset 0
static constexpr uint8_t  certificate_verify{15u};

/// @brief Field client_key_exchange offset 0
static constexpr uint8_t  client_key_exchange{16u};

/// @brief Field finished offset 0
static constexpr uint8_t  finished{20u};

/// @brief Field certificate_url offset 0
static constexpr uint8_t  certificate_url{21u};

/// @brief Field certificate_status offset 0
static constexpr uint8_t  certificate_status{22u};

/// @brief Field hello_verify_request offset 0
static constexpr uint8_t  hello_verify_request{3u};

/// @brief Field supplemental_data offset 0
static constexpr uint8_t  supplemental_data{23u};

/// @brief Field session_ticket offset 0
static constexpr uint8_t  session_ticket{4u};


// Methods

// Ctor Parameters []
explicit HandshakeType() ;

/// @brief Method .ctor addr 0xf042f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HandshakeType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HandshakeType, "Org.BouncyCastle.Crypto.Tls", "HandshakeType");
