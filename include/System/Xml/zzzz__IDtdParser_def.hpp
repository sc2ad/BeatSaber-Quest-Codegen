#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IDtdParserAdapter;
}
// Forward declare root types
namespace System::Xml {
class IDtdParser;
}
// Type: System.Xml::IDtdParser
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11368))
// CS Name: System.Xml.IDtdParser
class CORDL_TYPE IDtdParser : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDtdParser() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdParser(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ParseInternalDtd addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::IDtdInfo ParseInternalDtd(System::Xml::IDtdParserAdapter adapter, bool saveInternalSubset) ;

/// @brief Method ParseFreeFloatingDtd addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::IDtdInfo ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, System::Xml::IDtdParserAdapter adapter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::IDtdParser);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IDtdParser, "System.Xml", "IDtdParser");
