#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class RevocationDetails;
}
// Type: Org.BouncyCastle.Cmp::RevocationDetails
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(608))
// CS Name: Org.BouncyCastle.Cmp.RevocationDetails
class CORDL_TYPE RevocationDetails : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RevocationDetails() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationDetails", modifiers: " const&", def_value: None }]
constexpr RevocationDetails(RevocationDetails const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationDetails", modifiers: "&&", def_value: None }]
constexpr RevocationDetails(RevocationDetails&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevocationDetails(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RevocationDetails& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevocationDetails& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevocationDetails& operator=(RevocationDetails&& o) noexcept = default;
  constexpr RevocationDetails& operator=(RevocationDetails const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Cmp::RevDetails __declspec(property(get=__get_revDetails, put=__set_revDetails))  revDetails;

constexpr void __set_revDetails(::Org::BouncyCastle::Asn1::Cmp::RevDetails value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails __get_revDetails() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Subject))  Subject;

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Issuer))  Issuer;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber))  SerialNumber;


// Methods

// Ctor Parameters [CppParam { name: "revDetails", ty: "::Org::BouncyCastle::Asn1::Cmp::RevDetails", modifiers: "", def_value: None }]
explicit RevocationDetails(::Org::BouncyCastle::Asn1::Cmp::RevDetails revDetails) ;

/// @brief Method .ctor addr 0x114dcf0 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails revDetails) ;

/// @brief Method get_Subject addr 0x114dd18 size 0x30 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_Subject() ;

/// @brief Method get_Issuer addr 0x114dd48 size 0x30 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_Issuer() ;

/// @brief Method get_SerialNumber addr 0x114dd78 size 0x3c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method ToASN1Structure addr 0x114ddb4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cmp::RevDetails ToASN1Structure() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cmp::RevocationDetails);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::RevocationDetails, "Org.BouncyCastle.Cmp", "RevocationDetails");
