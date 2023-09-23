#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class Array;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator;
}
// Type: ::PropertyDescriptorEnumerator
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8296))
// CS Name: System.ComponentModel.PropertyDescriptorCollection::PropertyDescriptorEnumerator
class CORDL_TYPE System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator(System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator(System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator& operator=(System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator&& o) noexcept = default;
  constexpr System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator& operator=(System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator const& o) noexcept = default;
                


// Fields

 System::ComponentModel::PropertyDescriptorCollection __declspec(property(get=__get__owner, put=__set__owner))  _owner;

constexpr void __set__owner(System::ComponentModel::PropertyDescriptorCollection value) ;

constexpr System::ComponentModel::PropertyDescriptorCollection __get__owner() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "owner", ty: "System::ComponentModel::PropertyDescriptorCollection", modifiers: "", def_value: None }]
explicit System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator(System::ComponentModel::PropertyDescriptorCollection owner) ;

/// @brief Method .ctor addr 0x2782a74 size 0x30 virtual false final false
 void _ctor(System::ComponentModel::PropertyDescriptorCollection owner) ;

/// @brief Method get_Current addr 0x2782aa4 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method get_Entry addr 0x2782b08 size 0x68 virtual true final true
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x2782b70 size 0x3c virtual true final true
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x2782bac size 0x3c virtual true final true
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method MoveNext addr 0x2782be8 size 0x40 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2782c28 size 0xc virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::PropertyDescriptorCollection
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8297))
// CS Name: System.ComponentModel.PropertyDescriptorCollection
class CORDL_TYPE PropertyDescriptorCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PropertyDescriptorEnumerator = System::ComponentModel::System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PropertyDescriptorCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptorCollection", modifiers: " const&", def_value: None }]
constexpr PropertyDescriptorCollection(PropertyDescriptorCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptorCollection", modifiers: "&&", def_value: None }]
constexpr PropertyDescriptorCollection(PropertyDescriptorCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyDescriptorCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PropertyDescriptorCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyDescriptorCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyDescriptorCollection& operator=(PropertyDescriptorCollection&& o) noexcept = default;
  constexpr PropertyDescriptorCollection& operator=(PropertyDescriptorCollection const& o) noexcept = default;
                


// Fields

static System::ComponentModel::PropertyDescriptorCollection __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::ComponentModel::PropertyDescriptorCollection value) ;

static System::ComponentModel::PropertyDescriptorCollection __get_Empty() ;

 System::Collections::IDictionary __declspec(property(get=__get__cachedFoundProperties, put=__set__cachedFoundProperties))  _cachedFoundProperties;

constexpr void __set__cachedFoundProperties(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get__cachedFoundProperties() const;

 bool __declspec(property(get=__get__cachedIgnoreCase, put=__set__cachedIgnoreCase))  _cachedIgnoreCase;

constexpr void __set__cachedIgnoreCase(bool value) ;

constexpr bool __get__cachedIgnoreCase() const;

 ::ArrayW<System::ComponentModel::PropertyDescriptor> __declspec(property(get=__get__properties, put=__set__properties))  _properties;

constexpr void __set__properties(::ArrayW<System::ComponentModel::PropertyDescriptor> value) ;

constexpr ::ArrayW<System::ComponentModel::PropertyDescriptor> __get__properties() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__namedSort, put=__set__namedSort))  _namedSort;

constexpr void __set__namedSort(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__namedSort() const;

 System::Collections::IComparer __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Collections::IComparer value) ;

constexpr System::Collections::IComparer __get__comparer() const;

 bool __declspec(property(get=__get__propsOwned, put=__set__propsOwned))  _propsOwned;

constexpr void __set__propsOwned(bool value) ;

constexpr bool __get__propsOwned() const;

 bool __declspec(property(get=__get__needSort, put=__set__needSort))  _needSort;

constexpr void __set__needSort(bool value) ;

constexpr bool __get__needSort() const;

 bool __declspec(property(get=__get__readOnly, put=__set__readOnly))  _readOnly;

constexpr void __set__readOnly(bool value) ;

constexpr bool __get__readOnly() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__internalSyncObject, put=__set__internalSyncObject))  _internalSyncObject;

constexpr void __set__internalSyncObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__internalSyncObject() const;

 int32_t __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField))  _Count_k__BackingField;

constexpr void __set__Count_k__BackingField(int32_t value) ;

constexpr int32_t __get__Count_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_Count, put=set_Count))  Count;

 System::ComponentModel::PropertyDescriptor __declspec(property(get=get_Item))  Item;

 System::ComponentModel::PropertyDescriptor __declspec(property(get=get_Item))  Item;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;

 bool __declspec(property(get=System_Collections_IDictionary_get_IsFixedSize))  System_Collections_IDictionary_IsFixedSize;

 bool __declspec(property(get=System_Collections_IDictionary_get_IsReadOnly))  System_Collections_IDictionary_IsReadOnly;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IDictionary_get_Item, put=System_Collections_IDictionary_set_Item))  System_Collections_IDictionary_Item;

 System::Collections::ICollection __declspec(property(get=System_Collections_IDictionary_get_Keys))  System_Collections_IDictionary_Keys;

 System::Collections::ICollection __declspec(property(get=System_Collections_IDictionary_get_Values))  System_Collections_IDictionary_Values;

 bool __declspec(property(get=System_Collections_IList_get_IsReadOnly))  System_Collections_IList_IsReadOnly;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;


// Methods

// Ctor Parameters [CppParam { name: "properties", ty: "::ArrayW<System::ComponentModel::PropertyDescriptor>", modifiers: "", def_value: None }]
explicit PropertyDescriptorCollection(::ArrayW<System::ComponentModel::PropertyDescriptor> properties) ;

/// @brief Method .ctor addr 0x2772c54 size 0xf0 virtual false final false
 void _ctor(::ArrayW<System::ComponentModel::PropertyDescriptor> properties) ;

// Ctor Parameters [CppParam { name: "properties", ty: "::ArrayW<System::ComponentModel::PropertyDescriptor>", modifiers: "", def_value: None }, CppParam { name: "readOnly", ty: "bool", modifiers: "", def_value: None }]
explicit PropertyDescriptorCollection(::ArrayW<System::ComponentModel::PropertyDescriptor> properties, bool readOnly) ;

/// @brief Method .ctor addr 0x277fbec size 0x24 virtual false final false
 void _ctor(::ArrayW<System::ComponentModel::PropertyDescriptor> properties, bool readOnly) ;

// Ctor Parameters [CppParam { name: "properties", ty: "::ArrayW<System::ComponentModel::PropertyDescriptor>", modifiers: "", def_value: None }, CppParam { name: "propCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "namedSort", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::IComparer", modifiers: "", def_value: None }]
explicit PropertyDescriptorCollection(::ArrayW<System::ComponentModel::PropertyDescriptor> properties, int32_t propCount, ::ArrayW<::StringW> namedSort, System::Collections::IComparer comparer) ;

/// @brief Method .ctor addr 0x277fc10 size 0x108 virtual false final false
 void _ctor(::ArrayW<System::ComponentModel::PropertyDescriptor> properties, int32_t propCount, ::ArrayW<::StringW> namedSort, System::Collections::IComparer comparer) ;

/// @brief Method get_Count addr 0x277fd18 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method set_Count addr 0x277fd20 size 0x8 virtual false final false
 void set_Count(int32_t value) ;

/// @brief Method get_Item addr 0x277fd28 size 0x8c virtual true final false
 System::ComponentModel::PropertyDescriptor get_Item(int32_t index) ;

/// @brief Method get_Item addr 0x277fe60 size 0x14 virtual true final false
 System::ComponentModel::PropertyDescriptor get_Item(::StringW name) ;

/// @brief Method Add addr 0x277fe74 size 0xd0 virtual false final false
 int32_t Add(System::ComponentModel::PropertyDescriptor value) ;

/// @brief Method Clear addr 0x2780044 size 0x58 virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x278009c size 0x18 virtual false final false
 bool Contains(System::ComponentModel::PropertyDescriptor value) ;

/// @brief Method CopyTo addr 0x2780114 size 0x3c virtual true final true
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method EnsurePropsOwned addr 0x277fdb4 size 0xac virtual false final false
 void EnsurePropsOwned() ;

/// @brief Method EnsureSize addr 0x277ff44 size 0x100 virtual false final false
 void EnsureSize(int32_t sizeNeeded) ;

/// @brief Method Find addr 0x27803ac size 0x510 virtual true final false
 System::ComponentModel::PropertyDescriptor Find(::StringW name, bool ignoreCase) ;

/// @brief Method IndexOf addr 0x27800b4 size 0x60 virtual false final false
 int32_t IndexOf(System::ComponentModel::PropertyDescriptor value) ;

/// @brief Method Insert addr 0x27808bc size 0xf0 virtual false final false
 void Insert(int32_t index, System::ComponentModel::PropertyDescriptor value) ;

/// @brief Method Remove addr 0x27809ac size 0x70 virtual false final false
 void Remove(System::ComponentModel::PropertyDescriptor value) ;

/// @brief Method RemoveAt addr 0x2780a1c size 0xb4 virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method Sort addr 0x2780ad0 size 0x84 virtual true final false
 System::ComponentModel::PropertyDescriptorCollection Sort(::ArrayW<::StringW> names) ;

/// @brief Method InternalSort addr 0x2780150 size 0x25c virtual false final false
 void InternalSort(::ArrayW<::StringW> names) ;

/// @brief Method InternalSort addr 0x2780b54 size 0x78 virtual false final false
 void InternalSort(System::Collections::IComparer sorter) ;

/// @brief Method GetEnumerator addr 0x2780bcc size 0x9c virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x2780c68 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x2780c70 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x2780c78 size 0x8 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.IList.Clear addr 0x2780c80 size 0x4 virtual true final true
 void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IDictionary.Clear addr 0x2780c84 size 0x4 virtual true final true
 void System_Collections_IDictionary_Clear() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2780c88 size 0x10 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.RemoveAt addr 0x2780c98 size 0x4 virtual true final true
 void System_Collections_IList_RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IDictionary.Add addr 0x2780c9c size 0xc8 virtual true final true
 void System_Collections_IDictionary_Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IDictionary.Contains addr 0x2780d64 size 0x80 virtual true final true
 bool System_Collections_IDictionary_Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IDictionary.GetEnumerator addr 0x2780de4 size 0x64 virtual true final true
 System::Collections::IDictionaryEnumerator System_Collections_IDictionary_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.get_IsFixedSize addr 0x2780e48 size 0x8 virtual true final true
 bool System_Collections_IDictionary_get_IsFixedSize() ;

/// @brief Method System.Collections.IDictionary.get_IsReadOnly addr 0x2780e50 size 0x8 virtual true final true
 bool System_Collections_IDictionary_get_IsReadOnly() ;

/// @brief Method System.Collections.IDictionary.get_Item addr 0x2780e58 size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IDictionary_get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IDictionary.set_Item addr 0x2780ed4 size 0x3c8 virtual true final true
 void System_Collections_IDictionary_set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IDictionary.get_Keys addr 0x278129c size 0xf0 virtual true final true
 System::Collections::ICollection System_Collections_IDictionary_get_Keys() ;

/// @brief Method System.Collections.IDictionary.get_Values addr 0x278138c size 0xd8 virtual true final true
 System::Collections::ICollection System_Collections_IDictionary_get_Values() ;

/// @brief Method System.Collections.IDictionary.Remove addr 0x2781464 size 0xf4 virtual true final true
 void System_Collections_IDictionary_Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IList.Add addr 0x2781558 size 0x84 virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Contains addr 0x27815dc size 0x90 virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x278166c size 0x84 virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x27816f0 size 0x94 virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_IsReadOnly addr 0x2781784 size 0x8 virtual true final true
 bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x278178c size 0x8 virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.Remove addr 0x2781794 size 0x84 virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_Item addr 0x2781818 size 0x10 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x2781828 size 0x1e0 virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::PropertyDescriptorCollection);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::PropertyDescriptorCollection, "System.ComponentModel", "PropertyDescriptorCollection");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__PropertyDescriptorCollection__PropertyDescriptorEnumerator, "System.ComponentModel", "PropertyDescriptorCollection/PropertyDescriptorEnumerator");
