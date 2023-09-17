#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlTextReaderImpl;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
struct EntityHandling;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::IO {
class TextReader;
}
// Forward declare root types
namespace System::Xml {
class XmlTextReader;
}
// Type: System.Xml::XmlTextReader
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11398))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11401))
// CS Name: System.Xml.XmlTextReader
class CORDL_TYPE XmlTextReader : public ::System::Xml::XmlReader {
public:
// Declarations
/// @brief Convert operator to ::System::Xml::IXmlNamespaceResolver
constexpr operator  ::System::Xml::IXmlNamespaceResolver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlTextReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlTextReader", modifiers: " const&", def_value: None }]
constexpr XmlTextReader(XmlTextReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlTextReader", modifiers: "&&", def_value: None }]
constexpr XmlTextReader(XmlTextReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlTextReader(void* ptr) noexcept : ::System::Xml::XmlReader(ptr) {
}


  constexpr XmlTextReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlTextReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlTextReader& operator=(XmlTextReader&& o) noexcept = default;
  constexpr XmlTextReader& operator=(XmlTextReader const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlTextReaderImpl __declspec(property(get=__get_impl, put=__set_impl))  impl;

constexpr void __set_impl(::System::Xml::XmlTextReaderImpl value) ;

constexpr ::System::Xml::XmlTextReaderImpl __get_impl() const;


// Properties

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::StringW __declspec(property(get=get_Value))  Value;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;

 bool __declspec(property(get=get_IsEmptyElement))  IsEmptyElement;

 bool __declspec(property(get=get_IsDefault))  IsDefault;

 ::System::Xml::ReadState __declspec(property(get=get_ReadState))  ReadState;

 ::System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 bool __declspec(property(get=get_CanResolveEntity))  CanResolveEntity;

 ::System::Xml::EntityHandling __declspec(property(put=set_EntityHandling))  EntityHandling;

 ::System::Xml::XmlResolver __declspec(property(put=set_XmlResolver))  XmlResolver;

 ::System::Xml::XmlTextReaderImpl __declspec(property(get=get_Impl))  Impl;

 bool __declspec(property(put=set_XmlValidatingReaderCompatibilityMode))  XmlValidatingReaderCompatibilityMode;

 ::System::Xml::IDtdInfo __declspec(property(get=get_DtdInfo))  DtdInfo;


// Methods

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::TextReader", modifiers: "", def_value: None }, CppParam { name: "nt", ty: "::System::Xml::XmlNameTable", modifiers: "", def_value: None }]
explicit XmlTextReader(::System::IO::TextReader input, ::System::Xml::XmlNameTable nt) ;

/// @brief Method .ctor addr 0x26e0444 size 0xac virtual false final false
 void _ctor(::System::IO::TextReader input, ::System::Xml::XmlNameTable nt) ;

/// @brief Method get_NodeType addr 0x26e04f0 size 0x20 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Name addr 0x26e0510 size 0x20 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26e0530 size 0x20 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x26e0550 size 0x20 virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x26e0570 size 0x20 virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_Value addr 0x26e0590 size 0x20 virtual true final false
 ::StringW get_Value() ;

/// @brief Method get_BaseURI addr 0x26e05b0 size 0x20 virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method get_IsEmptyElement addr 0x26e05d0 size 0x24 virtual true final false
 bool get_IsEmptyElement() ;

/// @brief Method get_IsDefault addr 0x26e05f4 size 0x24 virtual true final false
 bool get_IsDefault() ;

/// @brief Method MoveToAttribute addr 0x26e0618 size 0x24 virtual true final false
 bool MoveToAttribute(::StringW name) ;

/// @brief Method MoveToFirstAttribute addr 0x26e063c size 0x24 virtual true final false
 bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute addr 0x26e0660 size 0x24 virtual true final false
 bool MoveToNextAttribute() ;

/// @brief Method MoveToElement addr 0x26e0684 size 0x24 virtual true final false
 bool MoveToElement() ;

/// @brief Method ReadAttributeValue addr 0x26e06a8 size 0x24 virtual true final false
 bool ReadAttributeValue() ;

/// @brief Method Read addr 0x26e06cc size 0x24 virtual true final false
 bool Read() ;

/// @brief Method Close addr 0x26e06f0 size 0x24 virtual true final false
 void Close() ;

/// @brief Method get_ReadState addr 0x26e0714 size 0x24 virtual true final false
 ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_NameTable addr 0x26e0738 size 0x24 virtual true final false
 ::System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method LookupNamespace addr 0x26e075c size 0x38 virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method get_CanResolveEntity addr 0x26e0794 size 0x8 virtual true final false
 bool get_CanResolveEntity() ;

/// @brief Method ResolveEntity addr 0x26e079c size 0x24 virtual true final false
 void ResolveEntity() ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace addr 0x26e07c0 size 0x24 virtual true final true
 ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix addr 0x26e07e4 size 0x1c virtual true final true
 ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) ;

/// @brief Method set_EntityHandling addr 0x26e0800 size 0x1c virtual false final false
 void set_EntityHandling(::System::Xml::EntityHandling value) ;

/// @brief Method set_XmlResolver addr 0x26e081c size 0x1c virtual false final false
 void set_XmlResolver(::System::Xml::XmlResolver value) ;

/// @brief Method get_Impl addr 0x26e0838 size 0x8 virtual false final false
 ::System::Xml::XmlTextReaderImpl get_Impl() ;

/// @brief Method set_XmlValidatingReaderCompatibilityMode addr 0x26e0840 size 0x20 virtual false final false
 void set_XmlValidatingReaderCompatibilityMode(bool value) ;

/// @brief Method get_DtdInfo addr 0x26e0860 size 0x24 virtual true final false
 ::System::Xml::IDtdInfo get_DtdInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlTextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReader, "System.Xml", "XmlTextReader");
