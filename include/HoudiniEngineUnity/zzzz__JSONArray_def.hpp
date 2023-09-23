#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace HoudiniEngineUnity {
class JSONNode;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__List_1__Enumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__JSONNode__Enumerator;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__JSONArray___get_Children_d__22;
}
namespace HoudiniEngineUnity {
class JSONArray;
}
// Type: ::<get_Children>d__22
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9811))
// CS Name: HoudiniEngineUnity.JSONArray::<get_Children>d__22
class CORDL_TYPE HoudiniEngineUnity__JSONArray___get_Children_d__22 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~HoudiniEngineUnity__JSONArray___get_Children_d__22() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONArray___get_Children_d__22", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__JSONArray___get_Children_d__22(HoudiniEngineUnity__JSONArray___get_Children_d__22 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONArray___get_Children_d__22", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__JSONArray___get_Children_d__22(HoudiniEngineUnity__JSONArray___get_Children_d__22&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONArray___get_Children_d__22(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__JSONArray___get_Children_d__22& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONArray___get_Children_d__22& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONArray___get_Children_d__22& operator=(HoudiniEngineUnity__JSONArray___get_Children_d__22&& o) noexcept = default;
  constexpr HoudiniEngineUnity__JSONArray___get_Children_d__22& operator=(HoudiniEngineUnity__JSONArray___get_Children_d__22 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 HoudiniEngineUnity::JSONNode __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(HoudiniEngineUnity::JSONNode value) ;

constexpr HoudiniEngineUnity::JSONNode __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 HoudiniEngineUnity::JSONArray __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HoudiniEngineUnity::JSONArray value) ;

constexpr HoudiniEngineUnity::JSONArray __get___4__this() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> __get___7__wrap1() const;


// Properties

 HoudiniEngineUnity::JSONNode __declspec(property(get=System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current))  System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__JSONArray___get_Children_d__22(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2067ad4 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2067c70 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2067c8c size 0x194 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2067e20 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current addr 0x2067e70 size 0x8 virtual true final true
 HoudiniEngineUnity::JSONNode System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2067e78 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2067eb8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator addr 0x2067ec0 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2067f64 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::JSONArray
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9810))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9812))
// CS Name: HoudiniEngineUnity.JSONArray
class CORDL_TYPE JSONArray : public HoudiniEngineUnity::JSONNode {
public:
// Declarations
using _get_Children_d__22 = HoudiniEngineUnity::HoudiniEngineUnity__JSONArray___get_Children_d__22;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JSONArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONArray", modifiers: " const&", def_value: None }]
constexpr JSONArray(JSONArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONArray", modifiers: "&&", def_value: None }]
constexpr JSONArray(JSONArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONArray(void* ptr) noexcept : HoudiniEngineUnity::JSONNode(ptr) {
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

 System::Collections::Generic::List_1<HoudiniEngineUnity::JSONNode> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

constexpr void __set_m_List(System::Collections::Generic::List_1<HoudiniEngineUnity::JSONNode> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::JSONNode> __get_m_List() const;

 bool __declspec(property(get=__get_inline, put=__set_inline))  inline;

constexpr void __set_inline(bool value) ;

constexpr bool __get_inline() const;


// Properties

 bool __declspec(property(get=get_Inline, put=set_Inline))  Inline;

 HoudiniEngineUnity::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsArray))  IsArray;

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> __declspec(property(get=get_Children))  Children;


// Methods

/// @brief Method get_Inline addr 0x2067404 size 0x8 virtual true final false
 bool get_Inline() ;

/// @brief Method set_Inline addr 0x206740c size 0xc virtual true final false
 void set_Inline(bool value) ;

/// @brief Method get_Tag addr 0x2067418 size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNodeType get_Tag() ;

/// @brief Method get_IsArray addr 0x2067420 size 0x8 virtual true final false
 bool get_IsArray() ;

/// @brief Method GetEnumerator addr 0x2067428 size 0x8c virtual true final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Item addr 0x20674b4 size 0xb4 virtual true final false
 HoudiniEngineUnity::JSONNode get_Item(int32_t aIndex) ;

/// @brief Method set_Item addr 0x2067590 size 0x144 virtual true final false
 void set_Item(int32_t aIndex, HoudiniEngineUnity::JSONNode value) ;

/// @brief Method get_Item addr 0x20676d4 size 0x64 virtual true final false
 HoudiniEngineUnity::JSONNode get_Item(::StringW aKey) ;

/// @brief Method set_Item addr 0x2067738 size 0xe4 virtual true final false
 void set_Item(::StringW aKey, HoudiniEngineUnity::JSONNode value) ;

/// @brief Method get_Count addr 0x206781c size 0x48 virtual true final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x2067864 size 0xe4 virtual true final false
 void Add(::StringW aKey, HoudiniEngineUnity::JSONNode aItem) ;

/// @brief Method Remove addr 0x2067948 size 0xb4 virtual true final false
 HoudiniEngineUnity::JSONNode Remove(int32_t aIndex) ;

/// @brief Method Remove addr 0x20679fc size 0x60 virtual true final false
 HoudiniEngineUnity::JSONNode Remove(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method get_Children addr 0x2067a5c size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> get_Children() ;

/// @brief Method WriteToStringBuilder addr 0x2067b08 size 0x168 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, HoudiniEngineUnity::JSONTextMode aMode) ;

// Ctor Parameters []
explicit JSONArray() ;

/// @brief Method .ctor addr 0x20642cc size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__JSONArray___get_Children_d__22);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONArray___get_Children_d__22, "HoudiniEngineUnity", "JSONArray/<get_Children>d__22");
NEED_NO_BOX(HoudiniEngineUnity::JSONArray);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONArray, "HoudiniEngineUnity", "JSONArray");
