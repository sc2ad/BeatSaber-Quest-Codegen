#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security {
class SecurityElement;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__IContentHandler;
}
namespace System::Collections {
class Stack;
}
namespace Mono::Xml {
class SmallXmlParser;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__IAttrList;
}
// Forward declare root types
namespace Mono::Xml {
class SecurityParser;
}
// Type: Mono.Xml::SecurityParser
namespace Mono::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2254))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2250))
// CS Name: Mono.Xml.SecurityParser
class CORDL_TYPE SecurityParser : public Mono::Xml::SmallXmlParser {
public:
// Declarations
/// @brief Convert operator to Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler
constexpr operator  Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SecurityParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityParser", modifiers: " const&", def_value: None }]
constexpr SecurityParser(SecurityParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityParser", modifiers: "&&", def_value: None }]
constexpr SecurityParser(SecurityParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityParser(void* ptr) noexcept : Mono::Xml::SmallXmlParser(ptr) {
}


  constexpr SecurityParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityParser& operator=(SecurityParser&& o) noexcept = default;
  constexpr SecurityParser& operator=(SecurityParser const& o) noexcept = default;
                


// Fields

 System::Security::SecurityElement __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(System::Security::SecurityElement value) ;

constexpr System::Security::SecurityElement __get_root() const;

 System::Security::SecurityElement __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(System::Security::SecurityElement value) ;

constexpr System::Security::SecurityElement __get_current() const;

 System::Collections::Stack __declspec(property(get=__get_stack, put=__set_stack))  stack;

constexpr void __set_stack(System::Collections::Stack value) ;

constexpr System::Collections::Stack __get_stack() const;


// Methods

// Ctor Parameters []
explicit SecurityParser() ;

/// @brief Method .ctor addr 0x22a5980 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method LoadXml addr 0x22a5b00 size 0x8c virtual false final false
 void LoadXml(::StringW xml) ;

/// @brief Method ToXml addr 0x22a5d54 size 0x8 virtual false final false
 System::Security::SecurityElement ToXml() ;

/// @brief Method OnStartParsing addr 0x22a5d5c size 0x4 virtual true final true
 void OnStartParsing(Mono::Xml::SmallXmlParser parser) ;

/// @brief Method OnProcessingInstruction addr 0x22a5d60 size 0x4 virtual true final true
 void OnProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method OnIgnorableWhitespace addr 0x22a5d64 size 0x4 virtual true final true
 void OnIgnorableWhitespace(::StringW s) ;

/// @brief Method OnStartElement addr 0x22a5d68 size 0x27c virtual true final true
 void OnStartElement(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method OnEndElement addr 0x22a5fe4 size 0x88 virtual true final true
 void OnEndElement(::StringW name) ;

/// @brief Method OnChars addr 0x22a606c size 0x80 virtual true final true
 void OnChars(::StringW ch) ;

/// @brief Method OnEndParsing addr 0x22a60ec size 0x4 virtual true final true
 void OnEndParsing(Mono::Xml::SmallXmlParser parser) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Xml
NEED_NO_BOX(Mono::Xml::SecurityParser);
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SecurityParser, "Mono.Xml", "SecurityParser");
