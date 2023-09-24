#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
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
class XmlDeclaration;
}
// Type: System.Xml::XmlDeclaration
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11446))
// CS Name: System.Xml.XmlDeclaration
class CORDL_TYPE XmlDeclaration : public System::Xml::XmlLinkedNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XmlDeclaration() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDeclaration", modifiers: " const&", def_value: None }]
constexpr XmlDeclaration(XmlDeclaration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDeclaration", modifiers: "&&", def_value: None }]
constexpr XmlDeclaration(XmlDeclaration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDeclaration(void* ptr) noexcept : System::Xml::XmlLinkedNode(ptr) {
}


  constexpr XmlDeclaration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDeclaration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDeclaration& operator=(XmlDeclaration&& o) noexcept = default;
  constexpr XmlDeclaration& operator=(XmlDeclaration const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 ::StringW __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(::StringW value) ;

constexpr ::StringW __get_encoding() const;

 ::StringW __declspec(property(get=__get_standalone, put=__set_standalone))  standalone;

constexpr void __set_standalone(::StringW value) ;

constexpr ::StringW __get_standalone() const;


// Properties

 ::StringW __declspec(property(get=get_Version, put=set_Version))  Version;

 ::StringW __declspec(property(get=get_Encoding, put=set_Encoding))  Encoding;

 ::StringW __declspec(property(get=get_Standalone, put=set_Standalone))  Standalone;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(get=get_InnerText, put=set_InnerText))  InnerText;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;


// Methods

static System::Xml::XmlDeclaration New_ctor(::StringW version, ::StringW encoding, ::StringW standalone, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f0780 size 0x190 virtual false final false
 void _ctor(::StringW version, ::StringW encoding, ::StringW standalone, System::Xml::XmlDocument doc) ;

/// @brief Method get_Version addr 0x26f0b40 size 0x8 virtual false final false
 ::StringW get_Version() ;

/// @brief Method set_Version addr 0x26f0b48 size 0x8 virtual false final false
 void set_Version(::StringW value) ;

/// @brief Method get_Encoding addr 0x26f0b50 size 0x8 virtual false final false
 ::StringW get_Encoding() ;

/// @brief Method set_Encoding addr 0x26f098c size 0x68 virtual false final false
 void set_Encoding(::StringW value) ;

/// @brief Method get_Standalone addr 0x26f0b58 size 0x8 virtual false final false
 ::StringW get_Standalone() ;

/// @brief Method set_Standalone addr 0x26f09f4 size 0x14c virtual false final false
 void set_Standalone(::StringW value) ;

/// @brief Method get_Value addr 0x26f0b60 size 0x10 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26f0b70 size 0x10 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_InnerText addr 0x26f0b80 size 0x168 virtual true final false
 ::StringW get_InnerText() ;

/// @brief Method set_InnerText addr 0x26f0ce8 size 0x18c virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method get_Name addr 0x26f0e74 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26f0eb4 size 0xc virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x26f0ec0 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method CloneNode addr 0x26f0ec8 size 0x3c virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method IsValidXmlVersion addr 0x26f0910 size 0x7c virtual false final false
 bool IsValidXmlVersion(::StringW ver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlDeclaration);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlDeclaration, "System.Xml", "XmlDeclaration");
