#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace Newtonsoft::Json::Converters {
class IXmlDeclaration;
}
namespace System::Xml::Linq {
class XDeclaration;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XDeclarationWrapper;
}
// Type: Newtonsoft.Json.Converters::XDeclarationWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12007))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12000))
// CS Name: Newtonsoft.Json.Converters.XDeclarationWrapper
class CORDL_TYPE XDeclarationWrapper : public Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlDeclaration
constexpr operator  Newtonsoft::Json::Converters::IXmlDeclaration() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XDeclarationWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XDeclarationWrapper", modifiers: " const&", def_value: None }]
constexpr XDeclarationWrapper(XDeclarationWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XDeclarationWrapper", modifiers: "&&", def_value: None }]
constexpr XDeclarationWrapper(XDeclarationWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XDeclarationWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XObjectWrapper(ptr) {
}


  constexpr XDeclarationWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XDeclarationWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XDeclarationWrapper& operator=(XDeclarationWrapper&& o) noexcept = default;
  constexpr XDeclarationWrapper& operator=(XDeclarationWrapper const& o) noexcept = default;
                


// Fields

 System::Xml::Linq::XDeclaration __declspec(property(get=__get__Declaration_k__BackingField, put=__set__Declaration_k__BackingField))  _Declaration_k__BackingField;

constexpr void __set__Declaration_k__BackingField(System::Xml::Linq::XDeclaration value) ;

constexpr System::Xml::Linq::XDeclaration __get__Declaration_k__BackingField() const;


// Properties

 System::Xml::Linq::XDeclaration __declspec(property(get=get_Declaration, put=set_Declaration))  Declaration;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Version))  Version;

 ::StringW __declspec(property(get=get_Encoding, put=set_Encoding))  Encoding;

 ::StringW __declspec(property(get=get_Standalone, put=set_Standalone))  Standalone;


// Methods

/// @brief Method get_Declaration addr 0x2542e0c size 0x8 virtual false final false
 System::Xml::Linq::XDeclaration get_Declaration() ;

/// @brief Method set_Declaration addr 0x2542e14 size 0x8 virtual false final false
 void set_Declaration(System::Xml::Linq::XDeclaration value) ;

static Newtonsoft::Json::Converters::XDeclarationWrapper New_ctor(System::Xml::Linq::XDeclaration declaration) ;

/// @brief Method .ctor addr 0x2542e1c size 0x6c virtual false final false
 void _ctor(System::Xml::Linq::XDeclaration declaration) ;

/// @brief Method get_NodeType addr 0x2542eb0 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Version addr 0x2542eb8 size 0x1c virtual true final true
 ::StringW get_Version() ;

/// @brief Method get_Encoding addr 0x2542ed4 size 0x1c virtual true final true
 ::StringW get_Encoding() ;

/// @brief Method set_Encoding addr 0x2542ef0 size 0x1c virtual true final true
 void set_Encoding(::StringW value) ;

/// @brief Method get_Standalone addr 0x2542f0c size 0x1c virtual true final true
 ::StringW get_Standalone() ;

/// @brief Method set_Standalone addr 0x2542f28 size 0x1c virtual true final true
 void set_Standalone(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XDeclarationWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XDeclarationWrapper, "Newtonsoft.Json.Converters", "XDeclarationWrapper");
