#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace System::Xml {
class XmlNameTable;
}
namespace MS::Internal::Xml::Cache {
struct XPathNodeRef;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathDocument;
}
// Type: System.Xml.XPath::XPathDocument
namespace System::Xml::XPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11521))
// CS Name: System.Xml.XPath.XPathDocument
class CORDL_TYPE XPathDocument : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XPathDocument() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathDocument", modifiers: " const&", def_value: None }]
constexpr XPathDocument(XPathDocument const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathDocument", modifiers: "&&", def_value: None }]
constexpr XPathDocument(XPathDocument&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPathDocument(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XPathDocument& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPathDocument& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPathDocument& operator=(XPathDocument&& o) noexcept = default;
  constexpr XPathDocument& operator=(XPathDocument const& o) noexcept = default;
                


// Fields

 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=__get_pageXmlNmsp, put=__set_pageXmlNmsp))  pageXmlNmsp;

constexpr void __set_pageXmlNmsp(::ArrayW<MS::Internal::Xml::Cache::XPathNode> value) ;

constexpr ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __get_pageXmlNmsp() const;

 int32_t __declspec(property(get=__get_idxXmlNmsp, put=__set_idxXmlNmsp))  idxXmlNmsp;

constexpr void __set_idxXmlNmsp(int32_t value) ;

constexpr int32_t __get_idxXmlNmsp() const;

 System::Xml::XmlNameTable __declspec(property(get=__get_nameTable, put=__set_nameTable))  nameTable;

constexpr void __set_nameTable(System::Xml::XmlNameTable value) ;

constexpr System::Xml::XmlNameTable __get_nameTable() const;

 System::Collections::Generic::Dictionary_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef> __declspec(property(get=__get_mapNmsp, put=__set_mapNmsp))  mapNmsp;

constexpr void __set_mapNmsp(System::Collections::Generic::Dictionary_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef> value) ;

constexpr System::Collections::Generic::Dictionary_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef> __get_mapNmsp() const;


// Properties

 System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;


// Methods

/// @brief Method get_NameTable addr 0x271640c size 0x8 virtual false final false
 System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method GetXmlNamespaceNode addr 0x2716414 size 0x10 virtual false final false
 int32_t GetXmlNamespaceNode(ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageXmlNmsp) ;

/// @brief Method LookupNamespaces addr 0x2716424 size 0xd4 virtual false final false
 int32_t LookupNamespaces(::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageElem, int32_t idxElem, ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageNmsp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::XPath
NEED_NO_BOX(System::Xml::XPath::XPathDocument);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XPath::XPathDocument, "System.Xml.XPath", "XPathDocument");
