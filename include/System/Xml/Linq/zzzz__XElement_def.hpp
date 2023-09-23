#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XContainer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Xml::Linq {
class XName;
}
namespace System::Xml::Linq {
class XAttribute;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml::Linq {
class XStreamingElement;
}
// Forward declare root types
namespace System::Xml::Linq {
class System__Xml__Linq__XElement___GetAttributes_d__116;
}
namespace System::Xml::Linq {
class XElement;
}
// Type: ::<GetAttributes>d__116
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15416))
// CS Name: System.Xml.Linq.XElement::<GetAttributes>d__116
class CORDL_TYPE System__Xml__Linq__XElement___GetAttributes_d__116 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Xml::Linq::XAttribute>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Xml::Linq::XAttribute>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Xml::Linq::XAttribute>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Xml::Linq::XAttribute>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~System__Xml__Linq__XElement___GetAttributes_d__116() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__XElement___GetAttributes_d__116", modifiers: " const&", def_value: None }]
constexpr System__Xml__Linq__XElement___GetAttributes_d__116(System__Xml__Linq__XElement___GetAttributes_d__116 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__XElement___GetAttributes_d__116", modifiers: "&&", def_value: None }]
constexpr System__Xml__Linq__XElement___GetAttributes_d__116(System__Xml__Linq__XElement___GetAttributes_d__116&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Linq__XElement___GetAttributes_d__116(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__Linq__XElement___GetAttributes_d__116& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Linq__XElement___GetAttributes_d__116& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Linq__XElement___GetAttributes_d__116& operator=(System__Xml__Linq__XElement___GetAttributes_d__116&& o) noexcept = default;
  constexpr System__Xml__Linq__XElement___GetAttributes_d__116& operator=(System__Xml__Linq__XElement___GetAttributes_d__116 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Xml::Linq::XAttribute __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Xml::Linq::XAttribute value) ;

constexpr System::Xml::Linq::XAttribute __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Xml::Linq::XElement __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Xml::Linq::XElement value) ;

constexpr System::Xml::Linq::XElement __get___4__this() const;

 System::Xml::Linq::XName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(System::Xml::Linq::XName value) ;

constexpr System::Xml::Linq::XName __get_name() const;

 System::Xml::Linq::XName __declspec(property(get=__get___3__name, put=__set___3__name))  __3__name;

constexpr void __set___3__name(System::Xml::Linq::XName value) ;

constexpr System::Xml::Linq::XName __get___3__name() const;

 System::Xml::Linq::XAttribute __declspec(property(get=__get__a_5__2, put=__set__a_5__2))  _a_5__2;

constexpr void __set__a_5__2(System::Xml::Linq::XAttribute value) ;

constexpr System::Xml::Linq::XAttribute __get__a_5__2() const;


// Properties

 System::Xml::Linq::XAttribute __declspec(property(get=System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__get_Current))  System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__Xml__Linq__XElement___GetAttributes_d__116(int32_t __1__state) ;

/// @brief Method .ctor addr 0x26ccc10 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x26ccd80 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x26ccd84 size 0xa8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.get_Current addr 0x26cce2c size 0x8 virtual true final true
 System::Xml::Linq::XAttribute System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26cce34 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x26cce74 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator addr 0x26cce7c size 0xac virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Xml::Linq::XAttribute> System_Collections_Generic_IEnumerable_System_Xml_Linq_XAttribute__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26ccf28 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
// Type: System.Xml.Linq::XElement
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15412))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15417))
// CS Name: System.Xml.Linq.XElement
class CORDL_TYPE XElement : public System::Xml::Linq::XContainer {
public:
// Declarations
using _GetAttributes_d__116 = System::Xml::Linq::System__Xml__Linq__XElement___GetAttributes_d__116;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~XElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "XElement", modifiers: " const&", def_value: None }]
constexpr XElement(XElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XElement", modifiers: "&&", def_value: None }]
constexpr XElement(XElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XElement(void* ptr) noexcept : System::Xml::Linq::XContainer(ptr) {
}


  constexpr XElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XElement& operator=(XElement&& o) noexcept = default;
  constexpr XElement& operator=(XElement const& o) noexcept = default;
                


// Fields

 System::Xml::Linq::XName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(System::Xml::Linq::XName value) ;

constexpr System::Xml::Linq::XName __get_name() const;

 System::Xml::Linq::XAttribute __declspec(property(get=__get_lastAttr, put=__set_lastAttr))  lastAttr;

constexpr void __set_lastAttr(System::Xml::Linq::XAttribute value) ;

constexpr System::Xml::Linq::XAttribute __get_lastAttr() const;


// Properties

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;

 System::Xml::Linq::XName __declspec(property(get=get_Name))  Name;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "System::Xml::Linq::XName", modifiers: "", def_value: None }]
explicit XElement(System::Xml::Linq::XName name) ;

/// @brief Method .ctor addr 0x26cc1dc size 0x78 virtual false final false
 void _ctor(System::Xml::Linq::XName name) ;

// Ctor Parameters [CppParam { name: "other", ty: "System::Xml::Linq::XElement", modifiers: "", def_value: None }]
explicit XElement(System::Xml::Linq::XElement other) ;

/// @brief Method .ctor addr 0x26cc254 size 0xc0 virtual false final false
 void _ctor(System::Xml::Linq::XElement other) ;

// Ctor Parameters [CppParam { name: "other", ty: "System::Xml::Linq::XStreamingElement", modifiers: "", def_value: None }]
explicit XElement(System::Xml::Linq::XStreamingElement other) ;

/// @brief Method .ctor addr 0x26ca738 size 0x84 virtual false final false
 void _ctor(System::Xml::Linq::XStreamingElement other) ;

/// @brief Method get_IsEmpty addr 0x26cc34c size 0x10 virtual false final false
 bool get_IsEmpty() ;

/// @brief Method get_Name addr 0x26cc35c size 0x8 virtual false final false
 System::Xml::Linq::XName get_Name() ;

/// @brief Method get_NodeType addr 0x26cc364 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Value addr 0x26cc36c size 0x94 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26cc400 size 0x78 virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method Attribute addr 0x26cc478 size 0x3c virtual false final false
 System::Xml::Linq::XAttribute Attribute(System::Xml::Linq::XName name) ;

/// @brief Method Attributes addr 0x26cc4b4 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Xml::Linq::XAttribute> Attributes() ;

/// @brief Method GetPrefixOfNamespace addr 0x26c902c size 0x224 virtual false final false
 ::StringW GetPrefixOfNamespace(System::Xml::Linq::XNamespace ns) ;

/// @brief Method WriteTo addr 0x26cc644 size 0x84 virtual true final false
 void WriteTo(System::Xml::XmlWriter writer) ;

/// @brief Method AddAttribute addr 0x26cc87c size 0xf0 virtual true final false
 void AddAttribute(System::Xml::Linq::XAttribute a) ;

/// @brief Method AddAttributeSkipNotify addr 0x26ccaa4 size 0x10c virtual true final false
 void AddAttributeSkipNotify(System::Xml::Linq::XAttribute a) ;

/// @brief Method AppendAttribute addr 0x26cc96c size 0x138 virtual false final false
 void AppendAttribute(System::Xml::Linq::XAttribute a) ;

/// @brief Method AppendAttributeSkipNotify addr 0x26cc314 size 0x38 virtual false final false
 void AppendAttributeSkipNotify(System::Xml::Linq::XAttribute a) ;

/// @brief Method CloneNode addr 0x26ccbb0 size 0x60 virtual true final false
 System::Xml::Linq::XNode CloneNode() ;

/// @brief Method GetAttributes addr 0x26cc4bc size 0x88 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Xml::Linq::XAttribute> GetAttributes(System::Xml::Linq::XName name) ;

/// @brief Method GetNamespaceOfPrefixInScope addr 0x26cc550 size 0xf4 virtual false final false
 ::StringW GetNamespaceOfPrefixInScope(::StringW prefix, System::Xml::Linq::XElement outOfScope) ;

/// @brief Method ValidateNode addr 0x26ccc44 size 0x13c virtual true final false
 void ValidateNode(System::Xml::Linq::XNode node, System::Xml::Linq::XNode previous) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::System__Xml__Linq__XElement___GetAttributes_d__116);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::System__Xml__Linq__XElement___GetAttributes_d__116, "System.Xml.Linq", "XElement/<GetAttributes>d__116");
NEED_NO_BOX(System::Xml::Linq::XElement);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XElement, "System.Xml.Linq", "XElement");
