#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::OcspObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(210))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.OcspObjectIdentifiers
class CORDL_TYPE OcspObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OcspObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr OcspObjectIdentifiers(OcspObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr OcspObjectIdentifiers(OcspObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OcspObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspObjectIdentifiers& operator=(OcspObjectIdentifiers&& o) noexcept = default;
  constexpr OcspObjectIdentifiers& operator=(OcspObjectIdentifiers const& o) noexcept = default;
                


// Fields

/// @brief Field PkixOcspId offset 0
static constexpr ::ConstString  PkixOcspId{u"1.3.6.1.5.5.7.48.1"};

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkixOcsp, put=__set_PkixOcsp))  PkixOcsp;

static void __set_PkixOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkixOcsp() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkixOcspBasic, put=__set_PkixOcspBasic))  PkixOcspBasic;

static void __set_PkixOcspBasic(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkixOcspBasic() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkixOcspNonce, put=__set_PkixOcspNonce))  PkixOcspNonce;

static void __set_PkixOcspNonce(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkixOcspNonce() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkixOcspCrl, put=__set_PkixOcspCrl))  PkixOcspCrl;

static void __set_PkixOcspCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkixOcspCrl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkixOcspResponse, put=__set_PkixOcspResponse))  PkixOcspResponse;

static void __set_PkixOcspResponse(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkixOcspResponse() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkixOcspNocheck, put=__set_PkixOcspNocheck))  PkixOcspNocheck;

static void __set_PkixOcspNocheck(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkixOcspNocheck() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkixOcspArchiveCutoff, put=__set_PkixOcspArchiveCutoff))  PkixOcspArchiveCutoff;

static void __set_PkixOcspArchiveCutoff(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkixOcspArchiveCutoff() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkixOcspServiceLocator, put=__set_PkixOcspServiceLocator))  PkixOcspServiceLocator;

static void __set_PkixOcspServiceLocator(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkixOcspServiceLocator() ;


// Methods

// Ctor Parameters []
explicit OcspObjectIdentifiers() ;

/// @brief Method .ctor addr 0xef2930 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers, "Org.BouncyCastle.Asn1.Ocsp", "OcspObjectIdentifiers");
