#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class AddingNewEventHandler;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
class AddingNewEventArgs;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class ListChangedEventHandler;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::ComponentModel {
class IBindingList;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
struct JEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::ComponentModel {
class ITypedList;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System {
class Array;
}
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29;
}
// Type: ::<GetDescendants>d__29
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11929))
// CS Name: Newtonsoft.Json.Linq.JContainer::<GetDescendants>d__29
class CORDL_TYPE Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29(Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29(Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29& operator=(Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29& operator=(Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 bool __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(bool value) ;

constexpr bool __get_self() const;

 bool __declspec(property(get=__get___3__self, put=__set___3__self))  __3__self;

constexpr void __set___3__self(bool value) ;

constexpr bool __get___3__self() const;

 Newtonsoft::Json::Linq::JContainer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::JContainer value) ;

constexpr Newtonsoft::Json::Linq::JContainer __get___4__this() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__o_5__1, put=__set__o_5__1))  _o_5__1;

constexpr void __set__o_5__1(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__o_5__1() const;

 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> __get___7__wrap1() const;

 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> __get___7__wrap2() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29(int32_t __1__state) ;

/// @brief Method .ctor addr 0x251c984 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x251f688 size 0xbc virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x251f744 size 0x4c0 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x251fcb4 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x251fc04 size 0xb0 virtual false final false
 void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x251fd64 size 0x8 virtual true final true
 Newtonsoft::Json::Linq::JToken System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x251fd6c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x251fdac size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator addr 0x251fdb4 size 0xa8 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x251fe5c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JContainer
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11944))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11930))
// CS Name: Newtonsoft.Json.Linq.JContainer
class CORDL_TYPE JContainer : public Newtonsoft::Json::Linq::JToken {
public:
// Declarations
using _GetDescendants_d__29 = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29;

/// @brief Convert operator to System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::ComponentModel::ITypedList
constexpr operator  System::ComponentModel::ITypedList() const noexcept;

/// @brief Convert operator to System::ComponentModel::IBindingList
constexpr operator  System::ComponentModel::IBindingList() const noexcept;

/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~JContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: " const&", def_value: None }]
constexpr JContainer(JContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "&&", def_value: None }]
constexpr JContainer(JContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JContainer(void* ptr) noexcept : Newtonsoft::Json::Linq::JToken(ptr) {
}


  constexpr JContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JContainer& operator=(JContainer&& o) noexcept = default;
  constexpr JContainer& operator=(JContainer const& o) noexcept = default;
                


// Fields

 System::ComponentModel::ListChangedEventHandler __declspec(property(get=__get__listChanged, put=__set__listChanged))  _listChanged;

constexpr void __set__listChanged(System::ComponentModel::ListChangedEventHandler value) ;

constexpr System::ComponentModel::ListChangedEventHandler __get__listChanged() const;

 System::ComponentModel::AddingNewEventHandler __declspec(property(get=__get__addingNew, put=__set__addingNew))  _addingNew;

constexpr void __set__addingNew(System::ComponentModel::AddingNewEventHandler value) ;

constexpr System::ComponentModel::AddingNewEventHandler __get__addingNew() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 bool __declspec(property(get=__get__busy, put=__set__busy))  _busy;

constexpr void __set__busy(bool value) ;

constexpr bool __get__busy() const;


// Properties

 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=get_ChildrenTokens))  ChildrenTokens;

 bool __declspec(property(get=get_HasValues))  HasValues;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_First))  First;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Last))  Last;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item, put=System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item))  System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Item;

 bool __declspec(property(get=System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly))  System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__IsReadOnly;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;

 bool __declspec(property(get=System_Collections_IList_get_IsReadOnly))  System_Collections_IList_IsReadOnly;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 bool __declspec(property(get=System_ComponentModel_IBindingList_get_AllowEdit))  System_ComponentModel_IBindingList_AllowEdit;

 bool __declspec(property(get=System_ComponentModel_IBindingList_get_AllowNew))  System_ComponentModel_IBindingList_AllowNew;

 bool __declspec(property(get=System_ComponentModel_IBindingList_get_AllowRemove))  System_ComponentModel_IBindingList_AllowRemove;

 bool __declspec(property(get=System_ComponentModel_IBindingList_get_IsSorted))  System_ComponentModel_IBindingList_IsSorted;

 System::ComponentModel::ListSortDirection __declspec(property(get=System_ComponentModel_IBindingList_get_SortDirection))  System_ComponentModel_IBindingList_SortDirection;

 System::ComponentModel::PropertyDescriptor __declspec(property(get=System_ComponentModel_IBindingList_get_SortProperty))  System_ComponentModel_IBindingList_SortProperty;

 bool __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsChangeNotification))  System_ComponentModel_IBindingList_SupportsChangeNotification;

 bool __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsSearching))  System_ComponentModel_IBindingList_SupportsSearching;

 bool __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsSorting))  System_ComponentModel_IBindingList_SupportsSorting;


// Methods

/// @brief Method add_ListChanged addr 0x251bdd8 size 0x80 virtual true final true
 void add_ListChanged(System::ComponentModel::ListChangedEventHandler value) ;

/// @brief Method remove_ListChanged addr 0x251be58 size 0x80 virtual true final true
 void remove_ListChanged(System::ComponentModel::ListChangedEventHandler value) ;

/// @brief Method add_AddingNew addr 0x251bed8 size 0x80 virtual false final false
 void add_AddingNew(System::ComponentModel::AddingNewEventHandler value) ;

/// @brief Method remove_AddingNew addr 0x251bf58 size 0x80 virtual false final false
 void remove_AddingNew(System::ComponentModel::AddingNewEventHandler value) ;

/// @brief Method get_ChildrenTokens addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> get_ChildrenTokens() ;

// Ctor Parameters []
explicit JContainer() ;

/// @brief Method .ctor addr 0x251a6e8 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "other", ty: "Newtonsoft::Json::Linq::JContainer", modifiers: "", def_value: None }]
explicit JContainer(Newtonsoft::Json::Linq::JContainer other) ;

/// @brief Method .ctor addr 0x251a7d8 size 0x318 virtual false final false
 void _ctor(Newtonsoft::Json::Linq::JContainer other) ;

/// @brief Method CheckReentrancy addr 0x251c380 size 0xb0 virtual false final false
 void CheckReentrancy() ;

/// @brief Method CreateChildrenCollection addr 0x251c430 size 0x70 virtual true final false
 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> CreateChildrenCollection() ;

/// @brief Method OnAddingNew addr 0x251c4a0 size 0x28 virtual true final false
 void OnAddingNew(System::ComponentModel::AddingNewEventArgs e) ;

/// @brief Method OnListChanged addr 0x251c4c8 size 0x88 virtual true final false
 void OnListChanged(System::ComponentModel::ListChangedEventArgs e) ;

/// @brief Method get_HasValues addr 0x251c550 size 0xc0 virtual true final false
 bool get_HasValues() ;

/// @brief Method ContentsEqual addr 0x251ad34 size 0x2b8 virtual false final false
 bool ContentsEqual(Newtonsoft::Json::Linq::JContainer container) ;

/// @brief Method get_First addr 0x251c610 size 0x13c virtual true final false
 Newtonsoft::Json::Linq::JToken get_First() ;

/// @brief Method get_Last addr 0x251c74c size 0x13c virtual true final false
 Newtonsoft::Json::Linq::JToken get_Last() ;

/// @brief Method Children addr 0x251c888 size 0x74 virtual true final false
 Newtonsoft::Json::Linq::JEnumerable_1<Newtonsoft::Json::Linq::JToken> Children() ;

/// @brief Method Values addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> Values() ;

/// @brief Method Descendants addr 0x251c8fc size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> Descendants() ;

/// @brief Method DescendantsAndSelf addr 0x251c97c size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> DescendantsAndSelf() ;

/// @brief Method GetDescendants addr 0x251c904 size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> GetDescendants(bool self) ;

/// @brief Method IsMultiContent addr 0x251c9c8 size 0xe4 virtual false final false
 bool IsMultiContent(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method EnsureParentToken addr 0x251caac size 0x98 virtual false final false
 Newtonsoft::Json::Linq::JToken EnsureParentToken(Newtonsoft::Json::Linq::JToken item, bool skipParentCheck) ;

/// @brief Method IndexOfItem addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOfItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method InsertItem addr 0x251cb5c size 0x3a4 virtual true final false
 void InsertItem(int32_t index, Newtonsoft::Json::Linq::JToken item, bool skipParentCheck) ;

/// @brief Method RemoveItemAt addr 0x251cf00 size 0x408 virtual true final false
 void RemoveItemAt(int32_t index) ;

/// @brief Method RemoveItem addr 0x251d308 size 0x48 virtual true final false
 bool RemoveItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method GetItem addr 0x251d350 size 0xbc virtual true final false
 Newtonsoft::Json::Linq::JToken GetItem(int32_t index) ;

/// @brief Method SetItem addr 0x251d40c size 0x464 virtual true final false
 void SetItem(int32_t index, Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method ClearItems addr 0x251d938 size 0x3d0 virtual true final false
 void ClearItems() ;

/// @brief Method ReplaceItem addr 0x251dd08 size 0x64 virtual true final false
 void ReplaceItem(Newtonsoft::Json::Linq::JToken existing, Newtonsoft::Json::Linq::JToken replacement) ;

/// @brief Method ContainsItem addr 0x251dd6c size 0x24 virtual true final false
 bool ContainsItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method CopyItemsTo addr 0x251dd90 size 0x440 virtual true final false
 void CopyItemsTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method IsTokenUnchanged addr 0x251d870 size 0xc8 virtual false final false
static bool IsTokenUnchanged(Newtonsoft::Json::Linq::JToken currentValue, Newtonsoft::Json::Linq::JToken newValue) ;

/// @brief Method ValidateToken addr 0x251e284 size 0x128 virtual true final false
 void ValidateToken(Newtonsoft::Json::Linq::JToken o, Newtonsoft::Json::Linq::JToken existing) ;

/// @brief Method Add addr 0x251e3ac size 0xcc virtual true final false
 void Add(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method AddAndSkipParentCheck addr 0x251e478 size 0xcc virtual false final false
 void AddAndSkipParentCheck(Newtonsoft::Json::Linq::JToken token) ;

/// @brief Method AddFirst addr 0x251e544 size 0x10 virtual false final false
 void AddFirst(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method AddInternal addr 0x251bfe0 size 0x3a0 virtual false final false
 void AddInternal(int32_t index, ::bs_hook::Il2CppWrapperType content, bool skipParentCheck) ;

/// @brief Method CreateFromContent addr 0x251e554 size 0xac virtual false final false
static Newtonsoft::Json::Linq::JToken CreateFromContent(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method CreateWriter addr 0x251e600 size 0x60 virtual false final false
 Newtonsoft::Json::JsonWriter CreateWriter() ;

/// @brief Method ReplaceAll addr 0x251e6f0 size 0x44 virtual false final false
 void ReplaceAll(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method RemoveAll addr 0x251e734 size 0x10 virtual false final false
 void RemoveAll() ;

/// @brief Method MergeItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void MergeItem(::bs_hook::Il2CppWrapperType content, Newtonsoft::Json::Linq::JsonMergeSettings settings) ;

/// @brief Method Merge addr 0x251e744 size 0x80 virtual false final false
 void Merge(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method Merge addr 0x251e7c4 size 0x10 virtual false final false
 void Merge(::bs_hook::Il2CppWrapperType content, Newtonsoft::Json::Linq::JsonMergeSettings settings) ;

/// @brief Method ReadTokenFrom addr 0x251bc7c size 0x15c virtual false final false
 void ReadTokenFrom(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Linq::JsonLoadSettings options) ;

/// @brief Method ReadContentFrom addr 0x251e7d4 size 0x4a4 virtual false final false
 void ReadContentFrom(Newtonsoft::Json::JsonReader r, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method ContentsHashCode addr 0x251b5d8 size 0x304 virtual false final false
 int32_t ContentsHashCode() ;

/// @brief Method System.ComponentModel.ITypedList.GetListName addr 0x251ee70 size 0x48 virtual true final true
 ::StringW System_ComponentModel_ITypedList_GetListName(::ArrayW<System::ComponentModel::PropertyDescriptor> listAccessors) ;

/// @brief Method System.ComponentModel.ITypedList.GetItemProperties addr 0x251eeb8 size 0xc8 virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<System::ComponentModel::PropertyDescriptor> listAccessors) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf addr 0x251ef80 size 0x10 virtual true final true
 int32_t System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert addr 0x251ef90 size 0x14 virtual true final true
 void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert(int32_t index, Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt addr 0x251efa4 size 0x10 virtual true final true
 void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item addr 0x251efb4 size 0x10 virtual true final true
 Newtonsoft::Json::Linq::JToken System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item addr 0x251efc4 size 0x10 virtual true final true
 void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item(int32_t index, Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add addr 0x251efd4 size 0x10 virtual true final true
 void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear addr 0x251efe4 size 0x10 virtual true final true
 void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains addr 0x251eff4 size 0x10 virtual true final true
 bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo addr 0x251f004 size 0x10 virtual true final true
 void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo(::ArrayW<Newtonsoft::Json::Linq::JToken> array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly addr 0x251f014 size 0x8 virtual true final true
 bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove addr 0x251f01c size 0x10 virtual true final true
 bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method EnsureValue addr 0x251f02c size 0xc0 virtual false final false
 Newtonsoft::Json::Linq::JToken EnsureValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Add addr 0x251f0ec size 0x38 virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Clear addr 0x251f124 size 0x10 virtual true final true
 void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Contains addr 0x251f134 size 0x28 virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x251f15c size 0x28 virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x251f184 size 0x40 virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x251f1c4 size 0x8 virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly addr 0x251f1cc size 0x8 virtual true final true
 bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.Remove addr 0x251f1d4 size 0x28 virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.RemoveAt addr 0x251f1fc size 0x10 virtual true final true
 void System_Collections_IList_RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IList.get_Item addr 0x251f20c size 0x10 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x251f21c size 0x3c virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x251f258 size 0x10 virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x251e1d0 size 0xb4 virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x251f268 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x251f270 size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.ComponentModel.IBindingList.AddIndex addr 0x251f2ec size 0x4 virtual true final true
 void System_ComponentModel_IBindingList_AddIndex(System::ComponentModel::PropertyDescriptor property) ;

/// @brief Method System.ComponentModel.IBindingList.AddNew addr 0x251f2f0 size 0x1c8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_IBindingList_AddNew() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowEdit addr 0x251f4b8 size 0x8 virtual true final true
 bool System_ComponentModel_IBindingList_get_AllowEdit() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowNew addr 0x251f4c0 size 0x8 virtual true final true
 bool System_ComponentModel_IBindingList_get_AllowNew() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowRemove addr 0x251f4c8 size 0x8 virtual true final true
 bool System_ComponentModel_IBindingList_get_AllowRemove() ;

/// @brief Method System.ComponentModel.IBindingList.ApplySort addr 0x251f4d0 size 0x40 virtual true final true
 void System_ComponentModel_IBindingList_ApplySort(System::ComponentModel::PropertyDescriptor property, System::ComponentModel::ListSortDirection direction) ;

/// @brief Method System.ComponentModel.IBindingList.Find addr 0x251f510 size 0x40 virtual true final true
 int32_t System_ComponentModel_IBindingList_Find(System::ComponentModel::PropertyDescriptor property, ::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.ComponentModel.IBindingList.get_IsSorted addr 0x251f550 size 0x8 virtual true final true
 bool System_ComponentModel_IBindingList_get_IsSorted() ;

/// @brief Method System.ComponentModel.IBindingList.RemoveIndex addr 0x251f558 size 0x4 virtual true final true
 void System_ComponentModel_IBindingList_RemoveIndex(System::ComponentModel::PropertyDescriptor property) ;

/// @brief Method System.ComponentModel.IBindingList.RemoveSort addr 0x251f55c size 0x40 virtual true final true
 void System_ComponentModel_IBindingList_RemoveSort() ;

/// @brief Method System.ComponentModel.IBindingList.get_SortDirection addr 0x251f59c size 0x8 virtual true final true
 System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection() ;

/// @brief Method System.ComponentModel.IBindingList.get_SortProperty addr 0x251f5a4 size 0x8 virtual true final true
 System::ComponentModel::PropertyDescriptor System_ComponentModel_IBindingList_get_SortProperty() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsChangeNotification addr 0x251f5ac size 0x8 virtual true final true
 bool System_ComponentModel_IBindingList_get_SupportsChangeNotification() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsSearching addr 0x251f5b4 size 0x8 virtual true final true
 bool System_ComponentModel_IBindingList_get_SupportsSearching() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsSorting addr 0x251f5bc size 0x8 virtual true final true
 bool System_ComponentModel_IBindingList_get_SupportsSorting() ;

/// @brief Method MergeEnumerableContent addr 0x2519880 size 0xdd8 virtual false final false
static void MergeEnumerableContent(Newtonsoft::Json::Linq::JContainer target, System::Collections::IEnumerable content, Newtonsoft::Json::Linq::JsonMergeSettings settings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JContainer);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JContainer, "Newtonsoft.Json.Linq", "JContainer");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JContainer___GetDescendants_d__29, "Newtonsoft.Json.Linq", "JContainer/<GetDescendants>d__29");
