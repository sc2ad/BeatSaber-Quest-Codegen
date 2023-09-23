#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/XPath/zzzz__XPathItem_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class ICloneable;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
namespace System::Xml::XPath {
class XPathNavigatorKeyComparer;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
class Type;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
struct DateTime;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathNavigator;
}
// Type: System.Xml.XPath::XPathNavigator
namespace System::Xml::XPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11522))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11524))
// CS Name: System.Xml.XPath.XPathNavigator
class CORDL_TYPE XPathNavigator : public System::Xml::XPath::XPathItem {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief Convert operator to System::Xml::IXmlNamespaceResolver
constexpr operator  System::Xml::IXmlNamespaceResolver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XPathNavigator() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNavigator", modifiers: " const&", def_value: None }]
constexpr XPathNavigator(XPathNavigator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNavigator", modifiers: "&&", def_value: None }]
constexpr XPathNavigator(XPathNavigator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPathNavigator(void* ptr) noexcept : System::Xml::XPath::XPathItem(ptr) {
}


  constexpr XPathNavigator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPathNavigator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPathNavigator& operator=(XPathNavigator&& o) noexcept = default;
  constexpr XPathNavigator& operator=(XPathNavigator const& o) noexcept = default;
                


// Fields

static System::Xml::XPath::XPathNavigatorKeyComparer __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

static void __set_comparer(System::Xml::XPath::XPathNavigatorKeyComparer value) ;

static System::Xml::XPath::XPathNavigatorKeyComparer __get_comparer() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_NodeTypeLetter, put=__set_NodeTypeLetter))  NodeTypeLetter;

static void __set_NodeTypeLetter(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_NodeTypeLetter() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_UniqueIdTbl, put=__set_UniqueIdTbl))  UniqueIdTbl;

static void __set_UniqueIdTbl(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_UniqueIdTbl() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_ContentKindMasks, put=__set_ContentKindMasks))  ContentKindMasks;

static void __set_ContentKindMasks(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_ContentKindMasks() ;


// Properties

 System::Xml::Schema::XmlSchemaType __declspec(property(get=get_XmlType))  XmlType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TypedValue))  TypedValue;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 bool __declspec(property(get=get_ValueAsBoolean))  ValueAsBoolean;

 System::DateTime __declspec(property(get=get_ValueAsDateTime))  ValueAsDateTime;

 double_t __declspec(property(get=get_ValueAsDouble))  ValueAsDouble;

 int32_t __declspec(property(get=get_ValueAsInt))  ValueAsInt;

 int64_t __declspec(property(get=get_ValueAsLong))  ValueAsLong;

 System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 System::Xml::XPath::XPathNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UnderlyingObject))  UnderlyingObject;

 System::Xml::Schema::IXmlSchemaInfo __declspec(property(get=get_SchemaInfo))  SchemaInfo;


// Methods

/// @brief Method ToString addr 0x2716514 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method get_XmlType addr 0x2716520 size 0x188 virtual true final false
 System::Xml::Schema::XmlSchemaType get_XmlType() ;

/// @brief Method get_TypedValue addr 0x27166a8 size 0x2dc virtual true final false
 ::bs_hook::Il2CppWrapperType get_TypedValue() ;

/// @brief Method get_ValueType addr 0x2716984 size 0x20c virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_ValueAsBoolean addr 0x2716b90 size 0x2c4 virtual true final false
 bool get_ValueAsBoolean() ;

/// @brief Method get_ValueAsDateTime addr 0x2716e54 size 0x2cc virtual true final false
 System::DateTime get_ValueAsDateTime() ;

/// @brief Method get_ValueAsDouble addr 0x2717120 size 0x2cc virtual true final false
 double_t get_ValueAsDouble() ;

/// @brief Method get_ValueAsInt addr 0x27173ec size 0x2cc virtual true final false
 int32_t get_ValueAsInt() ;

/// @brief Method get_ValueAsLong addr 0x27176b8 size 0x2cc virtual true final false
 int64_t get_ValueAsLong() ;

/// @brief Method ValueAs addr 0x2717984 size 0x2ec virtual true final false
 ::bs_hook::Il2CppWrapperType ValueAs(System::Type returnType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method System.ICloneable.Clone addr 0x2717c70 size 0x10 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method get_NameTable addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method LookupNamespace addr 0x2717c80 size 0x1a4 virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method LookupPrefix addr 0x2717e24 size 0x1f0 virtual true final false
 ::StringW LookupPrefix(::StringW namespaceURI) ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::XPath::XPathNavigator Clone() ;

/// @brief Method get_NodeType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::XPath::XPathNodeType get_NodeType() ;

/// @brief Method get_LocalName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_UnderlyingObject addr 0x2718014 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_UnderlyingObject() ;

/// @brief Method MoveToNamespace addr 0x271801c size 0xa0 virtual true final false
 bool MoveToNamespace(::StringW name) ;

/// @brief Method MoveToFirstNamespace addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveToFirstNamespace(System::Xml::XPath::XPathNamespaceScope namespaceScope) ;

/// @brief Method MoveToNextNamespace addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveToNextNamespace(System::Xml::XPath::XPathNamespaceScope namespaceScope) ;

/// @brief Method MoveToParent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveToParent() ;

/// @brief Method IsSamePosition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsSamePosition(System::Xml::XPath::XPathNavigator other) ;

/// @brief Method get_SchemaInfo addr 0x27180bc size 0x48 virtual true final false
 System::Xml::Schema::IXmlSchemaInfo get_SchemaInfo() ;

/// @brief Method IsText addr 0x2718104 size 0x10 virtual false final false
static bool IsText(System::Xml::XPath::XPathNodeType type) ;

// Ctor Parameters []
explicit XPathNavigator() ;

/// @brief Method .ctor addr 0x2718114 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::XPath
NEED_NO_BOX(System::Xml::XPath::XPathNavigator);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XPath::XPathNavigator, "System.Xml.XPath", "XPathNavigator");
