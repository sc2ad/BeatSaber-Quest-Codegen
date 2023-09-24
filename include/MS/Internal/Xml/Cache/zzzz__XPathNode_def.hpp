#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace MS::Internal::Xml::Cache {
class XPathNodeInfoAtom;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml::XPath {
class XPathDocument;
}
namespace MS::Internal::Xml::Cache {
class XPathNodePageInfo;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Type: MS.Internal.Xml.Cache::XPathNode
namespace MS::Internal::Xml::Cache {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11710))
// CS Name: MS.Internal.Xml.Cache.XPathNode
struct CORDL_TYPE XPathNode : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_info", ty: "MS::Internal::Xml::Cache::XPathNodeInfoAtom", modifiers: "", def_value: None }, CppParam { name: "_idxSibling", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_idxParent", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_idxSimilar", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_posOffset", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_props", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr XPathNode(MS::Internal::Xml::Cache::XPathNodeInfoAtom _info, uint16_t _idxSibling, uint16_t _idxParent, uint16_t _idxSimilar, uint16_t _posOffset, uint32_t _props, ::StringW _value) noexcept;


                    constexpr XPathNode(XPathNode const&) = default;
                    constexpr XPathNode(XPathNode&&) = default;
                    constexpr XPathNode& operator=(XPathNode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XPathNode& operator=(XPathNode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XPathNode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 MS::Internal::Xml::Cache::XPathNodeInfoAtom __declspec(property(get=__get__info, put=__set__info))  _info;

constexpr void __set__info(MS::Internal::Xml::Cache::XPathNodeInfoAtom value) ;

constexpr MS::Internal::Xml::Cache::XPathNodeInfoAtom __get__info() const;

 uint16_t __declspec(property(get=__get__idxSibling, put=__set__idxSibling))  _idxSibling;

constexpr void __set__idxSibling(uint16_t value) ;

constexpr uint16_t __get__idxSibling() const;

 uint16_t __declspec(property(get=__get__idxParent, put=__set__idxParent))  _idxParent;

constexpr void __set__idxParent(uint16_t value) ;

constexpr uint16_t __get__idxParent() const;

 uint16_t __declspec(property(get=__get__idxSimilar, put=__set__idxSimilar))  _idxSimilar;

constexpr void __set__idxSimilar(uint16_t value) ;

constexpr uint16_t __get__idxSimilar() const;

 uint16_t __declspec(property(get=__get__posOffset, put=__set__posOffset))  _posOffset;

constexpr void __set__posOffset(uint16_t value) ;

constexpr uint16_t __get__posOffset() const;

 uint32_t __declspec(property(get=__get__props, put=__set__props))  _props;

constexpr void __set__props(uint32_t value) ;

constexpr uint32_t __get__props() const;

 ::StringW __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::StringW value) ;

constexpr ::StringW __get__value() const;


// Properties

 System::Xml::XPath::XPathNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceUri))  NamespaceUri;

 System::Xml::XPath::XPathDocument __declspec(property(get=get_Document))  Document;

 MS::Internal::Xml::Cache::XPathNodePageInfo __declspec(property(get=get_PageInfo))  PageInfo;

 bool __declspec(property(get=get_IsXmlNamespaceNode))  IsXmlNamespaceNode;

 bool __declspec(property(get=get_HasSibling))  HasSibling;

 bool __declspec(property(get=get_HasCollapsedText))  HasCollapsedText;

 bool __declspec(property(get=get_IsText))  IsText;

 bool __declspec(property(get=get_HasNamespaceDecls))  HasNamespaceDecls;

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_NodeType addr 0x27576e4 size 0xc virtual false final false
 System::Xml::XPath::XPathNodeType get_NodeType() ;

/// @brief Method get_Prefix addr 0x27577dc size 0x1c virtual false final false
 ::StringW get_Prefix() ;

/// @brief Method get_LocalName addr 0x275772c size 0x1c virtual false final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceUri addr 0x2757784 size 0x1c virtual false final false
 ::StringW get_NamespaceUri() ;

/// @brief Method get_Document addr 0x275783c size 0x1c virtual false final false
 System::Xml::XPath::XPathDocument get_Document() ;

/// @brief Method get_PageInfo addr 0x2757d8c size 0x1c virtual false final false
 MS::Internal::Xml::Cache::XPathNodePageInfo get_PageInfo() ;

/// @brief Method GetParent addr 0x2757c1c size 0x24 virtual false final false
 int32_t GetParent(ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageNode) ;

/// @brief Method GetSibling addr 0x2757af0 size 0x24 virtual false final false
 int32_t GetSibling(ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageNode) ;

/// @brief Method get_IsXmlNamespaceNode addr 0x2757a68 size 0x88 virtual false final false
 bool get_IsXmlNamespaceNode() ;

/// @brief Method get_HasSibling addr 0x2757da8 size 0x10 virtual false final false
 bool get_HasSibling() ;

/// @brief Method get_HasCollapsedText addr 0x2757db8 size 0xc virtual false final false
 bool get_HasCollapsedText() ;

/// @brief Method get_IsText addr 0x2757dc4 size 0x60 virtual false final false
 bool get_IsText() ;

/// @brief Method get_HasNamespaceDecls addr 0x2757e24 size 0xc virtual false final false
 bool get_HasNamespaceDecls() ;

/// @brief Method get_Value addr 0x2757e30 size 0x8 virtual false final false
 ::StringW get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MS::Internal::Xml::Cache
DEFINE_IL2CPP_ARG_TYPE(MS::Internal::Xml::Cache::XPathNode, "MS.Internal.Xml.Cache", "XPathNode");
