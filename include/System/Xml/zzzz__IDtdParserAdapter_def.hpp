#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System {
class Uri;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
struct LineInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class IDtdParserAdapter;
}
// Type: System.Xml::IDtdParserAdapter
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11369))
// CS Name: System.Xml.IDtdParserAdapter
class CORDL_TYPE IDtdParserAdapter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDtdParserAdapter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdParserAdapter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 ::System::Xml::IXmlNamespaceResolver __declspec(property(get=get_NamespaceResolver))  NamespaceResolver;

 ::System::Uri __declspec(property(get=get_BaseUri))  BaseUri;

 ::ArrayW<char16_t> __declspec(property(get=get_ParsingBuffer))  ParsingBuffer;

 int32_t __declspec(property(get=get_ParsingBufferLength))  ParsingBufferLength;

 int32_t __declspec(property(get=get_CurrentPosition, put=set_CurrentPosition))  CurrentPosition;

 int32_t __declspec(property(get=get_LineNo))  LineNo;

 int32_t __declspec(property(get=get_LineStartPosition))  LineStartPosition;

 bool __declspec(property(get=get_IsEof))  IsEof;

 int32_t __declspec(property(get=get_EntityStackLength))  EntityStackLength;

 bool __declspec(property(get=get_IsEntityEolNormalized))  IsEntityEolNormalized;


// Methods

/// @brief Method get_NameTable addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method get_NamespaceResolver addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::IXmlNamespaceResolver get_NamespaceResolver() ;

/// @brief Method get_BaseUri addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Uri get_BaseUri() ;

/// @brief Method get_ParsingBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<char16_t> get_ParsingBuffer() ;

/// @brief Method get_ParsingBufferLength addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ParsingBufferLength() ;

/// @brief Method get_CurrentPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_CurrentPosition() ;

/// @brief Method set_CurrentPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_CurrentPosition(int32_t value) ;

/// @brief Method get_LineNo addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_LineNo() ;

/// @brief Method get_LineStartPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_LineStartPosition() ;

/// @brief Method get_IsEof addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsEof() ;

/// @brief Method get_EntityStackLength addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_EntityStackLength() ;

/// @brief Method get_IsEntityEolNormalized addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsEntityEolNormalized() ;

/// @brief Method ReadData addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ReadData() ;

/// @brief Method OnNewLine addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNewLine(int32_t pos) ;

/// @brief Method ParseNumericCharRef addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ParseNumericCharRef(::System::Text::StringBuilder internalSubsetBuilder) ;

/// @brief Method ParseNamedCharRef addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ParseNamedCharRef(bool expand, ::System::Text::StringBuilder internalSubsetBuilder) ;

/// @brief Method ParsePI addr 0x0 size 0xffffffffffffffff virtual true final false
 void ParsePI(::System::Text::StringBuilder sb) ;

/// @brief Method ParseComment addr 0x0 size 0xffffffffffffffff virtual true final false
 void ParseComment(::System::Text::StringBuilder sb) ;

/// @brief Method PushEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 bool PushEntity(::System::Xml::IDtdEntityInfo entity, ByRef<int32_t> entityId) ;

/// @brief Method PopEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 bool PopEntity(ByRef<::System::Xml::IDtdEntityInfo> oldEntity, ByRef<int32_t> newEntityId) ;

/// @brief Method PushExternalSubset addr 0x0 size 0xffffffffffffffff virtual true final false
 bool PushExternalSubset(::StringW systemId, ::StringW publicId) ;

/// @brief Method PushInternalDtd addr 0x0 size 0xffffffffffffffff virtual true final false
 void PushInternalDtd(::StringW baseUri, ::StringW internalDtd) ;

/// @brief Method OnSystemId addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo) ;

/// @brief Method OnPublicId addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo) ;

/// @brief Method Throw addr 0x0 size 0xffffffffffffffff virtual true final false
 void Throw(::System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::IDtdParserAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdParserAdapter, "System.Xml", "IDtdParserAdapter");
