#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono::Security::Interface {
struct CipherSuiteCode;
}
// Type: Mono.Security.Interface::CipherSuiteCode
namespace Mono::Security::Interface {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13988))
// CS Name: Mono.Security.Interface.CipherSuiteCode
struct CORDL_TYPE CipherSuiteCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr CipherSuiteCode(uint16_t value__) noexcept;


                    constexpr CipherSuiteCode(CipherSuiteCode const&) = default;
                    constexpr CipherSuiteCode(CipherSuiteCode&&) = default;
                    constexpr CipherSuiteCode& operator=(CipherSuiteCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CipherSuiteCode& operator=(CipherSuiteCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CipherSuiteCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CipherSuiteCode_Unwrapped : uint16_t {
__TLS_NULL_WITH_NULL_NULL = 0u,
__TLS_RSA_WITH_NULL_MD5 = 1u,
__TLS_RSA_WITH_NULL_SHA = 2u,
__TLS_RSA_EXPORT_WITH_RC4_40_MD5 = 3u,
__TLS_RSA_WITH_RC4_128_MD5 = 4u,
__TLS_RSA_WITH_RC4_128_SHA = 5u,
__TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 = 6u,
__TLS_RSA_WITH_IDEA_CBC_SHA = 7u,
__TLS_RSA_EXPORT_WITH_DES40_CBC_SHA = 8u,
__TLS_RSA_WITH_DES_CBC_SHA = 9u,
__TLS_RSA_WITH_3DES_EDE_CBC_SHA = 10u,
__TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA = 11u,
__TLS_DH_DSS_WITH_DES_CBC_SHA = 12u,
__TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA = 13u,
__TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA = 14u,
__TLS_DH_RSA_WITH_DES_CBC_SHA = 15u,
__TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA = 16u,
__TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA = 17u,
__TLS_DHE_DSS_WITH_DES_CBC_SHA = 18u,
__TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA = 19u,
__TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA = 20u,
__TLS_DHE_RSA_WITH_DES_CBC_SHA = 21u,
__TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA = 22u,
__TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 = 23u,
__TLS_DH_anon_WITH_RC4_128_MD5 = 24u,
__TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA = 25u,
__TLS_DH_anon_WITH_DES_CBC_SHA = 26u,
__TLS_DH_anon_WITH_3DES_EDE_CBC_SHA = 27u,
__TLS_RSA_WITH_AES_128_CBC_SHA = 47u,
__TLS_DH_DSS_WITH_AES_128_CBC_SHA = 48u,
__TLS_DH_RSA_WITH_AES_128_CBC_SHA = 49u,
__TLS_DHE_DSS_WITH_AES_128_CBC_SHA = 50u,
__TLS_DHE_RSA_WITH_AES_128_CBC_SHA = 51u,
__TLS_DH_anon_WITH_AES_128_CBC_SHA = 52u,
__TLS_RSA_WITH_AES_256_CBC_SHA = 53u,
__TLS_DH_DSS_WITH_AES_256_CBC_SHA = 54u,
__TLS_DH_RSA_WITH_AES_256_CBC_SHA = 55u,
__TLS_DHE_DSS_WITH_AES_256_CBC_SHA = 56u,
__TLS_DHE_RSA_WITH_AES_256_CBC_SHA = 57u,
__TLS_DH_anon_WITH_AES_256_CBC_SHA = 58u,
__TLS_RSA_WITH_CAMELLIA_128_CBC_SHA = 65u,
__TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA = 66u,
__TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA = 67u,
__TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA = 68u,
__TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA = 69u,
__TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA = 70u,
__TLS_RSA_WITH_CAMELLIA_256_CBC_SHA = 132u,
__TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA = 133u,
__TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA = 134u,
__TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA = 135u,
__TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA = 136u,
__TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA = 137u,
__TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 186u,
__TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 187u,
__TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 188u,
__TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 189u,
__TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 190u,
__TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 = 191u,
__TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 192u,
__TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 193u,
__TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 194u,
__TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 195u,
__TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 196u,
__TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 = 197u,
__TLS_RSA_WITH_SEED_CBC_SHA = 150u,
__TLS_DH_DSS_WITH_SEED_CBC_SHA = 151u,
__TLS_DH_RSA_WITH_SEED_CBC_SHA = 152u,
__TLS_DHE_DSS_WITH_SEED_CBC_SHA = 153u,
__TLS_DHE_RSA_WITH_SEED_CBC_SHA = 154u,
__TLS_DH_anon_WITH_SEED_CBC_SHA = 155u,
__TLS_PSK_WITH_RC4_128_SHA = 138u,
__TLS_PSK_WITH_3DES_EDE_CBC_SHA = 139u,
__TLS_PSK_WITH_AES_128_CBC_SHA = 140u,
__TLS_PSK_WITH_AES_256_CBC_SHA = 141u,
__TLS_DHE_PSK_WITH_RC4_128_SHA = 142u,
__TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA = 143u,
__TLS_DHE_PSK_WITH_AES_128_CBC_SHA = 144u,
__TLS_DHE_PSK_WITH_AES_256_CBC_SHA = 145u,
__TLS_RSA_PSK_WITH_RC4_128_SHA = 146u,
__TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA = 147u,
__TLS_RSA_PSK_WITH_AES_128_CBC_SHA = 148u,
__TLS_RSA_PSK_WITH_AES_256_CBC_SHA = 149u,
__TLS_ECDH_ECDSA_WITH_NULL_SHA = 49153u,
__TLS_ECDH_ECDSA_WITH_RC4_128_SHA = 49154u,
__TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA = 49155u,
__TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA = 49156u,
__TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA = 49157u,
__TLS_ECDHE_ECDSA_WITH_NULL_SHA = 49158u,
__TLS_ECDHE_ECDSA_WITH_RC4_128_SHA = 49159u,
__TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA = 49160u,
__TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA = 49161u,
__TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA = 49162u,
__TLS_ECDH_RSA_WITH_NULL_SHA = 49163u,
__TLS_ECDH_RSA_WITH_RC4_128_SHA = 49164u,
__TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA = 49165u,
__TLS_ECDH_RSA_WITH_AES_128_CBC_SHA = 49166u,
__TLS_ECDH_RSA_WITH_AES_256_CBC_SHA = 49167u,
__TLS_ECDHE_RSA_WITH_NULL_SHA = 49168u,
__TLS_ECDHE_RSA_WITH_RC4_128_SHA = 49169u,
__TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA = 49170u,
__TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA = 49171u,
__TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA = 49172u,
__TLS_ECDH_anon_WITH_NULL_SHA = 49173u,
__TLS_ECDH_anon_WITH_RC4_128_SHA = 49174u,
__TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA = 49175u,
__TLS_ECDH_anon_WITH_AES_128_CBC_SHA = 49176u,
__TLS_ECDH_anon_WITH_AES_256_CBC_SHA = 49177u,
__TLS_PSK_WITH_NULL_SHA = 44u,
__TLS_DHE_PSK_WITH_NULL_SHA = 45u,
__TLS_RSA_PSK_WITH_NULL_SHA = 46u,
__TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA = 49178u,
__TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA = 49179u,
__TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA = 49180u,
__TLS_SRP_SHA_WITH_AES_128_CBC_SHA = 49181u,
__TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA = 49182u,
__TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA = 49183u,
__TLS_SRP_SHA_WITH_AES_256_CBC_SHA = 49184u,
__TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA = 49185u,
__TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA = 49186u,
__TLS_RSA_WITH_NULL_SHA256 = 59u,
__TLS_RSA_WITH_AES_128_CBC_SHA256 = 60u,
__TLS_RSA_WITH_AES_256_CBC_SHA256 = 61u,
__TLS_DH_DSS_WITH_AES_128_CBC_SHA256 = 62u,
__TLS_DH_RSA_WITH_AES_128_CBC_SHA256 = 63u,
__TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 = 64u,
__TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 = 103u,
__TLS_DH_DSS_WITH_AES_256_CBC_SHA256 = 104u,
__TLS_DH_RSA_WITH_AES_256_CBC_SHA256 = 105u,
__TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 = 106u,
__TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 = 107u,
__TLS_DH_anon_WITH_AES_128_CBC_SHA256 = 108u,
__TLS_DH_anon_WITH_AES_256_CBC_SHA256 = 109u,
__TLS_RSA_WITH_AES_128_GCM_SHA256 = 156u,
__TLS_RSA_WITH_AES_256_GCM_SHA384 = 157u,
__TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 = 158u,
__TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 = 159u,
__TLS_DH_RSA_WITH_AES_128_GCM_SHA256 = 160u,
__TLS_DH_RSA_WITH_AES_256_GCM_SHA384 = 161u,
__TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 = 162u,
__TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 = 163u,
__TLS_DH_DSS_WITH_AES_128_GCM_SHA256 = 164u,
__TLS_DH_DSS_WITH_AES_256_GCM_SHA384 = 165u,
__TLS_DH_anon_WITH_AES_128_GCM_SHA256 = 166u,
__TLS_DH_anon_WITH_AES_256_GCM_SHA384 = 167u,
__TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 = 49187u,
__TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 = 49188u,
__TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 = 49189u,
__TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 = 49190u,
__TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 = 49191u,
__TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 = 49192u,
__TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 = 49193u,
__TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 = 49194u,
__TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 49195u,
__TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 = 49196u,
__TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 = 49197u,
__TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 = 49198u,
__TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = 49199u,
__TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 = 49200u,
__TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 = 49201u,
__TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 = 49202u,
__TLS_PSK_WITH_AES_128_GCM_SHA256 = 168u,
__TLS_PSK_WITH_AES_256_GCM_SHA384 = 169u,
__TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 = 170u,
__TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 = 171u,
__TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 = 172u,
__TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 = 173u,
__TLS_PSK_WITH_AES_128_CBC_SHA256 = 174u,
__TLS_PSK_WITH_AES_256_CBC_SHA384 = 175u,
__TLS_PSK_WITH_NULL_SHA256 = 176u,
__TLS_PSK_WITH_NULL_SHA384 = 177u,
__TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 = 178u,
__TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 = 179u,
__TLS_DHE_PSK_WITH_NULL_SHA256 = 180u,
__TLS_DHE_PSK_WITH_NULL_SHA384 = 181u,
__TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 = 182u,
__TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 = 183u,
__TLS_RSA_PSK_WITH_NULL_SHA256 = 184u,
__TLS_RSA_PSK_WITH_NULL_SHA384 = 185u,
__TLS_ECDHE_PSK_WITH_RC4_128_SHA = 49203u,
__TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA = 49204u,
__TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA = 49205u,
__TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA = 49206u,
__TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 = 49207u,
__TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 = 49208u,
__TLS_ECDHE_PSK_WITH_NULL_SHA = 49209u,
__TLS_ECDHE_PSK_WITH_NULL_SHA256 = 49210u,
__TLS_ECDHE_PSK_WITH_NULL_SHA384 = 49211u,
__TLS_EMPTY_RENEGOTIATION_INFO_SCSV = 255u,
__TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 49266u,
__TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 49267u,
__TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 49268u,
__TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 49269u,
__TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 49270u,
__TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 49271u,
__TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 49272u,
__TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 49273u,
__TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49274u,
__TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49275u,
__TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49276u,
__TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49277u,
__TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49278u,
__TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49279u,
__TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 49280u,
__TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 49281u,
__TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 49282u,
__TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 49283u,
__TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 = 49284u,
__TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 = 49285u,
__TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 49286u,
__TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 49287u,
__TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 49288u,
__TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 49289u,
__TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49290u,
__TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49291u,
__TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49292u,
__TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49293u,
__TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49294u,
__TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49295u,
__TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49296u,
__TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49297u,
__TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49298u,
__TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49299u,
__TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49300u,
__TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49301u,
__TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49302u,
__TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49303u,
__TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49304u,
__TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49305u,
__TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49306u,
__TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49307u,
__TLS_RSA_WITH_AES_128_CCM = 49308u,
__TLS_RSA_WITH_AES_256_CCM = 49309u,
__TLS_DHE_RSA_WITH_AES_128_CCM = 49310u,
__TLS_DHE_RSA_WITH_AES_256_CCM = 49311u,
__TLS_RSA_WITH_AES_128_CCM_8 = 49312u,
__TLS_RSA_WITH_AES_256_CCM_8 = 49313u,
__TLS_DHE_RSA_WITH_AES_128_CCM_8 = 49314u,
__TLS_DHE_RSA_WITH_AES_256_CCM_8 = 49315u,
__TLS_PSK_WITH_AES_128_CCM = 49316u,
__TLS_PSK_WITH_AES_256_CCM = 49317u,
__TLS_DHE_PSK_WITH_AES_128_CCM = 49318u,
__TLS_DHE_PSK_WITH_AES_256_CCM = 49319u,
__TLS_PSK_WITH_AES_128_CCM_8 = 49320u,
__TLS_PSK_WITH_AES_256_CCM_8 = 49321u,
__TLS_PSK_DHE_WITH_AES_128_CCM_8 = 49322u,
__TLS_PSK_DHE_WITH_AES_256_CCM_8 = 49323u,
__TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 52243u,
__TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = 52244u,
__TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 52245u,
__TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58384u,
__TLS_RSA_WITH_SALSA20_SHA1 = 58385u,
__TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58386u,
__TLS_ECDHE_RSA_WITH_SALSA20_SHA1 = 58387u,
__TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 = 58388u,
__TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 = 58389u,
__TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58390u,
__TLS_PSK_WITH_SALSA20_SHA1 = 58391u,
__TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58392u,
__TLS_ECDHE_PSK_WITH_SALSA20_SHA1 = 58393u,
__TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58394u,
__TLS_RSA_PSK_WITH_SALSA20_SHA1 = 58395u,
__TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58396u,
__TLS_DHE_PSK_WITH_SALSA20_SHA1 = 58397u,
__TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58398u,
__TLS_DHE_RSA_WITH_SALSA20_SHA1 = 58399u,
__TLS_FALLBACK_SCSV = 22016u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CipherSuiteCode_Unwrapped () const noexcept {
return std::bit_cast<__CipherSuiteCode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint16_t;


// Fields

 uint16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint16_t value) ;

constexpr uint16_t __get_value__() const;

/// @brief Field TLS_NULL_WITH_NULL_NULL offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_NULL_WITH_NULL_NULL;

/// @brief Field TLS_RSA_WITH_NULL_MD5 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_MD5;

/// @brief Field TLS_RSA_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_SHA;

/// @brief Field TLS_RSA_EXPORT_WITH_RC4_40_MD5 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_RC4_40_MD5;

/// @brief Field TLS_RSA_WITH_RC4_128_MD5 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_RC4_128_MD5;

/// @brief Field TLS_RSA_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_RC4_128_SHA;

/// @brief Field TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5;

/// @brief Field TLS_RSA_WITH_IDEA_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_IDEA_CBC_SHA;

/// @brief Field TLS_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_DES40_CBC_SHA;

/// @brief Field TLS_RSA_WITH_DES_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_DES_CBC_SHA;

/// @brief Field TLS_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA;

/// @brief Field TLS_DH_DSS_WITH_DES_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_DES_CBC_SHA;

/// @brief Field TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA;

/// @brief Field TLS_DH_RSA_WITH_DES_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_DES_CBC_SHA;

/// @brief Field TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA;

/// @brief Field TLS_DHE_DSS_WITH_DES_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_DES_CBC_SHA;

/// @brief Field TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA;

/// @brief Field TLS_DHE_RSA_WITH_DES_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_DES_CBC_SHA;

/// @brief Field TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_EXPORT_WITH_RC4_40_MD5;

/// @brief Field TLS_DH_anon_WITH_RC4_128_MD5 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_RC4_128_MD5;

/// @brief Field TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA;

/// @brief Field TLS_DH_anon_WITH_DES_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_DES_CBC_SHA;

/// @brief Field TLS_DH_anon_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_CBC_SHA;

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA;

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA;

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA;

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA;

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA;

/// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_CBC_SHA;

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA;

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA;

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA;

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA;

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA;

/// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256;

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256;

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256;

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256;

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256;

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256;

/// @brief Field TLS_RSA_WITH_SEED_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_SEED_CBC_SHA;

/// @brief Field TLS_DH_DSS_WITH_SEED_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_SEED_CBC_SHA;

/// @brief Field TLS_DH_RSA_WITH_SEED_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_SEED_CBC_SHA;

/// @brief Field TLS_DHE_DSS_WITH_SEED_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_SEED_CBC_SHA;

/// @brief Field TLS_DHE_RSA_WITH_SEED_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_SEED_CBC_SHA;

/// @brief Field TLS_DH_anon_WITH_SEED_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_SEED_CBC_SHA;

/// @brief Field TLS_PSK_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_RC4_128_SHA;

/// @brief Field TLS_PSK_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_DHE_PSK_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_RC4_128_SHA;

/// @brief Field TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_RSA_PSK_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_RC4_128_SHA;

/// @brief Field TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_ECDH_ECDSA_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_NULL_SHA;

/// @brief Field TLS_ECDH_ECDSA_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_RC4_128_SHA;

/// @brief Field TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_ECDHE_ECDSA_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_NULL_SHA;

/// @brief Field TLS_ECDHE_ECDSA_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_RC4_128_SHA;

/// @brief Field TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_ECDH_RSA_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_NULL_SHA;

/// @brief Field TLS_ECDH_RSA_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_RC4_128_SHA;

/// @brief Field TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_ECDHE_RSA_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_NULL_SHA;

/// @brief Field TLS_ECDHE_RSA_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_RC4_128_SHA;

/// @brief Field TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_ECDH_anon_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_NULL_SHA;

/// @brief Field TLS_ECDH_anon_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_RC4_128_SHA;

/// @brief Field TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_ECDH_anon_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_ECDH_anon_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_PSK_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA;

/// @brief Field TLS_DHE_PSK_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA;

/// @brief Field TLS_RSA_PSK_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA;

/// @brief Field TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_SRP_SHA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_SRP_SHA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_RSA_WITH_NULL_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_SHA256;

/// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CBC_SHA256;

/// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_CBC_SHA256;

/// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_CBC_SHA256;

/// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_CBC_SHA256;

/// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CBC_SHA256;

/// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_CBC_SHA256;

/// @brief Field TLS_RSA_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_RSA_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_DH_RSA_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_DH_RSA_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_DH_DSS_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_DH_DSS_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_DH_anon_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_DH_anon_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384;

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384;

/// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384;

/// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384;

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_PSK_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_PSK_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_GCM_SHA256;

/// @brief Field TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_GCM_SHA384;

/// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CBC_SHA384;

/// @brief Field TLS_PSK_WITH_NULL_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA256;

/// @brief Field TLS_PSK_WITH_NULL_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA384;

/// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CBC_SHA384;

/// @brief Field TLS_DHE_PSK_WITH_NULL_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA256;

/// @brief Field TLS_DHE_PSK_WITH_NULL_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA384;

/// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_CBC_SHA384;

/// @brief Field TLS_RSA_PSK_WITH_NULL_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA256;

/// @brief Field TLS_RSA_PSK_WITH_NULL_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA384;

/// @brief Field TLS_ECDHE_PSK_WITH_RC4_128_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_RC4_128_SHA;

/// @brief Field TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA;

/// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA;

/// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA;

/// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256;

/// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384;

/// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA;

/// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA256;

/// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA384;

/// @brief Field TLS_EMPTY_RENEGOTIATION_INFO_SCSV offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_EMPTY_RENEGOTIATION_INFO_SCSV;

/// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384;

/// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384;

/// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384;

/// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384;

/// @brief Field TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256;

/// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384;

/// @brief Field TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384;

/// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384;

/// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384;

/// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256;

/// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384;

/// @brief Field TLS_RSA_WITH_AES_128_CCM offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CCM;

/// @brief Field TLS_RSA_WITH_AES_256_CCM offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CCM;

/// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CCM;

/// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CCM;

/// @brief Field TLS_RSA_WITH_AES_128_CCM_8 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CCM_8;

/// @brief Field TLS_RSA_WITH_AES_256_CCM_8 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CCM_8;

/// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM_8 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CCM_8;

/// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM_8 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CCM_8;

/// @brief Field TLS_PSK_WITH_AES_128_CCM offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CCM;

/// @brief Field TLS_PSK_WITH_AES_256_CCM offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CCM;

/// @brief Field TLS_DHE_PSK_WITH_AES_128_CCM offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CCM;

/// @brief Field TLS_DHE_PSK_WITH_AES_256_CCM offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CCM;

/// @brief Field TLS_PSK_WITH_AES_128_CCM_8 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CCM_8;

/// @brief Field TLS_PSK_WITH_AES_256_CCM_8 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CCM_8;

/// @brief Field TLS_PSK_DHE_WITH_AES_128_CCM_8 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_DHE_WITH_AES_128_CCM_8;

/// @brief Field TLS_PSK_DHE_WITH_AES_256_CCM_8 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_DHE_WITH_AES_256_CCM_8;

/// @brief Field TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256;

/// @brief Field TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256;

/// @brief Field TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256;

/// @brief Field TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_ESTREAM_SALSA20_SHA1;

/// @brief Field TLS_RSA_WITH_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_SALSA20_SHA1;

/// @brief Field TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1;

/// @brief Field TLS_ECDHE_RSA_WITH_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_SALSA20_SHA1;

/// @brief Field TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1;

/// @brief Field TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1;

/// @brief Field TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_ESTREAM_SALSA20_SHA1;

/// @brief Field TLS_PSK_WITH_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_SALSA20_SHA1;

/// @brief Field TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1;

/// @brief Field TLS_ECDHE_PSK_WITH_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_SALSA20_SHA1;

/// @brief Field TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1;

/// @brief Field TLS_RSA_PSK_WITH_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_SALSA20_SHA1;

/// @brief Field TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1;

/// @brief Field TLS_DHE_PSK_WITH_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_SALSA20_SHA1;

/// @brief Field TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1;

/// @brief Field TLS_DHE_RSA_WITH_SALSA20_SHA1 offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_SALSA20_SHA1;

/// @brief Field TLS_FALLBACK_SCSV offset 0
static Mono::Security::Interface::CipherSuiteCode const TLS_FALLBACK_SCSV;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::CipherSuiteCode, "Mono.Security.Interface", "CipherSuiteCode");
