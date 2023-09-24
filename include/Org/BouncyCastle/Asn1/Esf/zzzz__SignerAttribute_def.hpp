#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignerAttribute;
}
// Type: Org.BouncyCastle.Asn1.Esf::SignerAttribute
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(157))
// CS Name: Org.BouncyCastle.Asn1.Esf.SignerAttribute
class CORDL_TYPE SignerAttribute : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignerAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerAttribute", modifiers: " const&", def_value: None }]
constexpr SignerAttribute(SignerAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerAttribute", modifiers: "&&", def_value: None }]
constexpr SignerAttribute(SignerAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerAttribute(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SignerAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerAttribute& operator=(SignerAttribute&& o) noexcept = default;
  constexpr SignerAttribute& operator=(SignerAttribute const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_claimedAttributes, put=__set_claimedAttributes))  claimedAttributes;

constexpr void __set_claimedAttributes(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_claimedAttributes() const;

 Org::BouncyCastle::Asn1::X509::AttributeCertificate __declspec(property(get=__get_certifiedAttributes, put=__set_certifiedAttributes))  certifiedAttributes;

constexpr void __set_certifiedAttributes(Org::BouncyCastle::Asn1::X509::AttributeCertificate value) ;

constexpr Org::BouncyCastle::Asn1::X509::AttributeCertificate __get_certifiedAttributes() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_ClaimedAttributes))  ClaimedAttributes;

 Org::BouncyCastle::Asn1::X509::AttributeCertificate __declspec(property(get=get_CertifiedAttributes))  CertifiedAttributes;


// Methods

/// @brief Method GetInstance addr 0xe0a600 size 0x154 virtual false final false
static Org::BouncyCastle::Asn1::Esf::SignerAttribute GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Esf::SignerAttribute New_ctor(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method .ctor addr 0xe0a754 size 0x174 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Esf::SignerAttribute New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence claimedAttributes) ;

/// @brief Method .ctor addr 0xe0a8c8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence claimedAttributes) ;

static Org::BouncyCastle::Asn1::Esf::SignerAttribute New_ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate certifiedAttributes) ;

/// @brief Method .ctor addr 0xe0a8f0 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate certifiedAttributes) ;

/// @brief Method get_ClaimedAttributes addr 0xe0a918 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Sequence get_ClaimedAttributes() ;

/// @brief Method get_CertifiedAttributes addr 0xe0a920 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AttributeCertificate get_CertifiedAttributes() ;

/// @brief Method ToAsn1Object addr 0xe0a928 size 0x100 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::SignerAttribute);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::SignerAttribute, "Org.BouncyCastle.Asn1.Esf", "SignerAttribute");
