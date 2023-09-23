#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Exception;
}
namespace System {
class Type;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_uuid;
}
// Type: System.Xml.Schema::Datatype_uuid
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11625))
// CS Name: System.Xml.Schema.Datatype_uuid
class CORDL_TYPE Datatype_uuid : public System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_uuid() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_uuid", modifiers: " const&", def_value: None }]
constexpr Datatype_uuid(Datatype_uuid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_uuid", modifiers: "&&", def_value: None }]
constexpr Datatype_uuid(Datatype_uuid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_uuid(void* ptr) noexcept : System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_uuid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_uuid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_uuid& operator=(Datatype_uuid&& o) noexcept = default;
  constexpr Datatype_uuid& operator=(Datatype_uuid const& o) noexcept = default;
                


// Fields

static System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(System::Type value) ;

static System::Type __get_atomicValueType() ;

static System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(System::Type value) ;

static System::Type __get_listValueType() ;


// Properties

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Type __declspec(property(get=get_ListValueType))  ListValueType;


// Methods

/// @brief Method get_ValueType addr 0x272c62c size 0x58 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x272c684 size 0x58 virtual true final false
 System::Type get_ListValueType() ;

/// @brief Method Compare addr 0x272c6dc size 0x9c virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method ParseValue addr 0x272c778 size 0x1d4 virtual true final false
 ::bs_hook::Il2CppWrapperType ParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr) ;

/// @brief Method TryParseValue addr 0x272c94c size 0xb4 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_uuid() ;

/// @brief Method .ctor addr 0x272ca00 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_uuid);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_uuid, "System.Xml.Schema", "Datatype_uuid");
