#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X500 {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X500 {
class Rdn;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500::Style {
class IetfUtilities;
}
// Type: Org.BouncyCastle.Asn1.X500.Style::IetfUtilities
namespace Org::BouncyCastle::Asn1::X500::Style {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(323))
// CS Name: Org.BouncyCastle.Asn1.X500.Style.IetfUtilities
class CORDL_TYPE IetfUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IetfUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "IetfUtilities", modifiers: " const&", def_value: None }]
constexpr IetfUtilities(IetfUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IetfUtilities", modifiers: "&&", def_value: None }]
constexpr IetfUtilities(IetfUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IetfUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IetfUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IetfUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IetfUtilities& operator=(IetfUtilities&& o) noexcept = default;
  constexpr IetfUtilities& operator=(IetfUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method ValueToString addr 0xff18d0 size 0x4fc virtual false final false
static ::StringW ValueToString(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method Canonicalize addr 0xff1dcc size 0x2a4 virtual false final false
static ::StringW Canonicalize(::StringW s) ;

/// @brief Method CanonicalString addr 0xff22ec size 0x10 virtual false final false
static ::StringW CanonicalString(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method DecodeObject addr 0xff2070 size 0x150 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Object DecodeObject(::StringW oValue) ;

/// @brief Method StripInternalSpaces addr 0xff21c0 size 0x12c virtual false final false
static ::StringW StripInternalSpaces(::StringW str) ;

/// @brief Method RdnAreEqual addr 0xff22fc size 0xe8 virtual false final false
static bool RdnAreEqual(Org::BouncyCastle::Asn1::X500::Rdn rdn1, Org::BouncyCastle::Asn1::X500::Rdn rdn2) ;

/// @brief Method AtvAreEqual addr 0xff23e4 size 0xcc virtual false final false
static bool AtvAreEqual(Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue atv1, Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue atv2) ;

// Ctor Parameters []
explicit IetfUtilities() ;

/// @brief Method .ctor addr 0xff24b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X500::Style
NEED_NO_BOX(Org::BouncyCastle::Asn1::X500::Style::IetfUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X500::Style::IetfUtilities, "Org.BouncyCastle.Asn1.X500.Style", "IetfUtilities");
