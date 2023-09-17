#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatMode;
}
// Type: Org.BouncyCastle.Crypto.Tls::HeartbeatMode
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1251))
// CS Name: Org.BouncyCastle.Crypto.Tls.HeartbeatMode
class CORDL_TYPE HeartbeatMode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HeartbeatMode() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatMode", modifiers: " const&", def_value: None }]
constexpr HeartbeatMode(HeartbeatMode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatMode", modifiers: "&&", def_value: None }]
constexpr HeartbeatMode(HeartbeatMode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeartbeatMode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HeartbeatMode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeartbeatMode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeartbeatMode& operator=(HeartbeatMode&& o) noexcept = default;
  constexpr HeartbeatMode& operator=(HeartbeatMode const& o) noexcept = default;
                


// Fields

/// @brief Field peer_allowed_to_send offset 0
static constexpr uint8_t  peer_allowed_to_send{1u};

/// @brief Field peer_not_allowed_to_send offset 0
static constexpr uint8_t  peer_not_allowed_to_send{2u};


// Methods

/// @brief Method IsValid addr 0xf045f4 size 0x14 virtual false final false
static bool IsValid(uint8_t heartbeatMode) ;

// Ctor Parameters []
explicit HeartbeatMode() ;

/// @brief Method .ctor addr 0xf04d20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HeartbeatMode);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HeartbeatMode, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMode");
