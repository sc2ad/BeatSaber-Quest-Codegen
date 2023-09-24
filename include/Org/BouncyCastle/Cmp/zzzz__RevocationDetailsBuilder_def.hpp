#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Cmp {
class RevocationDetails;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class RevocationDetailsBuilder;
}
// Type: Org.BouncyCastle.Cmp::RevocationDetailsBuilder
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(609))
// CS Name: Org.BouncyCastle.Cmp.RevocationDetailsBuilder
class CORDL_TYPE RevocationDetailsBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RevocationDetailsBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationDetailsBuilder", modifiers: " const&", def_value: None }]
constexpr RevocationDetailsBuilder(RevocationDetailsBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationDetailsBuilder", modifiers: "&&", def_value: None }]
constexpr RevocationDetailsBuilder(RevocationDetailsBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevocationDetailsBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RevocationDetailsBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevocationDetailsBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevocationDetailsBuilder& operator=(RevocationDetailsBuilder&& o) noexcept = default;
  constexpr RevocationDetailsBuilder& operator=(RevocationDetailsBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder __declspec(property(get=__get__templateBuilder, put=__set__templateBuilder))  _templateBuilder;

constexpr void __set__templateBuilder(Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder __get__templateBuilder() const;


// Methods

/// @brief Method SetPublicKey addr 0x114ddbc size 0x30 virtual false final false
 Org::BouncyCastle::Cmp::RevocationDetailsBuilder SetPublicKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo publicKey) ;

/// @brief Method SetIssuer addr 0x114ddec size 0x30 virtual false final false
 Org::BouncyCastle::Cmp::RevocationDetailsBuilder SetIssuer(Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

/// @brief Method SetSerialNumber addr 0x114de1c size 0x90 virtual false final false
 Org::BouncyCastle::Cmp::RevocationDetailsBuilder SetSerialNumber(Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method SetSubject addr 0x114deac size 0x30 virtual false final false
 Org::BouncyCastle::Cmp::RevocationDetailsBuilder SetSubject(Org::BouncyCastle::Asn1::X509::X509Name subject) ;

/// @brief Method Build addr 0x114dedc size 0xb4 virtual false final false
 Org::BouncyCastle::Cmp::RevocationDetails Build() ;

static Org::BouncyCastle::Cmp::RevocationDetailsBuilder New_ctor() ;

/// @brief Method .ctor addr 0x114df90 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(Org::BouncyCastle::Cmp::RevocationDetailsBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cmp::RevocationDetailsBuilder, "Org.BouncyCastle.Cmp", "RevocationDetailsBuilder");
