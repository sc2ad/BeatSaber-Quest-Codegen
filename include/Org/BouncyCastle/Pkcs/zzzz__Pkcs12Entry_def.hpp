#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Entry;
}
// Type: Org.BouncyCastle.Pkcs::Pkcs12Entry
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1693))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs12Entry
class CORDL_TYPE Pkcs12Entry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Pkcs12Entry() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12Entry", modifiers: " const&", def_value: None }]
constexpr Pkcs12Entry(Pkcs12Entry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12Entry", modifiers: "&&", def_value: None }]
constexpr Pkcs12Entry(Pkcs12Entry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs12Entry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs12Entry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs12Entry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs12Entry& operator=(Pkcs12Entry&& o) noexcept = default;
  constexpr Pkcs12Entry& operator=(Pkcs12Entry const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_attributes() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Item))  Item;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Item))  Item;

 System::Collections::IEnumerable __declspec(property(get=get_BagAttributeKeys))  BagAttributeKeys;


// Methods

static Org::BouncyCastle::Pkcs::Pkcs12Entry New_ctor(System::Collections::IDictionary attributes) ;

/// @brief Method .ctor addr 0x1049224 size 0x54c virtual false final false
 void _ctor(System::Collections::IDictionary attributes) ;

/// @brief Method GetBagAttribute addr 0x1049770 size 0xfc virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable GetBagAttribute(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetBagAttribute addr 0x104986c size 0xf4 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable GetBagAttribute(::StringW oid) ;

/// @brief Method GetBagAttributeKeys addr 0x1049960 size 0x118 virtual false final false
 System::Collections::IEnumerator GetBagAttributeKeys() ;

/// @brief Method get_Item addr 0x1049a78 size 0xfc virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Item(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Item addr 0x1049b74 size 0xf4 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Item(::StringW oid) ;

/// @brief Method get_BagAttributeKeys addr 0x1049c68 size 0xe4 virtual false final false
 System::Collections::IEnumerable get_BagAttributeKeys() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Pkcs::Pkcs12Entry);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Pkcs12Entry, "Org.BouncyCastle.Pkcs", "Pkcs12Entry");
