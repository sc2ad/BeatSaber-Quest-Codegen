#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class ProcurationSyntax;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::ProcurationSyntax
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(189))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.ProcurationSyntax
class CORDL_TYPE ProcurationSyntax : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ProcurationSyntax() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcurationSyntax", modifiers: " const&", def_value: None }]
constexpr ProcurationSyntax(ProcurationSyntax const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcurationSyntax", modifiers: "&&", def_value: None }]
constexpr ProcurationSyntax(ProcurationSyntax&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProcurationSyntax(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ProcurationSyntax& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProcurationSyntax& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProcurationSyntax& operator=(ProcurationSyntax&& o) noexcept = default;
  constexpr ProcurationSyntax& operator=(ProcurationSyntax const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_country, put=__set_country))  country;

constexpr void __set_country(::StringW value) ;

constexpr ::StringW __get_country() const;

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_typeOfSubstitution, put=__set_typeOfSubstitution))  typeOfSubstitution;

constexpr void __set_typeOfSubstitution(Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr Org::BouncyCastle::Asn1::X500::DirectoryString __get_typeOfSubstitution() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_thirdPerson, put=__set_thirdPerson))  thirdPerson;

constexpr void __set_thirdPerson(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_thirdPerson() const;

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=__get_certRef, put=__set_certRef))  certRef;

constexpr void __set_certRef(Org::BouncyCastle::Asn1::X509::IssuerSerial value) ;

constexpr Org::BouncyCastle::Asn1::X509::IssuerSerial __get_certRef() const;


// Properties

 ::StringW __declspec(property(get=get_Country))  Country;

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_TypeOfSubstitution))  TypeOfSubstitution;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_ThirdPerson))  ThirdPerson;

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=get_CertRef))  CertRef;


// Methods

/// @brief Method GetInstance addr 0xeeb448 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ProcurationSyntax(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeeb5d0 size 0x2fc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "country", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "typeOfSubstitution", ty: "Org::BouncyCastle::Asn1::X500::DirectoryString", modifiers: "", def_value: None }, CppParam { name: "certRef", ty: "Org::BouncyCastle::Asn1::X509::IssuerSerial", modifiers: "", def_value: None }]
explicit ProcurationSyntax(::StringW country, Org::BouncyCastle::Asn1::X500::DirectoryString typeOfSubstitution, Org::BouncyCastle::Asn1::X509::IssuerSerial certRef) ;

/// @brief Method .ctor addr 0xeeb8cc size 0x3c virtual false final false
 void _ctor(::StringW country, Org::BouncyCastle::Asn1::X500::DirectoryString typeOfSubstitution, Org::BouncyCastle::Asn1::X509::IssuerSerial certRef) ;

// Ctor Parameters [CppParam { name: "country", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "typeOfSubstitution", ty: "Org::BouncyCastle::Asn1::X500::DirectoryString", modifiers: "", def_value: None }, CppParam { name: "thirdPerson", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit ProcurationSyntax(::StringW country, Org::BouncyCastle::Asn1::X500::DirectoryString typeOfSubstitution, Org::BouncyCastle::Asn1::X509::GeneralName thirdPerson) ;

/// @brief Method .ctor addr 0xeeb908 size 0x3c virtual false final false
 void _ctor(::StringW country, Org::BouncyCastle::Asn1::X500::DirectoryString typeOfSubstitution, Org::BouncyCastle::Asn1::X509::GeneralName thirdPerson) ;

/// @brief Method get_Country addr 0xeeb944 size 0x8 virtual true final false
 ::StringW get_Country() ;

/// @brief Method get_TypeOfSubstitution addr 0xeeb94c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X500::DirectoryString get_TypeOfSubstitution() ;

/// @brief Method get_ThirdPerson addr 0xeeb954 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_ThirdPerson() ;

/// @brief Method get_CertRef addr 0xeeb95c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::IssuerSerial get_CertRef() ;

/// @brief Method ToAsn1Object addr 0xeeb964 size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax, "Org.BouncyCastle.Asn1.IsisMtt.X509", "ProcurationSyntax");
