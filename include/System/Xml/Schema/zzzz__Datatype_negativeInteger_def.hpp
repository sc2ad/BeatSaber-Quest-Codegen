#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_nonPositiveInteger_def.hpp"
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_negativeInteger;
}
// Type: System.Xml.Schema::Datatype_negativeInteger
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11607))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11608))
// CS Name: System.Xml.Schema.Datatype_negativeInteger
class CORDL_TYPE Datatype_negativeInteger : public System::Xml::Schema::Datatype_nonPositiveInteger {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_negativeInteger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_negativeInteger", modifiers: " const&", def_value: None }]
constexpr Datatype_negativeInteger(Datatype_negativeInteger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_negativeInteger", modifiers: "&&", def_value: None }]
constexpr Datatype_negativeInteger(Datatype_negativeInteger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_negativeInteger(void* ptr) noexcept : System::Xml::Schema::Datatype_nonPositiveInteger(ptr) {
}


  constexpr Datatype_negativeInteger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_negativeInteger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_negativeInteger& operator=(Datatype_negativeInteger&& o) noexcept = default;
  constexpr Datatype_negativeInteger& operator=(Datatype_negativeInteger const& o) noexcept = default;
                


// Fields

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_numeric10FacetsChecker, put=__set_numeric10FacetsChecker))  numeric10FacetsChecker;

static void __set_numeric10FacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_numeric10FacetsChecker() ;


// Properties

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_FacetsChecker addr 0x2728618 size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x2728670 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

static System::Xml::Schema::Datatype_negativeInteger New_ctor() ;

/// @brief Method .ctor addr 0x2728678 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_negativeInteger);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_negativeInteger, "System.Xml.Schema", "Datatype_negativeInteger");
