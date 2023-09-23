#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Eac {
class EacObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Eac::EacObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Eac {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(132))
// CS Name: Org.BouncyCastle.Asn1.Eac.EacObjectIdentifiers
class CORDL_TYPE EacObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EacObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "EacObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr EacObjectIdentifiers(EacObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EacObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr EacObjectIdentifiers(EacObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EacObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EacObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EacObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EacObjectIdentifiers& operator=(EacObjectIdentifiers&& o) noexcept = default;
  constexpr EacObjectIdentifiers& operator=(EacObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bsi_de, put=__set_bsi_de))  bsi_de;

static void __set_bsi_de(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bsi_de() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_PK, put=__set_id_PK))  id_PK;

static void __set_id_PK(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_PK() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_PK_DH, put=__set_id_PK_DH))  id_PK_DH;

static void __set_id_PK_DH(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_PK_DH() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_PK_ECDH, put=__set_id_PK_ECDH))  id_PK_ECDH;

static void __set_id_PK_ECDH(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_PK_ECDH() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_CA, put=__set_id_CA))  id_CA;

static void __set_id_CA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_CA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_CA_DH, put=__set_id_CA_DH))  id_CA_DH;

static void __set_id_CA_DH(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_CA_DH() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_CA_DH_3DES_CBC_CBC, put=__set_id_CA_DH_3DES_CBC_CBC))  id_CA_DH_3DES_CBC_CBC;

static void __set_id_CA_DH_3DES_CBC_CBC(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_CA_DH_3DES_CBC_CBC() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_CA_ECDH, put=__set_id_CA_ECDH))  id_CA_ECDH;

static void __set_id_CA_ECDH(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_CA_ECDH() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_CA_ECDH_3DES_CBC_CBC, put=__set_id_CA_ECDH_3DES_CBC_CBC))  id_CA_ECDH_3DES_CBC_CBC;

static void __set_id_CA_ECDH_3DES_CBC_CBC(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_CA_ECDH_3DES_CBC_CBC() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA, put=__set_id_TA))  id_TA;

static void __set_id_TA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_RSA, put=__set_id_TA_RSA))  id_TA_RSA;

static void __set_id_TA_RSA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_RSA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_RSA_v1_5_SHA_1, put=__set_id_TA_RSA_v1_5_SHA_1))  id_TA_RSA_v1_5_SHA_1;

static void __set_id_TA_RSA_v1_5_SHA_1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_RSA_v1_5_SHA_1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_RSA_v1_5_SHA_256, put=__set_id_TA_RSA_v1_5_SHA_256))  id_TA_RSA_v1_5_SHA_256;

static void __set_id_TA_RSA_v1_5_SHA_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_RSA_v1_5_SHA_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_RSA_PSS_SHA_1, put=__set_id_TA_RSA_PSS_SHA_1))  id_TA_RSA_PSS_SHA_1;

static void __set_id_TA_RSA_PSS_SHA_1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_RSA_PSS_SHA_1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_RSA_PSS_SHA_256, put=__set_id_TA_RSA_PSS_SHA_256))  id_TA_RSA_PSS_SHA_256;

static void __set_id_TA_RSA_PSS_SHA_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_RSA_PSS_SHA_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_ECDSA, put=__set_id_TA_ECDSA))  id_TA_ECDSA;

static void __set_id_TA_ECDSA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_ECDSA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_ECDSA_SHA_1, put=__set_id_TA_ECDSA_SHA_1))  id_TA_ECDSA_SHA_1;

static void __set_id_TA_ECDSA_SHA_1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_ECDSA_SHA_1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_ECDSA_SHA_224, put=__set_id_TA_ECDSA_SHA_224))  id_TA_ECDSA_SHA_224;

static void __set_id_TA_ECDSA_SHA_224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_ECDSA_SHA_224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_ECDSA_SHA_256, put=__set_id_TA_ECDSA_SHA_256))  id_TA_ECDSA_SHA_256;

static void __set_id_TA_ECDSA_SHA_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_ECDSA_SHA_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_ECDSA_SHA_384, put=__set_id_TA_ECDSA_SHA_384))  id_TA_ECDSA_SHA_384;

static void __set_id_TA_ECDSA_SHA_384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_ECDSA_SHA_384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_TA_ECDSA_SHA_512, put=__set_id_TA_ECDSA_SHA_512))  id_TA_ECDSA_SHA_512;

static void __set_id_TA_ECDSA_SHA_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_TA_ECDSA_SHA_512() ;


// Methods

// Ctor Parameters []
explicit EacObjectIdentifiers() ;

/// @brief Method .ctor addr 0xe00804 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Eac
NEED_NO_BOX(Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers, "Org.BouncyCastle.Asn1.Eac", "EacObjectIdentifiers");
