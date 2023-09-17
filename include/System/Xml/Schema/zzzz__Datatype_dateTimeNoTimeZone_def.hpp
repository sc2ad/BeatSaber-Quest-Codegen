#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
namespace {
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dateTimeNoTimeZone;
}
// Type: System.Xml.Schema::Datatype_dateTimeNoTimeZone
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11577))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11578))
// CS Name: System.Xml.Schema.Datatype_dateTimeNoTimeZone
class CORDL_TYPE Datatype_dateTimeNoTimeZone : public ::System::Xml::Schema::Datatype_dateTimeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Datatype_dateTimeNoTimeZone() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeNoTimeZone", modifiers: " const&", def_value: None }]
constexpr Datatype_dateTimeNoTimeZone(Datatype_dateTimeNoTimeZone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeNoTimeZone", modifiers: "&&", def_value: None }]
constexpr Datatype_dateTimeNoTimeZone(Datatype_dateTimeNoTimeZone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_dateTimeNoTimeZone(void* ptr) noexcept : ::System::Xml::Schema::Datatype_dateTimeBase(ptr) {
}


  constexpr Datatype_dateTimeNoTimeZone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_dateTimeNoTimeZone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_dateTimeNoTimeZone& operator=(Datatype_dateTimeNoTimeZone&& o) noexcept = default;
  constexpr Datatype_dateTimeNoTimeZone& operator=(Datatype_dateTimeNoTimeZone const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Datatype_dateTimeNoTimeZone() ;

/// @brief Method .ctor addr 0x2726468 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_dateTimeNoTimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_dateTimeNoTimeZone, "System.Xml.Schema", "Datatype_dateTimeNoTimeZone");
