#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
struct XmlSchemaContentProcessing;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
// Type: System.Xml.Schema::XmlSchemaComplexType
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11684))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11662))
// CS Name: System.Xml.Schema.XmlSchemaComplexType
class CORDL_TYPE XmlSchemaComplexType : public System::Xml::Schema::XmlSchemaType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~XmlSchemaComplexType() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexType", modifiers: " const&", def_value: None }]
constexpr XmlSchemaComplexType(XmlSchemaComplexType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexType", modifiers: "&&", def_value: None }]
constexpr XmlSchemaComplexType(XmlSchemaComplexType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaComplexType(void* ptr) noexcept : System::Xml::Schema::XmlSchemaType(ptr) {
}


  constexpr XmlSchemaComplexType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaComplexType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaComplexType& operator=(XmlSchemaComplexType&& o) noexcept = default;
  constexpr XmlSchemaComplexType& operator=(XmlSchemaComplexType const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlSchemaDerivationMethod __declspec(property(get=__get_block, put=__set_block))  block;

constexpr void __set_block(System::Xml::Schema::XmlSchemaDerivationMethod value) ;

constexpr System::Xml::Schema::XmlSchemaDerivationMethod __get_block() const;

 System::Xml::Schema::XmlSchemaParticle __declspec(property(get=__get_contentTypeParticle, put=__set_contentTypeParticle))  contentTypeParticle;

constexpr void __set_contentTypeParticle(System::Xml::Schema::XmlSchemaParticle value) ;

constexpr System::Xml::Schema::XmlSchemaParticle __get_contentTypeParticle() const;

 System::Xml::Schema::XmlSchemaAnyAttribute __declspec(property(get=__get_attributeWildcard, put=__set_attributeWildcard))  attributeWildcard;

constexpr void __set_attributeWildcard(System::Xml::Schema::XmlSchemaAnyAttribute value) ;

constexpr System::Xml::Schema::XmlSchemaAnyAttribute __get_attributeWildcard() const;

static System::Xml::Schema::XmlSchemaComplexType __declspec(property(get=__get_anyTypeLax, put=__set_anyTypeLax))  anyTypeLax;

static void __set_anyTypeLax(System::Xml::Schema::XmlSchemaComplexType value) ;

static System::Xml::Schema::XmlSchemaComplexType __get_anyTypeLax() ;

static System::Xml::Schema::XmlSchemaComplexType __declspec(property(get=__get_anyTypeSkip, put=__set_anyTypeSkip))  anyTypeSkip;

static void __set_anyTypeSkip(System::Xml::Schema::XmlSchemaComplexType value) ;

static System::Xml::Schema::XmlSchemaComplexType __get_anyTypeSkip() ;

static System::Xml::Schema::XmlSchemaComplexType __declspec(property(get=__get_untypedAnyType, put=__set_untypedAnyType))  untypedAnyType;

static void __set_untypedAnyType(System::Xml::Schema::XmlSchemaComplexType value) ;

static System::Xml::Schema::XmlSchemaComplexType __get_untypedAnyType() ;

 uint8_t __declspec(property(get=__get_pvFlags, put=__set_pvFlags))  pvFlags;

constexpr void __set_pvFlags(uint8_t value) ;

constexpr uint8_t __get_pvFlags() const;


// Properties

static System::Xml::Schema::XmlSchemaComplexType __declspec(property(get=get_AnyType))  AnyType;

static System::Xml::Schema::ContentValidator __declspec(property(get=get_AnyTypeContentValidator))  AnyTypeContentValidator;

 bool __declspec(property(put=set_IsMixed))  IsMixed;

 System::Xml::Schema::XmlSchemaParticle __declspec(property(get=get_ContentTypeParticle))  ContentTypeParticle;


// Methods

/// @brief Method CreateAnyType addr 0x2733b44 size 0x2e4 virtual false final false
static System::Xml::Schema::XmlSchemaComplexType CreateAnyType(System::Xml::Schema::XmlSchemaContentProcessing processContents) ;

static System::Xml::Schema::XmlSchemaComplexType New_ctor() ;

/// @brief Method .ctor addr 0x2733e28 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method get_AnyType addr 0x2734384 size 0x58 virtual false final false
static System::Xml::Schema::XmlSchemaComplexType get_AnyType() ;

/// @brief Method get_AnyTypeContentValidator addr 0x2733ef4 size 0x70 virtual false final false
static System::Xml::Schema::ContentValidator get_AnyTypeContentValidator() ;

/// @brief Method set_IsMixed addr 0x27343dc size 0x1c virtual true final false
 void set_IsMixed(bool value) ;

/// @brief Method get_ContentTypeParticle addr 0x27343f8 size 0x8 virtual false final false
 System::Xml::Schema::XmlSchemaParticle get_ContentTypeParticle() ;

/// @brief Method SetContentTypeParticle addr 0x2734400 size 0x8 virtual false final false
 void SetContentTypeParticle(System::Xml::Schema::XmlSchemaParticle value) ;

/// @brief Method SetAttributeWildcard addr 0x2734408 size 0x8 virtual false final false
 void SetAttributeWildcard(System::Xml::Schema::XmlSchemaAnyAttribute value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaComplexType);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaComplexType, "System.Xml.Schema", "XmlSchemaComplexType");
