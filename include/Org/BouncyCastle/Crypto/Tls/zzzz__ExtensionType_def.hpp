#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ExtensionType;
}
// Type: Org.BouncyCastle.Crypto.Tls::ExtensionType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1243))
// CS Name: Org.BouncyCastle.Crypto.Tls.ExtensionType
class CORDL_TYPE ExtensionType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExtensionType() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionType", modifiers: " const&", def_value: None }]
constexpr ExtensionType(ExtensionType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionType", modifiers: "&&", def_value: None }]
constexpr ExtensionType(ExtensionType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtensionType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExtensionType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtensionType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtensionType& operator=(ExtensionType&& o) noexcept = default;
  constexpr ExtensionType& operator=(ExtensionType const& o) noexcept = default;
                


// Fields

/// @brief Field server_name offset 0
static constexpr int32_t  server_name{0};

/// @brief Field max_fragment_length offset 0
static constexpr int32_t  max_fragment_length{1};

/// @brief Field client_certificate_url offset 0
static constexpr int32_t  client_certificate_url{2};

/// @brief Field trusted_ca_keys offset 0
static constexpr int32_t  trusted_ca_keys{3};

/// @brief Field truncated_hmac offset 0
static constexpr int32_t  truncated_hmac{4};

/// @brief Field status_request offset 0
static constexpr int32_t  status_request{5};

/// @brief Field user_mapping offset 0
static constexpr int32_t  user_mapping{6};

/// @brief Field client_authz offset 0
static constexpr int32_t  client_authz{7};

/// @brief Field server_authz offset 0
static constexpr int32_t  server_authz{8};

/// @brief Field cert_type offset 0
static constexpr int32_t  cert_type{9};

/// @brief Field supported_groups offset 0
static constexpr int32_t  supported_groups{10};

/// @brief Field elliptic_curves offset 0
static constexpr int32_t  elliptic_curves{10};

/// @brief Field ec_point_formats offset 0
static constexpr int32_t  ec_point_formats{11};

/// @brief Field srp offset 0
static constexpr int32_t  srp{12};

/// @brief Field signature_algorithms offset 0
static constexpr int32_t  signature_algorithms{13};

/// @brief Field use_srtp offset 0
static constexpr int32_t  use_srtp{14};

/// @brief Field heartbeat offset 0
static constexpr int32_t  heartbeat{15};

/// @brief Field application_layer_protocol_negotiation offset 0
static constexpr int32_t  application_layer_protocol_negotiation{16};

/// @brief Field status_request_v2 offset 0
static constexpr int32_t  status_request_v2{17};

/// @brief Field signed_certificate_timestamp offset 0
static constexpr int32_t  signed_certificate_timestamp{18};

/// @brief Field client_certificate_type offset 0
static constexpr int32_t  client_certificate_type{19};

/// @brief Field server_certificate_type offset 0
static constexpr int32_t  server_certificate_type{20};

/// @brief Field padding offset 0
static constexpr int32_t  padding{21};

/// @brief Field encrypt_then_mac offset 0
static constexpr int32_t  encrypt_then_mac{22};

/// @brief Field extended_master_secret offset 0
static constexpr int32_t  extended_master_secret{23};

/// @brief Field cached_info offset 0
static constexpr int32_t  cached_info{25};

/// @brief Field session_ticket offset 0
static constexpr int32_t  session_ticket{35};

/// @brief Field renegotiation_info offset 0
static constexpr int32_t  renegotiation_info{65281};

static int32_t __declspec(property(get=__get_DRAFT_token_binding, put=__set_DRAFT_token_binding))  DRAFT_token_binding;

static void __set_DRAFT_token_binding(int32_t value) ;

static int32_t __get_DRAFT_token_binding() ;

static int32_t __declspec(property(get=__get_negotiated_ff_dhe_groups, put=__set_negotiated_ff_dhe_groups))  negotiated_ff_dhe_groups;

static void __set_negotiated_ff_dhe_groups(int32_t value) ;

static int32_t __get_negotiated_ff_dhe_groups() ;


// Methods

static Org::BouncyCastle::Crypto::Tls::ExtensionType New_ctor() ;

/// @brief Method .ctor addr 0xf042d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ExtensionType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ExtensionType, "Org.BouncyCastle.Crypto.Tls", "ExtensionType");
