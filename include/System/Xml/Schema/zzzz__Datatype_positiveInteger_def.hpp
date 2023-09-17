#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_nonNegativeInteger_def.hpp"
namespace {
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_positiveInteger;
}
// Type: System.Xml.Schema::Datatype_positiveInteger
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11618))
// CS Name: System.Xml.Schema.Datatype_positiveInteger
class CORDL_TYPE Datatype_positiveInteger : public ::System::Xml::Schema::Datatype_nonNegativeInteger {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_positiveInteger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_positiveInteger", modifiers: " const&", def_value: None }]
constexpr Datatype_positiveInteger(Datatype_positiveInteger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_positiveInteger", modifiers: "&&", def_value: None }]
constexpr Datatype_positiveInteger(Datatype_positiveInteger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_positiveInteger(void* ptr) noexcept : ::System::Xml::Schema::Datatype_nonNegativeInteger(ptr) {
}


  constexpr Datatype_positiveInteger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_positiveInteger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_positiveInteger& operator=(Datatype_positiveInteger&& o) noexcept = default;
  constexpr Datatype_positiveInteger& operator=(Datatype_positiveInteger const& o) noexcept = default;
                


// Fields

static ::System::Xml::Schema::FacetsChecker __declspec(property(get=__get_numeric10FacetsChecker, put=__set_numeric10FacetsChecker))  numeric10FacetsChecker;

static void __set_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker value) ;

static ::System::Xml::Schema::FacetsChecker __get_numeric10FacetsChecker() ;


// Properties

 ::System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 ::System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_FacetsChecker addr 0x272aea4 size 0x58 virtual true final false
 ::System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x272aefc size 0x8 virtual true final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters []
explicit Datatype_positiveInteger() ;

/// @brief Method .ctor addr 0x272af04 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_positiveInteger);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_positiveInteger, "System.Xml.Schema", "Datatype_positiveInteger");
