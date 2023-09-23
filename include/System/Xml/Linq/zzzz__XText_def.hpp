#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlWriter;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml::Linq {
class XText;
}
// Type: System.Xml.Linq::XText
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15429))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15435))
// CS Name: System.Xml.Linq.XText
class CORDL_TYPE XText : public System::Xml::Linq::XNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XText() = default;

// Ctor Parameters [CppParam { name: "", ty: "XText", modifiers: " const&", def_value: None }]
constexpr XText(XText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XText", modifiers: "&&", def_value: None }]
constexpr XText(XText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XText(void* ptr) noexcept : System::Xml::Linq::XNode(ptr) {
}


  constexpr XText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XText& operator=(XText&& o) noexcept = default;
  constexpr XText& operator=(XText const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;


// Properties

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit XText(::StringW value) ;

/// @brief Method .ctor addr 0x26c9254 size 0x78 virtual false final false
 void _ctor(::StringW value) ;

// Ctor Parameters [CppParam { name: "other", ty: "System::Xml::Linq::XText", modifiers: "", def_value: None }]
explicit XText(System::Xml::Linq::XText other) ;

/// @brief Method .ctor addr 0x26c92d0 size 0x7c virtual false final false
 void _ctor(System::Xml::Linq::XText other) ;

/// @brief Method get_NodeType addr 0x26cef04 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Value addr 0x26cef0c size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26caf38 size 0xf4 virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method WriteTo addr 0x26cef14 size 0xf4 virtual true final false
 void WriteTo(System::Xml::XmlWriter writer) ;

/// @brief Method AppendText addr 0x26cf008 size 0x24 virtual true final false
 void AppendText(System::Text::StringBuilder sb) ;

/// @brief Method CloneNode addr 0x26cf02c size 0x60 virtual true final false
 System::Xml::Linq::XNode CloneNode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::XText);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XText, "System.Xml.Linq", "XText");
