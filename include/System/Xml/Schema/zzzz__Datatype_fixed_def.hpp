#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_decimal_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_fixed;
}
// Type: System.Xml.Schema::Datatype_fixed
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11573))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11624))
// CS Name: System.Xml.Schema.Datatype_fixed
class CORDL_TYPE Datatype_fixed : public ::System::Xml::Schema::Datatype_decimal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_fixed() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_fixed", modifiers: " const&", def_value: None }]
constexpr Datatype_fixed(Datatype_fixed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_fixed", modifiers: "&&", def_value: None }]
constexpr Datatype_fixed(Datatype_fixed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_fixed(void* ptr) noexcept : ::System::Xml::Schema::Datatype_decimal(ptr) {
}


  constexpr Datatype_fixed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_fixed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_fixed& operator=(Datatype_fixed&& o) noexcept = default;
  constexpr Datatype_fixed& operator=(Datatype_fixed const& o) noexcept = default;
                


// Methods

/// @brief Method ParseValue addr 0x272bf30 size 0x2ac virtual true final false
 ::bs_hook::Il2CppWrapperType ParseValue(::StringW s, ::System::Xml::XmlNameTable nameTable, ::System::Xml::IXmlNamespaceResolver nsmgr) ;

/// @brief Method TryParseValue addr 0x272c480 size 0x158 virtual true final false
 ::System::Exception TryParseValue(::StringW s, ::System::Xml::XmlNameTable nameTable, ::System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_fixed() ;

/// @brief Method .ctor addr 0x272c5d8 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_fixed);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_fixed, "System.Xml.Schema", "Datatype_fixed");
