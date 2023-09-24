#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ClientAuthenticationType;
}
// Type: Org.BouncyCastle.Crypto.Tls::ClientAuthenticationType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1199))
// CS Name: Org.BouncyCastle.Crypto.Tls.ClientAuthenticationType
class CORDL_TYPE ClientAuthenticationType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ClientAuthenticationType() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientAuthenticationType", modifiers: " const&", def_value: None }]
constexpr ClientAuthenticationType(ClientAuthenticationType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientAuthenticationType", modifiers: "&&", def_value: None }]
constexpr ClientAuthenticationType(ClientAuthenticationType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientAuthenticationType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClientAuthenticationType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientAuthenticationType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientAuthenticationType& operator=(ClientAuthenticationType&& o) noexcept = default;
  constexpr ClientAuthenticationType& operator=(ClientAuthenticationType const& o) noexcept = default;
                


// Fields

/// @brief Field anonymous offset 0
static constexpr uint8_t  anonymous{0u};

/// @brief Field certificate_based offset 0
static constexpr uint8_t  certificate_based{1u};

/// @brief Field psk offset 0
static constexpr uint8_t  psk{2u};


// Methods

static Org::BouncyCastle::Crypto::Tls::ClientAuthenticationType New_ctor() ;

/// @brief Method .ctor addr 0xed2ce0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ClientAuthenticationType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ClientAuthenticationType, "Org.BouncyCastle.Crypto.Tls", "ClientAuthenticationType");
