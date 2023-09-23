#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
// Forward declare root types
namespace System::Xml::Schema {
class ValidationEventArgs;
}
// Type: System.Xml.Schema::ValidationEventArgs
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11651))
// CS Name: System.Xml.Schema.ValidationEventArgs
class CORDL_TYPE ValidationEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ValidationEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationEventArgs", modifiers: " const&", def_value: None }]
constexpr ValidationEventArgs(ValidationEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationEventArgs", modifiers: "&&", def_value: None }]
constexpr ValidationEventArgs(ValidationEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidationEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr ValidationEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidationEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidationEventArgs& operator=(ValidationEventArgs&& o) noexcept = default;
  constexpr ValidationEventArgs& operator=(ValidationEventArgs const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlSchemaException __declspec(property(get=__get_ex, put=__set_ex))  ex;

constexpr void __set_ex(System::Xml::Schema::XmlSchemaException value) ;

constexpr System::Xml::Schema::XmlSchemaException __get_ex() const;

 System::Xml::Schema::XmlSeverityType __declspec(property(get=__get_severity, put=__set_severity))  severity;

constexpr void __set_severity(System::Xml::Schema::XmlSeverityType value) ;

constexpr System::Xml::Schema::XmlSeverityType __get_severity() const;


// Properties

 System::Xml::Schema::XmlSeverityType __declspec(property(get=get_Severity))  Severity;

 System::Xml::Schema::XmlSchemaException __declspec(property(get=get_Exception))  Exception;


// Methods

/// @brief Method get_Severity addr 0x2732284 size 0x8 virtual false final false
 System::Xml::Schema::XmlSeverityType get_Severity() ;

/// @brief Method get_Exception addr 0x273228c size 0x8 virtual false final false
 System::Xml::Schema::XmlSchemaException get_Exception() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::ValidationEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::ValidationEventArgs, "System.Xml.Schema", "ValidationEventArgs");
