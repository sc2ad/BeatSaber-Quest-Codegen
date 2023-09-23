#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Cms::RecipientIdentifier
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(89))
// CS Name: Org.BouncyCastle.Asn1.Cms.RecipientIdentifier
class CORDL_TYPE RecipientIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RecipientIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientIdentifier", modifiers: " const&", def_value: None }]
constexpr RecipientIdentifier(RecipientIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientIdentifier", modifiers: "&&", def_value: None }]
constexpr RecipientIdentifier(RecipientIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecipientIdentifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RecipientIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecipientIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecipientIdentifier& operator=(RecipientIdentifier&& o) noexcept = default;
  constexpr RecipientIdentifier& operator=(RecipientIdentifier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_id() const;


// Properties

 bool __declspec(property(get=get_IsTagged))  IsTagged;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_ID))  ID;


// Methods

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber", modifiers: "", def_value: None }]
explicit RecipientIdentifier(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber id) ;

/// @brief Method .ctor addr 0xdef7a4 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber id) ;

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit RecipientIdentifier(Org::BouncyCastle::Asn1::Asn1OctetString id) ;

/// @brief Method .ctor addr 0xdef7cc size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString id) ;

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }]
explicit RecipientIdentifier(Org::BouncyCastle::Asn1::Asn1Object id) ;

/// @brief Method .ctor addr 0xdef850 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Object id) ;

/// @brief Method GetInstance addr 0xdecff0 size 0x230 virtual false final false
static Org::BouncyCastle::Asn1::Cms::RecipientIdentifier GetInstance(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_IsTagged addr 0xdef878 size 0x7c virtual false final false
 bool get_IsTagged() ;

/// @brief Method get_ID addr 0xdef8f4 size 0x88 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_ID() ;

/// @brief Method ToAsn1Object addr 0xdef97c size 0x20 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::RecipientIdentifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::RecipientIdentifier, "Org.BouncyCastle.Asn1.Cms", "RecipientIdentifier");
