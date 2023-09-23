#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Type;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_QNameXdr;
}
// Type: System.Xml.Schema::Datatype_QNameXdr
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11621))
// CS Name: System.Xml.Schema.Datatype_QNameXdr
class CORDL_TYPE Datatype_QNameXdr : public System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_QNameXdr() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_QNameXdr", modifiers: " const&", def_value: None }]
constexpr Datatype_QNameXdr(Datatype_QNameXdr const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_QNameXdr", modifiers: "&&", def_value: None }]
constexpr Datatype_QNameXdr(Datatype_QNameXdr&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_QNameXdr(void* ptr) noexcept : System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_QNameXdr& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_QNameXdr& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_QNameXdr& operator=(Datatype_QNameXdr&& o) noexcept = default;
  constexpr Datatype_QNameXdr& operator=(Datatype_QNameXdr const& o) noexcept = default;
                


// Fields

static System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(System::Type value) ;

static System::Type __get_atomicValueType() ;

static System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(System::Type value) ;

static System::Type __get_listValueType() ;


// Properties

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Type __declspec(property(get=get_ListValueType))  ListValueType;


// Methods

/// @brief Method get_TokenizedType addr 0x272b614 size 0x8 virtual true final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method ParseValue addr 0x272b61c size 0x274 virtual true final false
 ::bs_hook::Il2CppWrapperType ParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr) ;

/// @brief Method get_ValueType addr 0x272b890 size 0x58 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x272b8e8 size 0x58 virtual true final false
 System::Type get_ListValueType() ;

// Ctor Parameters []
explicit Datatype_QNameXdr() ;

/// @brief Method .ctor addr 0x272b940 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_QNameXdr);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_QNameXdr, "System.Xml.Schema", "Datatype_QNameXdr");
