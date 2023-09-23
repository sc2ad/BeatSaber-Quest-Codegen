#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Cms::SignerIdentifier
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(95))
// CS Name: Org.BouncyCastle.Asn1.Cms.SignerIdentifier
class CORDL_TYPE SignerIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SignerIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerIdentifier", modifiers: " const&", def_value: None }]
constexpr SignerIdentifier(SignerIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerIdentifier", modifiers: "&&", def_value: None }]
constexpr SignerIdentifier(SignerIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerIdentifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SignerIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerIdentifier& operator=(SignerIdentifier&& o) noexcept = default;
  constexpr SignerIdentifier& operator=(SignerIdentifier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_id() const;


// Properties

 bool __declspec(property(get=get_IsTagged))  IsTagged;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_ID))  ID;


// Methods

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber", modifiers: "", def_value: None }]
explicit SignerIdentifier(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber id) ;

/// @brief Method .ctor addr 0xdf26e8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber id) ;

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit SignerIdentifier(Org::BouncyCastle::Asn1::Asn1OctetString id) ;

/// @brief Method .ctor addr 0xdf2710 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString id) ;

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }]
explicit SignerIdentifier(Org::BouncyCastle::Asn1::Asn1Object id) ;

/// @brief Method .ctor addr 0xdf2794 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Object id) ;

/// @brief Method GetInstance addr 0xdf27bc size 0x230 virtual false final false
static Org::BouncyCastle::Asn1::Cms::SignerIdentifier GetInstance(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_IsTagged addr 0xdf29ec size 0x7c virtual false final false
 bool get_IsTagged() ;

/// @brief Method get_ID addr 0xdf2a68 size 0x88 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_ID() ;

/// @brief Method ToAsn1Object addr 0xdf2af0 size 0x20 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::SignerIdentifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::SignerIdentifier, "Org.BouncyCastle.Asn1.Cms", "SignerIdentifier");
