#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SrtpProtectionProfile;
}
// Type: Org.BouncyCastle.Crypto.Tls::SrtpProtectionProfile
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1282))
// CS Name: Org.BouncyCastle.Crypto.Tls.SrtpProtectionProfile
class CORDL_TYPE SrtpProtectionProfile : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SrtpProtectionProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "SrtpProtectionProfile", modifiers: " const&", def_value: None }]
constexpr SrtpProtectionProfile(SrtpProtectionProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SrtpProtectionProfile", modifiers: "&&", def_value: None }]
constexpr SrtpProtectionProfile(SrtpProtectionProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SrtpProtectionProfile(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SrtpProtectionProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SrtpProtectionProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SrtpProtectionProfile& operator=(SrtpProtectionProfile&& o) noexcept = default;
  constexpr SrtpProtectionProfile& operator=(SrtpProtectionProfile const& o) noexcept = default;
                


// Fields

/// @brief Field SRTP_AES128_CM_HMAC_SHA1_80 offset 0
static constexpr int32_t  SRTP_AES128_CM_HMAC_SHA1_80{1};

/// @brief Field SRTP_AES128_CM_HMAC_SHA1_32 offset 0
static constexpr int32_t  SRTP_AES128_CM_HMAC_SHA1_32{2};

/// @brief Field SRTP_NULL_HMAC_SHA1_80 offset 0
static constexpr int32_t  SRTP_NULL_HMAC_SHA1_80{5};

/// @brief Field SRTP_NULL_HMAC_SHA1_32 offset 0
static constexpr int32_t  SRTP_NULL_HMAC_SHA1_32{6};

/// @brief Field SRTP_AEAD_AES_128_GCM offset 0
static constexpr int32_t  SRTP_AEAD_AES_128_GCM{7};

/// @brief Field SRTP_AEAD_AES_256_GCM offset 0
static constexpr int32_t  SRTP_AEAD_AES_256_GCM{8};


// Methods

// Ctor Parameters []
explicit SrtpProtectionProfile() ;

/// @brief Method .ctor addr 0xf0abcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SrtpProtectionProfile);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SrtpProtectionProfile, "Org.BouncyCastle.Crypto.Tls", "SrtpProtectionProfile");
