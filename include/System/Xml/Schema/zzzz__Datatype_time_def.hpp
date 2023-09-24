#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_time;
}
// Type: System.Xml.Schema::Datatype_time
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11577))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11583))
// CS Name: System.Xml.Schema.Datatype_time
class CORDL_TYPE Datatype_time : public System::Xml::Schema::Datatype_dateTimeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Datatype_time() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_time", modifiers: " const&", def_value: None }]
constexpr Datatype_time(Datatype_time const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_time", modifiers: "&&", def_value: None }]
constexpr Datatype_time(Datatype_time&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_time(void* ptr) noexcept : System::Xml::Schema::Datatype_dateTimeBase(ptr) {
}


  constexpr Datatype_time& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_time& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_time& operator=(Datatype_time&& o) noexcept = default;
  constexpr Datatype_time& operator=(Datatype_time const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x2726620 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

static System::Xml::Schema::Datatype_time New_ctor() ;

/// @brief Method .ctor addr 0x2726628 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_time);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_time, "System.Xml.Schema", "Datatype_time");
