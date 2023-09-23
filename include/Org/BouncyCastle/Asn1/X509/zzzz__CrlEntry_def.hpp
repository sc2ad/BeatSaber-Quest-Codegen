#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
// Type: Org.BouncyCastle.Asn1.X509::CrlEntry
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(390))
// CS Name: Org.BouncyCastle.Asn1.X509.CrlEntry
class CORDL_TYPE CrlEntry : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CrlEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlEntry", modifiers: " const&", def_value: None }]
constexpr CrlEntry(CrlEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlEntry", modifiers: "&&", def_value: None }]
constexpr CrlEntry(CrlEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlEntry(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CrlEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlEntry& operator=(CrlEntry&& o) noexcept = default;
  constexpr CrlEntry& operator=(CrlEntry const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_userCertificate, put=__set_userCertificate))  userCertificate;

constexpr void __set_userCertificate(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_userCertificate() const;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_revocationDate, put=__set_revocationDate))  revocationDate;

constexpr void __set_revocationDate(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_revocationDate() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_crlEntryExtensions, put=__set_crlEntryExtensions))  crlEntryExtensions;

constexpr void __set_crlEntryExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_crlEntryExtensions() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_UserCertificate))  UserCertificate;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_RevocationDate))  RevocationDate;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_Extensions))  Extensions;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CrlEntry(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110eeec size 0x138 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_UserCertificate addr 0x110f024 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_UserCertificate() ;

/// @brief Method get_RevocationDate addr 0x110f02c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::Time get_RevocationDate() ;

/// @brief Method get_Extensions addr 0x110f034 size 0xb0 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_Extensions() ;

/// @brief Method ToAsn1Object addr 0x110f0e4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::CrlEntry);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CrlEntry, "Org.BouncyCastle.Asn1.X509", "CrlEntry");
