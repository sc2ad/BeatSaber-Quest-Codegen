#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_duration_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dayTimeDuration;
}
// Type: System.Xml.Schema::Datatype_dayTimeDuration
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11574))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11576))
// CS Name: System.Xml.Schema.Datatype_dayTimeDuration
class CORDL_TYPE Datatype_dayTimeDuration : public System::Xml::Schema::Datatype_duration {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_dayTimeDuration() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dayTimeDuration", modifiers: " const&", def_value: None }]
constexpr Datatype_dayTimeDuration(Datatype_dayTimeDuration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dayTimeDuration", modifiers: "&&", def_value: None }]
constexpr Datatype_dayTimeDuration(Datatype_dayTimeDuration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_dayTimeDuration(void* ptr) noexcept : System::Xml::Schema::Datatype_duration(ptr) {
}


  constexpr Datatype_dayTimeDuration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_dayTimeDuration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_dayTimeDuration& operator=(Datatype_dayTimeDuration&& o) noexcept = default;
  constexpr Datatype_dayTimeDuration& operator=(Datatype_dayTimeDuration const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method TryParseValue addr 0x2725b78 size 0x1c4 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

/// @brief Method get_TypeCode addr 0x2725d3c size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

static System::Xml::Schema::Datatype_dayTimeDuration New_ctor() ;

/// @brief Method .ctor addr 0x2725d44 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_dayTimeDuration);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_dayTimeDuration, "System.Xml.Schema", "Datatype_dayTimeDuration");
