#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dateTime;
}
// Type: System.Xml.Schema::Datatype_dateTime
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11577))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11580))
// CS Name: System.Xml.Schema.Datatype_dateTime
class CORDL_TYPE Datatype_dateTime : public System::Xml::Schema::Datatype_dateTimeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Datatype_dateTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTime", modifiers: " const&", def_value: None }]
constexpr Datatype_dateTime(Datatype_dateTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTime", modifiers: "&&", def_value: None }]
constexpr Datatype_dateTime(Datatype_dateTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_dateTime(void* ptr) noexcept : System::Xml::Schema::Datatype_dateTimeBase(ptr) {
}


  constexpr Datatype_dateTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_dateTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_dateTime& operator=(Datatype_dateTime&& o) noexcept = default;
  constexpr Datatype_dateTime& operator=(Datatype_dateTime const& o) noexcept = default;
                


// Methods

static System::Xml::Schema::Datatype_dateTime New_ctor() ;

/// @brief Method .ctor addr 0x2726518 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_dateTime);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_dateTime, "System.Xml.Schema", "Datatype_dateTime");
