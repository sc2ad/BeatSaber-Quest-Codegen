#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace System::Collections::ObjectModel {
template<typename T>
class Collection_1;
}
namespace System::Collections::ObjectModel {
template<::cordl_internals::il2cpp_reference_type T>
class Collection_1<T>;
}
// Type: System.Collections.ObjectModel::Collection`1
// Type: System.Collections.ObjectModel::Collection`1
namespace System::Collections::ObjectModel {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3799), inst: 2 })
// CS Name: System.Collections.ObjectModel.Collection`1
class CORDL_TYPE Collection_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IList_1<T>
constexpr operator  ::System::Collections::Generic::IList_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<T>
constexpr operator  ::System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::IList
constexpr operator  ::System::Collections::IList() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyList_1<T>
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Collection_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Collection_1", modifiers: " const&", def_value: None }]
constexpr Collection_1(Collection_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Collection_1", modifiers: "&&", def_value: None }]
constexpr Collection_1(Collection_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Collection_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Collection_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Collection_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Collection_1& operator=(Collection_1&& o) noexcept = default;
  constexpr Collection_1& operator=(Collection_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IList_1<T> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::System::Collections::Generic::IList_1<T> value) ;

constexpr ::System::Collections::Generic::IList_1<T> __get_items() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::System::Collections::Generic::IList_1<T> __declspec(property(get=get_Items))  Items;

 T __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;

 bool __declspec(property(get=System_Collections_IList_get_IsReadOnly))  System_Collections_IList_IsReadOnly;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;


// Methods

// Ctor Parameters []
explicit Collection_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "list", ty: "::System::Collections::Generic::IList_1<T>", modifiers: "", def_value: None }]
explicit Collection_1(::System::Collections::Generic::IList_1<T> list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IList_1<T> list) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Items addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IList_1<T> get_Items() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(int32_t index, T value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t index) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t IndexOf(T item) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void Insert(int32_t index, T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T item) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method ClearItems addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearItems() ;

/// @brief Method InsertItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void InsertItem(int32_t index, T item) ;

/// @brief Method RemoveItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void RemoveItem(int32_t index) ;

/// @brief Method SetItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetItem(int32_t index, T item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method System.Collections.IList.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IsCompatibleObject addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsCompatibleObject(::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::ObjectModel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::Collection_1, "System.Collections.ObjectModel", "Collection`1");
