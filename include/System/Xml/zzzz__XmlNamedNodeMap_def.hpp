#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace GlobalNamespace {
class System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System::Xml {
struct System__Xml__XmlNamedNodeMap__SmallXmlNodeList;
}
// Type: ::SingleObjectEnumerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11459))
// CS Name: System.Xml.XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator
class CORDL_TYPE System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator(System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator(System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator& operator=(System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator&& o) noexcept = default;
  constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator& operator=(System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_loneValue, put=__set_loneValue))  loneValue;

constexpr void __set_loneValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_loneValue() const;

 int32_t __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(int32_t value) ;

constexpr int32_t __get_position() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x26fc264 size 0x30 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Current addr 0x26fc294 size 0x54 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x26fc2e8 size 0x1c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x26fc304 size 0xc virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SmallXmlNodeList
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11460))
// CS Name: System.Xml.XmlNamedNodeMap::SmallXmlNodeList
struct CORDL_TYPE System__Xml__XmlNamedNodeMap__SmallXmlNodeList : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using SingleObjectEnumerator = GlobalNamespace::System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator;

// Ctor Parameters [CppParam { name: "field", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList(::bs_hook::Il2CppWrapperType field) noexcept;


                    constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList(System__Xml__XmlNamedNodeMap__SmallXmlNodeList const&) = default;
                    constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList(System__Xml__XmlNamedNodeMap__SmallXmlNodeList&&) = default;
                    constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList& operator=(System__Xml__XmlNamedNodeMap__SmallXmlNodeList const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlNamedNodeMap__SmallXmlNodeList& operator=(System__Xml__XmlNamedNodeMap__SmallXmlNodeList&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlNamedNodeMap__SmallXmlNodeList(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_field, put=__set_field))  field;

constexpr void __set_field(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_field() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x26fb80c size 0xa4 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x26fb4f0 size 0xe0 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Item(int32_t index) ;

/// @brief Method Add addr 0x26fbb30 size 0x11c virtual false final false
 void Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method RemoveAt addr 0x26fbe5c size 0xe4 virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method Insert addr 0x26fc0c0 size 0x1a4 virtual false final false
 void Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumerator addr 0x26fb8b8 size 0x100 virtual false final false
 System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::XmlNamedNodeMap
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11461))
// CS Name: System.Xml.XmlNamedNodeMap
class CORDL_TYPE XmlNamedNodeMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SmallXmlNodeList = System::Xml::System__Xml__XmlNamedNodeMap__SmallXmlNodeList;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlNamedNodeMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNamedNodeMap", modifiers: " const&", def_value: None }]
constexpr XmlNamedNodeMap(XmlNamedNodeMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNamedNodeMap", modifiers: "&&", def_value: None }]
constexpr XmlNamedNodeMap(XmlNamedNodeMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNamedNodeMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlNamedNodeMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNamedNodeMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNamedNodeMap& operator=(XmlNamedNodeMap&& o) noexcept = default;
  constexpr XmlNamedNodeMap& operator=(XmlNamedNodeMap const& o) noexcept = default;
                


// Fields

 System::Xml::XmlNode __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(System::Xml::XmlNode value) ;

constexpr System::Xml::XmlNode __get_parent() const;

 System::Xml::System__Xml__XmlNamedNodeMap__SmallXmlNodeList __declspec(property(get=__get_nodes, put=__set_nodes))  nodes;

constexpr void __set_nodes(System::Xml::System__Xml__XmlNamedNodeMap__SmallXmlNodeList value) ;

constexpr System::Xml::System__Xml__XmlNamedNodeMap__SmallXmlNodeList __get_nodes() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "parent", ty: "System::Xml::XmlNode", modifiers: "", def_value: None }]
explicit XmlNamedNodeMap(System::Xml::XmlNode parent) ;

/// @brief Method .ctor addr 0x26f47ec size 0x28 virtual false final false
 void _ctor(System::Xml::XmlNode parent) ;

/// @brief Method GetNamedItem addr 0x26fb374 size 0x98 virtual true final false
 System::Xml::XmlNode GetNamedItem(::StringW name) ;

/// @brief Method SetNamedItem addr 0x26fb5d0 size 0xbc virtual true final false
 System::Xml::XmlNode SetNamedItem(System::Xml::XmlNode node) ;

/// @brief Method get_Count addr 0x26fb804 size 0x8 virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x26fb8b0 size 0x8 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method FindNodeOffset addr 0x26fb40c size 0xe4 virtual false final false
 int32_t FindNodeOffset(::StringW name) ;

/// @brief Method FindNodeOffset addr 0x26fb68c size 0x124 virtual false final false
 int32_t FindNodeOffset(::StringW localName, ::StringW namespaceURI) ;

/// @brief Method AddNode addr 0x26fb9b8 size 0x178 virtual true final false
 System::Xml::XmlNode AddNode(System::Xml::XmlNode node) ;

/// @brief Method AddNodeForLoad addr 0x26fbc4c size 0xa8 virtual true final false
 System::Xml::XmlNode AddNodeForLoad(System::Xml::XmlNode node, System::Xml::XmlDocument doc) ;

/// @brief Method RemoveNodeAt addr 0x26fbcf4 size 0x168 virtual true final false
 System::Xml::XmlNode RemoveNodeAt(int32_t i) ;

/// @brief Method ReplaceNodeAt addr 0x26fb7b0 size 0x54 virtual false final false
 System::Xml::XmlNode ReplaceNodeAt(int32_t i, System::Xml::XmlNode node) ;

/// @brief Method InsertNodeAt addr 0x26fbf40 size 0x180 virtual true final false
 System::Xml::XmlNode InsertNodeAt(int32_t i, System::Xml::XmlNode node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(GlobalNamespace::System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Xml__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator, "System.Xml", "XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator");
NEED_NO_BOX(System::Xml::XmlNamedNodeMap);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlNamedNodeMap, "System.Xml", "XmlNamedNodeMap");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlNamedNodeMap__SmallXmlNodeList, "System.Xml", "XmlNamedNodeMap/SmallXmlNodeList");
