#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AccessDescription;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AuthorityInformationAccess;
}
// Type: Org.BouncyCastle.Asn1.X509::AuthorityInformationAccess
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(344))
// CS Name: Org.BouncyCastle.Asn1.X509.AuthorityInformationAccess
class CORDL_TYPE AuthorityInformationAccess : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AuthorityInformationAccess() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityInformationAccess", modifiers: " const&", def_value: None }]
constexpr AuthorityInformationAccess(AuthorityInformationAccess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityInformationAccess", modifiers: "&&", def_value: None }]
constexpr AuthorityInformationAccess(AuthorityInformationAccess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthorityInformationAccess(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AuthorityInformationAccess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthorityInformationAccess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthorityInformationAccess& operator=(AuthorityInformationAccess&& o) noexcept = default;
  constexpr AuthorityInformationAccess& operator=(AuthorityInformationAccess const& o) noexcept = default;
                


// Fields

 ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription> __declspec(property(get=__get_descriptions, put=__set_descriptions))  descriptions;

constexpr void __set_descriptions(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription> value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription> __get_descriptions() const;


// Methods

/// @brief Method Copy addr 0xff829c size 0x78 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription> Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription> descriptions) ;

/// @brief Method GetInstance addr 0xff8314 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FromExtensions addr 0xff8580 size 0x68 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AuthorityInformationAccess(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff83b8 size 0x1c8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "description", ty: "::Org::BouncyCastle::Asn1::X509::AccessDescription", modifiers: "", def_value: None }]
explicit AuthorityInformationAccess(::Org::BouncyCastle::Asn1::X509::AccessDescription description) ;

/// @brief Method .ctor addr 0xff85e8 size 0xa8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AccessDescription description) ;

// Ctor Parameters [CppParam { name: "descriptions", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription>", modifiers: "", def_value: None }]
explicit AuthorityInformationAccess(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription> descriptions) ;

/// @brief Method .ctor addr 0xff8690 size 0x30 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription> descriptions) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "location", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit AuthorityInformationAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Asn1::X509::GeneralName location) ;

/// @brief Method .ctor addr 0xff86c0 size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Asn1::X509::GeneralName location) ;

/// @brief Method GetAccessDescriptions addr 0xff8738 size 0x8 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription> GetAccessDescriptions() ;

/// @brief Method ToAsn1Object addr 0xff8740 size 0x68 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0xff87a8 size 0x15c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess, "Org.BouncyCastle.Asn1.X509", "AuthorityInformationAccess");
