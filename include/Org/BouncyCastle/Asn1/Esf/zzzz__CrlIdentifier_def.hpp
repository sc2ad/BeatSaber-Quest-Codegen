#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CrlIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Esf::CrlIdentifier
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(140))
// CS Name: Org.BouncyCastle.Asn1.Esf.CrlIdentifier
class CORDL_TYPE CrlIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CrlIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlIdentifier", modifiers: " const&", def_value: None }]
constexpr CrlIdentifier(CrlIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlIdentifier", modifiers: "&&", def_value: None }]
constexpr CrlIdentifier(CrlIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlIdentifier(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CrlIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlIdentifier& operator=(CrlIdentifier&& o) noexcept = default;
  constexpr CrlIdentifier& operator=(CrlIdentifier const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_crlIssuer, put=__set_crlIssuer))  crlIssuer;

constexpr void __set_crlIssuer(::Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Name __get_crlIssuer() const;

 ::Org::BouncyCastle::Asn1::DerUtcTime __declspec(property(get=__get_crlIssuedTime, put=__set_crlIssuedTime))  crlIssuedTime;

constexpr void __set_crlIssuedTime(::Org::BouncyCastle::Asn1::DerUtcTime value) ;

constexpr ::Org::BouncyCastle::Asn1::DerUtcTime __get_crlIssuedTime() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_crlNumber, put=__set_crlNumber))  crlNumber;

constexpr void __set_crlNumber(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_crlNumber() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_CrlIssuer))  CrlIssuer;

 ::System::DateTime __declspec(property(get=get_CrlIssuedTime))  CrlIssuedTime;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_CrlNumber))  CrlNumber;


// Methods

/// @brief Method GetInstance addr 0xe03260 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CrlIdentifier(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe033e8 size 0x218 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "crlIssuer", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "crlIssuedTime", ty: "::System::DateTime", modifiers: "", def_value: None }]
explicit CrlIdentifier(::Org::BouncyCastle::Asn1::X509::X509Name crlIssuer, ::System::DateTime crlIssuedTime) ;

/// @brief Method .ctor addr 0xe03600 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name crlIssuer, ::System::DateTime crlIssuedTime) ;

// Ctor Parameters [CppParam { name: "crlIssuer", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "crlIssuedTime", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "crlNumber", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit CrlIdentifier(::Org::BouncyCastle::Asn1::X509::X509Name crlIssuer, ::System::DateTime crlIssuedTime, ::Org::BouncyCastle::Math::BigInteger crlNumber) ;

/// @brief Method .ctor addr 0xe03608 size 0x10c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name crlIssuer, ::System::DateTime crlIssuedTime, ::Org::BouncyCastle::Math::BigInteger crlNumber) ;

/// @brief Method get_CrlIssuer addr 0xe03714 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_CrlIssuer() ;

/// @brief Method get_CrlIssuedTime addr 0xe0371c size 0x1c virtual false final false
 ::System::DateTime get_CrlIssuedTime() ;

/// @brief Method get_CrlNumber addr 0xe03738 size 0x10 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_CrlNumber() ;

/// @brief Method ToAsn1Object addr 0xe03748 size 0x18c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier, "Org.BouncyCastle.Asn1.Esf", "CrlIdentifier");
