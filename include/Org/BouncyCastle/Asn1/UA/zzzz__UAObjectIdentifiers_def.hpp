#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::UA {
class UAObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.UA::UAObjectIdentifiers
namespace Org::BouncyCastle::Asn1::UA {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(319))
// CS Name: Org.BouncyCastle.Asn1.UA.UAObjectIdentifiers
class CORDL_TYPE UAObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UAObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "UAObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr UAObjectIdentifiers(UAObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UAObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr UAObjectIdentifiers(UAObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UAObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UAObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UAObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UAObjectIdentifiers& operator=(UAObjectIdentifiers&& o) noexcept = default;
  constexpr UAObjectIdentifiers& operator=(UAObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_UaOid, put=__set_UaOid))  UaOid;

static void __set_UaOid(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_UaOid() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu4145le, put=__set_dstu4145le))  dstu4145le;

static void __set_dstu4145le(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu4145le() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu4145be, put=__set_dstu4145be))  dstu4145be;

static void __set_dstu4145be(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu4145be() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7564digest_256, put=__set_dstu7564digest_256))  dstu7564digest_256;

static void __set_dstu7564digest_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7564digest_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7564digest_384, put=__set_dstu7564digest_384))  dstu7564digest_384;

static void __set_dstu7564digest_384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7564digest_384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7564digest_512, put=__set_dstu7564digest_512))  dstu7564digest_512;

static void __set_dstu7564digest_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7564digest_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7564mac_256, put=__set_dstu7564mac_256))  dstu7564mac_256;

static void __set_dstu7564mac_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7564mac_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7564mac_384, put=__set_dstu7564mac_384))  dstu7564mac_384;

static void __set_dstu7564mac_384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7564mac_384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7564mac_512, put=__set_dstu7564mac_512))  dstu7564mac_512;

static void __set_dstu7564mac_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7564mac_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ecb_128, put=__set_dstu7624ecb_128))  dstu7624ecb_128;

static void __set_dstu7624ecb_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ecb_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ecb_256, put=__set_dstu7624ecb_256))  dstu7624ecb_256;

static void __set_dstu7624ecb_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ecb_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ecb_512, put=__set_dstu7624ecb_512))  dstu7624ecb_512;

static void __set_dstu7624ecb_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ecb_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ctr_128, put=__set_dstu7624ctr_128))  dstu7624ctr_128;

static void __set_dstu7624ctr_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ctr_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ctr_256, put=__set_dstu7624ctr_256))  dstu7624ctr_256;

static void __set_dstu7624ctr_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ctr_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ctr_512, put=__set_dstu7624ctr_512))  dstu7624ctr_512;

static void __set_dstu7624ctr_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ctr_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cfb_128, put=__set_dstu7624cfb_128))  dstu7624cfb_128;

static void __set_dstu7624cfb_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cfb_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cfb_256, put=__set_dstu7624cfb_256))  dstu7624cfb_256;

static void __set_dstu7624cfb_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cfb_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cfb_512, put=__set_dstu7624cfb_512))  dstu7624cfb_512;

static void __set_dstu7624cfb_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cfb_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cmac_128, put=__set_dstu7624cmac_128))  dstu7624cmac_128;

static void __set_dstu7624cmac_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cmac_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cmac_256, put=__set_dstu7624cmac_256))  dstu7624cmac_256;

static void __set_dstu7624cmac_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cmac_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cmac_512, put=__set_dstu7624cmac_512))  dstu7624cmac_512;

static void __set_dstu7624cmac_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cmac_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cbc_128, put=__set_dstu7624cbc_128))  dstu7624cbc_128;

static void __set_dstu7624cbc_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cbc_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cbc_256, put=__set_dstu7624cbc_256))  dstu7624cbc_256;

static void __set_dstu7624cbc_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cbc_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624cbc_512, put=__set_dstu7624cbc_512))  dstu7624cbc_512;

static void __set_dstu7624cbc_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624cbc_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ofb_128, put=__set_dstu7624ofb_128))  dstu7624ofb_128;

static void __set_dstu7624ofb_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ofb_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ofb_256, put=__set_dstu7624ofb_256))  dstu7624ofb_256;

static void __set_dstu7624ofb_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ofb_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ofb_512, put=__set_dstu7624ofb_512))  dstu7624ofb_512;

static void __set_dstu7624ofb_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ofb_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624gmac_128, put=__set_dstu7624gmac_128))  dstu7624gmac_128;

static void __set_dstu7624gmac_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624gmac_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624gmac_256, put=__set_dstu7624gmac_256))  dstu7624gmac_256;

static void __set_dstu7624gmac_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624gmac_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624gmac_512, put=__set_dstu7624gmac_512))  dstu7624gmac_512;

static void __set_dstu7624gmac_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624gmac_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ccm_128, put=__set_dstu7624ccm_128))  dstu7624ccm_128;

static void __set_dstu7624ccm_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ccm_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ccm_256, put=__set_dstu7624ccm_256))  dstu7624ccm_256;

static void __set_dstu7624ccm_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ccm_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624ccm_512, put=__set_dstu7624ccm_512))  dstu7624ccm_512;

static void __set_dstu7624ccm_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624ccm_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624xts_128, put=__set_dstu7624xts_128))  dstu7624xts_128;

static void __set_dstu7624xts_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624xts_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624xts_256, put=__set_dstu7624xts_256))  dstu7624xts_256;

static void __set_dstu7624xts_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624xts_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624xts_512, put=__set_dstu7624xts_512))  dstu7624xts_512;

static void __set_dstu7624xts_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624xts_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624kw_128, put=__set_dstu7624kw_128))  dstu7624kw_128;

static void __set_dstu7624kw_128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624kw_128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624kw_256, put=__set_dstu7624kw_256))  dstu7624kw_256;

static void __set_dstu7624kw_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624kw_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dstu7624kw_512, put=__set_dstu7624kw_512))  dstu7624kw_512;

static void __set_dstu7624kw_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dstu7624kw_512() ;


// Methods

// Ctor Parameters []
explicit UAObjectIdentifiers() ;

/// @brief Method .ctor addr 0xfedf5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::UA
NEED_NO_BOX(Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers, "Org.BouncyCastle.Asn1.UA", "UAObjectIdentifiers");
