#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlText;
}
// Type: System.Xml::XmlText
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11442))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11469))
// CS Name: System.Xml.XmlText
class CORDL_TYPE XmlText : public System::Xml::XmlCharacterData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlText() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlText", modifiers: " const&", def_value: None }]
constexpr XmlText(XmlText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlText", modifiers: "&&", def_value: None }]
constexpr XmlText(XmlText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlText(void* ptr) noexcept : System::Xml::XmlCharacterData(ptr) {
}


  constexpr XmlText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlText& operator=(XmlText&& o) noexcept = default;
  constexpr XmlText& operator=(XmlText const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_IsText))  IsText;


// Methods

// Ctor Parameters [CppParam { name: "strData", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlText(::StringW strData) ;

/// @brief Method .ctor addr 0x26f8184 size 0xc virtual false final false
 void _ctor(::StringW strData) ;

// Ctor Parameters [CppParam { name: "strData", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlText(::StringW strData, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f817c size 0x8 virtual false final false
 void _ctor(::StringW strData, System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x26fe438 size 0x28 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26fe460 size 0x28 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x26fe488 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode addr 0x26fe490 size 0x84 virtual true final false
 System::Xml::XmlNode get_ParentNode() ;

/// @brief Method CloneNode addr 0x26fe514 size 0x5c virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_Value addr 0x26fe570 size 0x10 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26fe580 size 0xd4 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_IsText addr 0x26fe654 size 0x8 virtual true final false
 bool get_IsText() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlText);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlText, "System.Xml", "XmlText");
