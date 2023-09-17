#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SimpleAttributeTableGenerator;
}
// Type: Org.BouncyCastle.Cms::SimpleAttributeTableGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(693))
// CS Name: Org.BouncyCastle.Cms.SimpleAttributeTableGenerator
class CORDL_TYPE SimpleAttributeTableGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator
constexpr operator  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SimpleAttributeTableGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAttributeTableGenerator", modifiers: " const&", def_value: None }]
constexpr SimpleAttributeTableGenerator(SimpleAttributeTableGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAttributeTableGenerator", modifiers: "&&", def_value: None }]
constexpr SimpleAttributeTableGenerator(SimpleAttributeTableGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleAttributeTableGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimpleAttributeTableGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleAttributeTableGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleAttributeTableGenerator& operator=(SimpleAttributeTableGenerator&& o) noexcept = default;
  constexpr SimpleAttributeTableGenerator& operator=(SimpleAttributeTableGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(::Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable __get_attributes() const;


// Methods

// Ctor Parameters [CppParam { name: "attributes", ty: "::Org::BouncyCastle::Asn1::Cms::AttributeTable", modifiers: "", def_value: None }]
explicit SimpleAttributeTableGenerator(::Org::BouncyCastle::Asn1::Cms::AttributeTable attributes) ;

/// @brief Method .ctor addr 0x1182ba0 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable attributes) ;

/// @brief Method GetAttributes addr 0x1182bc8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable GetAttributes(::System::Collections::IDictionary parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator, "Org.BouncyCastle.Cms", "SimpleAttributeTableGenerator");
