#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
}
// Type: Org.BouncyCastle.Asn1.Cmp::RevDetails
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(50))
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevDetails
class CORDL_TYPE RevDetails : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RevDetails() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevDetails", modifiers: " const&", def_value: None }]
constexpr RevDetails(RevDetails const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevDetails", modifiers: "&&", def_value: None }]
constexpr RevDetails(RevDetails&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevDetails(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RevDetails& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevDetails& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevDetails& operator=(RevDetails&& o) noexcept = default;
  constexpr RevDetails& operator=(RevDetails const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Crmf::CertTemplate __declspec(property(get=__get_certDetails, put=__set_certDetails))  certDetails;

constexpr void __set_certDetails(::Org::BouncyCastle::Asn1::Crmf::CertTemplate value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate __get_certDetails() const;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_crlEntryDetails, put=__set_crlEntryDetails))  crlEntryDetails;

constexpr void __set_crlEntryDetails(::Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions __get_crlEntryDetails() const;


// Properties

 ::Org::BouncyCastle::Asn1::Crmf::CertTemplate __declspec(property(get=get_CertDetails))  CertDetails;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_CrlEntryDetails))  CrlEntryDetails;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RevDetails(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde1720 size 0xd4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xde17f4 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::RevDetails GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "certDetails", ty: "::Org::BouncyCastle::Asn1::Crmf::CertTemplate", modifiers: "", def_value: None }]
explicit RevDetails(::Org::BouncyCastle::Asn1::Crmf::CertTemplate certDetails) ;

/// @brief Method .ctor addr 0xde197c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate certDetails) ;

// Ctor Parameters [CppParam { name: "certDetails", ty: "::Org::BouncyCastle::Asn1::Crmf::CertTemplate", modifiers: "", def_value: None }, CppParam { name: "crlEntryDetails", ty: "::Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit RevDetails(::Org::BouncyCastle::Asn1::Crmf::CertTemplate certDetails, ::Org::BouncyCastle::Asn1::X509::X509Extensions crlEntryDetails) ;

/// @brief Method .ctor addr 0xde19a4 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate certDetails, ::Org::BouncyCastle::Asn1::X509::X509Extensions crlEntryDetails) ;

/// @brief Method get_CertDetails addr 0xde19d0 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Crmf::CertTemplate get_CertDetails() ;

/// @brief Method get_CrlEntryDetails addr 0xde19d8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions get_CrlEntryDetails() ;

/// @brief Method ToAsn1Object addr 0xde19e0 size 0x148 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevDetails);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevDetails, "Org.BouncyCastle.Asn1.Cmp", "RevDetails");
