#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_decimal_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Exception;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_integer;
}
// Type: System.Xml.Schema::Datatype_integer
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11573))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11606))
// CS Name: System.Xml.Schema.Datatype_integer
class CORDL_TYPE Datatype_integer : public System::Xml::Schema::Datatype_decimal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_integer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_integer", modifiers: " const&", def_value: None }]
constexpr Datatype_integer(Datatype_integer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_integer", modifiers: "&&", def_value: None }]
constexpr Datatype_integer(Datatype_integer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_integer(void* ptr) noexcept : System::Xml::Schema::Datatype_decimal(ptr) {
}


  constexpr Datatype_integer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_integer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_integer& operator=(Datatype_integer&& o) noexcept = default;
  constexpr Datatype_integer& operator=(Datatype_integer const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x2728308 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method TryParseValue addr 0x2728310 size 0x140 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_integer() ;

/// @brief Method .ctor addr 0x2728450 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_integer);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_integer, "System.Xml.Schema", "Datatype_integer");
