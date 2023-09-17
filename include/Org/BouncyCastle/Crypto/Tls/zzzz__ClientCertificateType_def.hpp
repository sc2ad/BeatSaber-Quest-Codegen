#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ClientCertificateType;
}
// Type: Org.BouncyCastle.Crypto.Tls::ClientCertificateType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1200))
// CS Name: Org.BouncyCastle.Crypto.Tls.ClientCertificateType
class CORDL_TYPE ClientCertificateType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ClientCertificateType() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientCertificateType", modifiers: " const&", def_value: None }]
constexpr ClientCertificateType(ClientCertificateType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientCertificateType", modifiers: "&&", def_value: None }]
constexpr ClientCertificateType(ClientCertificateType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientCertificateType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClientCertificateType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientCertificateType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientCertificateType& operator=(ClientCertificateType&& o) noexcept = default;
  constexpr ClientCertificateType& operator=(ClientCertificateType const& o) noexcept = default;
                


// Fields

/// @brief Field rsa_sign offset 0
static constexpr uint8_t  rsa_sign{1u};

/// @brief Field dss_sign offset 0
static constexpr uint8_t  dss_sign{2u};

/// @brief Field rsa_fixed_dh offset 0
static constexpr uint8_t  rsa_fixed_dh{3u};

/// @brief Field dss_fixed_dh offset 0
static constexpr uint8_t  dss_fixed_dh{4u};

/// @brief Field rsa_ephemeral_dh_RESERVED offset 0
static constexpr uint8_t  rsa_ephemeral_dh_RESERVED{5u};

/// @brief Field dss_ephemeral_dh_RESERVED offset 0
static constexpr uint8_t  dss_ephemeral_dh_RESERVED{6u};

/// @brief Field fortezza_dms_RESERVED offset 0
static constexpr uint8_t  fortezza_dms_RESERVED{20u};

/// @brief Field ecdsa_sign offset 0
static constexpr uint8_t  ecdsa_sign{64u};

/// @brief Field rsa_fixed_ecdh offset 0
static constexpr uint8_t  rsa_fixed_ecdh{65u};

/// @brief Field ecdsa_fixed_ecdh offset 0
static constexpr uint8_t  ecdsa_fixed_ecdh{66u};


// Methods

// Ctor Parameters []
explicit ClientCertificateType() ;

/// @brief Method .ctor addr 0xed2ce8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ClientCertificateType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ClientCertificateType, "Org.BouncyCastle.Crypto.Tls", "ClientCertificateType");
