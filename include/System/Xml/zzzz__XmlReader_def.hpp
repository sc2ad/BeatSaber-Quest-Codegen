#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml {
class XmlReader;
}
// Type: System.Xml::XmlReader
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11398))
// CS Name: System.Xml.XmlReader
class CORDL_TYPE XmlReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlReader", modifiers: " const&", def_value: None }]
constexpr XmlReader(XmlReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlReader", modifiers: "&&", def_value: None }]
constexpr XmlReader(XmlReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlReader& operator=(XmlReader&& o) noexcept = default;
  constexpr XmlReader& operator=(XmlReader const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_IsTextualNodeBitmap, put=__set_IsTextualNodeBitmap))  IsTextualNodeBitmap;

static void __set_IsTextualNodeBitmap(uint32_t value) ;

static uint32_t __get_IsTextualNodeBitmap() ;

static uint32_t __declspec(property(get=__get_CanReadContentAsBitmap, put=__set_CanReadContentAsBitmap))  CanReadContentAsBitmap;

static void __set_CanReadContentAsBitmap(uint32_t value) ;

static uint32_t __get_CanReadContentAsBitmap() ;

static uint32_t __declspec(property(get=__get_HasValueBitmap, put=__set_HasValueBitmap))  HasValueBitmap;

static void __set_HasValueBitmap(uint32_t value) ;

static uint32_t __get_HasValueBitmap() ;


// Properties

 ::System::Xml::XmlReaderSettings __declspec(property(get=get_Settings))  Settings;

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::StringW __declspec(property(get=get_Value))  Value;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;

 bool __declspec(property(get=get_IsEmptyElement))  IsEmptyElement;

 bool __declspec(property(get=get_IsDefault))  IsDefault;

 ::System::Xml::Schema::IXmlSchemaInfo __declspec(property(get=get_SchemaInfo))  SchemaInfo;

 ::System::Xml::ReadState __declspec(property(get=get_ReadState))  ReadState;

 ::System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 bool __declspec(property(get=get_CanResolveEntity))  CanResolveEntity;

 ::System::Xml::IDtdInfo __declspec(property(get=get_DtdInfo))  DtdInfo;


// Methods

/// @brief Method get_Settings addr 0x26c74b0 size 0x8 virtual true final false
 ::System::Xml::XmlReaderSettings get_Settings() ;

/// @brief Method get_NodeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Name addr 0x26c74b8 size 0xe4 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Value() ;

/// @brief Method get_BaseURI addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method get_IsEmptyElement addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsEmptyElement() ;

/// @brief Method get_IsDefault addr 0x26c759c size 0x8 virtual true final false
 bool get_IsDefault() ;

/// @brief Method get_SchemaInfo addr 0x26c75a4 size 0x48 virtual true final false
 ::System::Xml::Schema::IXmlSchemaInfo get_SchemaInfo() ;

/// @brief Method MoveToAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveToAttribute(::StringW name) ;

/// @brief Method MoveToFirstAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveToNextAttribute() ;

/// @brief Method MoveToElement addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveToElement() ;

/// @brief Method ReadAttributeValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ReadAttributeValue() ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Read() ;

/// @brief Method Close addr 0x26c75ec size 0x4 virtual true final false
 void Close() ;

/// @brief Method get_ReadState addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_NameTable addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method LookupNamespace addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method get_CanResolveEntity addr 0x26c75f0 size 0x8 virtual true final false
 bool get_CanResolveEntity() ;

/// @brief Method ResolveEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResolveEntity() ;

/// @brief Method Dispose addr 0x26c75f8 size 0x14 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x26c760c size 0x44 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_DtdInfo addr 0x26c7650 size 0x8 virtual true final false
 ::System::Xml::IDtdInfo get_DtdInfo() ;

/// @brief Method CalcBufferSize addr 0x26c7658 size 0x84 virtual false final false
static int32_t CalcBufferSize(::System::IO::Stream input) ;

// Ctor Parameters []
explicit XmlReader() ;

/// @brief Method .ctor addr 0x26c76dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlReader, "System.Xml", "XmlReader");
