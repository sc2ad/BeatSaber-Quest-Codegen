#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
namespace {
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_month;
}
// Type: System.Xml.Schema::Datatype_month
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11577))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11589))
// CS Name: System.Xml.Schema.Datatype_month
class CORDL_TYPE Datatype_month : public ::System::Xml::Schema::Datatype_dateTimeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Datatype_month() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_month", modifiers: " const&", def_value: None }]
constexpr Datatype_month(Datatype_month const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_month", modifiers: "&&", def_value: None }]
constexpr Datatype_month(Datatype_month&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_month(void* ptr) noexcept : ::System::Xml::Schema::Datatype_dateTimeBase(ptr) {
}


  constexpr Datatype_month& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_month& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_month& operator=(Datatype_month&& o) noexcept = default;
  constexpr Datatype_month& operator=(Datatype_month const& o) noexcept = default;
                


// Properties

 ::System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x2726860 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters []
explicit Datatype_month() ;

/// @brief Method .ctor addr 0x2726868 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_month);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_month, "System.Xml.Schema", "Datatype_month");
