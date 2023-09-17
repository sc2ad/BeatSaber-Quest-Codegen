#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
namespace {
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dateTimeTimeZone;
}
// Type: System.Xml.Schema::Datatype_dateTimeTimeZone
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11577))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11579))
// CS Name: System.Xml.Schema.Datatype_dateTimeTimeZone
class CORDL_TYPE Datatype_dateTimeTimeZone : public ::System::Xml::Schema::Datatype_dateTimeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Datatype_dateTimeTimeZone() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeTimeZone", modifiers: " const&", def_value: None }]
constexpr Datatype_dateTimeTimeZone(Datatype_dateTimeTimeZone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeTimeZone", modifiers: "&&", def_value: None }]
constexpr Datatype_dateTimeTimeZone(Datatype_dateTimeTimeZone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_dateTimeTimeZone(void* ptr) noexcept : ::System::Xml::Schema::Datatype_dateTimeBase(ptr) {
}


  constexpr Datatype_dateTimeTimeZone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_dateTimeTimeZone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_dateTimeTimeZone& operator=(Datatype_dateTimeTimeZone&& o) noexcept = default;
  constexpr Datatype_dateTimeTimeZone& operator=(Datatype_dateTimeTimeZone const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Datatype_dateTimeTimeZone() ;

/// @brief Method .ctor addr 0x27264c0 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_dateTimeTimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_dateTimeTimeZone, "System.Xml.Schema", "Datatype_dateTimeTimeZone");
