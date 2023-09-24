#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XContainer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Linq {
class XAttribute;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
class XDeclaration;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
class XDocument;
}
// Type: System.Xml.Linq::XDocument
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15412))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15414))
// CS Name: System.Xml.Linq.XDocument
class CORDL_TYPE XDocument : public System::Xml::Linq::XContainer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XDocument() = default;

// Ctor Parameters [CppParam { name: "", ty: "XDocument", modifiers: " const&", def_value: None }]
constexpr XDocument(XDocument const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XDocument", modifiers: "&&", def_value: None }]
constexpr XDocument(XDocument&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XDocument(void* ptr) noexcept : System::Xml::Linq::XContainer(ptr) {
}


  constexpr XDocument& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XDocument& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XDocument& operator=(XDocument&& o) noexcept = default;
  constexpr XDocument& operator=(XDocument const& o) noexcept = default;
                


// Fields

 System::Xml::Linq::XDeclaration __declspec(property(get=__get__declaration, put=__set__declaration))  _declaration;

constexpr void __set__declaration(System::Xml::Linq::XDeclaration value) ;

constexpr System::Xml::Linq::XDeclaration __get__declaration() const;


// Properties

 System::Xml::Linq::XDeclaration __declspec(property(get=get_Declaration, put=set_Declaration))  Declaration;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 System::Xml::Linq::XElement __declspec(property(get=get_Root))  Root;


// Methods

static System::Xml::Linq::XDocument New_ctor() ;

/// @brief Method .ctor addr 0x26cb8f4 size 0x8 virtual false final false
 void _ctor() ;

static System::Xml::Linq::XDocument New_ctor(System::Xml::Linq::XDocument other) ;

/// @brief Method .ctor addr 0x26cb8fc size 0x7c virtual false final false
 void _ctor(System::Xml::Linq::XDocument other) ;

/// @brief Method get_Declaration addr 0x26cb978 size 0x8 virtual false final false
 System::Xml::Linq::XDeclaration get_Declaration() ;

/// @brief Method set_Declaration addr 0x26cb980 size 0x8 virtual false final false
 void set_Declaration(System::Xml::Linq::XDeclaration value) ;

/// @brief Method get_NodeType addr 0x26cb988 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Root addr 0x26cb990 size 0x48 virtual false final false
 System::Xml::Linq::XElement get_Root() ;

/// @brief Method WriteTo addr 0x26cb9d8 size 0x130 virtual true final false
 void WriteTo(System::Xml::XmlWriter writer) ;

/// @brief Method AddAttribute addr 0x26cbb08 size 0x50 virtual true final false
 void AddAttribute(System::Xml::Linq::XAttribute a) ;

/// @brief Method AddAttributeSkipNotify addr 0x26cbb58 size 0x50 virtual true final false
 void AddAttributeSkipNotify(System::Xml::Linq::XAttribute a) ;

/// @brief Method CloneNode addr 0x26cbba8 size 0x60 virtual true final false
 System::Xml::Linq::XNode CloneNode() ;

/// @brief Method GetFirstNode addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetFirstNode() ;

/// @brief Method IsWhitespace addr 0x26cbc08 size 0x8c virtual false final false
static bool IsWhitespace(::StringW s) ;

/// @brief Method ValidateNode addr 0x26cbc94 size 0x1a8 virtual true final false
 void ValidateNode(System::Xml::Linq::XNode node, System::Xml::Linq::XNode previous) ;

/// @brief Method ValidateDocument addr 0x26cbe3c size 0x12c virtual false final false
 void ValidateDocument(System::Xml::Linq::XNode previous, System::Xml::XmlNodeType allowBefore, System::Xml::XmlNodeType allowAfter) ;

/// @brief Method ValidateString addr 0x26cbf68 size 0x64 virtual true final false
 void ValidateString(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::XDocument);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XDocument, "System.Xml.Linq", "XDocument");
