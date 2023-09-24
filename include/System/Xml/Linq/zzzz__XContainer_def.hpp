#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml::Linq {
class XNode;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Xml::Linq {
class XAttribute;
}
namespace System::Xml::Linq {
class System__Xml__Linq__XContainer___Nodes_d__18;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
class System__Xml__Linq__XContainer___Nodes_d__18;
}
namespace System::Xml::Linq {
class XContainer;
}
// Type: ::<Nodes>d__18
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15411))
// CS Name: System.Xml.Linq.XContainer::<Nodes>d__18
class CORDL_TYPE System__Xml__Linq__XContainer___Nodes_d__18 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Xml::Linq::XNode>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Xml::Linq::XNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Xml::Linq::XNode>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Xml::Linq::XNode>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Xml__Linq__XContainer___Nodes_d__18() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__XContainer___Nodes_d__18", modifiers: " const&", def_value: None }]
constexpr System__Xml__Linq__XContainer___Nodes_d__18(System__Xml__Linq__XContainer___Nodes_d__18 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__XContainer___Nodes_d__18", modifiers: "&&", def_value: None }]
constexpr System__Xml__Linq__XContainer___Nodes_d__18(System__Xml__Linq__XContainer___Nodes_d__18&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Linq__XContainer___Nodes_d__18(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__Linq__XContainer___Nodes_d__18& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Linq__XContainer___Nodes_d__18& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Linq__XContainer___Nodes_d__18& operator=(System__Xml__Linq__XContainer___Nodes_d__18&& o) noexcept = default;
  constexpr System__Xml__Linq__XContainer___Nodes_d__18& operator=(System__Xml__Linq__XContainer___Nodes_d__18 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Xml::Linq::XNode __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Xml::Linq::XNode value) ;

constexpr System::Xml::Linq::XNode __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Xml::Linq::XContainer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Xml::Linq::XContainer value) ;

constexpr System::Xml::Linq::XContainer __get___4__this() const;

 System::Xml::Linq::XNode __declspec(property(get=__get__n_5__2, put=__set__n_5__2))  _n_5__2;

constexpr void __set__n_5__2(System::Xml::Linq::XNode value) ;

constexpr System::Xml::Linq::XNode __get__n_5__2() const;


// Properties

 System::Xml::Linq::XNode __declspec(property(get=System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current))  System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static System::Xml::Linq::System__Xml__Linq__XContainer___Nodes_d__18 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x26ca834 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x26cb410 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x26cb414 size 0x90 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current addr 0x26cb4a4 size 0x8 virtual true final true
 System::Xml::Linq::XNode System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26cb4ac size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x26cb4ec size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator addr 0x26cb4f4 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Xml::Linq::XNode> System_Collections_Generic_IEnumerable_System_Xml_Linq_XNode__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26cb598 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
// Type: System.Xml.Linq::XContainer
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15429))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15412))
// CS Name: System.Xml.Linq.XContainer
class CORDL_TYPE XContainer : public System::Xml::Linq::XNode {
public:
// Declarations
using _Nodes_d__18 = System::Xml::Linq::System__Xml__Linq__XContainer___Nodes_d__18;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "XContainer", modifiers: " const&", def_value: None }]
constexpr XContainer(XContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XContainer", modifiers: "&&", def_value: None }]
constexpr XContainer(XContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XContainer(void* ptr) noexcept : System::Xml::Linq::XNode(ptr) {
}


  constexpr XContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XContainer& operator=(XContainer&& o) noexcept = default;
  constexpr XContainer& operator=(XContainer const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_content() const;


// Properties

 System::Xml::Linq::XNode __declspec(property(get=get_LastNode))  LastNode;


// Methods

static System::Xml::Linq::XContainer New_ctor() ;

/// @brief Method .ctor addr 0x26c96fc size 0x8 virtual false final false
 void _ctor() ;

static System::Xml::Linq::XContainer New_ctor(System::Xml::Linq::XContainer other) ;

/// @brief Method .ctor addr 0x26c9704 size 0x13c virtual false final false
 void _ctor(System::Xml::Linq::XContainer other) ;

/// @brief Method get_LastNode addr 0x26c9900 size 0x13c virtual false final false
 System::Xml::Linq::XNode get_LastNode() ;

/// @brief Method Add addr 0x26c9a3c size 0x4f0 virtual false final false
 void Add(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method Nodes addr 0x26ca7bc size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Xml::Linq::XNode> Nodes() ;

/// @brief Method RemoveNodes addr 0x26ca868 size 0x29c virtual false final false
 void RemoveNodes() ;

/// @brief Method AddAttribute addr 0x26cac4c size 0x4 virtual true final false
 void AddAttribute(System::Xml::Linq::XAttribute a) ;

/// @brief Method AddAttributeSkipNotify addr 0x26cac50 size 0x4 virtual true final false
 void AddAttributeSkipNotify(System::Xml::Linq::XAttribute a) ;

/// @brief Method AddContentSkipNotify addr 0x26c9f9c size 0x4cc virtual false final false
 void AddContentSkipNotify(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method AddNode addr 0x26ca468 size 0x7c virtual false final false
 void AddNode(System::Xml::Linq::XNode n) ;

/// @brief Method AddNodeSkipNotify addr 0x26cac54 size 0x7c virtual false final false
 void AddNodeSkipNotify(System::Xml::Linq::XNode n) ;

/// @brief Method AddString addr 0x26ca4e4 size 0x254 virtual false final false
 void AddString(::StringW s) ;

/// @brief Method AddStringSkipNotify addr 0x26cacd0 size 0x150 virtual false final false
 void AddStringSkipNotify(::StringW s) ;

/// @brief Method AppendNode addr 0x26cae20 size 0x118 virtual false final false
 void AppendNode(System::Xml::Linq::XNode n) ;

/// @brief Method AppendNodeSkipNotify addr 0x26c9840 size 0xc0 virtual false final false
 void AppendNodeSkipNotify(System::Xml::Linq::XNode n) ;

/// @brief Method AppendText addr 0x26cb02c size 0xec virtual true final false
 void AppendText(System::Text::StringBuilder sb) ;

/// @brief Method ConvertTextToNode addr 0x26caba0 size 0xac virtual false final false
 void ConvertTextToNode() ;

/// @brief Method GetStringValue addr 0x26c8154 size 0x400 virtual false final false
static ::StringW GetStringValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method RemoveNode addr 0x26cb118 size 0x1a0 virtual false final false
 void RemoveNode(System::Xml::Linq::XNode n) ;

/// @brief Method RemoveNodesSkipNotify addr 0x26cab04 size 0x9c virtual false final false
 void RemoveNodesSkipNotify() ;

/// @brief Method ValidateNode addr 0x26cb2b8 size 0x4 virtual true final false
 void ValidateNode(System::Xml::Linq::XNode node, System::Xml::Linq::XNode previous) ;

/// @brief Method ValidateString addr 0x26cb2bc size 0x4 virtual true final false
 void ValidateString(::StringW s) ;

/// @brief Method WriteContentTo addr 0x26cb2c0 size 0x150 virtual false final false
 void WriteContentTo(System::Xml::XmlWriter writer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::System__Xml__Linq__XContainer___Nodes_d__18);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::System__Xml__Linq__XContainer___Nodes_d__18, "System.Xml.Linq", "XContainer/<Nodes>d__18");
NEED_NO_BOX(System::Xml::Linq::XContainer);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XContainer, "System.Xml.Linq", "XContainer");
