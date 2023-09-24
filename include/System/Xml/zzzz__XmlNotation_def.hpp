#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml {
class XmlNotation;
}
// Type: System.Xml::XmlNotation
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11462))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11466))
// CS Name: System.Xml.XmlNotation
class CORDL_TYPE XmlNotation : public System::Xml::XmlNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlNotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNotation", modifiers: " const&", def_value: None }]
constexpr XmlNotation(XmlNotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNotation", modifiers: "&&", def_value: None }]
constexpr XmlNotation(XmlNotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNotation(void* ptr) noexcept : System::Xml::XmlNode(ptr) {
}


  constexpr XmlNotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNotation& operator=(XmlNotation&& o) noexcept = default;
  constexpr XmlNotation& operator=(XmlNotation const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_publicId, put=__set_publicId))  publicId;

constexpr void __set_publicId(::StringW value) ;

constexpr ::StringW __get_publicId() const;

 ::StringW __declspec(property(get=__get_systemId, put=__set_systemId))  systemId;

constexpr void __set_systemId(::StringW value) ;

constexpr ::StringW __get_systemId() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::StringW __declspec(property(put=set_InnerXml))  InnerXml;


// Methods

static System::Xml::XmlNotation New_ctor(::StringW name, ::StringW publicId, ::StringW systemId, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f9954 size 0x68 virtual false final false
 void _ctor(::StringW name, ::StringW publicId, ::StringW systemId, System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x26fe018 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26fe020 size 0x8 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x26fe028 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method CloneNode addr 0x26fe030 size 0x60 virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_IsReadOnly addr 0x26fe090 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method set_InnerXml addr 0x26fe098 size 0x60 virtual true final false
 void set_InnerXml(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlNotation);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlNotation, "System.Xml", "XmlNotation");
