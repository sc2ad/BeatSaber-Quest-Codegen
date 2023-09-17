#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_char;
}
// Type: System.Xml.Schema::Datatype_char
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11623))
// CS Name: System.Xml.Schema.Datatype_char
class CORDL_TYPE Datatype_char : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_char() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_char", modifiers: " const&", def_value: None }]
constexpr Datatype_char(Datatype_char const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_char", modifiers: "&&", def_value: None }]
constexpr Datatype_char(Datatype_char&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_char(void* ptr) noexcept : ::System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_char& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_char& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_char& operator=(Datatype_char&& o) noexcept = default;
  constexpr Datatype_char& operator=(Datatype_char const& o) noexcept = default;
                


// Fields

static ::System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(::System::Type value) ;

static ::System::Type __get_atomicValueType() ;

static ::System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(::System::Type value) ;

static ::System::Type __get_listValueType() ;


// Properties

 ::System::Type __declspec(property(get=get_ValueType))  ValueType;

 ::System::Type __declspec(property(get=get_ListValueType))  ListValueType;


// Methods

/// @brief Method get_ValueType addr 0x272ba5c size 0x58 virtual true final false
 ::System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x272bab4 size 0x58 virtual true final false
 ::System::Type get_ListValueType() ;

/// @brief Method Compare addr 0x272bb0c size 0x94 virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method ParseValue addr 0x272bba0 size 0x1d4 virtual true final false
 ::bs_hook::Il2CppWrapperType ParseValue(::StringW s, ::System::Xml::XmlNameTable nameTable, ::System::Xml::IXmlNamespaceResolver nsmgr) ;

/// @brief Method TryParseValue addr 0x272bd74 size 0xac virtual true final false
 ::System::Exception TryParseValue(::StringW s, ::System::Xml::XmlNameTable nameTable, ::System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_char() ;

/// @brief Method .ctor addr 0x272be20 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_char);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_char, "System.Xml.Schema", "Datatype_char");
