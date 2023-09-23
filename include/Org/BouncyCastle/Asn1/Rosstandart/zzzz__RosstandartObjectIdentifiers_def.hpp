#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Rosstandart {
class RosstandartObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Rosstandart::RosstandartObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Rosstandart {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(254))
// CS Name: Org.BouncyCastle.Asn1.Rosstandart.RosstandartObjectIdentifiers
class CORDL_TYPE RosstandartObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RosstandartObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "RosstandartObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr RosstandartObjectIdentifiers(RosstandartObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RosstandartObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr RosstandartObjectIdentifiers(RosstandartObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RosstandartObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RosstandartObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RosstandartObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RosstandartObjectIdentifiers& operator=(RosstandartObjectIdentifiers&& o) noexcept = default;
  constexpr RosstandartObjectIdentifiers& operator=(RosstandartObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_rosstandart, put=__set_rosstandart))  rosstandart;

static void __set_rosstandart(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_rosstandart() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26, put=__set_id_tc26))  id_tc26;

static void __set_id_tc26(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3411_12_256, put=__set_id_tc26_gost_3411_12_256))  id_tc26_gost_3411_12_256;

static void __set_id_tc26_gost_3411_12_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3411_12_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3411_12_512, put=__set_id_tc26_gost_3411_12_512))  id_tc26_gost_3411_12_512;

static void __set_id_tc26_gost_3411_12_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3411_12_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_hmac_gost_3411_12_256, put=__set_id_tc26_hmac_gost_3411_12_256))  id_tc26_hmac_gost_3411_12_256;

static void __set_id_tc26_hmac_gost_3411_12_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_hmac_gost_3411_12_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_hmac_gost_3411_12_512, put=__set_id_tc26_hmac_gost_3411_12_512))  id_tc26_hmac_gost_3411_12_512;

static void __set_id_tc26_hmac_gost_3411_12_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_hmac_gost_3411_12_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3410_12_256, put=__set_id_tc26_gost_3410_12_256))  id_tc26_gost_3410_12_256;

static void __set_id_tc26_gost_3410_12_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3410_12_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3410_12_512, put=__set_id_tc26_gost_3410_12_512))  id_tc26_gost_3410_12_512;

static void __set_id_tc26_gost_3410_12_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3410_12_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_signwithdigest_gost_3410_12_256, put=__set_id_tc26_signwithdigest_gost_3410_12_256))  id_tc26_signwithdigest_gost_3410_12_256;

static void __set_id_tc26_signwithdigest_gost_3410_12_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_signwithdigest_gost_3410_12_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_signwithdigest_gost_3410_12_512, put=__set_id_tc26_signwithdigest_gost_3410_12_512))  id_tc26_signwithdigest_gost_3410_12_512;

static void __set_id_tc26_signwithdigest_gost_3410_12_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_signwithdigest_gost_3410_12_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_agreement, put=__set_id_tc26_agreement))  id_tc26_agreement;

static void __set_id_tc26_agreement(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_agreement() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_agreement_gost_3410_12_256, put=__set_id_tc26_agreement_gost_3410_12_256))  id_tc26_agreement_gost_3410_12_256;

static void __set_id_tc26_agreement_gost_3410_12_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_agreement_gost_3410_12_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_agreement_gost_3410_12_512, put=__set_id_tc26_agreement_gost_3410_12_512))  id_tc26_agreement_gost_3410_12_512;

static void __set_id_tc26_agreement_gost_3410_12_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_agreement_gost_3410_12_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3410_12_256_paramSet, put=__set_id_tc26_gost_3410_12_256_paramSet))  id_tc26_gost_3410_12_256_paramSet;

static void __set_id_tc26_gost_3410_12_256_paramSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3410_12_256_paramSet() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3410_12_256_paramSetA, put=__set_id_tc26_gost_3410_12_256_paramSetA))  id_tc26_gost_3410_12_256_paramSetA;

static void __set_id_tc26_gost_3410_12_256_paramSetA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3410_12_256_paramSetA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3410_12_512_paramSet, put=__set_id_tc26_gost_3410_12_512_paramSet))  id_tc26_gost_3410_12_512_paramSet;

static void __set_id_tc26_gost_3410_12_512_paramSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3410_12_512_paramSet() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3410_12_512_paramSetA, put=__set_id_tc26_gost_3410_12_512_paramSetA))  id_tc26_gost_3410_12_512_paramSetA;

static void __set_id_tc26_gost_3410_12_512_paramSetA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3410_12_512_paramSetA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3410_12_512_paramSetB, put=__set_id_tc26_gost_3410_12_512_paramSetB))  id_tc26_gost_3410_12_512_paramSetB;

static void __set_id_tc26_gost_3410_12_512_paramSetB(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3410_12_512_paramSetB() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_3410_12_512_paramSetC, put=__set_id_tc26_gost_3410_12_512_paramSetC))  id_tc26_gost_3410_12_512_paramSetC;

static void __set_id_tc26_gost_3410_12_512_paramSetC(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_3410_12_512_paramSetC() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_tc26_gost_28147_param_Z, put=__set_id_tc26_gost_28147_param_Z))  id_tc26_gost_28147_param_Z;

static void __set_id_tc26_gost_28147_param_Z(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_tc26_gost_28147_param_Z() ;


// Methods

// Ctor Parameters []
explicit RosstandartObjectIdentifiers() ;

/// @brief Method .ctor addr 0xfdda10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Rosstandart
NEED_NO_BOX(Org::BouncyCastle::Asn1::Rosstandart::RosstandartObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Rosstandart::RosstandartObjectIdentifiers, "Org.BouncyCastle.Asn1.Rosstandart", "RosstandartObjectIdentifiers");
