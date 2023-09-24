#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace OVRSimpleJSON {
class JSONNode;
}
namespace OVRSimpleJSON {
class OVRSimpleJSON__JSONArray___get_Children_d__22;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace OVRSimpleJSON {
struct OVRSimpleJSON__JSONNode__Enumerator;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace System::Text {
class StringBuilder;
}
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__List_1__Enumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONArray;
}
namespace OVRSimpleJSON {
class OVRSimpleJSON__JSONArray___get_Children_d__22;
}
// Type: ::<get_Children>d__22
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8988))
// CS Name: OVRSimpleJSON.JSONArray::<get_Children>d__22
class CORDL_TYPE OVRSimpleJSON__JSONArray___get_Children_d__22 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OVRSimpleJSON__JSONArray___get_Children_d__22() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSimpleJSON__JSONArray___get_Children_d__22", modifiers: " const&", def_value: None }]
constexpr OVRSimpleJSON__JSONArray___get_Children_d__22(OVRSimpleJSON__JSONArray___get_Children_d__22 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSimpleJSON__JSONArray___get_Children_d__22", modifiers: "&&", def_value: None }]
constexpr OVRSimpleJSON__JSONArray___get_Children_d__22(OVRSimpleJSON__JSONArray___get_Children_d__22&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSimpleJSON__JSONArray___get_Children_d__22(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRSimpleJSON__JSONArray___get_Children_d__22& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSimpleJSON__JSONArray___get_Children_d__22& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSimpleJSON__JSONArray___get_Children_d__22& operator=(OVRSimpleJSON__JSONArray___get_Children_d__22&& o) noexcept = default;
  constexpr OVRSimpleJSON__JSONArray___get_Children_d__22& operator=(OVRSimpleJSON__JSONArray___get_Children_d__22 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 OVRSimpleJSON::JSONNode __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(OVRSimpleJSON::JSONNode value) ;

constexpr OVRSimpleJSON::JSONNode __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 OVRSimpleJSON::JSONArray __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(OVRSimpleJSON::JSONArray value) ;

constexpr OVRSimpleJSON::JSONArray __get___4__this() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> __get___7__wrap1() const;


// Properties

 OVRSimpleJSON::JSONNode __declspec(property(get=System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current))  System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static OVRSimpleJSON::OVRSimpleJSON__JSONArray___get_Children_d__22 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x263ebe0 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x263edf8 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x263ee14 size 0x194 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x263efa8 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current addr 0x263eff8 size 0x8 virtual true final true
 OVRSimpleJSON::JSONNode System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x263f000 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x263f040 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator addr 0x263f048 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x263f0ec size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVRSimpleJSON
// Type: OVRSimpleJSON::JSONArray
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8987))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8989))
// CS Name: OVRSimpleJSON.JSONArray
class CORDL_TYPE JSONArray : public OVRSimpleJSON::JSONNode {
public:
// Declarations
using _get_Children_d__22 = OVRSimpleJSON::OVRSimpleJSON__JSONArray___get_Children_d__22;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JSONArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONArray", modifiers: " const&", def_value: None }]
constexpr JSONArray(JSONArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONArray", modifiers: "&&", def_value: None }]
constexpr JSONArray(JSONArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONArray(void* ptr) noexcept : OVRSimpleJSON::JSONNode(ptr) {
}


  constexpr JSONArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSONArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSONArray& operator=(JSONArray&& o) noexcept = default;
  constexpr JSONArray& operator=(JSONArray const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

constexpr void __set_m_List(System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode> value) ;

constexpr System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode> __get_m_List() const;

 bool __declspec(property(get=__get_inline, put=__set_inline))  inline;

constexpr void __set_inline(bool value) ;

constexpr bool __get_inline() const;


// Properties

 bool __declspec(property(get=get_Inline, put=set_Inline))  Inline;

 OVRSimpleJSON::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsArray))  IsArray;

 OVRSimpleJSON::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 OVRSimpleJSON::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode> __declspec(property(get=get_Children))  Children;


// Methods

/// @brief Method get_Inline addr 0x263e470 size 0x8 virtual true final false
 bool get_Inline() ;

/// @brief Method set_Inline addr 0x263e478 size 0xc virtual true final false
 void set_Inline(bool value) ;

/// @brief Method get_Tag addr 0x263e484 size 0x8 virtual true final false
 OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method get_IsArray addr 0x263e48c size 0x8 virtual true final false
 bool get_IsArray() ;

/// @brief Method GetEnumerator addr 0x263e494 size 0x8c virtual true final false
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Item addr 0x263e520 size 0xb4 virtual true final false
 OVRSimpleJSON::JSONNode get_Item(int32_t aIndex) ;

/// @brief Method set_Item addr 0x263e5fc size 0x148 virtual true final false
 void set_Item(int32_t aIndex, OVRSimpleJSON::JSONNode value) ;

/// @brief Method get_Item addr 0x263e7d8 size 0x64 virtual true final false
 OVRSimpleJSON::JSONNode get_Item(::StringW aKey) ;

/// @brief Method set_Item addr 0x263e83c size 0xe8 virtual true final false
 void set_Item(::StringW aKey, OVRSimpleJSON::JSONNode value) ;

/// @brief Method get_Count addr 0x263e924 size 0x48 virtual true final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x263e96c size 0xe8 virtual true final false
 void Add(::StringW aKey, OVRSimpleJSON::JSONNode aItem) ;

/// @brief Method Remove addr 0x263ea54 size 0xb4 virtual true final false
 OVRSimpleJSON::JSONNode Remove(int32_t aIndex) ;

/// @brief Method Remove addr 0x263eb08 size 0x60 virtual true final false
 OVRSimpleJSON::JSONNode Remove(OVRSimpleJSON::JSONNode aNode) ;

/// @brief Method get_Children addr 0x263eb68 size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode> get_Children() ;

/// @brief Method WriteToStringBuilder addr 0x263ec14 size 0x168 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, OVRSimpleJSON::JSONTextMode aMode) ;

static OVRSimpleJSON::JSONArray New_ctor() ;

/// @brief Method .ctor addr 0x263ed7c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVRSimpleJSON
NEED_NO_BOX(OVRSimpleJSON::JSONArray);
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONArray, "OVRSimpleJSON", "JSONArray");
NEED_NO_BOX(OVRSimpleJSON::OVRSimpleJSON__JSONArray___get_Children_d__22);
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::OVRSimpleJSON__JSONArray___get_Children_d__22, "OVRSimpleJSON", "JSONArray/<get_Children>d__22");
