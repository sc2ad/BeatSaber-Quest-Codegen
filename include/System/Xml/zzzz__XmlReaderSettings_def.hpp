#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Xml {
struct ValidationType;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
struct DtdProcessing;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml::Schema {
struct XmlSchemaValidationFlags;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml {
class XmlReaderSettings;
}
// Type: System.Xml::XmlReaderSettings
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11399))
// CS Name: System.Xml.XmlReaderSettings
class CORDL_TYPE XmlReaderSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~XmlReaderSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlReaderSettings", modifiers: " const&", def_value: None }]
constexpr XmlReaderSettings(XmlReaderSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlReaderSettings", modifiers: "&&", def_value: None }]
constexpr XmlReaderSettings(XmlReaderSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlReaderSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlReaderSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlReaderSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlReaderSettings& operator=(XmlReaderSettings&& o) noexcept = default;
  constexpr XmlReaderSettings& operator=(XmlReaderSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_useAsync, put=__set_useAsync))  useAsync;

constexpr void __set_useAsync(bool value) ;

constexpr bool __get_useAsync() const;

 System::Xml::XmlNameTable __declspec(property(get=__get_nameTable, put=__set_nameTable))  nameTable;

constexpr void __set_nameTable(System::Xml::XmlNameTable value) ;

constexpr System::Xml::XmlNameTable __get_nameTable() const;

 System::Xml::XmlResolver __declspec(property(get=__get_xmlResolver, put=__set_xmlResolver))  xmlResolver;

constexpr void __set_xmlResolver(System::Xml::XmlResolver value) ;

constexpr System::Xml::XmlResolver __get_xmlResolver() const;

 int32_t __declspec(property(get=__get_lineNumberOffset, put=__set_lineNumberOffset))  lineNumberOffset;

constexpr void __set_lineNumberOffset(int32_t value) ;

constexpr int32_t __get_lineNumberOffset() const;

 int32_t __declspec(property(get=__get_linePositionOffset, put=__set_linePositionOffset))  linePositionOffset;

constexpr void __set_linePositionOffset(int32_t value) ;

constexpr int32_t __get_linePositionOffset() const;

 System::Xml::ConformanceLevel __declspec(property(get=__get_conformanceLevel, put=__set_conformanceLevel))  conformanceLevel;

constexpr void __set_conformanceLevel(System::Xml::ConformanceLevel value) ;

constexpr System::Xml::ConformanceLevel __get_conformanceLevel() const;

 bool __declspec(property(get=__get_checkCharacters, put=__set_checkCharacters))  checkCharacters;

constexpr void __set_checkCharacters(bool value) ;

constexpr bool __get_checkCharacters() const;

 int64_t __declspec(property(get=__get_maxCharactersInDocument, put=__set_maxCharactersInDocument))  maxCharactersInDocument;

constexpr void __set_maxCharactersInDocument(int64_t value) ;

constexpr int64_t __get_maxCharactersInDocument() const;

 int64_t __declspec(property(get=__get_maxCharactersFromEntities, put=__set_maxCharactersFromEntities))  maxCharactersFromEntities;

constexpr void __set_maxCharactersFromEntities(int64_t value) ;

constexpr int64_t __get_maxCharactersFromEntities() const;

 bool __declspec(property(get=__get_ignoreWhitespace, put=__set_ignoreWhitespace))  ignoreWhitespace;

constexpr void __set_ignoreWhitespace(bool value) ;

constexpr bool __get_ignoreWhitespace() const;

 bool __declspec(property(get=__get_ignorePIs, put=__set_ignorePIs))  ignorePIs;

constexpr void __set_ignorePIs(bool value) ;

constexpr bool __get_ignorePIs() const;

 bool __declspec(property(get=__get_ignoreComments, put=__set_ignoreComments))  ignoreComments;

constexpr void __set_ignoreComments(bool value) ;

constexpr bool __get_ignoreComments() const;

 System::Xml::DtdProcessing __declspec(property(get=__get_dtdProcessing, put=__set_dtdProcessing))  dtdProcessing;

constexpr void __set_dtdProcessing(System::Xml::DtdProcessing value) ;

constexpr System::Xml::DtdProcessing __get_dtdProcessing() const;

 System::Xml::ValidationType __declspec(property(get=__get_validationType, put=__set_validationType))  validationType;

constexpr void __set_validationType(System::Xml::ValidationType value) ;

constexpr System::Xml::ValidationType __get_validationType() const;

 System::Xml::Schema::XmlSchemaValidationFlags __declspec(property(get=__get_validationFlags, put=__set_validationFlags))  validationFlags;

constexpr void __set_validationFlags(System::Xml::Schema::XmlSchemaValidationFlags value) ;

constexpr System::Xml::Schema::XmlSchemaValidationFlags __get_validationFlags() const;

 System::Xml::Schema::XmlSchemaSet __declspec(property(get=__get_schemas, put=__set_schemas))  schemas;

constexpr void __set_schemas(System::Xml::Schema::XmlSchemaSet value) ;

constexpr System::Xml::Schema::XmlSchemaSet __get_schemas() const;

 bool __declspec(property(get=__get_closeInput, put=__set_closeInput))  closeInput;

constexpr void __set_closeInput(bool value) ;

constexpr bool __get_closeInput() const;

 bool __declspec(property(get=__get_isReadOnly, put=__set_isReadOnly))  isReadOnly;

constexpr void __set_isReadOnly(bool value) ;

constexpr bool __get_isReadOnly() const;

 bool __declspec(property(get=__get__IsXmlResolverSet_k__BackingField, put=__set__IsXmlResolverSet_k__BackingField))  _IsXmlResolverSet_k__BackingField;

constexpr void __set__IsXmlResolverSet_k__BackingField(bool value) ;

constexpr bool __get__IsXmlResolverSet_k__BackingField() const;

static System::Nullable_1<bool> __declspec(property(get=__get_s_enableLegacyXmlSettings, put=__set_s_enableLegacyXmlSettings))  s_enableLegacyXmlSettings;

static void __set_s_enableLegacyXmlSettings(System::Nullable_1<bool> value) ;

static System::Nullable_1<bool> __get_s_enableLegacyXmlSettings() ;


// Properties

 System::Xml::XmlNameTable __declspec(property(put=set_NameTable))  NameTable;

 bool __declspec(property(put=set_IsXmlResolverSet))  IsXmlResolverSet;

 System::Xml::XmlResolver __declspec(property(put=set_XmlResolver))  XmlResolver;

 int32_t __declspec(property(put=set_LineNumberOffset))  LineNumberOffset;

 int32_t __declspec(property(put=set_LinePositionOffset))  LinePositionOffset;

 System::Xml::ConformanceLevel __declspec(property(put=set_ConformanceLevel))  ConformanceLevel;

 bool __declspec(property(put=set_CheckCharacters))  CheckCharacters;

 int64_t __declspec(property(put=set_MaxCharactersInDocument))  MaxCharactersInDocument;

 int64_t __declspec(property(put=set_MaxCharactersFromEntities))  MaxCharactersFromEntities;

 bool __declspec(property(put=set_IgnoreWhitespace))  IgnoreWhitespace;

 bool __declspec(property(put=set_IgnoreProcessingInstructions))  IgnoreProcessingInstructions;

 bool __declspec(property(put=set_IgnoreComments))  IgnoreComments;

 System::Xml::DtdProcessing __declspec(property(put=set_DtdProcessing))  DtdProcessing;

 System::Xml::ValidationType __declspec(property(get=get_ValidationType))  ValidationType;

 System::Xml::Schema::XmlSchemaSet __declspec(property(get=get_Schemas))  Schemas;

 bool __declspec(property(put=set_ReadOnly))  ReadOnly;


// Methods

// Ctor Parameters []
explicit XmlReaderSettings() ;

/// @brief Method .ctor addr 0x26c7740 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method set_NameTable addr 0x26c7768 size 0x5c virtual false final false
 void set_NameTable(System::Xml::XmlNameTable value) ;

/// @brief Method set_IsXmlResolverSet addr 0x26c787c size 0xc virtual false final false
 void set_IsXmlResolverSet(bool value) ;

/// @brief Method set_XmlResolver addr 0x26c7888 size 0x64 virtual false final false
 void set_XmlResolver(System::Xml::XmlResolver value) ;

/// @brief Method GetXmlResolver addr 0x26c78ec size 0x8 virtual false final false
 System::Xml::XmlResolver GetXmlResolver() ;

/// @brief Method set_LineNumberOffset addr 0x26c78f4 size 0x5c virtual false final false
 void set_LineNumberOffset(int32_t value) ;

/// @brief Method set_LinePositionOffset addr 0x26c7950 size 0x5c virtual false final false
 void set_LinePositionOffset(int32_t value) ;

/// @brief Method set_ConformanceLevel addr 0x26c79ac size 0xb0 virtual false final false
 void set_ConformanceLevel(System::Xml::ConformanceLevel value) ;

/// @brief Method set_CheckCharacters addr 0x26c7a5c size 0x5c virtual false final false
 void set_CheckCharacters(bool value) ;

/// @brief Method set_MaxCharactersInDocument addr 0x26c7ab8 size 0xac virtual false final false
 void set_MaxCharactersInDocument(int64_t value) ;

/// @brief Method set_MaxCharactersFromEntities addr 0x26c7b64 size 0xac virtual false final false
 void set_MaxCharactersFromEntities(int64_t value) ;

/// @brief Method set_IgnoreWhitespace addr 0x26c7c10 size 0x5c virtual false final false
 void set_IgnoreWhitespace(bool value) ;

/// @brief Method set_IgnoreProcessingInstructions addr 0x26c7c6c size 0x5c virtual false final false
 void set_IgnoreProcessingInstructions(bool value) ;

/// @brief Method set_IgnoreComments addr 0x26c7cc8 size 0x5c virtual false final false
 void set_IgnoreComments(bool value) ;

/// @brief Method set_DtdProcessing addr 0x26c7d24 size 0xb0 virtual false final false
 void set_DtdProcessing(System::Xml::DtdProcessing value) ;

/// @brief Method get_ValidationType addr 0x26c7dd4 size 0x8 virtual false final false
 System::Xml::ValidationType get_ValidationType() ;

/// @brief Method get_Schemas addr 0x26c7ddc size 0x6c virtual false final false
 System::Xml::Schema::XmlSchemaSet get_Schemas() ;

/// @brief Method set_ReadOnly addr 0x26c7e48 size 0xc virtual false final false
 void set_ReadOnly(bool value) ;

/// @brief Method CheckReadOnly addr 0x26c77c4 size 0xb8 virtual false final false
 void CheckReadOnly(::StringW propertyName) ;

/// @brief Method Initialize addr 0x26c7760 size 0x8 virtual false final false
 void Initialize() ;

/// @brief Method Initialize addr 0x26c7e54 size 0x64 virtual false final false
 void Initialize(System::Xml::XmlResolver resolver) ;

/// @brief Method CreateDefaultResolver addr 0x26c7eb8 size 0x5c virtual false final false
static System::Xml::XmlResolver CreateDefaultResolver() ;

/// @brief Method EnableLegacyXmlSettings addr 0x26c7f14 size 0x100 virtual false final false
static bool EnableLegacyXmlSettings() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlReaderSettings);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlReaderSettings, "System.Xml", "XmlReaderSettings");
