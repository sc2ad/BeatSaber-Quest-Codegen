#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::Collections::Specialized {
class OrderedDictionary;
}
namespace System::Collections::Specialized {
class ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator;
}
namespace System::Collections::Specialized {
class ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection;
}
// Type: ::OrderedDictionaryEnumerator
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8365))
// CS Name: System.Collections.Specialized.OrderedDictionary::OrderedDictionaryEnumerator
class CORDL_TYPE ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IDictionaryEnumerator
constexpr operator  ::System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator", modifiers: " const&", def_value: None }]
constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator(____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator", modifiers: "&&", def_value: None }]
constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator(____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator& operator=(____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator&& o) noexcept = default;
  constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator& operator=(____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__objectReturnType, put=__set__objectReturnType))  _objectReturnType;

constexpr void __set__objectReturnType(int32_t value) ;

constexpr int32_t __get__objectReturnType() const;

 ::System::Collections::IEnumerator __declspec(property(get=__get__arrayEnumerator, put=__set__arrayEnumerator))  _arrayEnumerator;

constexpr void __set__arrayEnumerator(::System::Collections::IEnumerator value) ;

constexpr ::System::Collections::IEnumerator __get__arrayEnumerator() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 ::System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "array", ty: "::System::Collections::ArrayList", modifiers: "", def_value: None }, CppParam { name: "objectReturnType", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator(::System::Collections::ArrayList array, int32_t objectReturnType) ;

/// @brief Method .ctor addr 0x27abb7c size 0x4c virtual false final false
 void _ctor(::System::Collections::ArrayList array, int32_t objectReturnType) ;

/// @brief Method get_Current addr 0x27ac1dc size 0x1ac virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method get_Entry addr 0x27ac388 size 0x194 virtual true final true
 ::System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x27ac51c size 0xe4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x27ac600 size 0xe4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method MoveNext addr 0x27ac6e4 size 0xa0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x27ac784 size 0xa4 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
// Type: ::OrderedDictionaryKeyValueCollection
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8366))
// CS Name: System.Collections.Specialized.OrderedDictionary::OrderedDictionaryKeyValueCollection
class CORDL_TYPE ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection", modifiers: " const&", def_value: None }]
constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection(____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection", modifiers: "&&", def_value: None }]
constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection(____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection& operator=(____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection&& o) noexcept = default;
  constexpr ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection& operator=(____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection const& o) noexcept = default;
                


// Fields

 ::System::Collections::ArrayList __declspec(property(get=__get__objects, put=__set__objects))  _objects;

constexpr void __set__objects(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get__objects() const;

 bool __declspec(property(get=__get__isKeys, put=__set__isKeys))  _isKeys;

constexpr void __set__isKeys(bool value) ;

constexpr bool __get__isKeys() const;


// Properties

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters [CppParam { name: "array", ty: "::System::Collections::ArrayList", modifiers: "", def_value: None }, CppParam { name: "isKeys", ty: "bool", modifiers: "", def_value: None }]
explicit ____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection(::System::Collections::ArrayList array, bool isKeys) ;

/// @brief Method .ctor addr 0x27ab304 size 0x30 virtual false final false
 void _ctor(::System::Collections::ArrayList array, bool isKeys) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27ac828 size 0x3fc virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x27acc24 size 0x24 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27acc48 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27acc50 size 0x24 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27acc74 size 0x7c virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
// Type: System.Collections.Specialized::OrderedDictionary
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8367))
// CS Name: System.Collections.Specialized.OrderedDictionary
class CORDL_TYPE OrderedDictionary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OrderedDictionaryKeyValueCollection = ::System::Collections::Specialized::____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection;

using OrderedDictionaryEnumerator = ::System::Collections::Specialized::____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator;

/// @brief Convert operator to ::System::Collections::IDictionary
constexpr operator  ::System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OrderedDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedDictionary", modifiers: " const&", def_value: None }]
constexpr OrderedDictionary(OrderedDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedDictionary", modifiers: "&&", def_value: None }]
constexpr OrderedDictionary(OrderedDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedDictionary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedDictionary& operator=(OrderedDictionary&& o) noexcept = default;
  constexpr OrderedDictionary& operator=(OrderedDictionary const& o) noexcept = default;
                


// Fields

 ::System::Collections::ArrayList __declspec(property(get=__get__objectsArray, put=__set__objectsArray))  _objectsArray;

constexpr void __set__objectsArray(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get__objectsArray() const;

 ::System::Collections::Hashtable __declspec(property(get=__get__objectsTable, put=__set__objectsTable))  _objectsTable;

constexpr void __set__objectsTable(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get__objectsTable() const;

 int32_t __declspec(property(get=__get__initialCapacity, put=__set__initialCapacity))  _initialCapacity;

constexpr void __set__initialCapacity(int32_t value) ;

constexpr int32_t __get__initialCapacity() const;

 ::System::Collections::IEqualityComparer __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(::System::Collections::IEqualityComparer value) ;

constexpr ::System::Collections::IEqualityComparer __get__comparer() const;

 bool __declspec(property(get=__get__readOnly, put=__set__readOnly))  _readOnly;

constexpr void __set__readOnly(bool value) ;

constexpr bool __get__readOnly() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__siInfo, put=__set__siInfo))  _siInfo;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get__siInfo() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_IDictionary_get_IsFixedSize))  System_Collections_IDictionary_IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 ::System::Collections::ArrayList __declspec(property(get=get_objectsArray))  objectsArray;

 ::System::Collections::Hashtable __declspec(property(get=get_objectsTable))  objectsTable;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 ::System::Collections::ICollection __declspec(property(get=get_Values))  Values;


// Methods

// Ctor Parameters []
explicit OrderedDictionary() ;

/// @brief Method .ctor addr 0x27ab134 size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit OrderedDictionary(int32_t capacity) ;

/// @brief Method .ctor addr 0x27ab154 size 0x2c virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
explicit OrderedDictionary(int32_t capacity, ::System::Collections::IEqualityComparer comparer) ;

/// @brief Method .ctor addr 0x27ab180 size 0x30 virtual false final false
 void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer comparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit OrderedDictionary(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27ab1b0 size 0x28 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Count addr 0x27ab1d8 size 0x24 virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.IDictionary.get_IsFixedSize addr 0x27ab270 size 0x8 virtual true final true
 bool System_Collections_IDictionary_get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x27ab278 size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27ab280 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method get_Keys addr 0x27ab288 size 0x7c virtual true final true
 ::System::Collections::ICollection get_Keys() ;

/// @brief Method get_objectsArray addr 0x27ab1fc size 0x74 virtual false final false
 ::System::Collections::ArrayList get_objectsArray() ;

/// @brief Method get_objectsTable addr 0x27ab334 size 0x84 virtual false final false
 ::System::Collections::Hashtable get_objectsTable() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27ab3b8 size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method get_Item addr 0x27ab434 size 0x2c virtual true final true
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x27ab460 size 0x180 virtual true final true
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Values addr 0x27ab888 size 0x78 virtual true final true
 ::System::Collections::ICollection get_Values() ;

/// @brief Method Add addr 0x27ab760 size 0x128 virtual true final true
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x27ab900 size 0x98 virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x27ab998 size 0x2c virtual true final true
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method CopyTo addr 0x27ab9c4 size 0x3c virtual true final true
 void CopyTo(::System::Array array, int32_t index) ;

/// @brief Method IndexOfKey addr 0x27ab5e0 size 0x180 virtual false final false
 int32_t IndexOfKey(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Remove addr 0x27aba00 size 0x108 virtual true final true
 void Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method GetEnumerator addr 0x27abb08 size 0x74 virtual true final false
 ::System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27abbc8 size 0x74 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x27abc3c size 0x1d8 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x27abe14 size 0x10 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method OnDeserialization addr 0x27abe24 size 0x3b8 virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Specialized::OrderedDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::OrderedDictionary, "System.Collections.Specialized", "OrderedDictionary");
NEED_NO_BOX(::System::Collections::Specialized::____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryEnumerator, "System.Collections.Specialized", "OrderedDictionary/OrderedDictionaryEnumerator");
NEED_NO_BOX(::System::Collections::Specialized::____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::____System__Collections__Specialized__OrderedDictionary__OrderedDictionaryKeyValueCollection, "System.Collections.Specialized", "OrderedDictionary/OrderedDictionaryKeyValueCollection");
