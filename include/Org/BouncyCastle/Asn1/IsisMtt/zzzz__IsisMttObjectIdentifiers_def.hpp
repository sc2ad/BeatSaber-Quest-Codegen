#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt {
class IsisMttObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt::IsisMttObjectIdentifiers
namespace Org::BouncyCastle::Asn1::IsisMtt {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(192))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.IsisMttObjectIdentifiers
class CORDL_TYPE IsisMttObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IsisMttObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "IsisMttObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr IsisMttObjectIdentifiers(IsisMttObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IsisMttObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr IsisMttObjectIdentifiers(IsisMttObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IsisMttObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IsisMttObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IsisMttObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IsisMttObjectIdentifiers& operator=(IsisMttObjectIdentifiers&& o) noexcept = default;
  constexpr IsisMttObjectIdentifiers& operator=(IsisMttObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMtt, put=__set_IdIsisMtt))  IdIsisMtt;

static void __set_IdIsisMtt(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMtt() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttCP, put=__set_IdIsisMttCP))  IdIsisMttCP;

static void __set_IdIsisMttCP(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttCP() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttCPAccredited, put=__set_IdIsisMttCPAccredited))  IdIsisMttCPAccredited;

static void __set_IdIsisMttCPAccredited(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttCPAccredited() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttAT, put=__set_IdIsisMttAT))  IdIsisMttAT;

static void __set_IdIsisMttAT(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttAT() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATDateOfCertGen, put=__set_IdIsisMttATDateOfCertGen))  IdIsisMttATDateOfCertGen;

static void __set_IdIsisMttATDateOfCertGen(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATDateOfCertGen() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATProcuration, put=__set_IdIsisMttATProcuration))  IdIsisMttATProcuration;

static void __set_IdIsisMttATProcuration(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATProcuration() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATAdmission, put=__set_IdIsisMttATAdmission))  IdIsisMttATAdmission;

static void __set_IdIsisMttATAdmission(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATAdmission() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATMonetaryLimit, put=__set_IdIsisMttATMonetaryLimit))  IdIsisMttATMonetaryLimit;

static void __set_IdIsisMttATMonetaryLimit(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATMonetaryLimit() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATDeclarationOfMajority, put=__set_IdIsisMttATDeclarationOfMajority))  IdIsisMttATDeclarationOfMajority;

static void __set_IdIsisMttATDeclarationOfMajority(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATDeclarationOfMajority() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATIccsn, put=__set_IdIsisMttATIccsn))  IdIsisMttATIccsn;

static void __set_IdIsisMttATIccsn(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATIccsn() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATPKReference, put=__set_IdIsisMttATPKReference))  IdIsisMttATPKReference;

static void __set_IdIsisMttATPKReference(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATPKReference() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATRestriction, put=__set_IdIsisMttATRestriction))  IdIsisMttATRestriction;

static void __set_IdIsisMttATRestriction(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATRestriction() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATRetrieveIfAllowed, put=__set_IdIsisMttATRetrieveIfAllowed))  IdIsisMttATRetrieveIfAllowed;

static void __set_IdIsisMttATRetrieveIfAllowed(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATRetrieveIfAllowed() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATRequestedCertificate, put=__set_IdIsisMttATRequestedCertificate))  IdIsisMttATRequestedCertificate;

static void __set_IdIsisMttATRequestedCertificate(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATRequestedCertificate() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATNamingAuthorities, put=__set_IdIsisMttATNamingAuthorities))  IdIsisMttATNamingAuthorities;

static void __set_IdIsisMttATNamingAuthorities(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATNamingAuthorities() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATCertInDirSince, put=__set_IdIsisMttATCertInDirSince))  IdIsisMttATCertInDirSince;

static void __set_IdIsisMttATCertInDirSince(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATCertInDirSince() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATCertHash, put=__set_IdIsisMttATCertHash))  IdIsisMttATCertHash;

static void __set_IdIsisMttATCertHash(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATCertHash() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATNameAtBirth, put=__set_IdIsisMttATNameAtBirth))  IdIsisMttATNameAtBirth;

static void __set_IdIsisMttATNameAtBirth(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATNameAtBirth() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATAdditionalInformation, put=__set_IdIsisMttATAdditionalInformation))  IdIsisMttATAdditionalInformation;

static void __set_IdIsisMttATAdditionalInformation(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATAdditionalInformation() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATLiabilityLimitationFlag, put=__set_IdIsisMttATLiabilityLimitationFlag))  IdIsisMttATLiabilityLimitationFlag;

static void __set_IdIsisMttATLiabilityLimitationFlag(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATLiabilityLimitationFlag() ;


// Methods

static Org::BouncyCastle::Asn1::IsisMtt::IsisMttObjectIdentifiers New_ctor() ;

/// @brief Method .ctor addr 0xeed8bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt
NEED_NO_BOX(Org::BouncyCastle::Asn1::IsisMtt::IsisMttObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::IsisMttObjectIdentifiers, "Org.BouncyCastle.Asn1.IsisMtt", "IsisMttObjectIdentifiers");
