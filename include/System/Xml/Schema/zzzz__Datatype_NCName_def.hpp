#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_Name_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Exception;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_NCName;
}
// Type: System.Xml.Schema::Datatype_NCName
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11600))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11601))
// CS Name: System.Xml.Schema.Datatype_NCName
class CORDL_TYPE Datatype_NCName : public System::Xml::Schema::Datatype_Name {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_NCName() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_NCName", modifiers: " const&", def_value: None }]
constexpr Datatype_NCName(Datatype_NCName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_NCName", modifiers: "&&", def_value: None }]
constexpr Datatype_NCName(Datatype_NCName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_NCName(void* ptr) noexcept : System::Xml::Schema::Datatype_Name(ptr) {
}


  constexpr Datatype_NCName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_NCName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_NCName& operator=(Datatype_NCName&& o) noexcept = default;
  constexpr Datatype_NCName& operator=(Datatype_NCName const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x2727d50 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method TryParseValue addr 0x2727d58 size 0xfc virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

static System::Xml::Schema::Datatype_NCName New_ctor() ;

/// @brief Method .ctor addr 0x2727e54 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_NCName);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_NCName, "System.Xml.Schema", "Datatype_NCName");
