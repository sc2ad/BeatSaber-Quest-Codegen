#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlAttributeCollection;
}
// Type: System.Xml::XmlAttributeCollection
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11440))
// CS Name: System.Xml.XmlAttributeCollection
class CORDL_TYPE XmlAttributeCollection : public System::Xml::XmlNamedNodeMap {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlAttributeCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttributeCollection", modifiers: " const&", def_value: None }]
constexpr XmlAttributeCollection(XmlAttributeCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttributeCollection", modifiers: "&&", def_value: None }]
constexpr XmlAttributeCollection(XmlAttributeCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAttributeCollection(void* ptr) noexcept : System::Xml::XmlNamedNodeMap(ptr) {
}


  constexpr XmlAttributeCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAttributeCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAttributeCollection& operator=(XmlAttributeCollection&& o) noexcept = default;
  constexpr XmlAttributeCollection& operator=(XmlAttributeCollection const& o) noexcept = default;
                


// Properties

 System::Xml::XmlAttribute __declspec(property(get=get_ItemOf))  ItemOf;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;


// Methods

// Ctor Parameters [CppParam { name: "parent", ty: "System::Xml::XmlNode", modifiers: "", def_value: None }]
explicit XmlAttributeCollection(System::Xml::XmlNode parent) ;

/// @brief Method .ctor addr 0x26eed48 size 0x8 virtual false final false
 void _ctor(System::Xml::XmlNode parent) ;

/// @brief Method get_ItemOf addr 0x26eed50 size 0x14c virtual false final false
 System::Xml::XmlAttribute get_ItemOf(int32_t i) ;

/// @brief Method SetNamedItem addr 0x26eee9c size 0x19c virtual true final false
 System::Xml::XmlNode SetNamedItem(System::Xml::XmlNode node) ;

/// @brief Method Append addr 0x26ef0d8 size 0x11c virtual false final false
 System::Xml::XmlAttribute Append(System::Xml::XmlAttribute node) ;

/// @brief Method Remove addr 0x26ef394 size 0x88 virtual false final false
 System::Xml::XmlAttribute Remove(System::Xml::XmlAttribute node) ;

/// @brief Method RemoveAt addr 0x26ef41c size 0xac virtual false final false
 System::Xml::XmlAttribute RemoveAt(int32_t i) ;

/// @brief Method RemoveAll addr 0x26ef4c8 size 0x48 virtual false final false
 void RemoveAll() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x26ef510 size 0x84 virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x26ef594 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x26ef59c size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x26ef5a0 size 0x8 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method AddNode addr 0x26ef5a8 size 0xe4 virtual true final false
 System::Xml::XmlNode AddNode(System::Xml::XmlNode node) ;

/// @brief Method InsertNodeAt addr 0x26ef790 size 0xb0 virtual true final false
 System::Xml::XmlNode InsertNodeAt(int32_t i, System::Xml::XmlNode node) ;

/// @brief Method RemoveNodeAt addr 0x26ef840 size 0x1a0 virtual true final false
 System::Xml::XmlNode RemoveNodeAt(int32_t i) ;

/// @brief Method Detach addr 0x26ef1f4 size 0x48 virtual false final false
 void Detach(System::Xml::XmlAttribute attr) ;

/// @brief Method InsertParentIntoElementIdAttrMap addr 0x26ef23c size 0x158 virtual false final false
 void InsertParentIntoElementIdAttrMap(System::Xml::XmlAttribute attr) ;

/// @brief Method RemoveParentFromElementIdAttrMap addr 0x26ef9e0 size 0x158 virtual false final false
 void RemoveParentFromElementIdAttrMap(System::Xml::XmlAttribute attr) ;

/// @brief Method RemoveDuplicateAttribute addr 0x26ef68c size 0x104 virtual false final false
 int32_t RemoveDuplicateAttribute(System::Xml::XmlAttribute attr) ;

/// @brief Method PrepareParentInElementIdAttrMap addr 0x26ee6a0 size 0xf4 virtual false final false
 bool PrepareParentInElementIdAttrMap(::StringW attrPrefix, ::StringW attrLocalName) ;

/// @brief Method ResetParentInElementIdAttrMap addr 0x26ee794 size 0xc0 virtual false final false
 void ResetParentInElementIdAttrMap(::StringW oldVal, ::StringW newVal) ;

/// @brief Method InternalAppendAttribute addr 0x26ef038 size 0xa0 virtual false final false
 System::Xml::XmlAttribute InternalAppendAttribute(System::Xml::XmlAttribute node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlAttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlAttributeCollection, "System.Xml", "XmlAttributeCollection");
