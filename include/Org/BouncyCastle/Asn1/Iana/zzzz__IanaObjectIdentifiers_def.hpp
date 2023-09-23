#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Iana {
class IanaObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Iana::IanaObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Iana {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(173))
// CS Name: Org.BouncyCastle.Asn1.Iana.IanaObjectIdentifiers
class CORDL_TYPE IanaObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IanaObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "IanaObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr IanaObjectIdentifiers(IanaObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IanaObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr IanaObjectIdentifiers(IanaObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IanaObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IanaObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IanaObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IanaObjectIdentifiers& operator=(IanaObjectIdentifiers&& o) noexcept = default;
  constexpr IanaObjectIdentifiers& operator=(IanaObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IsakmpOakley, put=__set_IsakmpOakley))  IsakmpOakley;

static void __set_IsakmpOakley(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IsakmpOakley() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_HmacMD5, put=__set_HmacMD5))  HmacMD5;

static void __set_HmacMD5(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_HmacMD5() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_HmacSha1, put=__set_HmacSha1))  HmacSha1;

static void __set_HmacSha1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_HmacSha1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_HmacTiger, put=__set_HmacTiger))  HmacTiger;

static void __set_HmacTiger(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_HmacTiger() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_HmacRipeMD160, put=__set_HmacRipeMD160))  HmacRipeMD160;

static void __set_HmacRipeMD160(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_HmacRipeMD160() ;


// Methods

// Ctor Parameters []
explicit IanaObjectIdentifiers() ;

/// @brief Method .ctor addr 0xe10da0 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Iana
NEED_NO_BOX(Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers, "Org.BouncyCastle.Asn1.Iana", "IanaObjectIdentifiers");
