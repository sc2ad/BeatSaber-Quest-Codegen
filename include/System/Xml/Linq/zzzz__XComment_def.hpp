#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml::Linq {
class XNode;
}
// Forward declare root types
namespace System::Xml::Linq {
class XComment;
}
// Type: System.Xml.Linq::XComment
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15429))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15410))
// CS Name: System.Xml.Linq.XComment
class CORDL_TYPE XComment : public ::System::Xml::Linq::XNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XComment() = default;

// Ctor Parameters [CppParam { name: "", ty: "XComment", modifiers: " const&", def_value: None }]
constexpr XComment(XComment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XComment", modifiers: "&&", def_value: None }]
constexpr XComment(XComment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XComment(void* ptr) noexcept : ::System::Xml::Linq::XNode(ptr) {
}


  constexpr XComment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XComment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XComment& operator=(XComment&& o) noexcept = default;
  constexpr XComment& operator=(XComment const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;


// Properties

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit XComment(::StringW value) ;

/// @brief Method .ctor addr 0x26c9428 size 0x78 virtual false final false
 void _ctor(::StringW value) ;

// Ctor Parameters [CppParam { name: "other", ty: "::System::Xml::Linq::XComment", modifiers: "", def_value: None }]
explicit XComment(::System::Xml::Linq::XComment other) ;

/// @brief Method .ctor addr 0x26c94a8 size 0x7c virtual false final false
 void _ctor(::System::Xml::Linq::XComment other) ;

/// @brief Method get_NodeType addr 0x26c9524 size 0x8 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Value addr 0x26c952c size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26c9534 size 0xf4 virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method WriteTo addr 0x26c9628 size 0x74 virtual true final false
 void WriteTo(::System::Xml::XmlWriter writer) ;

/// @brief Method CloneNode addr 0x26c969c size 0x60 virtual true final false
 ::System::Xml::Linq::XNode CloneNode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Linq::XComment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XComment, "System.Xml.Linq", "XComment");
