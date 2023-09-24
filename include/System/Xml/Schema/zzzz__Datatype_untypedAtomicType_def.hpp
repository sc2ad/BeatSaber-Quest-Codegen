#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anyAtomicType_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_untypedAtomicType;
}
// Type: System.Xml.Schema::Datatype_untypedAtomicType
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11567))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11568))
// CS Name: System.Xml.Schema.Datatype_untypedAtomicType
class CORDL_TYPE Datatype_untypedAtomicType : public System::Xml::Schema::Datatype_anyAtomicType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_untypedAtomicType() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_untypedAtomicType", modifiers: " const&", def_value: None }]
constexpr Datatype_untypedAtomicType(Datatype_untypedAtomicType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_untypedAtomicType", modifiers: "&&", def_value: None }]
constexpr Datatype_untypedAtomicType(Datatype_untypedAtomicType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_untypedAtomicType(void* ptr) noexcept : System::Xml::Schema::Datatype_anyAtomicType(ptr) {
}


  constexpr Datatype_untypedAtomicType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_untypedAtomicType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_untypedAtomicType& operator=(Datatype_untypedAtomicType&& o) noexcept = default;
  constexpr Datatype_untypedAtomicType& operator=(Datatype_untypedAtomicType const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method CreateValueConverter addr 0x2723f98 size 0x58 virtual true final false
 System::Xml::Schema::XmlValueConverter CreateValueConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2723ff0 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method get_TypeCode addr 0x2723ff8 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

static System::Xml::Schema::Datatype_untypedAtomicType New_ctor() ;

/// @brief Method .ctor addr 0x2724000 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_untypedAtomicType);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_untypedAtomicType, "System.Xml.Schema", "Datatype_untypedAtomicType");
