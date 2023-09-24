#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class Hashtable;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultSignedAttributeTableGenerator;
}
// Type: Org.BouncyCastle.Cms::DefaultSignedAttributeTableGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(667))
// CS Name: Org.BouncyCastle.Cms.DefaultSignedAttributeTableGenerator
class CORDL_TYPE DefaultSignedAttributeTableGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Cms::CmsAttributeTableGenerator
constexpr operator  Org::BouncyCastle::Cms::CmsAttributeTableGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultSignedAttributeTableGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSignedAttributeTableGenerator", modifiers: " const&", def_value: None }]
constexpr DefaultSignedAttributeTableGenerator(DefaultSignedAttributeTableGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSignedAttributeTableGenerator", modifiers: "&&", def_value: None }]
constexpr DefaultSignedAttributeTableGenerator(DefaultSignedAttributeTableGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultSignedAttributeTableGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultSignedAttributeTableGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultSignedAttributeTableGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultSignedAttributeTableGenerator& operator=(DefaultSignedAttributeTableGenerator&& o) noexcept = default;
  constexpr DefaultSignedAttributeTableGenerator& operator=(DefaultSignedAttributeTableGenerator const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_table, put=__set_table))  table;

constexpr void __set_table(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_table() const;


// Methods

static Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator New_ctor() ;

/// @brief Method .ctor addr 0x115f084 size 0x68 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator New_ctor(Org::BouncyCastle::Asn1::Cms::AttributeTable attributeTable) ;

/// @brief Method .ctor addr 0x115f56c size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::AttributeTable attributeTable) ;

/// @brief Method createStandardAttributeTable addr 0x1175780 size 0x80 virtual true final false
 System::Collections::Hashtable createStandardAttributeTable(System::Collections::IDictionary parameters) ;

/// @brief Method DoCreateStandardAttributeTable addr 0x1175800 size 0x710 virtual false final false
 void DoCreateStandardAttributeTable(System::Collections::IDictionary parameters, System::Collections::IDictionary std) ;

/// @brief Method GetAttributes addr 0x1175f10 size 0x8c virtual true final false
 Org::BouncyCastle::Asn1::Cms::AttributeTable GetAttributes(System::Collections::IDictionary parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator, "Org.BouncyCastle.Cms", "DefaultSignedAttributeTableGenerator");
