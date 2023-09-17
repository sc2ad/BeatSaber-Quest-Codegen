#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultAuthenticatedAttributeTableGenerator;
}
// Type: Org.BouncyCastle.Cms::DefaultAuthenticatedAttributeTableGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(666))
// CS Name: Org.BouncyCastle.Cms.DefaultAuthenticatedAttributeTableGenerator
class CORDL_TYPE DefaultAuthenticatedAttributeTableGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator
constexpr operator  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultAuthenticatedAttributeTableGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultAuthenticatedAttributeTableGenerator", modifiers: " const&", def_value: None }]
constexpr DefaultAuthenticatedAttributeTableGenerator(DefaultAuthenticatedAttributeTableGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultAuthenticatedAttributeTableGenerator", modifiers: "&&", def_value: None }]
constexpr DefaultAuthenticatedAttributeTableGenerator(DefaultAuthenticatedAttributeTableGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultAuthenticatedAttributeTableGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultAuthenticatedAttributeTableGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultAuthenticatedAttributeTableGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultAuthenticatedAttributeTableGenerator& operator=(DefaultAuthenticatedAttributeTableGenerator&& o) noexcept = default;
  constexpr DefaultAuthenticatedAttributeTableGenerator& operator=(DefaultAuthenticatedAttributeTableGenerator const& o) noexcept = default;
                


// Fields

 ::System::Collections::IDictionary __declspec(property(get=__get_table, put=__set_table))  table;

constexpr void __set_table(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_table() const;


// Methods

// Ctor Parameters []
explicit DefaultAuthenticatedAttributeTableGenerator() ;

/// @brief Method .ctor addr 0x11750e4 size 0x68 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "attributeTable", ty: "::Org::BouncyCastle::Asn1::Cms::AttributeTable", modifiers: "", def_value: None }]
explicit DefaultAuthenticatedAttributeTableGenerator(::Org::BouncyCastle::Asn1::Cms::AttributeTable attributeTable) ;

/// @brief Method .ctor addr 0x117514c size 0x80 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable attributeTable) ;

/// @brief Method CreateStandardAttributeTable addr 0x11751cc size 0x528 virtual true final false
 ::System::Collections::IDictionary CreateStandardAttributeTable(::System::Collections::IDictionary parameters) ;

/// @brief Method GetAttributes addr 0x11756f4 size 0x8c virtual true final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable GetAttributes(::System::Collections::IDictionary parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator, "Org.BouncyCastle.Cms", "DefaultAuthenticatedAttributeTableGenerator");
