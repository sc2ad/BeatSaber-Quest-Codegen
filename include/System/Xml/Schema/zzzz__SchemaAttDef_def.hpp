#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Xml {
class IValidationEventHandling;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__SchemaAttDef__Reserve;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
// Forward declare root types
namespace System::Xml::Schema {
struct System__Xml__Schema__SchemaAttDef__Reserve;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
// Type: ::Reserve
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11642))
// CS Name: System.Xml.Schema.SchemaAttDef::Reserve
struct CORDL_TYPE System__Xml__Schema__SchemaAttDef__Reserve : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__SchemaAttDef__Reserve(int32_t value__) noexcept;


                    constexpr System__Xml__Schema__SchemaAttDef__Reserve(System__Xml__Schema__SchemaAttDef__Reserve const&) = default;
                    constexpr System__Xml__Schema__SchemaAttDef__Reserve(System__Xml__Schema__SchemaAttDef__Reserve&&) = default;
                    constexpr System__Xml__Schema__SchemaAttDef__Reserve& operator=(System__Xml__Schema__SchemaAttDef__Reserve const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__SchemaAttDef__Reserve& operator=(System__Xml__Schema__SchemaAttDef__Reserve&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__SchemaAttDef__Reserve(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__Schema__SchemaAttDef__Reserve_Unwrapped : int32_t {
__None = 0,
__XmlSpace = 1,
__XmlLang = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__Schema__SchemaAttDef__Reserve_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__Schema__SchemaAttDef__Reserve_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve const None;

/// @brief Field XmlSpace offset 0
static System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve const XmlSpace;

/// @brief Field XmlLang offset 0
static System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve const XmlLang;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::SchemaAttDef
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11645))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11643))
// CS Name: System.Xml.Schema.SchemaAttDef
class CORDL_TYPE SchemaAttDef : public System::Xml::Schema::SchemaDeclBase {
public:
// Declarations
using Reserve = System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve;

/// @brief Convert operator to System::Xml::IDtdDefaultAttributeInfo
constexpr operator  System::Xml::IDtdDefaultAttributeInfo() const noexcept;

/// @brief Convert operator to System::Xml::IDtdAttributeInfo
constexpr operator  System::Xml::IDtdAttributeInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SchemaAttDef() = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaAttDef", modifiers: " const&", def_value: None }]
constexpr SchemaAttDef(SchemaAttDef const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaAttDef", modifiers: "&&", def_value: None }]
constexpr SchemaAttDef(SchemaAttDef&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SchemaAttDef(void* ptr) noexcept : System::Xml::Schema::SchemaDeclBase(ptr) {
}


  constexpr SchemaAttDef& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SchemaAttDef& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SchemaAttDef& operator=(SchemaAttDef&& o) noexcept = default;
  constexpr SchemaAttDef& operator=(SchemaAttDef const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_defExpanded, put=__set_defExpanded))  defExpanded;

constexpr void __set_defExpanded(::StringW value) ;

constexpr ::StringW __get_defExpanded() const;

 int32_t __declspec(property(get=__get_lineNum, put=__set_lineNum))  lineNum;

constexpr void __set_lineNum(int32_t value) ;

constexpr int32_t __get_lineNum() const;

 int32_t __declspec(property(get=__get_linePos, put=__set_linePos))  linePos;

constexpr void __set_linePos(int32_t value) ;

constexpr int32_t __get_linePos() const;

 int32_t __declspec(property(get=__get_valueLineNum, put=__set_valueLineNum))  valueLineNum;

constexpr void __set_valueLineNum(int32_t value) ;

constexpr int32_t __get_valueLineNum() const;

 int32_t __declspec(property(get=__get_valueLinePos, put=__set_valueLinePos))  valueLinePos;

constexpr void __set_valueLinePos(int32_t value) ;

constexpr int32_t __get_valueLinePos() const;

 System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve __declspec(property(get=__get_reserved, put=__set_reserved))  reserved;

constexpr void __set_reserved(System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve value) ;

constexpr System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve __get_reserved() const;

static System::Xml::Schema::SchemaAttDef __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::Xml::Schema::SchemaAttDef value) ;

static System::Xml::Schema::SchemaAttDef __get_Empty() ;


// Properties

 ::StringW __declspec(property(get=System_Xml_IDtdAttributeInfo_get_Prefix))  System_Xml_IDtdAttributeInfo_Prefix;

 ::StringW __declspec(property(get=System_Xml_IDtdAttributeInfo_get_LocalName))  System_Xml_IDtdAttributeInfo_LocalName;

 int32_t __declspec(property(get=System_Xml_IDtdAttributeInfo_get_LineNumber))  System_Xml_IDtdAttributeInfo_LineNumber;

 int32_t __declspec(property(get=System_Xml_IDtdAttributeInfo_get_LinePosition))  System_Xml_IDtdAttributeInfo_LinePosition;

 bool __declspec(property(get=System_Xml_IDtdAttributeInfo_get_IsNonCDataType))  System_Xml_IDtdAttributeInfo_IsNonCDataType;

 bool __declspec(property(get=System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal))  System_Xml_IDtdAttributeInfo_IsDeclaredInExternal;

 bool __declspec(property(get=System_Xml_IDtdAttributeInfo_get_IsXmlAttribute))  System_Xml_IDtdAttributeInfo_IsXmlAttribute;

 ::StringW __declspec(property(get=System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded))  System_Xml_IDtdDefaultAttributeInfo_DefaultValueExpanded;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped))  System_Xml_IDtdDefaultAttributeInfo_DefaultValueTyped;

 int32_t __declspec(property(get=System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber))  System_Xml_IDtdDefaultAttributeInfo_ValueLineNumber;

 int32_t __declspec(property(get=System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition))  System_Xml_IDtdDefaultAttributeInfo_ValueLinePosition;

 int32_t __declspec(property(get=get_LinePosition, put=set_LinePosition))  LinePosition;

 int32_t __declspec(property(get=get_LineNumber, put=set_LineNumber))  LineNumber;

 int32_t __declspec(property(get=get_ValueLinePosition, put=set_ValueLinePosition))  ValueLinePosition;

 int32_t __declspec(property(get=get_ValueLineNumber, put=set_ValueLineNumber))  ValueLineNumber;

 ::StringW __declspec(property(get=get_DefaultValueExpanded, put=set_DefaultValueExpanded))  DefaultValueExpanded;

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType, put=set_TokenizedType))  TokenizedType;

 System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve __declspec(property(get=get_Reserved, put=set_Reserved))  Reserved;


// Methods

static System::Xml::Schema::SchemaAttDef New_ctor(System::Xml::XmlQualifiedName name, ::StringW prefix) ;

/// @brief Method .ctor addr 0x27309ec size 0x4 virtual false final false
 void _ctor(System::Xml::XmlQualifiedName name, ::StringW prefix) ;

static System::Xml::Schema::SchemaAttDef New_ctor() ;

/// @brief Method .ctor addr 0x2730a78 size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method System.Xml.IDtdAttributeInfo.get_Prefix addr 0x2730ae4 size 0x54 virtual true final true
 ::StringW System_Xml_IDtdAttributeInfo_get_Prefix() ;

/// @brief Method System.Xml.IDtdAttributeInfo.get_LocalName addr 0x2730b8c size 0x1c virtual true final true
 ::StringW System_Xml_IDtdAttributeInfo_get_LocalName() ;

/// @brief Method System.Xml.IDtdAttributeInfo.get_LineNumber addr 0x2730ba8 size 0x8 virtual true final true
 int32_t System_Xml_IDtdAttributeInfo_get_LineNumber() ;

/// @brief Method System.Xml.IDtdAttributeInfo.get_LinePosition addr 0x2730bb0 size 0x8 virtual true final true
 int32_t System_Xml_IDtdAttributeInfo_get_LinePosition() ;

/// @brief Method System.Xml.IDtdAttributeInfo.get_IsNonCDataType addr 0x2730bb8 size 0x2c virtual true final true
 bool System_Xml_IDtdAttributeInfo_get_IsNonCDataType() ;

/// @brief Method System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal addr 0x2730c04 size 0x8 virtual true final true
 bool System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal() ;

/// @brief Method System.Xml.IDtdAttributeInfo.get_IsXmlAttribute addr 0x2730c0c size 0x10 virtual true final true
 bool System_Xml_IDtdAttributeInfo_get_IsXmlAttribute() ;

/// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded addr 0x2730c1c size 0x54 virtual true final true
 ::StringW System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded() ;

/// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped addr 0x2730c70 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped() ;

/// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber addr 0x2730c78 size 0x8 virtual true final true
 int32_t System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber() ;

/// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition addr 0x2730c80 size 0x8 virtual true final true
 int32_t System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition() ;

/// @brief Method get_LinePosition addr 0x2730c88 size 0x8 virtual false final false
 int32_t get_LinePosition() ;

/// @brief Method set_LinePosition addr 0x2730c90 size 0x8 virtual false final false
 void set_LinePosition(int32_t value) ;

/// @brief Method get_LineNumber addr 0x2730c98 size 0x8 virtual false final false
 int32_t get_LineNumber() ;

/// @brief Method set_LineNumber addr 0x2730ca0 size 0x8 virtual false final false
 void set_LineNumber(int32_t value) ;

/// @brief Method get_ValueLinePosition addr 0x2730ca8 size 0x8 virtual false final false
 int32_t get_ValueLinePosition() ;

/// @brief Method set_ValueLinePosition addr 0x2730cb0 size 0x8 virtual false final false
 void set_ValueLinePosition(int32_t value) ;

/// @brief Method get_ValueLineNumber addr 0x2730cb8 size 0x8 virtual false final false
 int32_t get_ValueLineNumber() ;

/// @brief Method set_ValueLineNumber addr 0x2730cc0 size 0x8 virtual false final false
 void set_ValueLineNumber(int32_t value) ;

/// @brief Method get_DefaultValueExpanded addr 0x272ceec size 0x54 virtual false final false
 ::StringW get_DefaultValueExpanded() ;

/// @brief Method set_DefaultValueExpanded addr 0x2730cc8 size 0x8 virtual false final false
 void set_DefaultValueExpanded(::StringW value) ;

/// @brief Method get_TokenizedType addr 0x2730be4 size 0x20 virtual false final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method set_TokenizedType addr 0x2730cd0 size 0x1c virtual false final false
 void set_TokenizedType(System::Xml::XmlTokenizedType value) ;

/// @brief Method get_Reserved addr 0x2730d44 size 0x8 virtual false final false
 System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve get_Reserved() ;

/// @brief Method set_Reserved addr 0x2730d4c size 0x8 virtual false final false
 void set_Reserved(System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve value) ;

/// @brief Method CheckXmlSpace addr 0x2730d54 size 0x264 virtual false final false
 void CheckXmlSpace(System::Xml::IValidationEventHandling validationEventHandling) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve, "System.Xml.Schema", "SchemaAttDef/Reserve");
NEED_NO_BOX(System::Xml::Schema::SchemaAttDef);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::SchemaAttDef, "System.Xml.Schema", "SchemaAttDef");
