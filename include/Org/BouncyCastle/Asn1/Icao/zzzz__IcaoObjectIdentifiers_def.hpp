#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class IcaoObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Icao::IcaoObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(176))
// CS Name: Org.BouncyCastle.Asn1.Icao.IcaoObjectIdentifiers
class CORDL_TYPE IcaoObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IcaoObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "IcaoObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr IcaoObjectIdentifiers(IcaoObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IcaoObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr IcaoObjectIdentifiers(IcaoObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IcaoObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IcaoObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IcaoObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IcaoObjectIdentifiers& operator=(IcaoObjectIdentifiers&& o) noexcept = default;
  constexpr IcaoObjectIdentifiers& operator=(IcaoObjectIdentifiers const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcao, put=__set_IdIcao))  IdIcao;

static void __set_IdIcao(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcao() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoMrtd, put=__set_IdIcaoMrtd))  IdIcaoMrtd;

static void __set_IdIcaoMrtd(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoMrtd() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoMrtdSecurity, put=__set_IdIcaoMrtdSecurity))  IdIcaoMrtdSecurity;

static void __set_IdIcaoMrtdSecurity(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoMrtdSecurity() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoLdsSecurityObject, put=__set_IdIcaoLdsSecurityObject))  IdIcaoLdsSecurityObject;

static void __set_IdIcaoLdsSecurityObject(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoLdsSecurityObject() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoCscaMasterList, put=__set_IdIcaoCscaMasterList))  IdIcaoCscaMasterList;

static void __set_IdIcaoCscaMasterList(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoCscaMasterList() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoCscaMasterListSigningKey, put=__set_IdIcaoCscaMasterListSigningKey))  IdIcaoCscaMasterListSigningKey;

static void __set_IdIcaoCscaMasterListSigningKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoCscaMasterListSigningKey() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoDocumentTypeList, put=__set_IdIcaoDocumentTypeList))  IdIcaoDocumentTypeList;

static void __set_IdIcaoDocumentTypeList(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoDocumentTypeList() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoAAProtocolObject, put=__set_IdIcaoAAProtocolObject))  IdIcaoAAProtocolObject;

static void __set_IdIcaoAAProtocolObject(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoAAProtocolObject() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoExtensions, put=__set_IdIcaoExtensions))  IdIcaoExtensions;

static void __set_IdIcaoExtensions(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoExtensions() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdIcaoExtensionsNamechangekeyrollover, put=__set_IdIcaoExtensionsNamechangekeyrollover))  IdIcaoExtensionsNamechangekeyrollover;

static void __set_IdIcaoExtensionsNamechangekeyrollover(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdIcaoExtensionsNamechangekeyrollover() ;


// Methods

// Ctor Parameters []
explicit IcaoObjectIdentifiers() ;

/// @brief Method .ctor addr 0xee6c20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Icao
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers, "Org.BouncyCastle.Asn1.Icao", "IcaoObjectIdentifiers");
