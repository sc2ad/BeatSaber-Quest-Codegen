#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace System::Collections {
class Hashtable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attribute;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Type: Org.BouncyCastle.Asn1.Cms::AttributeTable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(57))
// CS Name: Org.BouncyCastle.Asn1.Cms.AttributeTable
class CORDL_TYPE AttributeTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AttributeTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: " const&", def_value: None }]
constexpr AttributeTable(AttributeTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "&&", def_value: None }]
constexpr AttributeTable(AttributeTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AttributeTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeTable& operator=(AttributeTable&& o) noexcept = default;
  constexpr AttributeTable& operator=(AttributeTable const& o) noexcept = default;
                


// Fields

 ::System::Collections::IDictionary __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_attributes() const;


// Properties

 ::Org::BouncyCastle::Asn1::Cms::Attribute __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "attrs", ty: "::System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit AttributeTable(::System::Collections::Hashtable attrs) ;

/// @brief Method .ctor addr 0xde306c size 0x78 virtual false final false
 void _ctor(::System::Collections::Hashtable attrs) ;

// Ctor Parameters [CppParam { name: "attrs", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit AttributeTable(::System::Collections::IDictionary attrs) ;

/// @brief Method .ctor addr 0xde30e4 size 0x78 virtual false final false
 void _ctor(::System::Collections::IDictionary attrs) ;

// Ctor Parameters [CppParam { name: "v", ty: "::Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit AttributeTable(::Org::BouncyCastle::Asn1::Asn1EncodableVector v) ;

/// @brief Method .ctor addr 0xde315c size 0x31c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector v) ;

// Ctor Parameters [CppParam { name: "s", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit AttributeTable(::Org::BouncyCastle::Asn1::Asn1Set s) ;

/// @brief Method .ctor addr 0xde37c0 size 0xe8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Set s) ;

// Ctor Parameters [CppParam { name: "attrs", ty: "::Org::BouncyCastle::Asn1::Cms::Attributes", modifiers: "", def_value: None }]
explicit AttributeTable(::Org::BouncyCastle::Asn1::Cms::Attributes attrs) ;

/// @brief Method .ctor addr 0xde38a8 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::Attributes attrs) ;

/// @brief Method AddAttribute addr 0xde3478 size 0x348 virtual false final false
 void AddAttribute(::Org::BouncyCastle::Asn1::Cms::Attribute a) ;

/// @brief Method get_Item addr 0xde38e4 size 0x1d8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::Attribute get_Item(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method Get addr 0xde3abc size 0x4 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::Attribute Get(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetAll addr 0xde3ac0 size 0x4b0 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1EncodableVector GetAll(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Count addr 0xde3f70 size 0x46c virtual false final false
 int32_t get_Count() ;

/// @brief Method ToDictionary addr 0xde43dc size 0x5c virtual false final false
 ::System::Collections::IDictionary ToDictionary() ;

/// @brief Method ToHashtable addr 0xde4438 size 0x68 virtual false final false
 ::System::Collections::Hashtable ToHashtable() ;

/// @brief Method ToAsn1EncodableVector addr 0xde44a0 size 0x6b8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1EncodableVector ToAsn1EncodableVector() ;

/// @brief Method ToAttributes addr 0xde4b58 size 0x70 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::Attributes ToAttributes() ;

/// @brief Method Add addr 0xde4bc8 size 0xe0 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable Add(::Org::BouncyCastle::Asn1::DerObjectIdentifier attrType, ::Org::BouncyCastle::Asn1::Asn1Encodable attrValue) ;

/// @brief Method Remove addr 0xde4ca8 size 0xec virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable Remove(::Org::BouncyCastle::Asn1::DerObjectIdentifier attrType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AttributeTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AttributeTable, "Org.BouncyCastle.Asn1.Cms", "AttributeTable");
