#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::BC {
class BCObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.BC::BCObjectIdentifiers
namespace Org::BouncyCastle::Asn1::BC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5))
// CS Name: Org.BouncyCastle.Asn1.BC.BCObjectIdentifiers
class CORDL_TYPE BCObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BCObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "BCObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr BCObjectIdentifiers(BCObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BCObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr BCObjectIdentifiers(BCObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BCObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BCObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BCObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BCObjectIdentifiers& operator=(BCObjectIdentifiers&& o) noexcept = default;
  constexpr BCObjectIdentifiers& operator=(BCObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc, put=__set_bc))  bc;

static void __set_bc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe, put=__set_bc_pbe))  bc_pbe;

static void __set_bc_pbe(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha1, put=__set_bc_pbe_sha1))  bc_pbe_sha1;

static void __set_bc_pbe_sha1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha256, put=__set_bc_pbe_sha256))  bc_pbe_sha256;

static void __set_bc_pbe_sha256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha384, put=__set_bc_pbe_sha384))  bc_pbe_sha384;

static void __set_bc_pbe_sha384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha512, put=__set_bc_pbe_sha512))  bc_pbe_sha512;

static void __set_bc_pbe_sha512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha224, put=__set_bc_pbe_sha224))  bc_pbe_sha224;

static void __set_bc_pbe_sha224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha1_pkcs5, put=__set_bc_pbe_sha1_pkcs5))  bc_pbe_sha1_pkcs5;

static void __set_bc_pbe_sha1_pkcs5(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha1_pkcs5() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha1_pkcs12, put=__set_bc_pbe_sha1_pkcs12))  bc_pbe_sha1_pkcs12;

static void __set_bc_pbe_sha1_pkcs12(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha1_pkcs12() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha256_pkcs5, put=__set_bc_pbe_sha256_pkcs5))  bc_pbe_sha256_pkcs5;

static void __set_bc_pbe_sha256_pkcs5(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha256_pkcs5() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha256_pkcs12, put=__set_bc_pbe_sha256_pkcs12))  bc_pbe_sha256_pkcs12;

static void __set_bc_pbe_sha256_pkcs12(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha256_pkcs12() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha1_pkcs12_aes128_cbc, put=__set_bc_pbe_sha1_pkcs12_aes128_cbc))  bc_pbe_sha1_pkcs12_aes128_cbc;

static void __set_bc_pbe_sha1_pkcs12_aes128_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha1_pkcs12_aes128_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha1_pkcs12_aes192_cbc, put=__set_bc_pbe_sha1_pkcs12_aes192_cbc))  bc_pbe_sha1_pkcs12_aes192_cbc;

static void __set_bc_pbe_sha1_pkcs12_aes192_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha1_pkcs12_aes192_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha1_pkcs12_aes256_cbc, put=__set_bc_pbe_sha1_pkcs12_aes256_cbc))  bc_pbe_sha1_pkcs12_aes256_cbc;

static void __set_bc_pbe_sha1_pkcs12_aes256_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha1_pkcs12_aes256_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha256_pkcs12_aes128_cbc, put=__set_bc_pbe_sha256_pkcs12_aes128_cbc))  bc_pbe_sha256_pkcs12_aes128_cbc;

static void __set_bc_pbe_sha256_pkcs12_aes128_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha256_pkcs12_aes128_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha256_pkcs12_aes192_cbc, put=__set_bc_pbe_sha256_pkcs12_aes192_cbc))  bc_pbe_sha256_pkcs12_aes192_cbc;

static void __set_bc_pbe_sha256_pkcs12_aes192_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha256_pkcs12_aes192_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_pbe_sha256_pkcs12_aes256_cbc, put=__set_bc_pbe_sha256_pkcs12_aes256_cbc))  bc_pbe_sha256_pkcs12_aes256_cbc;

static void __set_bc_pbe_sha256_pkcs12_aes256_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_pbe_sha256_pkcs12_aes256_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_sig, put=__set_bc_sig))  bc_sig;

static void __set_bc_sig(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_sig() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sphincs256, put=__set_sphincs256))  sphincs256;

static void __set_sphincs256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sphincs256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sphincs256_with_BLAKE512, put=__set_sphincs256_with_BLAKE512))  sphincs256_with_BLAKE512;

static void __set_sphincs256_with_BLAKE512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sphincs256_with_BLAKE512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sphincs256_with_SHA512, put=__set_sphincs256_with_SHA512))  sphincs256_with_SHA512;

static void __set_sphincs256_with_SHA512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sphincs256_with_SHA512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sphincs256_with_SHA3_512, put=__set_sphincs256_with_SHA3_512))  sphincs256_with_SHA3_512;

static void __set_sphincs256_with_SHA3_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sphincs256_with_SHA3_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss, put=__set_xmss))  xmss;

static void __set_xmss(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_with_SHA256, put=__set_xmss_with_SHA256))  xmss_with_SHA256;

static void __set_xmss_with_SHA256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_with_SHA256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_with_SHA512, put=__set_xmss_with_SHA512))  xmss_with_SHA512;

static void __set_xmss_with_SHA512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_with_SHA512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_with_SHAKE128, put=__set_xmss_with_SHAKE128))  xmss_with_SHAKE128;

static void __set_xmss_with_SHAKE128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_with_SHAKE128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_with_SHAKE256, put=__set_xmss_with_SHAKE256))  xmss_with_SHAKE256;

static void __set_xmss_with_SHAKE256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_with_SHAKE256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_mt, put=__set_xmss_mt))  xmss_mt;

static void __set_xmss_mt(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_mt() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_mt_with_SHA256, put=__set_xmss_mt_with_SHA256))  xmss_mt_with_SHA256;

static void __set_xmss_mt_with_SHA256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_mt_with_SHA256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_mt_with_SHA512, put=__set_xmss_mt_with_SHA512))  xmss_mt_with_SHA512;

static void __set_xmss_mt_with_SHA512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_mt_with_SHA512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_mt_with_SHAKE128, put=__set_xmss_mt_with_SHAKE128))  xmss_mt_with_SHAKE128;

static void __set_xmss_mt_with_SHAKE128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_mt_with_SHAKE128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_xmss_mt_with_SHAKE256, put=__set_xmss_mt_with_SHAKE256))  xmss_mt_with_SHAKE256;

static void __set_xmss_mt_with_SHAKE256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_xmss_mt_with_SHAKE256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_exch, put=__set_bc_exch))  bc_exch;

static void __set_bc_exch(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_exch() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_newHope, put=__set_newHope))  newHope;

static void __set_newHope(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_newHope() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bc_ext, put=__set_bc_ext))  bc_ext;

static void __set_bc_ext(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bc_ext() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_linkedCertificate, put=__set_linkedCertificate))  linkedCertificate;

static void __set_linkedCertificate(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_linkedCertificate() ;


// Methods

static Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers New_ctor() ;

/// @brief Method .ctor addr 0xdd609c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::BC
NEED_NO_BOX(Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers, "Org.BouncyCastle.Asn1.BC", "BCObjectIdentifiers");
