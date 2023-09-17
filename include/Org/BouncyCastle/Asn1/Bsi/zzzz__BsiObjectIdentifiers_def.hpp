#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Bsi {
class BsiObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Bsi::BsiObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Bsi {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9))
// CS Name: Org.BouncyCastle.Asn1.Bsi.BsiObjectIdentifiers
class CORDL_TYPE BsiObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BsiObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsiObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr BsiObjectIdentifiers(BsiObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsiObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr BsiObjectIdentifiers(BsiObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsiObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BsiObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsiObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsiObjectIdentifiers& operator=(BsiObjectIdentifiers&& o) noexcept = default;
  constexpr BsiObjectIdentifiers& operator=(BsiObjectIdentifiers const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bsi_de, put=__set_bsi_de))  bsi_de;

static void __set_bsi_de(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bsi_de() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_ecc, put=__set_id_ecc))  id_ecc;

static void __set_id_ecc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_ecc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecdsa_plain_signatures, put=__set_ecdsa_plain_signatures))  ecdsa_plain_signatures;

static void __set_ecdsa_plain_signatures(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecdsa_plain_signatures() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecdsa_plain_SHA1, put=__set_ecdsa_plain_SHA1))  ecdsa_plain_SHA1;

static void __set_ecdsa_plain_SHA1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecdsa_plain_SHA1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecdsa_plain_SHA224, put=__set_ecdsa_plain_SHA224))  ecdsa_plain_SHA224;

static void __set_ecdsa_plain_SHA224(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecdsa_plain_SHA224() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecdsa_plain_SHA256, put=__set_ecdsa_plain_SHA256))  ecdsa_plain_SHA256;

static void __set_ecdsa_plain_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecdsa_plain_SHA256() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecdsa_plain_SHA384, put=__set_ecdsa_plain_SHA384))  ecdsa_plain_SHA384;

static void __set_ecdsa_plain_SHA384(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecdsa_plain_SHA384() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecdsa_plain_SHA512, put=__set_ecdsa_plain_SHA512))  ecdsa_plain_SHA512;

static void __set_ecdsa_plain_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecdsa_plain_SHA512() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecdsa_plain_RIPEMD160, put=__set_ecdsa_plain_RIPEMD160))  ecdsa_plain_RIPEMD160;

static void __set_ecdsa_plain_RIPEMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecdsa_plain_RIPEMD160() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

static void __set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_algorithm() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg, put=__set_ecka_eg))  ecka_eg;

static void __set_ecka_eg(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_X963kdf, put=__set_ecka_eg_X963kdf))  ecka_eg_X963kdf;

static void __set_ecka_eg_X963kdf(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_X963kdf() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_X963kdf_SHA1, put=__set_ecka_eg_X963kdf_SHA1))  ecka_eg_X963kdf_SHA1;

static void __set_ecka_eg_X963kdf_SHA1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_X963kdf_SHA1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_X963kdf_SHA224, put=__set_ecka_eg_X963kdf_SHA224))  ecka_eg_X963kdf_SHA224;

static void __set_ecka_eg_X963kdf_SHA224(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_X963kdf_SHA224() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_X963kdf_SHA256, put=__set_ecka_eg_X963kdf_SHA256))  ecka_eg_X963kdf_SHA256;

static void __set_ecka_eg_X963kdf_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_X963kdf_SHA256() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_X963kdf_SHA384, put=__set_ecka_eg_X963kdf_SHA384))  ecka_eg_X963kdf_SHA384;

static void __set_ecka_eg_X963kdf_SHA384(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_X963kdf_SHA384() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_X963kdf_SHA512, put=__set_ecka_eg_X963kdf_SHA512))  ecka_eg_X963kdf_SHA512;

static void __set_ecka_eg_X963kdf_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_X963kdf_SHA512() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_X963kdf_RIPEMD160, put=__set_ecka_eg_X963kdf_RIPEMD160))  ecka_eg_X963kdf_RIPEMD160;

static void __set_ecka_eg_X963kdf_RIPEMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_X963kdf_RIPEMD160() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_SessionKDF, put=__set_ecka_eg_SessionKDF))  ecka_eg_SessionKDF;

static void __set_ecka_eg_SessionKDF(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_SessionKDF() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_SessionKDF_3DES, put=__set_ecka_eg_SessionKDF_3DES))  ecka_eg_SessionKDF_3DES;

static void __set_ecka_eg_SessionKDF_3DES(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_SessionKDF_3DES() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_SessionKDF_AES128, put=__set_ecka_eg_SessionKDF_AES128))  ecka_eg_SessionKDF_AES128;

static void __set_ecka_eg_SessionKDF_AES128(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_SessionKDF_AES128() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_SessionKDF_AES192, put=__set_ecka_eg_SessionKDF_AES192))  ecka_eg_SessionKDF_AES192;

static void __set_ecka_eg_SessionKDF_AES192(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_SessionKDF_AES192() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ecka_eg_SessionKDF_AES256, put=__set_ecka_eg_SessionKDF_AES256))  ecka_eg_SessionKDF_AES256;

static void __set_ecka_eg_SessionKDF_AES256(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ecka_eg_SessionKDF_AES256() ;


// Methods

// Ctor Parameters []
explicit BsiObjectIdentifiers() ;

/// @brief Method .ctor addr 0xdd6d50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Bsi
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers, "Org.BouncyCastle.Asn1.Bsi", "BsiObjectIdentifiers");
