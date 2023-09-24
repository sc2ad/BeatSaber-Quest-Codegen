#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509::SigI {
class NameOrPseudonym;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::SigI {
class PersonalData;
}
// Type: Org.BouncyCastle.Asn1.X509.SigI::PersonalData
namespace Org::BouncyCastle::Asn1::X509::SigI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(336))
// CS Name: Org.BouncyCastle.Asn1.X509.SigI.PersonalData
class CORDL_TYPE PersonalData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PersonalData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PersonalData", modifiers: " const&", def_value: None }]
constexpr PersonalData(PersonalData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PersonalData", modifiers: "&&", def_value: None }]
constexpr PersonalData(PersonalData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PersonalData(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PersonalData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PersonalData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PersonalData& operator=(PersonalData&& o) noexcept = default;
  constexpr PersonalData& operator=(PersonalData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym __declspec(property(get=__get_nameOrPseudonym, put=__set_nameOrPseudonym))  nameOrPseudonym;

constexpr void __set_nameOrPseudonym(Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym value) ;

constexpr Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym __get_nameOrPseudonym() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_nameDistinguisher, put=__set_nameDistinguisher))  nameDistinguisher;

constexpr void __set_nameDistinguisher(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_nameDistinguisher() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_dateOfBirth, put=__set_dateOfBirth))  dateOfBirth;

constexpr void __set_dateOfBirth(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_dateOfBirth() const;

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_placeOfBirth, put=__set_placeOfBirth))  placeOfBirth;

constexpr void __set_placeOfBirth(Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr Org::BouncyCastle::Asn1::X500::DirectoryString __get_placeOfBirth() const;

 ::StringW __declspec(property(get=__get_gender, put=__set_gender))  gender;

constexpr void __set_gender(::StringW value) ;

constexpr ::StringW __get_gender() const;

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_postalAddress, put=__set_postalAddress))  postalAddress;

constexpr void __set_postalAddress(Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr Org::BouncyCastle::Asn1::X500::DirectoryString __get_postalAddress() const;


// Properties

 Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym __declspec(property(get=get_NameOrPseudonym))  NameOrPseudonym;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_NameDistinguisher))  NameDistinguisher;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_DateOfBirth))  DateOfBirth;

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_PlaceOfBirth))  PlaceOfBirth;

 ::StringW __declspec(property(get=get_Gender))  Gender;

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_PostalAddress))  PostalAddress;


// Methods

/// @brief Method GetInstance addr 0xff5b28 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::SigI::PersonalData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::SigI::PersonalData New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff5cb0 size 0x36c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::X509::SigI::PersonalData New_ctor(Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym nameOrPseudonym, Org::BouncyCastle::Math::BigInteger nameDistinguisher, Org::BouncyCastle::Asn1::DerGeneralizedTime dateOfBirth, Org::BouncyCastle::Asn1::X500::DirectoryString placeOfBirth, ::StringW gender, Org::BouncyCastle::Asn1::X500::DirectoryString postalAddress) ;

/// @brief Method .ctor addr 0xff601c size 0x54 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym nameOrPseudonym, Org::BouncyCastle::Math::BigInteger nameDistinguisher, Org::BouncyCastle::Asn1::DerGeneralizedTime dateOfBirth, Org::BouncyCastle::Asn1::X500::DirectoryString placeOfBirth, ::StringW gender, Org::BouncyCastle::Asn1::X500::DirectoryString postalAddress) ;

/// @brief Method get_NameOrPseudonym addr 0xff6070 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym get_NameOrPseudonym() ;

/// @brief Method get_NameDistinguisher addr 0xff6078 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_NameDistinguisher() ;

/// @brief Method get_DateOfBirth addr 0xff6080 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_DateOfBirth() ;

/// @brief Method get_PlaceOfBirth addr 0xff6088 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X500::DirectoryString get_PlaceOfBirth() ;

/// @brief Method get_Gender addr 0xff6090 size 0x8 virtual false final false
 ::StringW get_Gender() ;

/// @brief Method get_PostalAddress addr 0xff6098 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X500::DirectoryString get_PostalAddress() ;

/// @brief Method ToAsn1Object addr 0xff60a0 size 0x234 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::SigI
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::SigI::PersonalData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::SigI::PersonalData, "Org.BouncyCastle.Asn1.X509.SigI", "PersonalData");
