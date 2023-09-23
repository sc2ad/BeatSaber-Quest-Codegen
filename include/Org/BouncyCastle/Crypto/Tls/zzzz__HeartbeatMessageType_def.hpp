#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatMessageType;
}
// Type: Org.BouncyCastle.Crypto.Tls::HeartbeatMessageType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1250))
// CS Name: Org.BouncyCastle.Crypto.Tls.HeartbeatMessageType
class CORDL_TYPE HeartbeatMessageType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HeartbeatMessageType() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessageType", modifiers: " const&", def_value: None }]
constexpr HeartbeatMessageType(HeartbeatMessageType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessageType", modifiers: "&&", def_value: None }]
constexpr HeartbeatMessageType(HeartbeatMessageType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeartbeatMessageType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HeartbeatMessageType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeartbeatMessageType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeartbeatMessageType& operator=(HeartbeatMessageType&& o) noexcept = default;
  constexpr HeartbeatMessageType& operator=(HeartbeatMessageType const& o) noexcept = default;
                


// Fields

/// @brief Field heartbeat_request offset 0
static constexpr uint8_t  heartbeat_request{1u};

/// @brief Field heartbeat_response offset 0
static constexpr uint8_t  heartbeat_response{2u};


// Methods

/// @brief Method IsValid addr 0xf04890 size 0x14 virtual false final false
static bool IsValid(uint8_t heartbeatMessageType) ;

// Ctor Parameters []
explicit HeartbeatMessageType() ;

/// @brief Method .ctor addr 0xf04d18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::HeartbeatMessageType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::HeartbeatMessageType, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMessageType");
