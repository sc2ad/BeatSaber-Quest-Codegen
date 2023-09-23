#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AlertDescription;
}
// Type: Org.BouncyCastle.Crypto.Tls::AlertDescription
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1178))
// CS Name: Org.BouncyCastle.Crypto.Tls.AlertDescription
class CORDL_TYPE AlertDescription : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AlertDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlertDescription", modifiers: " const&", def_value: None }]
constexpr AlertDescription(AlertDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlertDescription", modifiers: "&&", def_value: None }]
constexpr AlertDescription(AlertDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlertDescription(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AlertDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlertDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlertDescription& operator=(AlertDescription&& o) noexcept = default;
  constexpr AlertDescription& operator=(AlertDescription const& o) noexcept = default;
                


// Fields

/// @brief Field close_notify offset 0
static constexpr uint8_t  close_notify{0u};

/// @brief Field unexpected_message offset 0
static constexpr uint8_t  unexpected_message{10u};

/// @brief Field bad_record_mac offset 0
static constexpr uint8_t  bad_record_mac{20u};

/// @brief Field decryption_failed offset 0
static constexpr uint8_t  decryption_failed{21u};

/// @brief Field record_overflow offset 0
static constexpr uint8_t  record_overflow{22u};

/// @brief Field decompression_failure offset 0
static constexpr uint8_t  decompression_failure{30u};

/// @brief Field handshake_failure offset 0
static constexpr uint8_t  handshake_failure{40u};

/// @brief Field no_certificate offset 0
static constexpr uint8_t  no_certificate{41u};

/// @brief Field bad_certificate offset 0
static constexpr uint8_t  bad_certificate{42u};

/// @brief Field unsupported_certificate offset 0
static constexpr uint8_t  unsupported_certificate{43u};

/// @brief Field certificate_revoked offset 0
static constexpr uint8_t  certificate_revoked{44u};

/// @brief Field certificate_expired offset 0
static constexpr uint8_t  certificate_expired{45u};

/// @brief Field certificate_unknown offset 0
static constexpr uint8_t  certificate_unknown{46u};

/// @brief Field illegal_parameter offset 0
static constexpr uint8_t  illegal_parameter{47u};

/// @brief Field unknown_ca offset 0
static constexpr uint8_t  unknown_ca{48u};

/// @brief Field access_denied offset 0
static constexpr uint8_t  access_denied{49u};

/// @brief Field decode_error offset 0
static constexpr uint8_t  decode_error{50u};

/// @brief Field decrypt_error offset 0
static constexpr uint8_t  decrypt_error{51u};

/// @brief Field export_restriction offset 0
static constexpr uint8_t  export_restriction{60u};

/// @brief Field protocol_version offset 0
static constexpr uint8_t  protocol_version{70u};

/// @brief Field insufficient_security offset 0
static constexpr uint8_t  insufficient_security{71u};

/// @brief Field internal_error offset 0
static constexpr uint8_t  internal_error{80u};

/// @brief Field user_canceled offset 0
static constexpr uint8_t  user_canceled{90u};

/// @brief Field no_renegotiation offset 0
static constexpr uint8_t  no_renegotiation{100u};

/// @brief Field unsupported_extension offset 0
static constexpr uint8_t  unsupported_extension{110u};

/// @brief Field certificate_unobtainable offset 0
static constexpr uint8_t  certificate_unobtainable{111u};

/// @brief Field unrecognized_name offset 0
static constexpr uint8_t  unrecognized_name{112u};

/// @brief Field bad_certificate_status_response offset 0
static constexpr uint8_t  bad_certificate_status_response{113u};

/// @brief Field bad_certificate_hash_value offset 0
static constexpr uint8_t  bad_certificate_hash_value{114u};

/// @brief Field unknown_psk_identity offset 0
static constexpr uint8_t  unknown_psk_identity{115u};

/// @brief Field inappropriate_fallback offset 0
static constexpr uint8_t  inappropriate_fallback{86u};


// Methods

/// @brief Method GetName addr 0xecd8c8 size 0x3f4 virtual false final false
static ::StringW GetName(uint8_t alertDescription) ;

/// @brief Method GetText addr 0xecdcbc size 0x17c virtual false final false
static ::StringW GetText(uint8_t alertDescription) ;

// Ctor Parameters []
explicit AlertDescription() ;

/// @brief Method .ctor addr 0xecde38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AlertDescription);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AlertDescription, "Org.BouncyCastle.Crypto.Tls", "AlertDescription");
