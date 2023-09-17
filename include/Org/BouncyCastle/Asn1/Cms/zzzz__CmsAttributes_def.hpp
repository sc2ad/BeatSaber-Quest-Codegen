#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CmsAttributes;
}
// Type: Org.BouncyCastle.Asn1.Cms::CmsAttributes
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(62))
// CS Name: Org.BouncyCastle.Asn1.Cms.CmsAttributes
class CORDL_TYPE CmsAttributes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CmsAttributes() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAttributes", modifiers: " const&", def_value: None }]
constexpr CmsAttributes(CmsAttributes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAttributes", modifiers: "&&", def_value: None }]
constexpr CmsAttributes(CmsAttributes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAttributes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsAttributes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAttributes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAttributes& operator=(CmsAttributes&& o) noexcept = default;
  constexpr CmsAttributes& operator=(CmsAttributes const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ContentType, put=__set_ContentType))  ContentType;

static void __set_ContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ContentType() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MessageDigest, put=__set_MessageDigest))  MessageDigest;

static void __set_MessageDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MessageDigest() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SigningTime, put=__set_SigningTime))  SigningTime;

static void __set_SigningTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SigningTime() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CounterSignature, put=__set_CounterSignature))  CounterSignature;

static void __set_CounterSignature(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CounterSignature() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ContentHint, put=__set_ContentHint))  ContentHint;

static void __set_ContentHint(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ContentHint() ;


// Methods

// Ctor Parameters []
explicit CmsAttributes() ;

/// @brief Method .ctor addr 0xde8464 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CmsAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CmsAttributes, "Org.BouncyCastle.Asn1.Cms", "CmsAttributes");
