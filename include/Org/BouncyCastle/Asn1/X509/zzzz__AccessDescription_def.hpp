#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
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
namespace Org::BouncyCastle::Asn1::X509 {
class AccessDescription;
}
// Type: Org.BouncyCastle.Asn1.X509::AccessDescription
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(338))
// CS Name: Org.BouncyCastle.Asn1.X509.AccessDescription
class CORDL_TYPE AccessDescription : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AccessDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "AccessDescription", modifiers: " const&", def_value: None }]
constexpr AccessDescription(AccessDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AccessDescription", modifiers: "&&", def_value: None }]
constexpr AccessDescription(AccessDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AccessDescription(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AccessDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AccessDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AccessDescription& operator=(AccessDescription&& o) noexcept = default;
  constexpr AccessDescription& operator=(AccessDescription const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdADCAIssuers, put=__set_IdADCAIssuers))  IdADCAIssuers;

static void __set_IdADCAIssuers(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdADCAIssuers() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdADOcsp, put=__set_IdADOcsp))  IdADOcsp;

static void __set_IdADOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdADOcsp() ;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_accessMethod, put=__set_accessMethod))  accessMethod;

constexpr void __set_accessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_accessMethod() const;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_accessLocation, put=__set_accessLocation))  accessLocation;

constexpr void __set_accessLocation(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get_accessLocation() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_AccessMethod))  AccessMethod;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_AccessLocation))  AccessLocation;


// Methods

/// @brief Method GetInstance addr 0xff6524 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AccessDescription GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AccessDescription(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff66ac size 0x118 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "location", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit AccessDescription(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Asn1::X509::GeneralName location) ;

/// @brief Method .ctor addr 0xff67c4 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Asn1::X509::GeneralName location) ;

/// @brief Method get_AccessMethod addr 0xff67f0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_AccessMethod() ;

/// @brief Method get_AccessLocation addr 0xff67f8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::GeneralName get_AccessLocation() ;

/// @brief Method ToAsn1Object addr 0xff6800 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0xff68f0 size 0x70 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AccessDescription);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AccessDescription, "Org.BouncyCastle.Asn1.X509", "AccessDescription");
