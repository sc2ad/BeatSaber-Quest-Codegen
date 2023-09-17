#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::NamingAuthority
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(188))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.NamingAuthority
class CORDL_TYPE NamingAuthority : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NamingAuthority() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamingAuthority", modifiers: " const&", def_value: None }]
constexpr NamingAuthority(NamingAuthority const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamingAuthority", modifiers: "&&", def_value: None }]
constexpr NamingAuthority(NamingAuthority&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamingAuthority(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr NamingAuthority& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamingAuthority& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamingAuthority& operator=(NamingAuthority&& o) noexcept = default;
  constexpr NamingAuthority& operator=(NamingAuthority const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern, put=__set_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern))  IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern;

static void __set_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern() ;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_namingAuthorityID, put=__set_namingAuthorityID))  namingAuthorityID;

constexpr void __set_namingAuthorityID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_namingAuthorityID() const;

 ::StringW __declspec(property(get=__get_namingAuthorityUrl, put=__set_namingAuthorityUrl))  namingAuthorityUrl;

constexpr void __set_namingAuthorityUrl(::StringW value) ;

constexpr ::StringW __get_namingAuthorityUrl() const;

 ::Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_namingAuthorityText, put=__set_namingAuthorityText))  namingAuthorityText;

constexpr void __set_namingAuthorityText(::Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString __get_namingAuthorityText() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_NamingAuthorityID))  NamingAuthorityID;

 ::Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_NamingAuthorityText))  NamingAuthorityText;

 ::StringW __declspec(property(get=get_NamingAuthorityUrl))  NamingAuthorityUrl;


// Methods

/// @brief Method GetInstance addr 0xeea86c size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xee90c0 size 0x78 virtual false final false
static ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit NamingAuthority(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeea9f4 size 0x5c8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_NamingAuthorityID addr 0xeeb0ac size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_NamingAuthorityID() ;

/// @brief Method get_NamingAuthorityText addr 0xeeb0b4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X500::DirectoryString get_NamingAuthorityText() ;

/// @brief Method get_NamingAuthorityUrl addr 0xeeb0bc size 0x8 virtual true final false
 ::StringW get_NamingAuthorityUrl() ;

// Ctor Parameters [CppParam { name: "namingAuthorityID", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "namingAuthorityUrl", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namingAuthorityText", ty: "::Org::BouncyCastle::Asn1::X500::DirectoryString", modifiers: "", def_value: None }]
explicit NamingAuthority(::Org::BouncyCastle::Asn1::DerObjectIdentifier namingAuthorityID, ::StringW namingAuthorityUrl, ::Org::BouncyCastle::Asn1::X500::DirectoryString namingAuthorityText) ;

/// @brief Method .ctor addr 0xeeb0c4 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier namingAuthorityID, ::StringW namingAuthorityUrl, ::Org::BouncyCastle::Asn1::X500::DirectoryString namingAuthorityText) ;

/// @brief Method ToAsn1Object addr 0xeeb100 size 0x19c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority, "Org.BouncyCastle.Asn1.IsisMtt.X509", "NamingAuthority");
