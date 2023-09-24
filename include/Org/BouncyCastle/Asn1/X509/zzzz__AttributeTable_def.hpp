#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeX509;
}
namespace System::Collections {
class Hashtable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeTable;
}
// Type: Org.BouncyCastle.Asn1.X509::AttributeTable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(343))
// CS Name: Org.BouncyCastle.Asn1.X509.AttributeTable
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

 System::Collections::IDictionary __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_attributes() const;


// Methods

static Org::BouncyCastle::Asn1::X509::AttributeTable New_ctor(System::Collections::IDictionary attrs) ;

/// @brief Method .ctor addr 0xff7d34 size 0x78 virtual false final false
 void _ctor(System::Collections::IDictionary attrs) ;

static Org::BouncyCastle::Asn1::X509::AttributeTable New_ctor(System::Collections::Hashtable attrs) ;

/// @brief Method .ctor addr 0xff7dac size 0x78 virtual false final false
 void _ctor(System::Collections::Hashtable attrs) ;

static Org::BouncyCastle::Asn1::X509::AttributeTable New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector v) ;

/// @brief Method .ctor addr 0xff7e24 size 0x148 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector v) ;

static Org::BouncyCastle::Asn1::X509::AttributeTable New_ctor(Org::BouncyCastle::Asn1::Asn1Set s) ;

/// @brief Method .ctor addr 0xff7f6c size 0x178 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Set s) ;

/// @brief Method Get addr 0xff80e4 size 0xf4 virtual false final false
 Org::BouncyCastle::Asn1::X509::AttributeX509 Get(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method ToHashtable addr 0xff81d8 size 0x68 virtual false final false
 System::Collections::Hashtable ToHashtable() ;

/// @brief Method ToDictionary addr 0xff8240 size 0x5c virtual false final false
 System::Collections::IDictionary ToDictionary() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::AttributeTable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttributeTable, "Org.BouncyCastle.Asn1.X509", "AttributeTable");
