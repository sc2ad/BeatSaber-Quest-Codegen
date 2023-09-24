#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_def.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientKeyIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeEncryptionKeyPreferenceAttribute;
}
// Type: Org.BouncyCastle.Asn1.Smime::SmimeEncryptionKeyPreferenceAttribute
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(293))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(297))
// CS Name: Org.BouncyCastle.Asn1.Smime.SmimeEncryptionKeyPreferenceAttribute
class CORDL_TYPE SmimeEncryptionKeyPreferenceAttribute : public Org::BouncyCastle::Asn1::X509::AttributeX509 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SmimeEncryptionKeyPreferenceAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeEncryptionKeyPreferenceAttribute", modifiers: " const&", def_value: None }]
constexpr SmimeEncryptionKeyPreferenceAttribute(SmimeEncryptionKeyPreferenceAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeEncryptionKeyPreferenceAttribute", modifiers: "&&", def_value: None }]
constexpr SmimeEncryptionKeyPreferenceAttribute(SmimeEncryptionKeyPreferenceAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmimeEncryptionKeyPreferenceAttribute(void* ptr) noexcept : Org::BouncyCastle::Asn1::X509::AttributeX509(ptr) {
}


  constexpr SmimeEncryptionKeyPreferenceAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmimeEncryptionKeyPreferenceAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmimeEncryptionKeyPreferenceAttribute& operator=(SmimeEncryptionKeyPreferenceAttribute&& o) noexcept = default;
  constexpr SmimeEncryptionKeyPreferenceAttribute& operator=(SmimeEncryptionKeyPreferenceAttribute const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute New_ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber issAndSer) ;

/// @brief Method .ctor addr 0xfe7c70 size 0xe4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber issAndSer) ;

static Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute New_ctor(Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier rKeyID) ;

/// @brief Method .ctor addr 0xfe7d54 size 0xe4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier rKeyID) ;

static Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute New_ctor(Org::BouncyCastle::Asn1::Asn1OctetString sKeyID) ;

/// @brief Method .ctor addr 0xfe7e38 size 0xe4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString sKeyID) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute, "Org.BouncyCastle.Asn1.Smime", "SmimeEncryptionKeyPreferenceAttribute");
