#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml {
class XmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlElementWrapper;
}
// Type: Newtonsoft.Json.Converters::XmlElementWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11991))
// CS Name: Newtonsoft.Json.Converters.XmlElementWrapper
class CORDL_TYPE XmlElementWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
// Declarations
/// @brief Convert operator to ::Newtonsoft::Json::Converters::IXmlElement
constexpr operator  ::Newtonsoft::Json::Converters::IXmlElement() const noexcept;

/// @brief Convert operator to ::Newtonsoft::Json::Converters::IXmlNode
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlElementWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlElementWrapper", modifiers: " const&", def_value: None }]
constexpr XmlElementWrapper(XmlElementWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlElementWrapper", modifiers: "&&", def_value: None }]
constexpr XmlElementWrapper(XmlElementWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlElementWrapper(void* ptr) noexcept : ::Newtonsoft::Json::Converters::XmlNodeWrapper(ptr) {
}


  constexpr XmlElementWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlElementWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlElementWrapper& operator=(XmlElementWrapper&& o) noexcept = default;
  constexpr XmlElementWrapper& operator=(XmlElementWrapper const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlElement __declspec(property(get=__get__element, put=__set__element))  _element;

constexpr void __set__element(::System::Xml::XmlElement value) ;

constexpr ::System::Xml::XmlElement __get__element() const;


// Properties

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

// Ctor Parameters [CppParam { name: "element", ty: "::System::Xml::XmlElement", modifiers: "", def_value: None }]
explicit XmlElementWrapper(::System::Xml::XmlElement element) ;

/// @brief Method .ctor addr 0x2541d74 size 0x2c virtual false final false
 void _ctor(::System::Xml::XmlElement element) ;

/// @brief Method SetAttributeNode addr 0x254204c size 0xe8 virtual true final true
 void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode attribute) ;

/// @brief Method GetPrefixOfNamespace addr 0x2542134 size 0x24 virtual true final true
 ::StringW GetPrefixOfNamespace(::StringW namespaceUri) ;

/// @brief Method get_IsEmpty addr 0x2542158 size 0x1c virtual true final true
 bool get_IsEmpty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlElementWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlElementWrapper, "Newtonsoft.Json.Converters", "XmlElementWrapper");
