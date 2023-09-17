#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class SemanticsInformation;
}
// Type: Org.BouncyCastle.Asn1.X509.Qualified::SemanticsInformation
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(333))
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.SemanticsInformation
class CORDL_TYPE SemanticsInformation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SemanticsInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "SemanticsInformation", modifiers: " const&", def_value: None }]
constexpr SemanticsInformation(SemanticsInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SemanticsInformation", modifiers: "&&", def_value: None }]
constexpr SemanticsInformation(SemanticsInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SemanticsInformation(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SemanticsInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SemanticsInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SemanticsInformation& operator=(SemanticsInformation&& o) noexcept = default;
  constexpr SemanticsInformation& operator=(SemanticsInformation const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_semanticsIdentifier, put=__set_semanticsIdentifier))  semanticsIdentifier;

constexpr void __set_semanticsIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_semanticsIdentifier() const;

 ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> __declspec(property(get=__get_nameRegistrationAuthorities, put=__set_nameRegistrationAuthorities))  nameRegistrationAuthorities;

constexpr void __set_nameRegistrationAuthorities(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> __get_nameRegistrationAuthorities() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_SemanticsIdentifier))  SemanticsIdentifier;


// Methods

/// @brief Method GetInstance addr 0xff4908 size 0x168 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SemanticsInformation(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff4a70 size 0x3a8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "semanticsIdentifier", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "generalNames", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName>", modifiers: "", def_value: None }]
explicit SemanticsInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier semanticsIdentifier, ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> generalNames) ;

/// @brief Method .ctor addr 0xff4e18 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier semanticsIdentifier, ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> generalNames) ;

// Ctor Parameters [CppParam { name: "semanticsIdentifier", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit SemanticsInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier semanticsIdentifier) ;

/// @brief Method .ctor addr 0xff4e44 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier semanticsIdentifier) ;

// Ctor Parameters [CppParam { name: "generalNames", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName>", modifiers: "", def_value: None }]
explicit SemanticsInformation(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> generalNames) ;

/// @brief Method .ctor addr 0xff4e6c size 0x28 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> generalNames) ;

/// @brief Method get_SemanticsIdentifier addr 0xff4e94 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_SemanticsIdentifier() ;

/// @brief Method GetNameRegistrationAuthorities addr 0xff4e9c size 0x8 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> GetNameRegistrationAuthorities() ;

/// @brief Method ToAsn1Object addr 0xff4ea4 size 0x13c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation, "Org.BouncyCastle.Asn1.X509.Qualified", "SemanticsInformation");
