#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace Newtonsoft::Json::Converters {
class IXmlDeclaration;
}
namespace System::Xml {
class XmlDeclaration;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDeclarationWrapper;
}
// Type: Newtonsoft.Json.Converters::XmlDeclarationWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11992))
// CS Name: Newtonsoft.Json.Converters.XmlDeclarationWrapper
class CORDL_TYPE XmlDeclarationWrapper : public Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlDeclaration
constexpr operator  Newtonsoft::Json::Converters::IXmlDeclaration() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlDeclarationWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDeclarationWrapper", modifiers: " const&", def_value: None }]
constexpr XmlDeclarationWrapper(XmlDeclarationWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDeclarationWrapper", modifiers: "&&", def_value: None }]
constexpr XmlDeclarationWrapper(XmlDeclarationWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDeclarationWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XmlNodeWrapper(ptr) {
}


  constexpr XmlDeclarationWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDeclarationWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDeclarationWrapper& operator=(XmlDeclarationWrapper&& o) noexcept = default;
  constexpr XmlDeclarationWrapper& operator=(XmlDeclarationWrapper const& o) noexcept = default;
                


// Fields

 System::Xml::XmlDeclaration __declspec(property(get=__get__declaration, put=__set__declaration))  _declaration;

constexpr void __set__declaration(System::Xml::XmlDeclaration value) ;

constexpr System::Xml::XmlDeclaration __get__declaration() const;


// Properties

 ::StringW __declspec(property(get=get_Version))  Version;

 ::StringW __declspec(property(get=get_Encoding, put=set_Encoding))  Encoding;

 ::StringW __declspec(property(get=get_Standalone, put=set_Standalone))  Standalone;


// Methods

// Ctor Parameters [CppParam { name: "declaration", ty: "System::Xml::XmlDeclaration", modifiers: "", def_value: None }]
explicit XmlDeclarationWrapper(System::Xml::XmlDeclaration declaration) ;

/// @brief Method .ctor addr 0x2541b4c size 0x2c virtual false final false
 void _ctor(System::Xml::XmlDeclaration declaration) ;

/// @brief Method get_Version addr 0x2542174 size 0x1c virtual true final true
 ::StringW get_Version() ;

/// @brief Method get_Encoding addr 0x2542190 size 0x1c virtual true final true
 ::StringW get_Encoding() ;

/// @brief Method set_Encoding addr 0x25421ac size 0x1c virtual true final true
 void set_Encoding(::StringW value) ;

/// @brief Method get_Standalone addr 0x25421c8 size 0x1c virtual true final true
 ::StringW get_Standalone() ;

/// @brief Method set_Standalone addr 0x25421e4 size 0x1c virtual true final true
 void set_Standalone(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XmlDeclarationWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XmlDeclarationWrapper, "Newtonsoft.Json.Converters", "XmlDeclarationWrapper");
