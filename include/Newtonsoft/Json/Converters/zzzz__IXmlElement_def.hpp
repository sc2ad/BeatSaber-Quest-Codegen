#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
// Type: Newtonsoft.Json.Converters::IXmlElement
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11998))
// CS Name: Newtonsoft.Json.Converters.IXmlElement
class CORDL_TYPE IXmlElement : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Newtonsoft::Json::Converters::IXmlNode
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode() const noexcept;

~IXmlElement() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXmlElement(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

/// @brief Method SetAttributeNode addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode attribute) ;

/// @brief Method GetPrefixOfNamespace addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetPrefixOfNamespace(::StringW namespaceUri) ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsEmpty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::IXmlElement);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IXmlElement, "Newtonsoft.Json.Converters", "IXmlElement");
