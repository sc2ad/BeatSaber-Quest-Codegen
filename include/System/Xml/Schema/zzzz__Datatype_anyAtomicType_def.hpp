#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_anyAtomicType;
}
// Type: System.Xml.Schema::Datatype_anyAtomicType
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11567))
// CS Name: System.Xml.Schema.Datatype_anyAtomicType
class CORDL_TYPE Datatype_anyAtomicType : public System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_anyAtomicType() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_anyAtomicType", modifiers: " const&", def_value: None }]
constexpr Datatype_anyAtomicType(Datatype_anyAtomicType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_anyAtomicType", modifiers: "&&", def_value: None }]
constexpr Datatype_anyAtomicType(Datatype_anyAtomicType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_anyAtomicType(void* ptr) noexcept : System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_anyAtomicType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_anyAtomicType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_anyAtomicType& operator=(Datatype_anyAtomicType&& o) noexcept = default;
  constexpr Datatype_anyAtomicType& operator=(Datatype_anyAtomicType const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method CreateValueConverter addr 0x2723edc size 0x58 virtual true final false
 System::Xml::Schema::XmlValueConverter CreateValueConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2723f34 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method get_TypeCode addr 0x2723f3c size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters []
explicit Datatype_anyAtomicType() ;

/// @brief Method .ctor addr 0x2723f44 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_anyAtomicType);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_anyAtomicType, "System.Xml.Schema", "Datatype_anyAtomicType");
