#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class XmlName;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
// Forward declare root types
namespace System::Xml {
class DomNameTable;
}
// Type: System.Xml::DomNameTable
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11438))
// CS Name: System.Xml.DomNameTable
class CORDL_TYPE DomNameTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DomNameTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "DomNameTable", modifiers: " const&", def_value: None }]
constexpr DomNameTable(DomNameTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DomNameTable", modifiers: "&&", def_value: None }]
constexpr DomNameTable(DomNameTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DomNameTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DomNameTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DomNameTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DomNameTable& operator=(DomNameTable&& o) noexcept = default;
  constexpr DomNameTable& operator=(DomNameTable const& o) noexcept = default;
                


// Fields

 ::ArrayW<::System::Xml::XmlName> __declspec(property(get=__get_entries, put=__set_entries))  entries;

constexpr void __set_entries(::ArrayW<::System::Xml::XmlName> value) ;

constexpr ::ArrayW<::System::Xml::XmlName> __get_entries() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_mask, put=__set_mask))  mask;

constexpr void __set_mask(int32_t value) ;

constexpr int32_t __get_mask() const;

 ::System::Xml::XmlDocument __declspec(property(get=__get_ownerDocument, put=__set_ownerDocument))  ownerDocument;

constexpr void __set_ownerDocument(::System::Xml::XmlDocument value) ;

constexpr ::System::Xml::XmlDocument __get_ownerDocument() const;

 ::System::Xml::XmlNameTable __declspec(property(get=__get_nameTable, put=__set_nameTable))  nameTable;

constexpr void __set_nameTable(::System::Xml::XmlNameTable value) ;

constexpr ::System::Xml::XmlNameTable __get_nameTable() const;


// Methods

// Ctor Parameters [CppParam { name: "document", ty: "::System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit DomNameTable(::System::Xml::XmlDocument document) ;

/// @brief Method .ctor addr 0x26edab8 size 0x84 virtual false final false
 void _ctor(::System::Xml::XmlDocument document) ;

/// @brief Method GetName addr 0x26edb58 size 0x15c virtual false final false
 ::System::Xml::XmlName GetName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

/// @brief Method AddName addr 0x26edcb4 size 0x264 virtual false final false
 ::System::Xml::XmlName AddName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

/// @brief Method Grow addr 0x26edf18 size 0x124 virtual false final false
 void Grow() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::DomNameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DomNameTable, "System.Xml", "DomNameTable");
