#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::SigI {
class SigIObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.X509.SigI::SigIObjectIdentifiers
namespace Org::BouncyCastle::Asn1::X509::SigI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(337))
// CS Name: Org.BouncyCastle.Asn1.X509.SigI.SigIObjectIdentifiers
class CORDL_TYPE SigIObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SigIObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "SigIObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr SigIObjectIdentifiers(SigIObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SigIObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr SigIObjectIdentifiers(SigIObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SigIObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SigIObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SigIObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SigIObjectIdentifiers& operator=(SigIObjectIdentifiers&& o) noexcept = default;
  constexpr SigIObjectIdentifiers& operator=(SigIObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSigI, put=__set_IdSigI))  IdSigI;

static void __set_IdSigI(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSigI() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSigIKP, put=__set_IdSigIKP))  IdSigIKP;

static void __set_IdSigIKP(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSigIKP() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSigICP, put=__set_IdSigICP))  IdSigICP;

static void __set_IdSigICP(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSigICP() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSigION, put=__set_IdSigION))  IdSigION;

static void __set_IdSigION(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSigION() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSigIKPDirectoryService, put=__set_IdSigIKPDirectoryService))  IdSigIKPDirectoryService;

static void __set_IdSigIKPDirectoryService(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSigIKPDirectoryService() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSigIONPersonalData, put=__set_IdSigIONPersonalData))  IdSigIONPersonalData;

static void __set_IdSigIONPersonalData(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSigIONPersonalData() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSigICPSigConform, put=__set_IdSigICPSigConform))  IdSigICPSigConform;

static void __set_IdSigICPSigConform(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSigICPSigConform() ;


// Methods

// Ctor Parameters []
explicit SigIObjectIdentifiers() ;

/// @brief Method .ctor addr 0xff62d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::SigI
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::SigI::SigIObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::SigI::SigIObjectIdentifiers, "Org.BouncyCastle.Asn1.X509.SigI", "SigIObjectIdentifiers");
