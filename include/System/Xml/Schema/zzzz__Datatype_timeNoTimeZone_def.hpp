#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_timeNoTimeZone;
}
// Type: System.Xml.Schema::Datatype_timeNoTimeZone
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11577))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11581))
// CS Name: System.Xml.Schema.Datatype_timeNoTimeZone
class CORDL_TYPE Datatype_timeNoTimeZone : public System::Xml::Schema::Datatype_dateTimeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Datatype_timeNoTimeZone() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_timeNoTimeZone", modifiers: " const&", def_value: None }]
constexpr Datatype_timeNoTimeZone(Datatype_timeNoTimeZone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_timeNoTimeZone", modifiers: "&&", def_value: None }]
constexpr Datatype_timeNoTimeZone(Datatype_timeNoTimeZone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_timeNoTimeZone(void* ptr) noexcept : System::Xml::Schema::Datatype_dateTimeBase(ptr) {
}


  constexpr Datatype_timeNoTimeZone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_timeNoTimeZone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_timeNoTimeZone& operator=(Datatype_timeNoTimeZone&& o) noexcept = default;
  constexpr Datatype_timeNoTimeZone& operator=(Datatype_timeNoTimeZone const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Datatype_timeNoTimeZone() ;

/// @brief Method .ctor addr 0x2726570 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_timeNoTimeZone);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_timeNoTimeZone, "System.Xml.Schema", "Datatype_timeNoTimeZone");
