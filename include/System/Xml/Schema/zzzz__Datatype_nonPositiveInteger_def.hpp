#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_integer_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_nonPositiveInteger;
}
// Type: System.Xml.Schema::Datatype_nonPositiveInteger
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11607))
// CS Name: System.Xml.Schema.Datatype_nonPositiveInteger
class CORDL_TYPE Datatype_nonPositiveInteger : public System::Xml::Schema::Datatype_integer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_nonPositiveInteger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_nonPositiveInteger", modifiers: " const&", def_value: None }]
constexpr Datatype_nonPositiveInteger(Datatype_nonPositiveInteger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_nonPositiveInteger", modifiers: "&&", def_value: None }]
constexpr Datatype_nonPositiveInteger(Datatype_nonPositiveInteger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_nonPositiveInteger(void* ptr) noexcept : System::Xml::Schema::Datatype_integer(ptr) {
}


  constexpr Datatype_nonPositiveInteger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_nonPositiveInteger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_nonPositiveInteger& operator=(Datatype_nonPositiveInteger&& o) noexcept = default;
  constexpr Datatype_nonPositiveInteger& operator=(Datatype_nonPositiveInteger const& o) noexcept = default;
                


// Fields

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_numeric10FacetsChecker, put=__set_numeric10FacetsChecker))  numeric10FacetsChecker;

static void __set_numeric10FacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_numeric10FacetsChecker() ;


// Properties

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_FacetsChecker addr 0x27284a4 size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x27284fc size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

static System::Xml::Schema::Datatype_nonPositiveInteger New_ctor() ;

/// @brief Method .ctor addr 0x2728504 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_nonPositiveInteger);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_nonPositiveInteger, "System.Xml.Schema", "Datatype_nonPositiveInteger");
