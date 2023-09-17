#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlDeclaration;
}
// Type: Newtonsoft.Json.Converters::IXmlDeclaration
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11996))
// CS Name: Newtonsoft.Json.Converters.IXmlDeclaration
class CORDL_TYPE IXmlDeclaration : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Newtonsoft::Json::Converters::IXmlNode
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode() const noexcept;

~IXmlDeclaration() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXmlDeclaration(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Version))  Version;

 ::StringW __declspec(property(get=get_Encoding, put=set_Encoding))  Encoding;

 ::StringW __declspec(property(get=get_Standalone, put=set_Standalone))  Standalone;


// Methods

/// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Version() ;

/// @brief Method get_Encoding addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Encoding() ;

/// @brief Method set_Encoding addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Encoding(::StringW value) ;

/// @brief Method get_Standalone addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Standalone() ;

/// @brief Method set_Standalone addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Standalone(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::IXmlDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IXmlDeclaration, "Newtonsoft.Json.Converters", "IXmlDeclaration");
