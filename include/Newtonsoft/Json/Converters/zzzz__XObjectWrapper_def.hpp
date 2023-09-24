#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml::Linq {
class XObject;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XObjectWrapper;
}
// Type: Newtonsoft.Json.Converters::XObjectWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12007))
// CS Name: Newtonsoft.Json.Converters.XObjectWrapper
class CORDL_TYPE XObjectWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XObjectWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XObjectWrapper", modifiers: " const&", def_value: None }]
constexpr XObjectWrapper(XObjectWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XObjectWrapper", modifiers: "&&", def_value: None }]
constexpr XObjectWrapper(XObjectWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XObjectWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XObjectWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XObjectWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XObjectWrapper& operator=(XObjectWrapper&& o) noexcept = default;
  constexpr XObjectWrapper& operator=(XObjectWrapper const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=__get_EmptyChildNodes, put=__set_EmptyChildNodes))  EmptyChildNodes;

static void __set_EmptyChildNodes(System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> value) ;

static System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __get_EmptyChildNodes() ;

 System::Xml::Linq::XObject __declspec(property(get=__get__xmlObject, put=__set__xmlObject))  _xmlObject;

constexpr void __set__xmlObject(System::Xml::Linq::XObject value) ;

constexpr System::Xml::Linq::XObject __get__xmlObject() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_WrappedNode))  WrappedNode;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_ChildNodes))  ChildNodes;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_Attributes))  Attributes;

 Newtonsoft::Json::Converters::IXmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(get=get_NamespaceUri))  NamespaceUri;


// Methods

static Newtonsoft::Json::Converters::XObjectWrapper New_ctor(System::Xml::Linq::XObject xmlObject) ;

/// @brief Method .ctor addr 0x2542e88 size 0x28 virtual false final false
 void _ctor(System::Xml::Linq::XObject xmlObject) ;

/// @brief Method get_WrappedNode addr 0x25449fc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_WrappedNode() ;

/// @brief Method get_NodeType addr 0x2544a04 size 0x20 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_LocalName addr 0x2544a24 size 0x8 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_ChildNodes addr 0x2544a2c size 0x58 virtual true final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_ChildNodes() ;

/// @brief Method get_Attributes addr 0x2544a84 size 0x8 virtual true final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_Attributes() ;

/// @brief Method get_ParentNode addr 0x2544a8c size 0x8 virtual true final false
 Newtonsoft::Json::Converters::IXmlNode get_ParentNode() ;

/// @brief Method get_Value addr 0x2544a94 size 0x8 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2544a9c size 0x40 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method AppendChild addr 0x2544adc size 0x40 virtual true final false
 Newtonsoft::Json::Converters::IXmlNode AppendChild(Newtonsoft::Json::Converters::IXmlNode newChild) ;

/// @brief Method get_NamespaceUri addr 0x2544b1c size 0x8 virtual true final false
 ::StringW get_NamespaceUri() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XObjectWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XObjectWrapper, "Newtonsoft.Json.Converters", "XObjectWrapper");
