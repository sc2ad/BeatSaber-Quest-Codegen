#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CipherSuite;
}
// Type: Org.BouncyCastle.Crypto.Tls::CipherSuite
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1197))
// CS Name: Org.BouncyCastle.Crypto.Tls.CipherSuite
class CORDL_TYPE CipherSuite : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CipherSuite() = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherSuite", modifiers: " const&", def_value: None }]
constexpr CipherSuite(CipherSuite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherSuite", modifiers: "&&", def_value: None }]
constexpr CipherSuite(CipherSuite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CipherSuite(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CipherSuite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CipherSuite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CipherSuite& operator=(CipherSuite&& o) noexcept = default;
  constexpr CipherSuite& operator=(CipherSuite const& o) noexcept = default;
                


// Fields

/// @brief Field TLS_NULL_WITH_NULL_NULL offset 0
static constexpr int32_t  TLS_NULL_WITH_NULL_NULL{0};

/// @brief Field TLS_RSA_WITH_NULL_MD5 offset 0
static constexpr int32_t  TLS_RSA_WITH_NULL_MD5{1};

/// @brief Field TLS_RSA_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_NULL_SHA{2};

/// @brief Field TLS_RSA_EXPORT_WITH_RC4_40_MD5 offset 0
static constexpr int32_t  TLS_RSA_EXPORT_WITH_RC4_40_MD5{3};

/// @brief Field TLS_RSA_WITH_RC4_128_MD5 offset 0
static constexpr int32_t  TLS_RSA_WITH_RC4_128_MD5{4};

/// @brief Field TLS_RSA_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_RC4_128_SHA{5};

/// @brief Field TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 offset 0
static constexpr int32_t  TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5{6};

/// @brief Field TLS_RSA_WITH_IDEA_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_IDEA_CBC_SHA{7};

/// @brief Field TLS_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_EXPORT_WITH_DES40_CBC_SHA{8};

/// @brief Field TLS_RSA_WITH_DES_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_DES_CBC_SHA{9};

/// @brief Field TLS_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_3DES_EDE_CBC_SHA{10};

/// @brief Field TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA{11};

/// @brief Field TLS_DH_DSS_WITH_DES_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_DES_CBC_SHA{12};

/// @brief Field TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA{13};

/// @brief Field TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA{14};

/// @brief Field TLS_DH_RSA_WITH_DES_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_DES_CBC_SHA{15};

/// @brief Field TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA{16};

/// @brief Field TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA{17};

/// @brief Field TLS_DHE_DSS_WITH_DES_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_DES_CBC_SHA{18};

/// @brief Field TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA{19};

/// @brief Field TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA{20};

/// @brief Field TLS_DHE_RSA_WITH_DES_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_DES_CBC_SHA{21};

/// @brief Field TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA{22};

/// @brief Field TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 offset 0
static constexpr int32_t  TLS_DH_anon_EXPORT_WITH_RC4_40_MD5{23};

/// @brief Field TLS_DH_anon_WITH_RC4_128_MD5 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_RC4_128_MD5{24};

/// @brief Field TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA{25};

/// @brief Field TLS_DH_anon_WITH_DES_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_anon_WITH_DES_CBC_SHA{26};

/// @brief Field TLS_DH_anon_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_anon_WITH_3DES_EDE_CBC_SHA{27};

/// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_128_CBC_SHA{47};

/// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_AES_128_CBC_SHA{48};

/// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_AES_128_CBC_SHA{49};

/// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_AES_128_CBC_SHA{50};

/// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_128_CBC_SHA{51};

/// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_anon_WITH_AES_128_CBC_SHA{52};

/// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_256_CBC_SHA{53};

/// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_AES_256_CBC_SHA{54};

/// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_AES_256_CBC_SHA{55};

/// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_AES_256_CBC_SHA{56};

/// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_256_CBC_SHA{57};

/// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_anon_WITH_AES_256_CBC_SHA{58};

/// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_CAMELLIA_128_CBC_SHA{65};

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA{66};

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA{67};

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA{68};

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA{69};

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA{70};

/// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_CAMELLIA_256_CBC_SHA{132};

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA{133};

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA{134};

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA{135};

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA{136};

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA{137};

/// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256{186};

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256{187};

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256{188};

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256{189};

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256{190};

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256{191};

/// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256{192};

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256{193};

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256{194};

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256{195};

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256{196};

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256{197};

/// @brief Field TLS_RSA_WITH_SEED_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_WITH_SEED_CBC_SHA{150};

/// @brief Field TLS_DH_DSS_WITH_SEED_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_SEED_CBC_SHA{151};

/// @brief Field TLS_DH_RSA_WITH_SEED_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_SEED_CBC_SHA{152};

/// @brief Field TLS_DHE_DSS_WITH_SEED_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_SEED_CBC_SHA{153};

/// @brief Field TLS_DHE_RSA_WITH_SEED_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_SEED_CBC_SHA{154};

/// @brief Field TLS_DH_anon_WITH_SEED_CBC_SHA offset 0
static constexpr int32_t  TLS_DH_anon_WITH_SEED_CBC_SHA{155};

/// @brief Field TLS_PSK_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_PSK_WITH_RC4_128_SHA{138};

/// @brief Field TLS_PSK_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_PSK_WITH_3DES_EDE_CBC_SHA{139};

/// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_128_CBC_SHA{140};

/// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_256_CBC_SHA{141};

/// @brief Field TLS_DHE_PSK_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_RC4_128_SHA{142};

/// @brief Field TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA{143};

/// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_AES_128_CBC_SHA{144};

/// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_AES_256_CBC_SHA{145};

/// @brief Field TLS_RSA_PSK_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_RC4_128_SHA{146};

/// @brief Field TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA{147};

/// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_AES_128_CBC_SHA{148};

/// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_AES_256_CBC_SHA{149};

/// @brief Field TLS_ECDH_ECDSA_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_NULL_SHA{49153};

/// @brief Field TLS_ECDH_ECDSA_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_RC4_128_SHA{49154};

/// @brief Field TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA{49155};

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA{49156};

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA{49157};

/// @brief Field TLS_ECDHE_ECDSA_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_NULL_SHA{49158};

/// @brief Field TLS_ECDHE_ECDSA_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_RC4_128_SHA{49159};

/// @brief Field TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA{49160};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA{49161};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA{49162};

/// @brief Field TLS_ECDH_RSA_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_NULL_SHA{49163};

/// @brief Field TLS_ECDH_RSA_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_RC4_128_SHA{49164};

/// @brief Field TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA{49165};

/// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_AES_128_CBC_SHA{49166};

/// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_AES_256_CBC_SHA{49167};

/// @brief Field TLS_ECDHE_RSA_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_NULL_SHA{49168};

/// @brief Field TLS_ECDHE_RSA_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_RC4_128_SHA{49169};

/// @brief Field TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA{49170};

/// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA{49171};

/// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA{49172};

/// @brief Field TLS_ECDH_anon_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_ECDH_anon_WITH_NULL_SHA{49173};

/// @brief Field TLS_ECDH_anon_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_ECDH_anon_WITH_RC4_128_SHA{49174};

/// @brief Field TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA{49175};

/// @brief Field TLS_ECDH_anon_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_anon_WITH_AES_128_CBC_SHA{49176};

/// @brief Field TLS_ECDH_anon_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDH_anon_WITH_AES_256_CBC_SHA{49177};

/// @brief Field TLS_PSK_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_PSK_WITH_NULL_SHA{44};

/// @brief Field TLS_DHE_PSK_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_NULL_SHA{45};

/// @brief Field TLS_RSA_PSK_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_NULL_SHA{46};

/// @brief Field TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA{49178};

/// @brief Field TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA{49179};

/// @brief Field TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA{49180};

/// @brief Field TLS_SRP_SHA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_WITH_AES_128_CBC_SHA{49181};

/// @brief Field TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA{49182};

/// @brief Field TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA{49183};

/// @brief Field TLS_SRP_SHA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_WITH_AES_256_CBC_SHA{49184};

/// @brief Field TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA{49185};

/// @brief Field TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA{49186};

/// @brief Field TLS_RSA_WITH_NULL_SHA256 offset 0
static constexpr int32_t  TLS_RSA_WITH_NULL_SHA256{59};

/// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_128_CBC_SHA256{60};

/// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_256_CBC_SHA256{61};

/// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_AES_128_CBC_SHA256{62};

/// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_AES_128_CBC_SHA256{63};

/// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_AES_128_CBC_SHA256{64};

/// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_128_CBC_SHA256{103};

/// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_AES_256_CBC_SHA256{104};

/// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_AES_256_CBC_SHA256{105};

/// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_AES_256_CBC_SHA256{106};

/// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_256_CBC_SHA256{107};

/// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_AES_128_CBC_SHA256{108};

/// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_AES_256_CBC_SHA256{109};

/// @brief Field TLS_RSA_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_128_GCM_SHA256{156};

/// @brief Field TLS_RSA_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_256_GCM_SHA384{157};

/// @brief Field TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_128_GCM_SHA256{158};

/// @brief Field TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_256_GCM_SHA384{159};

/// @brief Field TLS_DH_RSA_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_AES_128_GCM_SHA256{160};

/// @brief Field TLS_DH_RSA_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_AES_256_GCM_SHA384{161};

/// @brief Field TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_AES_128_GCM_SHA256{162};

/// @brief Field TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_AES_256_GCM_SHA384{163};

/// @brief Field TLS_DH_DSS_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_AES_128_GCM_SHA256{164};

/// @brief Field TLS_DH_DSS_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_AES_256_GCM_SHA384{165};

/// @brief Field TLS_DH_anon_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_AES_128_GCM_SHA256{166};

/// @brief Field TLS_DH_anon_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_AES_256_GCM_SHA384{167};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256{49187};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384{49188};

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256{49189};

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384{49190};

/// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256{49191};

/// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384{49192};

/// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256{49193};

/// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384{49194};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256{49195};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384{49196};

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256{49197};

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384{49198};

/// @brief Field TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256{49199};

/// @brief Field TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384{49200};

/// @brief Field TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256{49201};

/// @brief Field TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384{49202};

/// @brief Field TLS_PSK_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_128_GCM_SHA256{168};

/// @brief Field TLS_PSK_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_256_GCM_SHA384{169};

/// @brief Field TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_AES_128_GCM_SHA256{170};

/// @brief Field TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_AES_256_GCM_SHA384{171};

/// @brief Field TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_AES_128_GCM_SHA256{172};

/// @brief Field TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_AES_256_GCM_SHA384{173};

/// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_128_CBC_SHA256{174};

/// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_256_CBC_SHA384{175};

/// @brief Field TLS_PSK_WITH_NULL_SHA256 offset 0
static constexpr int32_t  TLS_PSK_WITH_NULL_SHA256{176};

/// @brief Field TLS_PSK_WITH_NULL_SHA384 offset 0
static constexpr int32_t  TLS_PSK_WITH_NULL_SHA384{177};

/// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_AES_128_CBC_SHA256{178};

/// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_AES_256_CBC_SHA384{179};

/// @brief Field TLS_DHE_PSK_WITH_NULL_SHA256 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_NULL_SHA256{180};

/// @brief Field TLS_DHE_PSK_WITH_NULL_SHA384 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_NULL_SHA384{181};

/// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_AES_128_CBC_SHA256{182};

/// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_AES_256_CBC_SHA384{183};

/// @brief Field TLS_RSA_PSK_WITH_NULL_SHA256 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_NULL_SHA256{184};

/// @brief Field TLS_RSA_PSK_WITH_NULL_SHA384 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_NULL_SHA384{185};

/// @brief Field TLS_ECDHE_PSK_WITH_RC4_128_SHA offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_RC4_128_SHA{49203};

/// @brief Field TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA{49204};

/// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA{49205};

/// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA{49206};

/// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256{49207};

/// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384{49208};

/// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_NULL_SHA{49209};

/// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_NULL_SHA256{49210};

/// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_NULL_SHA384{49211};

/// @brief Field TLS_EMPTY_RENEGOTIATION_INFO_SCSV offset 0
static constexpr int32_t  TLS_EMPTY_RENEGOTIATION_INFO_SCSV{255};

/// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256{49266};

/// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384{49267};

/// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256{49268};

/// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384{49269};

/// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256{49270};

/// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384{49271};

/// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256{49272};

/// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384{49273};

/// @brief Field TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256{49274};

/// @brief Field TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384{49275};

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256{49276};

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384{49277};

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256{49278};

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384{49279};

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256{49280};

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384{49281};

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256{49282};

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384{49283};

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256{49284};

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384{49285};

/// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256{49286};

/// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384{49287};

/// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256{49288};

/// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384{49289};

/// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256{49290};

/// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384{49291};

/// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256{49292};

/// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384{49293};

/// @brief Field TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256{49294};

/// @brief Field TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384{49295};

/// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256{49296};

/// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384{49297};

/// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256{49298};

/// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384{49299};

/// @brief Field TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256{49300};

/// @brief Field TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384{49301};

/// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256{49302};

/// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384{49303};

/// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256{49304};

/// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384{49305};

/// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256{49306};

/// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static constexpr int32_t  TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384{49307};

/// @brief Field TLS_RSA_WITH_AES_128_CCM offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_128_CCM{49308};

/// @brief Field TLS_RSA_WITH_AES_256_CCM offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_256_CCM{49309};

/// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_128_CCM{49310};

/// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_256_CCM{49311};

/// @brief Field TLS_RSA_WITH_AES_128_CCM_8 offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_128_CCM_8{49312};

/// @brief Field TLS_RSA_WITH_AES_256_CCM_8 offset 0
static constexpr int32_t  TLS_RSA_WITH_AES_256_CCM_8{49313};

/// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM_8 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_128_CCM_8{49314};

/// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM_8 offset 0
static constexpr int32_t  TLS_DHE_RSA_WITH_AES_256_CCM_8{49315};

/// @brief Field TLS_PSK_WITH_AES_128_CCM offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_128_CCM{49316};

/// @brief Field TLS_PSK_WITH_AES_256_CCM offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_256_CCM{49317};

/// @brief Field TLS_DHE_PSK_WITH_AES_128_CCM offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_AES_128_CCM{49318};

/// @brief Field TLS_DHE_PSK_WITH_AES_256_CCM offset 0
static constexpr int32_t  TLS_DHE_PSK_WITH_AES_256_CCM{49319};

/// @brief Field TLS_PSK_WITH_AES_128_CCM_8 offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_128_CCM_8{49320};

/// @brief Field TLS_PSK_WITH_AES_256_CCM_8 offset 0
static constexpr int32_t  TLS_PSK_WITH_AES_256_CCM_8{49321};

/// @brief Field TLS_PSK_DHE_WITH_AES_128_CCM_8 offset 0
static constexpr int32_t  TLS_PSK_DHE_WITH_AES_128_CCM_8{49322};

/// @brief Field TLS_PSK_DHE_WITH_AES_256_CCM_8 offset 0
static constexpr int32_t  TLS_PSK_DHE_WITH_AES_256_CCM_8{49323};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CCM offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_128_CCM{49324};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CCM offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_256_CCM{49325};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8{49326};

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8 offset 0
static constexpr int32_t  TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8{49327};

/// @brief Field TLS_FALLBACK_SCSV offset 0
static constexpr int32_t  TLS_FALLBACK_SCSV{22016};

/// @brief Field DRAFT_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 offset 0
static constexpr int32_t  DRAFT_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256{52392};

/// @brief Field DRAFT_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 offset 0
static constexpr int32_t  DRAFT_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256{52393};

/// @brief Field DRAFT_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 offset 0
static constexpr int32_t  DRAFT_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256{52394};

/// @brief Field DRAFT_TLS_PSK_WITH_CHACHA20_POLY1305_SHA256 offset 0
static constexpr int32_t  DRAFT_TLS_PSK_WITH_CHACHA20_POLY1305_SHA256{52395};

/// @brief Field DRAFT_TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256 offset 0
static constexpr int32_t  DRAFT_TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256{52396};

/// @brief Field DRAFT_TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256 offset 0
static constexpr int32_t  DRAFT_TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256{52397};

/// @brief Field DRAFT_TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256 offset 0
static constexpr int32_t  DRAFT_TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256{52398};


// Methods

/// @brief Method IsScsv addr 0xed2cb0 size 0x20 virtual false final false
static bool IsScsv(int32_t cipherSuite) ;

// Ctor Parameters []
explicit CipherSuite() ;

/// @brief Method .ctor addr 0xed2cd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CipherSuite);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CipherSuite, "Org.BouncyCastle.Crypto.Tls", "CipherSuite");
